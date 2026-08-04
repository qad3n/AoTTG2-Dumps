// Type: UI.InputFieldKeyboardNav
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InputFieldKeyboardNav.cs
// Prior real C# source: none
// --------------------------------

// UI.InputFieldKeyboardNav$$Setup
// il2cpp: void UI_InputFieldKeyboardNav__Setup (UI_InputFieldKeyboardNav_o* __this, UnityEngine_UI_InputField_o* field, UnityEngine_UI_Selectable_o* next, UnityEngine_UI_Selectable_o* previous, const MethodInfo* method);
// 0x43f6c10

void UI_InputFieldKeyboardNav__Setup
               (UI_InputFieldKeyboardNav_o *__this,UnityEngine_UI_InputField_o *field,
               UnityEngine_UI_Selectable_o *next,UnityEngine_UI_Selectable_o *previous,MethodInfo *method)

{
  (__this->fields)._field = field;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._field);
  (__this->fields)._next = next;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._next,next);
  (__this->fields)._previous = previous;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._previous,previous);
  return;
}


// UI.InputFieldKeyboardNav$$Update
// il2cpp: void UI_InputFieldKeyboardNav__Update (UI_InputFieldKeyboardNav_o* __this, const MethodInfo* method);
// 0x43f8930

void UI_InputFieldKeyboardNav__Update(UI_InputFieldKeyboardNav_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  byte bVar2;
  UnityEngine_TouchScreenKeyboard_o *pUVar3;
  Il2CppClass *pIVar4;
  code *pcVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_UI_Graphic_o *pUVar7;
  UnityEngine_TextGenerator_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  Il2CppMethodPointer pIVar8;
  UnityEngine_UI_InputField_SubmitEvent_o *__this_02;
  System_Collections_Generic_List_CanvasGroup__o *__this_03;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  uint16_t uVar12;
  bool_conflict bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar18;
  UnityEngine_UI_InputField_o *pUVar19;
  UnityEngine_UI_InputField_o *pUVar20;
  undefined8 extraout_RAX;
  System_String_o *pSVar21;
  long lVar22;
  UnityEngine_Material_o *pUVar23;
  UnityEngine_Texture_o *texture;
  UnityEngine_EventSystems_BaseInput_o *pUVar24;
  UnityEngine_TouchScreenKeyboard_c *method_00;
  int32_t length;
  int extraout_EDX;
  UnityEngine_UI_InputField_o *unaff_RBX;
  ulong uVar25;
  UnityEngine_TextGenerator_o *pUVar26;
  UnityEngine_UI_InputField_o *unaff_RBP;
  UnityEngine_UI_InputField_o *pUVar27;
  UnityEngine_UI_InputField_o *pUVar28;
  MethodInfo *pMVar29;
  UnityEngine_UI_InputField_o *unaff_R12;
  undefined8 unaff_R13;
  long *plVar30;
  long *unaff_R14;
  UnityEngine_UI_Graphic_o *__this_04;
  UnityEngine_UI_InputField_o *unaff_R15;
  char acStack_5c [52];
  undefined1 auStack_28 [8];
  
  if (g_data_057ae54f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae54f = '\x01';
  }
  pUVar27 = (__this->fields)._field;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar28 = (UnityEngine_UI_InputField_o *)0x0;
  pUVar19 = pUVar27;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  pUVar20 = (__this->fields)._field;
  if (pUVar20 == (UnityEngine_UI_InputField_o *)0x0) {
label_043f8b31:
    unaff_RBX = (UnityEngine_UI_InputField_o *)__this;
    uVar18 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)auStack_28;
    unaff_RBP = pUVar27;
    __this = (UI_InputFieldKeyboardNav_o *)pUVar19;
    unaff_R14 = &TypeInfo_Object;
  }
  else {
    if (*(char *)&(pUVar20->fields).m_Mesh == '\0') {
      return;
    }
    bVar13 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
    pUVar20 = (UnityEngine_UI_InputField_o *)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
    if ((((char)bVar13 == '\0') &&
        (bVar13 = UnityEngine_Input__GetKey(0x131,(MethodInfo *)0x0), (char)bVar13 == '\0')) &&
       (bVar13 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0), (char)bVar13 == '\0')) {
      uVar14 = UnityEngine_Input__GetKey(0x135,(MethodInfo *)0x0);
      pUVar20 = (UnityEngine_UI_InputField_o *)(ulong)uVar14;
    }
    bVar13 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
    pUVar27 = (UnityEngine_UI_InputField_o *)0x1;
    if ((char)bVar13 == '\0') {
      uVar14 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
      pUVar27 = (UnityEngine_UI_InputField_o *)(ulong)(uVar14 & 0xff);
    }
    bVar13 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      __this = (UI_InputFieldKeyboardNav_o *)(&(__this->fields)._next)[(long)pUVar27];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar28 = (UnityEngine_UI_InputField_o *)0x0;
      pUVar19 = (UnityEngine_UI_InputField_o *)__this;
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      unaff_R15 = pUVar20;
      if ((UnityEngine_UI_InputField_o *)__this != (UnityEngine_UI_InputField_o *)0x0) {
        (*(((UnityEngine_UI_InputField_o *)__this)->klass->vtable)._38_Select.methodPtr)(__this);
        bVar2 = (TypeInfo_InputField->_2).naturalAligment;
        if ((((UnityEngine_UI_InputField_o *)__this)->klass->_2).naturalAligment < bVar2) {
          pUVar20 = (UnityEngine_UI_InputField_o *)0x0;
          iVar17 = *(int *)(TypeInfo_Object + 0xe4);
        }
        else {
          pUVar20 = (UnityEngine_UI_InputField_o *)0x0;
          if ((((UnityEngine_UI_InputField_o *)__this)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              TypeInfo_InputField) {
            pUVar20 = (UnityEngine_UI_InputField_o *)__this;
          }
          iVar17 = *(int *)(TypeInfo_Object + 0xe4);
        }
        if (iVar17 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar28 = (UnityEngine_UI_InputField_o *)0x0;
        pUVar19 = pUVar20;
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
        if (pUVar20 != (UnityEngine_UI_InputField_o *)0x0) {
          UnityEngine_UI_InputField__ActivateInputField(pUVar20,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043f8b31;
    }
    if ((char)pUVar20 == '\0') {
      return;
    }
    bVar13 = UnityEngine_Input__GetKeyDown(8,(MethodInfo *)0x0);
    uVar18 = CONCAT44(extraout_var,bVar13);
    if ((char)bVar13 == '\0') {
      bVar13 = UnityEngine_Input__GetKeyDown(0x7f,(MethodInfo *)0x0);
      uVar18 = CONCAT44(extraout_var_00,bVar13);
      if ((char)bVar13 == '\0') {
        return;
      }
      pUVar28 = (UnityEngine_UI_InputField_o *)0x1;
    }
    else {
      pUVar28 = (UnityEngine_UI_InputField_o *)0x0;
    }
  }
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -8) = unaff_RBP;
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar18;
  pUVar27 = *(UnityEngine_UI_InputField_o **)&(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled
  ;
  pUVar19 = pUVar28;
  if (pUVar27 != (UnityEngine_UI_InputField_o *)0x0) {
    unaff_R12 = (UnityEngine_UI_InputField_o *)((ulong)pUVar28 & 0xffffffff);
    pSVar21 = *(System_String_o **)&(pUVar27->fields).m_SelectionColor.fields.a;
    if (pSVar21 == (System_String_o *)0x0) {
      pSVar21 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      pUVar19 = (UnityEngine_UI_InputField_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8b92;
      uVar14 = UnityEngine_UI_InputField__get_caretPosition(pUVar27,(MethodInfo *)0x0);
      if (pSVar21 == (System_String_o *)0x0) goto label_043f8d06;
    }
    else {
      pUVar19 = (UnityEngine_UI_InputField_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8b71;
      uVar14 = UnityEngine_UI_InputField__get_caretPosition(pUVar27,(MethodInfo *)0x0);
    }
    uVar15 = (pSVar21->fields)._stringLength;
    if ((int)uVar14 <= (int)uVar15) {
      uVar15 = uVar14;
    }
    unaff_R15 = (UnityEngine_UI_InputField_o *)0x0;
    if (-1 < (int)uVar14) {
      unaff_R15 = (UnityEngine_UI_InputField_o *)(ulong)uVar15;
    }
    pUVar20 = *(UnityEngine_UI_InputField_o **)
               &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
    pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
    if (pUVar20 != (UnityEngine_UI_InputField_o *)0x0) {
      pUVar19 = (UnityEngine_UI_InputField_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8bc1;
      uVar14 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar20,(MethodInfo *)0x0);
      pUVar20 = *(UnityEngine_UI_InputField_o **)
                 &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
      pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
      if (pUVar20 != (UnityEngine_UI_InputField_o *)0x0) {
        unaff_RBX = (UnityEngine_UI_InputField_o *)(ulong)uVar14;
        pUVar19 = (UnityEngine_UI_InputField_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8bd7;
        uVar15 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar20,(MethodInfo *)0x0);
        if ((int)uVar14 <= (int)uVar15) {
          uVar15 = uVar14;
        }
        unaff_RBP = (UnityEngine_UI_InputField_o *)(ulong)uVar15;
        pUVar20 = *(UnityEngine_UI_InputField_o **)
                   &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
        pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
        if (pUVar20 != (UnityEngine_UI_InputField_o *)0x0) {
          *(int *)((long)register0x00000020 + -0x34) = (int)pUVar28;
          pUVar19 = (UnityEngine_UI_InputField_o *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8bf7;
          uVar14 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar20,(MethodInfo *)0x0);
          pUVar28 = *(UnityEngine_UI_InputField_o **)
                     &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
          pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
          if (pUVar28 != (UnityEngine_UI_InputField_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8c0d;
            uVar16 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar28,(MethodInfo *)0x0);
            if ((int)uVar16 <= (int)uVar14) {
              uVar16 = uVar14;
            }
            uVar14 = (pSVar21->fields)._stringLength;
            uVar9 = uVar15;
            if ((int)uVar14 < (int)uVar15) {
              uVar9 = uVar14;
            }
            unaff_R12 = (UnityEngine_UI_InputField_o *)(ulong)uVar9;
            if ((int)uVar15 < 0) {
              unaff_R12 = (UnityEngine_UI_InputField_o *)0x0;
            }
            if ((int)uVar16 <= (int)uVar14) {
              uVar14 = uVar16;
            }
            unaff_RBX = (UnityEngine_UI_InputField_o *)(ulong)uVar14;
            if ((int)uVar16 < 0) {
              unaff_RBX = (UnityEngine_UI_InputField_o *)0x0;
            }
            if ((int)unaff_R12 == (int)unaff_RBX) {
              uVar14 = (uint)unaff_R15;
              if (*(char *)((long)register0x00000020 + -0x34) != '\0') {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8c50;
                uVar14 = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar21,uVar14,1,(MethodInfo *)0x0);
                unaff_RBX = (UnityEngine_UI_InputField_o *)(ulong)uVar14;
                unaff_R12 = unaff_R15;
                goto label_043f8c55;
              }
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8c76;
              uVar15 = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar21,uVar14,0,(MethodInfo *)0x0);
              unaff_R12 = (UnityEngine_UI_InputField_o *)(ulong)uVar15;
              unaff_RBX = unaff_R15;
              if (uVar15 == uVar14) {
                return;
              }
            }
            else {
label_043f8c55:
              if ((int)unaff_R12 == (int)unaff_RBX) {
                return;
              }
            }
            method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8c90;
            length = (int32_t)unaff_R12;
            unaff_RBP = (UnityEngine_UI_InputField_o *)
                        System_String__Substring_3af8da0(pSVar21,0,length,(MethodInfo *)0x0);
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8c9f;
            pUVar19 = (UnityEngine_UI_InputField_o *)
                      System_String__Substring(pSVar21,(int32_t)unaff_RBX,(MethodInfo *)0x0);
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8cac;
            pUVar20 = (UnityEngine_UI_InputField_o *)
                      System_String__Concat_3ae5ba0
                                ((System_String_o *)unaff_RBP,(System_String_o *)pUVar19,(MethodInfo *)0x0);
            pUVar28 = *(UnityEngine_UI_InputField_o **)
                       &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
            pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
            if (pUVar28 != (UnityEngine_UI_InputField_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8cbf;
              UnityEngine_UI_InputField__set_text(pUVar28,(System_String_o *)pUVar20,(MethodInfo *)0x0);
              pUVar28 = *(UnityEngine_UI_InputField_o **)
                         &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
              pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
              pUVar19 = pUVar20;
              if (pUVar28 != (UnityEngine_UI_InputField_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8cd2;
                pUVar19 = unaff_R12;
                UnityEngine_UI_InputField__set_caretPosition(pUVar28,length,(MethodInfo *)0x0);
                pUVar28 = *(UnityEngine_UI_InputField_o **)
                           &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
                pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
                if (pUVar28 != (UnityEngine_UI_InputField_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8ce5;
                  pUVar19 = unaff_R12;
                  UnityEngine_UI_InputField__set_selectionAnchorPosition(pUVar28,length,(MethodInfo *)0x0);
                  pUVar28 = *(UnityEngine_UI_InputField_o **)
                             &(((UnityEngine_UI_InputField_o *)__this)->fields).m_EnableCalled;
                  pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
                  if (pUVar28 != (UnityEngine_UI_InputField_o *)0x0) {
                    uVar18 = *(undefined8 *)((long)register0x00000020 + -0x28);
                    plVar30 = *(long **)((long)register0x00000020 + -0x20);
                    __this_04 = *(UnityEngine_UI_Graphic_o **)((long)register0x00000020 + -0x18);
                    pUVar27 = *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x10);
                    *(undefined8 *)((long)register0x00000020 + -8) =
                         *(undefined8 *)((long)register0x00000020 + -8);
                    *(undefined8 *)((long)register0x00000020 + -0x10) =
                         *(undefined8 *)((long)register0x00000020 + -0x30);
                    *(undefined8 *)((long)register0x00000020 + -0x18) = extraout_RAX;
                    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x51c18bd;
                    pUVar19 = pUVar28;
                    pSVar21 = UnityEngine_UI_InputField__get_compositionString
                                        (pUVar28,(MethodInfo *)unaff_R12);
                    if (pSVar21 != (System_String_o *)0x0) {
                      if ((pSVar21->fields)._stringLength != 0) {
                        return;
                      }
                      (pUVar28->fields).m_ReadOnly = length;
                      if (length < 0) {
                        (pUVar28->fields).m_ReadOnly = 0;
                        return;
                      }
                      lVar22 = *(long *)&(pUVar28->fields).m_SelectionColor.fields.a;
                      if (lVar22 != 0) {
                        iVar17 = *(int *)(lVar22 + 0x10);
                        if (length <= iVar17) {
                          return;
                        }
                        (pUVar28->fields).m_ReadOnly = iVar17;
                        return;
                      }
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x51c190f;
                    il2cpp_runtime_helper_022b2c90();
                    *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x20) = pUVar28;
                    uVar14 = (pUVar19->fields).m_CaretWidth;
                    *(undefined8 *)((long)register0x00000020 + -0x28) = 0x51c191c;
                    pSVar21 = UnityEngine_UI_InputField__get_compositionString
                                        (pUVar19,(MethodInfo *)unaff_R12);
                    if (pSVar21 != (System_String_o *)0x0) {
                      return;
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x28) = 0x51c192d;
                    il2cpp_runtime_helper_022b2c90();
                    *(ulong *)((long)register0x00000020 + -0x28) = (ulong)uVar14;
                    pUVar26 = (UnityEngine_TextGenerator_o *)(ulong)(uint)(pUVar19->fields).m_ReadOnly;
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x51c193c;
                    pSVar21 = UnityEngine_UI_InputField__get_compositionString
                                        (pUVar19,(MethodInfo *)unaff_R12);
                    if (pSVar21 != (System_String_o *)0x0) {
                      return;
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x51c194d;
                    il2cpp_runtime_helper_022b2c90();
                    *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x30) = pUVar27;
                    *(UnityEngine_UI_Graphic_o **)((long)register0x00000020 + -0x38) = __this_04;
                    *(long **)((long)register0x00000020 + -0x40) = plVar30;
                    *(undefined8 *)((long)register0x00000020 + -0x48) = uVar18;
                    *(UnityEngine_TextGenerator_o **)((long)register0x00000020 + -0x50) = pUVar26;
                    if (g_data_057b82fb == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1971;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphic);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c197d;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MarkGeometryAsDirty);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1989;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateCaretMaterial);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1995;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateLabel);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c19a1;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c19ad;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
                      g_data_057b82fb = '\x01';
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c19be;
                    UnityEngine_UI_Selectable__OnEnable
                              ((UnityEngine_UI_Selectable_o *)pUVar19,(MethodInfo *)0x0);
                    lVar22 = *(long *)&(pUVar19->fields).m_SelectionColor.fields.a;
                    if (lVar22 == 0) {
                      pUVar28 = (UnityEngine_UI_InputField_o *)&(pUVar19->fields).m_SelectionColor.fields.a;
                      *(undefined8 *)&(pUVar19->fields).m_SelectionColor.fields.a =
                           **(undefined8 **)(g_data_057b9c00 + 0xb8);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1a06;
                      il2cpp_runtime_helper_022b4080();
                      lVar22 = *(long *)&(pUVar19->fields).m_SelectionColor.fields.a;
                      (pUVar19->fields).m_DragPositionOutOfBounds = 0;
                      if (lVar22 != 0) goto label_051c1a23;
                    }
                    else {
                      (pUVar19->fields).m_DragPositionOutOfBounds = 0;
label_051c1a23:
                      (pUVar19->fields).m_CaretVisible = *(bool_conflict *)(lVar22 + 0x10);
                      pUVar26 = (pUVar19->fields).m_InputTextCache;
                      plVar30 = &TypeInfo_Object;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1a4f;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1a5b;
                      bVar13 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar13 == '\0') {
label_051c1ad0:
                        pUVar6 = (UnityEngine_Object_o *)(pUVar19->fields).m_Keyboard;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1aea;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1af6;
                        bVar13 = UnityEngine_Object__op_Inequality
                                           (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar13 == '\0') {
                          return;
                        }
                        pUVar7 = (UnityEngine_UI_Graphic_o *)(pUVar19->fields).m_Keyboard;
                        pUVar26 = (UnityEngine_TextGenerator_o *)&TypeInfo_UnityAction;
                        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1b15;
                        pUVar27 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1b2f;
                        pUVar28 = pUVar27;
                        UnityEngine_Events_UnityAction___ctor();
                        __this_04 = (UnityEngine_UI_Graphic_o *)0x0;
                        if (pUVar7 != (UnityEngine_UI_Graphic_o *)0x0) {
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1b45;
                          UnityEngine_UI_Graphic__RegisterDirtyVerticesCallback
                                    (pUVar7,(UnityEngine_Events_UnityAction_o *)pUVar27,(MethodInfo *)0x0);
                          pUVar7 = (UnityEngine_UI_Graphic_o *)(pUVar19->fields).m_Keyboard;
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1b55;
                          pUVar27 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1b6f;
                          pUVar28 = pUVar27;
                          UnityEngine_Events_UnityAction___ctor();
                          __this_04 = (UnityEngine_UI_Graphic_o *)0x0;
                          if (pUVar7 != (UnityEngine_UI_Graphic_o *)0x0) {
                            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1b81;
                            UnityEngine_UI_Graphic__RegisterDirtyVerticesCallback
                                      (pUVar7,(UnityEngine_Events_UnityAction_o *)pUVar27,(MethodInfo *)0x0);
                            pUVar7 = (UnityEngine_UI_Graphic_o *)(pUVar19->fields).m_Keyboard;
                            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1b91;
                            pUVar27 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                            method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1bab;
                            pUVar28 = pUVar27;
                            UnityEngine_Events_UnityAction___ctor();
                            __this_04 = (UnityEngine_UI_Graphic_o *)0x0;
                            if (pUVar7 != (UnityEngine_UI_Graphic_o *)0x0) {
                              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1bbd;
                              UnityEngine_UI_Graphic__RegisterDirtyMaterialCallback
                                        (pUVar7,(UnityEngine_Events_UnityAction_o *)pUVar27,(MethodInfo *)0x0)
                              ;
                              UnityEngine_UI_InputField__UpdateLabel(pUVar19,(MethodInfo *)pUVar27);
                              return;
                            }
                          }
                        }
                      }
                      else {
                        pUVar3 = (pUVar19->fields).m_Keyboard;
                        __this_04 = (UnityEngine_UI_Graphic_o *)(pUVar19->fields).m_InputTextCache;
                        if (*(int *)(TypeInfo_Graphic + 0xe4) == 0) {
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1a87;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pUVar28 = (UnityEngine_UI_InputField_o *)0x0;
                        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1a8e;
                        pUVar23 = UnityEngine_UI_Graphic__get_defaultGraphicMaterial((MethodInfo *)0x0);
                        pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
                        if (pUVar3 != (UnityEngine_TouchScreenKeyboard_o *)0x0) {
                          method_00 = pUVar3->klass;
                          pIVar4 = method_00[3]._1.klass;
                          pcVar5 = method_00[3]._1.interopData;
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1aad;
                          pUVar27 = (UnityEngine_UI_InputField_o *)(*pcVar5)(pUVar3,pUVar23,pIVar4);
                          pUVar28 = (UnityEngine_UI_InputField_o *)0x0;
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1ab7;
                          texture = (UnityEngine_Texture_o *)
                                    UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
                          if (__this_04 != (UnityEngine_UI_Graphic_o *)0x0) {
                            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1ad0;
                            UnityEngine_CanvasRenderer__SetMaterial_50bb870
                                      ((UnityEngine_CanvasRenderer_o *)__this_04,
                                       (UnityEngine_Material_o *)pUVar27,texture,(MethodInfo *)0x0);
                            goto label_051c1ad0;
                          }
                        }
                      }
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x51c1bdd;
                    il2cpp_runtime_helper_022b2c90();
                    *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x58) = pUVar27;
                    *(UnityEngine_UI_Graphic_o **)((long)register0x00000020 + -0x60) = __this_04;
                    *(long **)((long)register0x00000020 + -0x68) = plVar30;
                    *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x70) = pUVar19;
                    *(UnityEngine_TextGenerator_o **)((long)register0x00000020 + -0x78) = pUVar26;
                    if (g_data_057b82fc == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c01;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_CanvasUpdateRegistry);
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c0d;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MarkGeometryAsDirty);
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c19;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateCaretMaterial);
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c25;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateLabel);
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c31;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c3d;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
                      g_data_057b82fc = '\x01';
                    }
                    (pUVar28->fields).m_AllowInput = 0;
                    (pUVar28->fields).m_ShouldActivateNextUpdate = 0;
                    pMVar29 = (MethodInfo *)0x0;
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c5f;
                    il2cpp_runtime_helper_022b4080(&(pUVar28->fields).m_AllowInput);
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c67;
                    UnityEngine_UI_InputField__DeactivateInputField(pUVar28,pMVar29);
                    pUVar6 = (UnityEngine_Object_o *)(pUVar28->fields).m_Keyboard;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c88;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1c94;
                    bVar13 = UnityEngine_Object__op_Inequality
                                       (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar13 == '\0') {
label_051c1d63:
                      if (*(int *)(TypeInfo_CanvasUpdateRegistry + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d7b;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d85;
                      UnityEngine_UI_CanvasUpdateRegistry__DisableCanvasElementForRebuild
                                ((UnityEngine_UI_ICanvasElement_o *)pUVar28,(MethodInfo *)0x0);
                      pUVar26 = (pUVar28->fields).m_InputTextCache;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d9f;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1dab;
                      bVar13 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar13 == '\0') {
label_051c1dc7:
                        pUVar6 = *(UnityEngine_Object_o **)&(pUVar28->fields).m_PreventFontCallback;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1de1;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pbVar1 = &(pUVar28->fields).m_PreventFontCallback;
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1df5;
                        bVar13 = UnityEngine_Object__op_Inequality
                                           (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar13 != '\0') {
                          pUVar6 = *(UnityEngine_Object_o **)pbVar1;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1e0e;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1e18;
                          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar6,(MethodInfo *)0x0);
                        }
                        *(undefined8 *)&(pUVar28->fields).m_PreventFontCallback = 0;
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1e2e;
                        il2cpp_runtime_helper_022b4080(pbVar1);
                        UnityEngine_UI_Selectable__OnDisable
                                  ((UnityEngine_UI_Selectable_o *)pUVar28,(MethodInfo *)0x0);
                        return;
                      }
                      __this_00 = (pUVar28->fields).m_InputTextCache;
                      pUVar19 = (UnityEngine_UI_InputField_o *)0x0;
                      if (__this_00 != (UnityEngine_TextGenerator_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1dc7;
                        UnityEngine_CanvasRenderer__Clear
                                  ((UnityEngine_CanvasRenderer_o *)__this_00,(MethodInfo *)0x0);
                        goto label_051c1dc7;
                      }
                    }
                    else {
                      pUVar7 = (UnityEngine_UI_Graphic_o *)(pUVar28->fields).m_Keyboard;
                      pUVar26 = (UnityEngine_TextGenerator_o *)&TypeInfo_UnityAction;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1cb3;
                      pUVar27 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1ccd;
                      pUVar19 = pUVar27;
                      UnityEngine_Events_UnityAction___ctor();
                      __this_04 = (UnityEngine_UI_Graphic_o *)0x0;
                      if (pUVar7 != (UnityEngine_UI_Graphic_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1ce3;
                        UnityEngine_UI_Graphic__UnregisterDirtyVerticesCallback
                                  (pUVar7,(UnityEngine_Events_UnityAction_o *)pUVar27,(MethodInfo *)0x0);
                        pUVar7 = (UnityEngine_UI_Graphic_o *)(pUVar28->fields).m_Keyboard;
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1cf3;
                        pUVar27 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d0d;
                        pUVar19 = pUVar27;
                        UnityEngine_Events_UnityAction___ctor();
                        __this_04 = (UnityEngine_UI_Graphic_o *)0x0;
                        if (pUVar7 != (UnityEngine_UI_Graphic_o *)0x0) {
                          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d23;
                          UnityEngine_UI_Graphic__UnregisterDirtyVerticesCallback
                                    (pUVar7,(UnityEngine_Events_UnityAction_o *)pUVar27,(MethodInfo *)0x0);
                          __this_04 = (UnityEngine_UI_Graphic_o *)(pUVar28->fields).m_Keyboard;
                          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d33;
                          pUVar27 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d4d;
                          pUVar19 = pUVar27;
                          UnityEngine_Events_UnityAction___ctor();
                          if (__this_04 != (UnityEngine_UI_Graphic_o *)0x0) {
                            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1d63;
                            UnityEngine_UI_Graphic__UnregisterDirtyMaterialCallback
                                      (__this_04,(UnityEngine_Events_UnityAction_o *)pUVar27,(MethodInfo *)0x0
                                      );
                            goto label_051c1d63;
                          }
                        }
                      }
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x51c1e46;
                    uVar18 = il2cpp_runtime_helper_022b2c90();
                    *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x80) = pUVar27;
                    *(UnityEngine_UI_Graphic_o **)((long)register0x00000020 + -0x88) = __this_04;
                    *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x90) = pUVar28;
                    *(UnityEngine_TextGenerator_o **)((long)register0x00000020 + -0x98) = pUVar26;
                    *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar18;
                    if (g_data_057b8325 == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1e70;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                      g_data_057b8325 = '\x01';
                    }
                    if (*(char *)&(pUVar19->fields).m_Mesh == '\0') {
                      return;
                    }
                    *(undefined1 *)((long)&(pUVar19->fields).m_DrawEnd + 1) = 0;
                    *(undefined1 *)&(pUVar19->fields).m_Mesh = 0;
                    pUVar27 = (UnityEngine_UI_InputField_o *)(pUVar19->fields).m_TextComponent;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1eb5;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1ec1;
                    bVar13 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if ((char)bVar13 != '\0') {
                      __this_01 = (pUVar19->fields).m_TextComponent;
                      pUVar28 = *(UnityEngine_UI_InputField_o **)&(pUVar19->fields).m_SelectionColor.fields.a;
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1eda;
                      uVar14 = System_String__IsNullOrEmpty((System_String_o *)pUVar28,(MethodInfo *)0x0);
                      if (__this_01 == (UnityEngine_UI_Text_o *)0x0) goto label_051c208a;
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1ef0;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)__this_01,uVar14 & 0xff,(MethodInfo *)0x0);
                    }
                    pUVar6 = (UnityEngine_Object_o *)(pUVar19->fields).m_Keyboard;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1f09;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1f15;
                    bVar13 = UnityEngine_Object__op_Inequality
                                       (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar13 != '\0') {
                      pIVar8 = (pUVar19->klass->vtable)._24_IsInteractable.methodPtr;
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1f30;
                      cVar11 = (*pIVar8)(pUVar19);
                      if (cVar11 != '\0') {
                        if ((char)(pUVar19->fields).m_DrawEnd != '\0') {
                          pSVar21 = *(System_String_o **)&(pUVar19->fields).m_BlinkStartTime;
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1f56;
                          UnityEngine_UI_InputField__SetText(pUVar19,pSVar21,1,(MethodInfo *)method_00);
                        }
                        if (g_data_057b8314 == '\0') {
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1f6b;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1f77;
                          il2cpp_runtime_helper_023445d0(&"InputField.onEndEdit");
                          g_data_057b8314 = '\x01';
                        }
                        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1f92;
                        pUVar27 = pUVar19;
                        UnityEngine_UISystemProfilerApi__AddMarker
                                  ("InputField.onEndEdit",(UnityEngine_Object_o *)pUVar19,(MethodInfo *)0x0);
                        __this_02 = (pUVar19->fields).m_OnSubmit;
                        if (__this_02 != (UnityEngine_UI_InputField_SubmitEvent_o *)0x0) {
                          pUVar27 = *(UnityEngine_UI_InputField_o **)
                                     &(pUVar19->fields).m_SelectionColor.fields.a;
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1fb4;
                          UnityEngine_Events_UnityEvent_object___Invoke
                                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,(Il2CppObject *)pUVar27,
                                     MethodInfo_Void_Invoke);
                        }
                        __this_03 = (pUVar19->fields).m_CanvasGroupCache;
                        pUVar28 = (UnityEngine_UI_InputField_o *)0x0;
                        if (__this_03 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
                          pUVar28 = (UnityEngine_UI_InputField_o *)&(pUVar19->fields).m_CanvasGroupCache;
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1fd0;
                          UnityEngine_TouchScreenKeyboard__set_active
                                    ((UnityEngine_TouchScreenKeyboard_o *)__this_03,0,(MethodInfo *)0x0);
                          *(System_Collections_Generic_List_CanvasGroup__o **)pUVar28 =
                               (System_Collections_Generic_List_CanvasGroup__o *)0x0;
                          pUVar27 = (UnityEngine_UI_InputField_o *)0x0;
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1fe1;
                          il2cpp_runtime_helper_022b4080();
                        }
                        (pUVar19->fields).m_CaretWidth = 0;
                        (pUVar19->fields).m_ReadOnly = 0;
                        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c1ff1;
                        pUVar27 = (UnityEngine_UI_InputField_o *)
                                  UnityEngine_UI_InputField__get_input(pUVar28,(MethodInfo *)pUVar27);
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c2006;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pMVar29 = (MethodInfo *)0x0;
                        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c2012;
                        pUVar28 = pUVar27;
                        bVar13 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar13 != '\0') {
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c201b;
                          pUVar24 = UnityEngine_UI_InputField__get_input(pUVar28,pMVar29);
                          if (pUVar24 == (UnityEngine_EventSystems_BaseInput_o *)0x0) {
label_051c208a:
                            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c208f;
                            il2cpp_runtime_helper_022b2c90();
                            *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0xa8) = pUVar27;
                            if (g_data_057b82fd == '\0') {
                              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x51c20a9;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_CanvasUpdateRegistry);
                              g_data_057b82fd = '\x01';
                            }
                            if (*(int *)(TypeInfo_CanvasUpdateRegistry + 0xe4) == 0) {
                              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x51c20c8;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x51c20d2;
                            UnityEngine_UI_CanvasUpdateRegistry__UnRegisterCanvasElementForRebuild
                                      ((UnityEngine_UI_ICanvasElement_o *)pUVar28,(MethodInfo *)0x0);
                            UnityEngine_EventSystems_UIBehaviour__OnDestroy
                                      ((UnityEngine_EventSystems_UIBehaviour_o *)pUVar28,(MethodInfo *)0x0);
                            return;
                          }
                          pMVar29 = (pUVar24->klass->vtable)._19_set_imeCompositionMode.method;
                          pIVar8 = (pUVar24->klass->vtable)._19_set_imeCompositionMode.methodPtr;
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c2035;
                          (*pIVar8)(pUVar24,0,pMVar29);
                        }
                      }
                    }
                    if (g_data_057b831b == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c204a;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_CanvasUpdateRegistry);
                      g_data_057b831b = '\x01';
                    }
                    if (*(int *)(TypeInfo_CanvasUpdateRegistry + 0xe4) == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x51c2069;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForGraphicRebuild
                              ((UnityEngine_UI_ICanvasElement_o *)pUVar19,(MethodInfo *)0x0);
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
label_043f8d06:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43f8d0b;
  il2cpp_runtime_helper_022b2c90();
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x40) = unaff_RBP;
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x48) = unaff_R15;
  *(UI_InputFieldKeyboardNav_o **)((long)register0x00000020 + -0x50) = __this;
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x58) = unaff_R12;
  *(UnityEngine_UI_InputField_o **)((long)register0x00000020 + -0x60) = unaff_RBX;
  uVar25 = (ulong)pUVar19 & 0xffffffff;
  uVar14 = (uint)pUVar19;
  if (extraout_EDX == 0) {
    uVar10 = uVar25;
    if (pUVar27 != (UnityEngine_UI_InputField_o *)0x0) {
      do {
        uVar25 = uVar10;
        uVar15 = (uint)uVar25;
        if ((int)uVar14 < 1) break;
        uVar14 = uVar15 - 1;
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8dd7;
        uVar12 = System_String__get_Chars((System_String_o *)pUVar27,uVar14,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8def;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8dba;
        bVar13 = System_Char__IsWhiteSpace(uVar12,(MethodInfo *)0x0);
        uVar10 = (ulong)uVar14;
      } while ((char)bVar13 != '\0');
      if (pUVar27 != (UnityEngine_UI_InputField_o *)0x0) {
        do {
          if ((int)uVar15 < 1) {
            return;
          }
          uVar15 = (int)uVar25 - 1;
          uVar25 = (ulong)uVar15;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8e3f;
          uVar12 = System_String__get_Chars((System_String_o *)pUVar27,uVar15,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8e57;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8e1a;
          bVar13 = System_Char__IsWhiteSpace(uVar12,(MethodInfo *)0x0);
        } while ((char)bVar13 == '\0');
        return;
      }
    }
    if ((int)uVar25 < 1) {
      return;
    }
  }
  else if (pUVar27 != (UnityEngine_UI_InputField_o *)0x0) {
    iVar17 = (int)(pUVar27->fields).m_CachedPtr;
    if ((int)uVar14 < iVar17) {
      do {
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8d4c;
        uVar12 = System_String__get_Chars((System_String_o *)pUVar27,(int)uVar25,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8d63;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8d6d;
        bVar13 = System_Char__IsWhiteSpace(uVar12,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_043f8e62;
        uVar14 = (int)uVar25 + 1;
        uVar25 = (ulong)uVar14;
        iVar17 = (int)(pUVar27->fields).m_CachedPtr;
      } while ((int)uVar14 < iVar17);
    }
    if (iVar17 <= (int)uVar25) {
      return;
    }
    goto label_043f8e80;
  }
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8e62;
  il2cpp_runtime_helper_022b2c90();
label_043f8e62:
  if ((int)(pUVar27->fields).m_CachedPtr <= (int)uVar25) {
    return;
  }
label_043f8e80:
  do {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8e8c;
    uVar12 = System_String__get_Chars((System_String_o *)pUVar27,(int)uVar25,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8ea3;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x43f8ead;
    bVar13 = System_Char__IsWhiteSpace(uVar12,(MethodInfo *)0x0);
  } while (((char)bVar13 == '\0') &&
          (uVar14 = (int)uVar25 + 1, uVar25 = (ulong)uVar14, (int)uVar14 < (int)(pUVar27->fields).m_CachedPtr)
          );
  return;
}


// UI.InputFieldKeyboardNav$$DeleteWord
// il2cpp: void UI_InputFieldKeyboardNav__DeleteWord (UI_InputFieldKeyboardNav_o* __this, bool forward, const MethodInfo* method);
// 0x43f8b40

void UI_InputFieldKeyboardNav__DeleteWord
               (UI_InputFieldKeyboardNav_o *__this,bool_conflict forward,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_TextGenerator_o *pUVar2;
  UnityEngine_TouchScreenKeyboard_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_UI_Graphic_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_InputField_SubmitEvent_o *__this_00;
  System_Collections_Generic_List_CanvasGroup__o *__this_01;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  uint16_t uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool_conflict bVar15;
  System_String_o *str0;
  MethodInfo *pMVar16;
  System_String_o *pSVar17;
  long lVar18;
  UnityEngine_Material_o *pUVar19;
  UnityEngine_Texture_o *texture;
  UnityEngine_UI_InputField_o *pUVar20;
  UnityEngine_UI_InputField_o *pUVar21;
  UnityEngine_EventSystems_BaseInput_o *pUVar22;
  UnityEngine_TouchScreenKeyboard_c *method_00;
  int32_t length;
  int extraout_EDX;
  MethodInfo *pMVar23;
  ulong uVar24;
  MethodInfo *method_01;
  UnityEngine_UI_InputField_o *pUVar25;
  char cStack_34;
  
  pUVar25 = (__this->fields)._field;
  pMVar23 = (MethodInfo *)(ulong)(uint)forward;
  if (pUVar25 != (UnityEngine_UI_InputField_o *)0x0) {
    pSVar17 = *(System_String_o **)&(pUVar25->fields).m_SelectionColor.fields.a;
    if (pSVar17 == (System_String_o *)0x0) {
      pSVar17 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      pMVar23 = (MethodInfo *)0x0;
      uVar11 = UnityEngine_UI_InputField__get_caretPosition(pUVar25,(MethodInfo *)0x0);
      if (pSVar17 == (System_String_o *)0x0) goto label_043f8d06;
    }
    else {
      pMVar23 = (MethodInfo *)0x0;
      uVar11 = UnityEngine_UI_InputField__get_caretPosition(pUVar25,(MethodInfo *)0x0);
    }
    uVar12 = (pSVar17->fields)._stringLength;
    if ((int)uVar11 <= (int)uVar12) {
      uVar12 = uVar11;
    }
    pMVar16 = (MethodInfo *)0x0;
    if (-1 < (int)uVar11) {
      pMVar16 = (MethodInfo *)(ulong)uVar12;
    }
    pUVar21 = (__this->fields)._field;
    pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
    if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
      pMVar23 = (MethodInfo *)0x0;
      uVar11 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar21,(MethodInfo *)0x0);
      pUVar21 = (__this->fields)._field;
      pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
      if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
        pMVar23 = (MethodInfo *)0x0;
        uVar12 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar21,(MethodInfo *)0x0);
        if ((int)uVar11 <= (int)uVar12) {
          uVar12 = uVar11;
        }
        pUVar21 = (__this->fields)._field;
        pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
        if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
          pMVar23 = (MethodInfo *)0x0;
          uVar11 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar21,(MethodInfo *)0x0);
          pUVar21 = (__this->fields)._field;
          pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
          if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
            uVar13 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar21,(MethodInfo *)0x0);
            if ((int)uVar13 <= (int)uVar11) {
              uVar13 = uVar11;
            }
            uVar11 = (pSVar17->fields)._stringLength;
            uVar7 = uVar12;
            if ((int)uVar11 < (int)uVar12) {
              uVar7 = uVar11;
            }
            method_01 = (MethodInfo *)(ulong)uVar7;
            if ((int)uVar12 < 0) {
              method_01 = (MethodInfo *)0x0;
            }
            if ((int)uVar13 <= (int)uVar11) {
              uVar11 = uVar13;
            }
            pMVar23 = (MethodInfo *)(ulong)uVar11;
            if ((int)uVar13 < 0) {
              pMVar23 = (MethodInfo *)0x0;
            }
            if ((int)method_01 == (int)pMVar23) {
              cStack_34 = (char)forward;
              uVar11 = (uint)pMVar16;
              if (cStack_34 != '\0') {
                uVar11 = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar17,uVar11,1,(MethodInfo *)0x0);
                pMVar23 = (MethodInfo *)(ulong)uVar11;
                method_01 = pMVar16;
                goto label_043f8c55;
              }
              uVar12 = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar17,uVar11,0,(MethodInfo *)0x0);
              method_01 = (MethodInfo *)(ulong)uVar12;
              if (uVar12 == uVar11) {
                return;
              }
            }
            else {
label_043f8c55:
              pMVar16 = pMVar23;
              if ((int)method_01 == (int)pMVar16) {
                return;
              }
            }
            method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
            length = (int32_t)method_01;
            str0 = System_String__Substring_3af8da0(pSVar17,0,length,(MethodInfo *)0x0);
            pMVar23 = (MethodInfo *)System_String__Substring(pSVar17,(int32_t)pMVar16,(MethodInfo *)0x0);
            pMVar16 = (MethodInfo *)
                      System_String__Concat_3ae5ba0(str0,(System_String_o *)pMVar23,(MethodInfo *)0x0);
            pUVar21 = (__this->fields)._field;
            pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
            if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
              UnityEngine_UI_InputField__set_text(pUVar21,(System_String_o *)pMVar16,(MethodInfo *)0x0);
              pUVar21 = (__this->fields)._field;
              pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
              pMVar23 = pMVar16;
              if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
                pMVar23 = method_01;
                UnityEngine_UI_InputField__set_caretPosition(pUVar21,length,(MethodInfo *)0x0);
                pUVar21 = (__this->fields)._field;
                pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
                if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
                  pMVar23 = method_01;
                  UnityEngine_UI_InputField__set_selectionAnchorPosition(pUVar21,length,(MethodInfo *)0x0);
                  pUVar21 = (__this->fields)._field;
                  pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
                  if (pUVar21 != (UnityEngine_UI_InputField_o *)0x0) {
                    pUVar25 = pUVar21;
                    pSVar17 = UnityEngine_UI_InputField__get_compositionString(pUVar21,method_01);
                    if (pSVar17 != (System_String_o *)0x0) {
                      if ((pSVar17->fields)._stringLength != 0) {
                        return;
                      }
                      (pUVar21->fields).m_ReadOnly = length;
                      if (length < 0) {
                        (pUVar21->fields).m_ReadOnly = 0;
                        return;
                      }
                      lVar18 = *(long *)&(pUVar21->fields).m_SelectionColor.fields.a;
                      if (lVar18 != 0) {
                        iVar14 = *(int *)(lVar18 + 0x10);
                        if (length <= iVar14) {
                          return;
                        }
                        (pUVar21->fields).m_ReadOnly = iVar14;
                        return;
                      }
                    }
                    il2cpp_runtime_helper_022b2c90();
                    pSVar17 = UnityEngine_UI_InputField__get_compositionString(pUVar25,method_01);
                    if (pSVar17 != (System_String_o *)0x0) {
                      return;
                    }
                    il2cpp_runtime_helper_022b2c90();
                    pSVar17 = UnityEngine_UI_InputField__get_compositionString(pUVar25,method_01);
                    if (pSVar17 != (System_String_o *)0x0) {
                      return;
                    }
                    il2cpp_runtime_helper_022b2c90();
                    if (g_data_057b82fb == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphic);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MarkGeometryAsDirty);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateCaretMaterial);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateLabel);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
                      g_data_057b82fb = '\x01';
                    }
                    UnityEngine_UI_Selectable__OnEnable
                              ((UnityEngine_UI_Selectable_o *)pUVar25,(MethodInfo *)0x0);
                    lVar18 = *(long *)&(pUVar25->fields).m_SelectionColor.fields.a;
                    if (lVar18 == 0) {
                      pUVar21 = (UnityEngine_UI_InputField_o *)&(pUVar25->fields).m_SelectionColor.fields.a;
                      *(undefined8 *)&(pUVar25->fields).m_SelectionColor.fields.a =
                           **(undefined8 **)(g_data_057b9c00 + 0xb8);
                      il2cpp_runtime_helper_022b4080();
                      lVar18 = *(long *)&(pUVar25->fields).m_SelectionColor.fields.a;
                      (pUVar25->fields).m_DragPositionOutOfBounds = 0;
                      if (lVar18 != 0) goto label_051c1a23;
                    }
                    else {
                      (pUVar25->fields).m_DragPositionOutOfBounds = 0;
label_051c1a23:
                      (pUVar25->fields).m_CaretVisible = *(bool_conflict *)(lVar18 + 0x10);
                      pUVar2 = (pUVar25->fields).m_InputTextCache;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar15 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar15 == '\0') {
label_051c1ad0:
                        pUVar4 = (UnityEngine_Object_o *)(pUVar25->fields).m_Keyboard;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar15 = UnityEngine_Object__op_Inequality
                                           (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar15 == '\0') {
                          return;
                        }
                        pUVar5 = (UnityEngine_UI_Graphic_o *)(pUVar25->fields).m_Keyboard;
                        pUVar20 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                        pUVar21 = pUVar20;
                        UnityEngine_Events_UnityAction___ctor();
                        if (pUVar5 != (UnityEngine_UI_Graphic_o *)0x0) {
                          UnityEngine_UI_Graphic__RegisterDirtyVerticesCallback
                                    (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar20,(MethodInfo *)0x0);
                          pUVar5 = (UnityEngine_UI_Graphic_o *)(pUVar25->fields).m_Keyboard;
                          pUVar20 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                          pUVar21 = pUVar20;
                          UnityEngine_Events_UnityAction___ctor();
                          if (pUVar5 != (UnityEngine_UI_Graphic_o *)0x0) {
                            UnityEngine_UI_Graphic__RegisterDirtyVerticesCallback
                                      (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar20,(MethodInfo *)0x0);
                            pUVar5 = (UnityEngine_UI_Graphic_o *)(pUVar25->fields).m_Keyboard;
                            pUVar20 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                            method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                            pUVar21 = pUVar20;
                            UnityEngine_Events_UnityAction___ctor();
                            if (pUVar5 != (UnityEngine_UI_Graphic_o *)0x0) {
                              UnityEngine_UI_Graphic__RegisterDirtyMaterialCallback
                                        (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar20,(MethodInfo *)0x0)
                              ;
                              UnityEngine_UI_InputField__UpdateLabel(pUVar25,(MethodInfo *)pUVar20);
                              return;
                            }
                          }
                        }
                      }
                      else {
                        pUVar3 = (pUVar25->fields).m_Keyboard;
                        pUVar2 = (pUVar25->fields).m_InputTextCache;
                        if (*(int *)(TypeInfo_Graphic + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pUVar21 = (UnityEngine_UI_InputField_o *)0x0;
                        pUVar19 = UnityEngine_UI_Graphic__get_defaultGraphicMaterial((MethodInfo *)0x0);
                        if (pUVar3 != (UnityEngine_TouchScreenKeyboard_o *)0x0) {
                          method_00 = pUVar3->klass;
                          pUVar19 = (UnityEngine_Material_o *)
                                    (*method_00[3]._1.interopData)(pUVar3,pUVar19,method_00[3]._1.klass);
                          pUVar21 = (UnityEngine_UI_InputField_o *)0x0;
                          texture = (UnityEngine_Texture_o *)
                                    UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
                          if (pUVar2 != (UnityEngine_TextGenerator_o *)0x0) {
                            UnityEngine_CanvasRenderer__SetMaterial_50bb870
                                      ((UnityEngine_CanvasRenderer_o *)pUVar2,pUVar19,texture,
                                       (MethodInfo *)0x0);
                            goto label_051c1ad0;
                          }
                        }
                      }
                    }
                    il2cpp_runtime_helper_022b2c90();
                    if (g_data_057b82fc == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_CanvasUpdateRegistry);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MarkGeometryAsDirty);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateCaretMaterial);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateLabel);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
                      g_data_057b82fc = '\x01';
                    }
                    (pUVar21->fields).m_AllowInput = 0;
                    (pUVar21->fields).m_ShouldActivateNextUpdate = 0;
                    pMVar23 = (MethodInfo *)0x0;
                    il2cpp_runtime_helper_022b4080(&(pUVar21->fields).m_AllowInput);
                    UnityEngine_UI_InputField__DeactivateInputField(pUVar21,pMVar23);
                    pUVar4 = (UnityEngine_Object_o *)(pUVar21->fields).m_Keyboard;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar15 = UnityEngine_Object__op_Inequality
                                       (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar15 == '\0') {
label_051c1d63:
                      if (*(int *)(TypeInfo_CanvasUpdateRegistry + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UnityEngine_UI_CanvasUpdateRegistry__DisableCanvasElementForRebuild
                                ((UnityEngine_UI_ICanvasElement_o *)pUVar21,(MethodInfo *)0x0);
                      pUVar2 = (pUVar21->fields).m_InputTextCache;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar15 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar15 == '\0') {
label_051c1dc7:
                        pUVar4 = *(UnityEngine_Object_o **)&(pUVar21->fields).m_PreventFontCallback;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pbVar1 = &(pUVar21->fields).m_PreventFontCallback;
                        bVar15 = UnityEngine_Object__op_Inequality
                                           (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((char)bVar15 != '\0') {
                          pUVar4 = *(UnityEngine_Object_o **)pbVar1;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar4,(MethodInfo *)0x0);
                        }
                        *(undefined8 *)&(pUVar21->fields).m_PreventFontCallback = 0;
                        il2cpp_runtime_helper_022b4080(pbVar1);
                        UnityEngine_UI_Selectable__OnDisable
                                  ((UnityEngine_UI_Selectable_o *)pUVar21,(MethodInfo *)0x0);
                        return;
                      }
                      pUVar2 = (pUVar21->fields).m_InputTextCache;
                      pUVar25 = (UnityEngine_UI_InputField_o *)0x0;
                      if (pUVar2 != (UnityEngine_TextGenerator_o *)0x0) {
                        UnityEngine_CanvasRenderer__Clear
                                  ((UnityEngine_CanvasRenderer_o *)pUVar2,(MethodInfo *)0x0);
                        goto label_051c1dc7;
                      }
                    }
                    else {
                      pUVar5 = (UnityEngine_UI_Graphic_o *)(pUVar21->fields).m_Keyboard;
                      pUVar20 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                      pUVar25 = pUVar20;
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar5 != (UnityEngine_UI_Graphic_o *)0x0) {
                        UnityEngine_UI_Graphic__UnregisterDirtyVerticesCallback
                                  (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar20,(MethodInfo *)0x0);
                        pUVar5 = (UnityEngine_UI_Graphic_o *)(pUVar21->fields).m_Keyboard;
                        pUVar20 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                        pUVar25 = pUVar20;
                        UnityEngine_Events_UnityAction___ctor();
                        if (pUVar5 != (UnityEngine_UI_Graphic_o *)0x0) {
                          UnityEngine_UI_Graphic__UnregisterDirtyVerticesCallback
                                    (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar20,(MethodInfo *)0x0);
                          pUVar5 = (UnityEngine_UI_Graphic_o *)(pUVar21->fields).m_Keyboard;
                          pUVar20 = (UnityEngine_UI_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          method_00 = (UnityEngine_TouchScreenKeyboard_c *)0x0;
                          pUVar25 = pUVar20;
                          UnityEngine_Events_UnityAction___ctor();
                          if (pUVar5 != (UnityEngine_UI_Graphic_o *)0x0) {
                            UnityEngine_UI_Graphic__UnregisterDirtyMaterialCallback
                                      (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar20,(MethodInfo *)0x0);
                            goto label_051c1d63;
                          }
                        }
                      }
                    }
                    il2cpp_runtime_helper_022b2c90();
                    if (g_data_057b8325 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                      g_data_057b8325 = '\x01';
                    }
                    if (*(char *)&(pUVar25->fields).m_Mesh == '\0') {
                      return;
                    }
                    *(undefined1 *)((long)&(pUVar25->fields).m_DrawEnd + 1) = 0;
                    *(undefined1 *)&(pUVar25->fields).m_Mesh = 0;
                    pUVar6 = (pUVar25->fields).m_TextComponent;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar15 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if ((char)bVar15 != '\0') {
                      pUVar6 = (pUVar25->fields).m_TextComponent;
                      pUVar21 = *(UnityEngine_UI_InputField_o **)&(pUVar25->fields).m_SelectionColor.fields.a;
                      uVar11 = System_String__IsNullOrEmpty((System_String_o *)pUVar21,(MethodInfo *)0x0);
                      if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) goto label_051c208a;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)pUVar6,uVar11 & 0xff,(MethodInfo *)0x0);
                    }
                    pUVar4 = (UnityEngine_Object_o *)(pUVar25->fields).m_Keyboard;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar15 = UnityEngine_Object__op_Inequality
                                       (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if (((char)bVar15 != '\0') &&
                       (cVar9 = (*(pUVar25->klass->vtable)._24_IsInteractable.methodPtr)(pUVar25),
                       cVar9 != '\0')) {
                      if ((char)(pUVar25->fields).m_DrawEnd != '\0') {
                        UnityEngine_UI_InputField__SetText
                                  (pUVar25,*(System_String_o **)&(pUVar25->fields).m_BlinkStartTime,1,
                                   (MethodInfo *)method_00);
                      }
                      if (g_data_057b8314 == '\0') {
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
                        il2cpp_runtime_helper_023445d0(&"InputField.onEndEdit");
                        g_data_057b8314 = '\x01';
                      }
                      pUVar21 = pUVar25;
                      UnityEngine_UISystemProfilerApi__AddMarker
                                ("InputField.onEndEdit",(UnityEngine_Object_o *)pUVar25,(MethodInfo *)0x0);
                      __this_00 = (pUVar25->fields).m_OnSubmit;
                      if (__this_00 != (UnityEngine_UI_InputField_SubmitEvent_o *)0x0) {
                        pUVar21 = *(UnityEngine_UI_InputField_o **)
                                   &(pUVar25->fields).m_SelectionColor.fields.a;
                        UnityEngine_Events_UnityEvent_object___Invoke
                                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)pUVar21,
                                   MethodInfo_Void_Invoke);
                      }
                      __this_01 = (pUVar25->fields).m_CanvasGroupCache;
                      pUVar20 = (UnityEngine_UI_InputField_o *)0x0;
                      if (__this_01 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
                        pUVar20 = (UnityEngine_UI_InputField_o *)&(pUVar25->fields).m_CanvasGroupCache;
                        UnityEngine_TouchScreenKeyboard__set_active
                                  ((UnityEngine_TouchScreenKeyboard_o *)__this_01,0,(MethodInfo *)0x0);
                        *(System_Collections_Generic_List_CanvasGroup__o **)pUVar20 =
                             (System_Collections_Generic_List_CanvasGroup__o *)0x0;
                        pUVar21 = (UnityEngine_UI_InputField_o *)0x0;
                        il2cpp_runtime_helper_022b4080();
                      }
                      (pUVar25->fields).m_CaretWidth = 0;
                      (pUVar25->fields).m_ReadOnly = 0;
                      pUVar21 = (UnityEngine_UI_InputField_o *)
                                UnityEngine_UI_InputField__get_input(pUVar20,(MethodInfo *)pUVar21);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pMVar23 = (MethodInfo *)0x0;
                      bVar15 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar15 != '\0') {
                        pUVar22 = UnityEngine_UI_InputField__get_input(pUVar21,pMVar23);
                        if (pUVar22 == (UnityEngine_EventSystems_BaseInput_o *)0x0) {
label_051c208a:
                          il2cpp_runtime_helper_022b2c90();
                          if (g_data_057b82fd == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_CanvasUpdateRegistry);
                            g_data_057b82fd = '\x01';
                          }
                          if (*(int *)(TypeInfo_CanvasUpdateRegistry + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UnityEngine_UI_CanvasUpdateRegistry__UnRegisterCanvasElementForRebuild
                                    ((UnityEngine_UI_ICanvasElement_o *)pUVar21,(MethodInfo *)0x0);
                          UnityEngine_EventSystems_UIBehaviour__OnDestroy
                                    ((UnityEngine_EventSystems_UIBehaviour_o *)pUVar21,(MethodInfo *)0x0);
                          return;
                        }
                        (*(pUVar22->klass->vtable)._19_set_imeCompositionMode.methodPtr)
                                  (pUVar22,0,(pUVar22->klass->vtable)._19_set_imeCompositionMode.method);
                      }
                    }
                    if (g_data_057b831b == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_CanvasUpdateRegistry);
                      g_data_057b831b = '\x01';
                    }
                    if (*(int *)(TypeInfo_CanvasUpdateRegistry + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForGraphicRebuild
                              ((UnityEngine_UI_ICanvasElement_o *)pUVar25,(MethodInfo *)0x0);
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
label_043f8d06:
  il2cpp_runtime_helper_022b2c90();
  uVar24 = (ulong)pMVar23 & 0xffffffff;
  uVar11 = (uint)pMVar23;
  if (extraout_EDX == 0) {
    uVar8 = uVar24;
    if (pUVar25 != (UnityEngine_UI_InputField_o *)0x0) {
      do {
        uVar24 = uVar8;
        uVar12 = (uint)uVar24;
        if ((int)uVar11 < 1) break;
        uVar11 = uVar12 - 1;
        uVar10 = System_String__get_Chars((System_String_o *)pUVar25,uVar11,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar15 = System_Char__IsWhiteSpace(uVar10,(MethodInfo *)0x0);
        uVar8 = (ulong)uVar11;
      } while ((char)bVar15 != '\0');
      if (pUVar25 != (UnityEngine_UI_InputField_o *)0x0) {
        do {
          if ((int)uVar12 < 1) {
            return;
          }
          uVar12 = (int)uVar24 - 1;
          uVar24 = (ulong)uVar12;
          uVar10 = System_String__get_Chars((System_String_o *)pUVar25,uVar12,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar15 = System_Char__IsWhiteSpace(uVar10,(MethodInfo *)0x0);
        } while ((char)bVar15 == '\0');
        return;
      }
    }
    if ((int)uVar24 < 1) {
      return;
    }
  }
  else if (pUVar25 != (UnityEngine_UI_InputField_o *)0x0) {
    iVar14 = (int)(pUVar25->fields).m_CachedPtr;
    if ((int)uVar11 < iVar14) {
      do {
        uVar10 = System_String__get_Chars((System_String_o *)pUVar25,(int)uVar24,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar15 = System_Char__IsWhiteSpace(uVar10,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') goto label_043f8e62;
        uVar11 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar11;
        iVar14 = (int)(pUVar25->fields).m_CachedPtr;
      } while ((int)uVar11 < iVar14);
    }
    if (iVar14 <= (int)uVar24) {
      return;
    }
    goto label_043f8e80;
  }
  il2cpp_runtime_helper_022b2c90();
label_043f8e62:
  if ((int)(pUVar25->fields).m_CachedPtr <= (int)uVar24) {
    return;
  }
label_043f8e80:
  do {
    uVar10 = System_String__get_Chars((System_String_o *)pUVar25,(int)uVar24,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar15 = System_Char__IsWhiteSpace(uVar10,(MethodInfo *)0x0);
  } while (((char)bVar15 == '\0') &&
          (uVar11 = (int)uVar24 + 1, uVar24 = (ulong)uVar11, (int)uVar11 < (int)(pUVar25->fields).m_CachedPtr)
          );
  return;
}


// UI.InputFieldKeyboardNav$$FindWordBoundary
// il2cpp: int32_t UI_InputFieldKeyboardNav__FindWordBoundary (System_String_o* text, int32_t index, bool forward, const MethodInfo* method);
// 0x43f8d10

int32_t UI_InputFieldKeyboardNav__FindWordBoundary
                  (System_String_o *text,int32_t index,bool_conflict forward,MethodInfo *method)

{
  int32_t iVar1;
  uint16_t uVar2;
  bool_conflict bVar3;
  int iVar4;
  
  if (forward == 0) {
    iVar1 = index;
    if (text != (System_String_o *)0x0) {
      do {
        index = iVar1;
        if (index < 1) break;
        uVar2 = System_String__get_Chars(text,index + -1,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
        iVar1 = index + -1;
      } while ((char)bVar3 != '\0');
      if (text != (System_String_o *)0x0) {
        do {
          iVar4 = index;
          if (iVar4 < 1) {
            return iVar4;
          }
          uVar2 = System_String__get_Chars(text,iVar4 + -1,(MethodInfo *)0x0);
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
          index = iVar4 + -1;
        } while ((char)bVar3 == '\0');
        return iVar4;
      }
    }
    if (index < 1) {
      return index;
    }
  }
  else if (text != (System_String_o *)0x0) {
    iVar4 = (text->fields)._stringLength;
    if (index < iVar4) {
      do {
        uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') goto label_043f8e62;
        index = index + 1;
        iVar4 = (text->fields)._stringLength;
      } while (index < iVar4);
    }
    if (iVar4 <= index) {
      return index;
    }
    goto label_043f8e80;
  }
  il2cpp_runtime_helper_022b2c90();
label_043f8e62:
  if ((text->fields)._stringLength <= index) {
    return index;
  }
label_043f8e80:
  do {
    uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
  } while (((char)bVar3 == '\0') && (index = index + 1, index < (text->fields)._stringLength));
  return index;
}


// UI.InputFieldKeyboardNav$$.ctor
// il2cpp: void UI_InputFieldKeyboardNav___ctor (UI_InputFieldKeyboardNav_o* __this, const MethodInfo* method);
// 0x43f8ed0

void UI_InputFieldKeyboardNav___ctor(UI_InputFieldKeyboardNav_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


