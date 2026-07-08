// Type: UI.InputFieldKeyboardNav
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/InputFieldKeyboardNav.cs
// Prior source: NEW in this update
// --------------------------------

// UI.InputFieldKeyboardNav$$Setup
// il2cpp: void UI_InputFieldKeyboardNav__Setup (UI_InputFieldKeyboardNav_o* __this, UnityEngine_UI_InputField_o* field, UnityEngine_UI_Selectable_o* next, UnityEngine_UI_Selectable_o* previous, const MethodInfo* method);
// 0x40e4590

void UI_InputFieldKeyboardNav__Setup
               (UI_InputFieldKeyboardNav_o *__this,UnityEngine_UI_InputField_o *field,
               UnityEngine_UI_Selectable_o *next,UnityEngine_UI_Selectable_o *previous,
               MethodInfo *method)

{
  (__this->fields)._field = field;
  il2cpp_runtime_glue(&(__this->fields)._field);
  (__this->fields)._next = next;
  il2cpp_runtime_glue(&(__this->fields)._next,next);
  (__this->fields)._previous = previous;
  il2cpp_runtime_glue(&(__this->fields)._previous,previous);
  return;
}


// UI.InputFieldKeyboardNav$$Update
// il2cpp: void UI_InputFieldKeyboardNav__Update (UI_InputFieldKeyboardNav_o* __this, const MethodInfo* method);
// 0x40e62b0

void UI_InputFieldKeyboardNav__Update(UI_InputFieldKeyboardNav_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool bVar3;
  bool_conflict bVar4;
  uint uVar5;
  int iVar6;
  int32_t iVar7;
  int32_t iVar8;
  int iVar9;
  int length;
  System_String_o *str0;
  System_String_o *pSVar10;
  int32_t index;
  UnityEngine_UI_InputField_o *__this_00;
  char cVar11;
  
  if (DAT_057047c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057047c0 = '\x01';
  }
  pUVar2 = (__this->fields)._field;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pUVar2 = (__this->fields)._field;
  if (pUVar2 == (UnityEngine_UI_InputField_o *)0x0) {
LAB_040e64b1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)&(pUVar2->fields).m_Mesh == '\0') {
    return;
  }
  bVar4 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
  cVar11 = '\x01';
  if ((((char)bVar4 == '\0') &&
      (bVar4 = UnityEngine_Input__GetKey(0x131,(MethodInfo *)0x0), (char)bVar4 == '\0')) &&
     (bVar4 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0), (char)bVar4 == '\0')) {
    bVar4 = UnityEngine_Input__GetKey(0x135,(MethodInfo *)0x0);
    cVar11 = (char)bVar4;
  }
  bVar4 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
  uVar5 = 1;
  if ((char)bVar4 == '\0') {
    uVar5 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
    uVar5 = uVar5 & 0xff;
  }
  bVar4 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar2 = (UnityEngine_UI_InputField_o *)(&(__this->fields)._next)[uVar5];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      return;
    }
    if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
      (*(pUVar2->klass->vtable)._38_Select.methodPtr)(pUVar2);
      bVar1 = (TypeInfo_InputField->_2).naturalAligment;
      if ((pUVar2->klass->_2).naturalAligment < bVar1) {
        __this_00 = (UnityEngine_UI_InputField_o *)0x0;
        iVar6 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        __this_00 = (UnityEngine_UI_InputField_o *)0x0;
        if ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InputField) {
          __this_00 = pUVar2;
        }
        iVar6 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar6 == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
        UnityEngine_UI_InputField__ActivateInputField(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_040e64b1;
  }
  if (cVar11 == '\0') {
    return;
  }
  bVar4 = UnityEngine_Input__GetKeyDown(8,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = UnityEngine_Input__GetKeyDown(0x7f,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pUVar2 = (__this->fields)._field;
  if (pUVar2 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  pSVar10 = *(System_String_o **)&(pUVar2->fields).m_SelectionColor.fields.a;
  if (pSVar10 == (System_String_o *)0x0) {
    pSVar10 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    iVar6 = UnityEngine_UI_InputField__get_caretPosition(pUVar2,(MethodInfo *)0x0);
    if (pSVar10 == (System_String_o *)0x0) goto LAB_040e6686;
  }
  else {
    iVar6 = UnityEngine_UI_InputField__get_caretPosition(pUVar2,(MethodInfo *)0x0);
  }
  iVar9 = (pSVar10->fields)._stringLength;
  if (iVar6 <= iVar9) {
    iVar9 = iVar6;
  }
  index = 0;
  if (-1 < iVar6) {
    index = iVar9;
  }
  pUVar2 = (__this->fields)._field;
  if (pUVar2 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar7 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar2,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._field;
  if (pUVar2 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar6 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar2,(MethodInfo *)0x0);
  if (iVar7 <= iVar6) {
    iVar6 = iVar7;
  }
  pUVar2 = (__this->fields)._field;
  if (pUVar2 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar7 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar2,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._field;
  if (pUVar2 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar8 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar2,(MethodInfo *)0x0);
  if (iVar8 <= iVar7) {
    iVar8 = iVar7;
  }
  iVar9 = (pSVar10->fields)._stringLength;
  length = iVar6;
  if (iVar9 < iVar6) {
    length = iVar9;
  }
  if (iVar6 < 0) {
    length = 0;
  }
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
  if (iVar8 < 0) {
    iVar9 = 0;
  }
  if (length == iVar9) {
    if (bVar3) {
      iVar9 = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar10,index,1,(MethodInfo *)0x0);
      length = index;
      goto LAB_040e65d5;
    }
    length = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar10,index,0,(MethodInfo *)0x0);
    if (length == index) {
      return;
    }
  }
  else {
LAB_040e65d5:
    index = iVar9;
    if (length == index) {
      return;
    }
  }
  str0 = System_String__Substring(pSVar10,0,length,(MethodInfo *)0x0);
  pSVar10 = System_String__Substring(pSVar10,index,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat(str0,pSVar10,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._field;
  if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_text(pUVar2,pSVar10,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._field;
    if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_caretPosition(pUVar2,length,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._field;
      if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
        UnityEngine_UI_InputField__set_selectionAnchorPosition(pUVar2,length,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._field;
        if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
          UnityEngine_UI_InputField__set_selectionFocusPosition(pUVar2,length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_040e6686:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InputFieldKeyboardNav$$DeleteWord
// il2cpp: void UI_InputFieldKeyboardNav__DeleteWord (UI_InputFieldKeyboardNav_o* __this, bool forward, const MethodInfo* method);
// 0x40e64c0

void UI_InputFieldKeyboardNav__DeleteWord
               (UI_InputFieldKeyboardNav_o *__this,bool_conflict forward,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  int iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int iVar5;
  int length;
  System_String_o *str0;
  System_String_o *pSVar6;
  int32_t index;
  char cStack_34;
  
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  pSVar6 = *(System_String_o **)&(pUVar1->fields).m_SelectionColor.fields.a;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    iVar2 = UnityEngine_UI_InputField__get_caretPosition(pUVar1,(MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto LAB_040e6686;
  }
  else {
    iVar2 = UnityEngine_UI_InputField__get_caretPosition(pUVar1,(MethodInfo *)0x0);
  }
  iVar5 = (pSVar6->fields)._stringLength;
  if (iVar2 <= iVar5) {
    iVar5 = iVar2;
  }
  index = 0;
  if (-1 < iVar2) {
    index = iVar5;
  }
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar3 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar1,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar2 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar1,(MethodInfo *)0x0);
  if (iVar3 <= iVar2) {
    iVar2 = iVar3;
  }
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar3 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar1,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040e6686;
  iVar4 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar1,(MethodInfo *)0x0);
  if (iVar4 <= iVar3) {
    iVar4 = iVar3;
  }
  iVar5 = (pSVar6->fields)._stringLength;
  length = iVar2;
  if (iVar5 < iVar2) {
    length = iVar5;
  }
  if (iVar2 < 0) {
    length = 0;
  }
  if (iVar4 <= iVar5) {
    iVar5 = iVar4;
  }
  if (iVar4 < 0) {
    iVar5 = 0;
  }
  if (length == iVar5) {
    cStack_34 = (char)forward;
    if (cStack_34 != '\0') {
      iVar5 = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar6,index,1,(MethodInfo *)0x0);
      length = index;
      goto LAB_040e65d5;
    }
    length = UI_InputFieldKeyboardNav__FindWordBoundary(pSVar6,index,0,(MethodInfo *)0x0);
    if (length == index) {
      return;
    }
  }
  else {
LAB_040e65d5:
    index = iVar5;
    if (length == index) {
      return;
    }
  }
  str0 = System_String__Substring(pSVar6,0,length,(MethodInfo *)0x0);
  pSVar6 = System_String__Substring(pSVar6,index,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat(str0,pSVar6,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._field;
  if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_text(pUVar1,pSVar6,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._field;
    if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_caretPosition(pUVar1,length,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._field;
      if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
        UnityEngine_UI_InputField__set_selectionAnchorPosition(pUVar1,length,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._field;
        if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
          UnityEngine_UI_InputField__set_selectionFocusPosition(pUVar1,length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_040e6686:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InputFieldKeyboardNav$$FindWordBoundary
// il2cpp: int32_t UI_InputFieldKeyboardNav__FindWordBoundary (System_String_o* text, int32_t index, bool forward, const MethodInfo* method);
// 0x40e6690

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
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
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
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
          index = iVar4 + -1;
        } while ((char)bVar3 == '\0');
        return iVar4;
      }
    }
    if (0 < index) goto LAB_040e67dd;
  }
  else {
    if (text == (System_String_o *)0x0) {
LAB_040e67dd:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar4 = (text->fields)._stringLength;
    if (index < iVar4) {
      do {
        uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if ((text->fields)._stringLength <= index) {
            return index;
          }
          goto LAB_040e6800;
        }
        index = index + 1;
        iVar4 = (text->fields)._stringLength;
      } while (index < iVar4);
    }
    if (index < iVar4) {
LAB_040e6800:
      do {
        uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
      } while (((char)bVar3 == '\0') && (index = index + 1, index < (text->fields)._stringLength));
    }
  }
  return index;
}


// UI.InputFieldKeyboardNav$$.ctor
// il2cpp: void UI_InputFieldKeyboardNav___ctor (UI_InputFieldKeyboardNav_o* __this, const MethodInfo* method);
// 0x40e6850

void UI_InputFieldKeyboardNav___ctor(UI_InputFieldKeyboardNav_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


