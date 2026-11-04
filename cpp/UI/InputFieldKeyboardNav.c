// Type: UI.InputFieldKeyboardNav
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InputFieldKeyboardNav.cs
// Prior real C# source: none
// --------------------------------

// UI.InputFieldKeyboardNav$$Setup
// il2cpp: void UI_InputFieldKeyboardNav__Setup (UI_InputFieldKeyboardNav_o* __this, UnityEngine_UI_InputField_o* field, UnityEngine_UI_Selectable_o* next, UnityEngine_UI_Selectable_o* previous, const MethodInfo* method);
// 0x18223ac80

void UI_InputFieldKeyboardNav__Setup
               (UI_InputFieldKeyboardNav_o *__this,UnityEngine_UI_InputField_o *field,
               UnityEngine_UI_Selectable_o *next,UnityEngine_UI_Selectable_o *previous,MethodInfo *method)

{
  (__this->fields)._field = field;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._field,field);
  (__this->fields)._next = next;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._next,next);
  (__this->fields)._previous = previous;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previous,previous);
  return;
}


// UI.InputFieldKeyboardNav$$Update
// il2cpp: void UI_InputFieldKeyboardNav__Update (UI_InputFieldKeyboardNav_o* __this, const MethodInfo* method);
// 0x182279f10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18227a03c: mov rsi, qword ptr [rsp + 0x30]

void UI_InputFieldKeyboardNav__Update(UI_InputFieldKeyboardNav_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool bVar3;
  bool bVar4;
  UnityEngine_UI_InputField_o *__this_00;
  ulonglong uVar5;
  
  if (Il2CppMethodInitialized_1843473e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473e0 = '\x01';
  }
  pUVar2 = (__this->fields)._field;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields)._field;
    if (pUVar2 == (UnityEngine_UI_InputField_o *)0x0) {
label_18227a122:
      ThrowNullReferenceException();
    }
    if ((pUVar2->fields).m_AllowInput != false) {
      bVar3 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
      if (((bVar3) || (bVar3 = UnityEngine_Input__GetKey(0x131,(MethodInfo *)0x0), bVar3)) ||
         (bVar3 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0), bVar3)) {
        bVar3 = true;
      }
      else {
        bVar3 = UnityEngine_Input__GetKey(0x135,(MethodInfo *)0x0);
      }
      bVar4 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
      if (bVar4) {
        uVar5 = 1;
      }
      else {
        bVar4 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
        uVar5 = (ulonglong)bVar4;
      }
      bVar4 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar2 = (UnityEngine_UI_InputField_o *)(&(__this->fields)._next)[uVar5];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
            (*(pUVar2->klass->vtable)._38_Select.methodPtr)(pUVar2,(pUVar2->klass->vtable)._38_Select.method);
            bVar1 = (TypeInfo_UnityEngine_UI_InputField->_2).typeHierarchyDepth;
            if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_UI_InputField)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            __this_00 = (UnityEngine_UI_InputField_o *)0x0;
            if (bVar3) {
              __this_00 = pUVar2;
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (!bVar3) {
              return;
            }
            if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
              UnityEngine_UI_InputField__ActivateInputField(__this_00,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_18227a122;
        }
      }
      else if (bVar3 != false) {
        bVar3 = UnityEngine_Input__GetKeyDown(8,(MethodInfo *)0x0);
        if (bVar3) {
          bVar3 = false;
        }
        else {
          bVar3 = UnityEngine_Input__GetKeyDown(0x7f,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          bVar3 = true;
        }
        UI_InputFieldKeyboardNav__DeleteWord(__this,bVar3,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// UI.InputFieldKeyboardNav$$DeleteWord
// il2cpp: void UI_InputFieldKeyboardNav__DeleteWord (UI_InputFieldKeyboardNav_o* __this, bool forward, const MethodInfo* method);
// 0x182279af0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182279bef: mov edi, ebp
// asm:   0x182279bf1: test ebp, ebp
// asm:   0x182279bf9: nop dword ptr [rax]
// asm:   0x182279c3a: jmp 0x182279d05
// asm:   0x182279c7e: jmp 0x182279d05
// asm:   0x182279c83: mov ebx, ebp
// asm:   0x182279c85: mov eax, ebp
// asm:   0x182279d01: mov edi, ebp
// asm:   0x182279d03: mov ebp, ebx
// asm:   0x182279d16: mov ebp, ecx

void UI_InputFieldKeyboardNav__DeleteWord(UI_InputFieldKeyboardNav_o *__this,bool forward,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  int iVar5;
  int iVar6;
  System_String_o *str0;
  System_String_o *pSVar7;
  int iVar8;
  System_String_o **ppSVar9;
  int length;
  
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto label_182279d9f;
  ppSVar9 = &(pUVar1->fields).m_Text;
  if (*ppSVar9 == (System_String_o *)0x0) {
    ppSVar9 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  pSVar7 = *ppSVar9;
  iVar4 = UnityEngine_UI_InputField__get_selectionFocusPosition((__this->fields)._field,(MethodInfo *)0x0);
  if (pSVar7 == (System_String_o *)0x0) goto label_182279d9f;
  if (iVar4 < 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (pSVar7->fields)._stringLength;
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
    }
  }
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto label_182279d9f;
  iVar4 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar1,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto label_182279d9f;
  iVar5 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar1,(MethodInfo *)0x0);
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto label_182279d9f;
  iVar4 = UnityEngine_UI_InputField__get_selectionAnchorPosition(pUVar1,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._field;
  if (pUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto label_182279d9f;
  iVar6 = UnityEngine_UI_InputField__get_selectionFocusPosition(pUVar1,(MethodInfo *)0x0);
  if (iVar6 < iVar4) {
    iVar6 = iVar4;
  }
  if (((iVar5 < 0) || (length = (pSVar7->fields)._stringLength, iVar5 <= length)) &&
     (length = iVar5, iVar5 < 0)) {
    length = 0;
  }
  if (((iVar6 < 0) || (iVar5 = (pSVar7->fields)._stringLength, iVar6 <= iVar5)) && (iVar5 = iVar6, iVar6 < 0))
  {
    iVar5 = 0;
  }
  if (length == iVar5) {
    iVar5 = iVar8;
    length = iVar8;
    if (forward) {
      for (; iVar5 < (pSVar7->fields)._stringLength; iVar5 = iVar5 + 1) {
        uVar3 = System_String__get_Chars(pSVar7,iVar5,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar2 = System_Char__IsWhiteSpace(uVar3,(MethodInfo *)0x0);
        if (!bVar2) break;
      }
      do {
        if ((pSVar7->fields)._stringLength <= iVar5) goto label_182279d05;
        uVar3 = System_String__get_Chars(pSVar7,iVar5,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar2 = System_Char__IsWhiteSpace(uVar3,(MethodInfo *)0x0);
        if (bVar2) goto label_182279d05;
        iVar5 = iVar5 + 1;
      } while( true );
    }
    for (; 0 < length; length = length + -1) {
      uVar3 = System_String__get_Chars(pSVar7,length + -1,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsWhiteSpace(uVar3,(MethodInfo *)0x0);
      if (!bVar2) goto label_182279c40;
    }
    goto label_182279d05;
  }
  goto label_182279d18;
label_182279c40:
  do {
    uVar3 = System_String__get_Chars(pSVar7,length + -1,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar2 = System_Char__IsWhiteSpace(uVar3,(MethodInfo *)0x0);
  } while ((!bVar2) && (length = length + -1, 0 < length));
label_182279d05:
  if (length == iVar5) {
    return;
  }
label_182279d18:
  str0 = System_String__Substring_1972740(pSVar7,0,length,(MethodInfo *)0x0);
  pSVar7 = System_String__Substring(pSVar7,iVar5,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_1969e50(str0,pSVar7,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._field;
  if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_text(pUVar1,pSVar7,(MethodInfo *)0x0);
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
label_182279d9f:
  ThrowNullReferenceException();
}


// UI.InputFieldKeyboardNav$$FindWordBoundary
// il2cpp: int32_t UI_InputFieldKeyboardNav__FindWordBoundary (System_String_o* text, int32_t index, bool forward, const MethodInfo* method);
// 0x182279db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182279dde: nop 

int32_t UI_InputFieldKeyboardNav__FindWordBoundary
                  (System_String_o *text,int32_t index,bool forward,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  
  if (forward) {
    if (text != (System_String_o *)0x0) {
      for (; index < (text->fields)._stringLength; index = index + 1) {
        uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar1 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
        if (!bVar1) break;
      }
      while( true ) {
        if ((text->fields)._stringLength <= index) {
          return index;
        }
        uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar1 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
        if (bVar1) break;
        index = index + 1;
      }
      return index;
    }
label_182279f01:
    ThrowNullReferenceException();
  }
  if (0 < index) {
    if (text == (System_String_o *)0x0) goto label_182279f01;
    while( true ) {
      uVar2 = System_String__get_Chars(text,index + -1,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar1 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
      if (!bVar1) break;
      index = index + -1;
      if (index < 1) {
        return index;
      }
    }
    do {
      uVar2 = System_String__get_Chars(text,index + -1,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar1 = System_Char__IsWhiteSpace(uVar2,(MethodInfo *)0x0);
    } while ((!bVar1) && (index = index + -1, 0 < index));
  }
  return index;
}


// UI.InputFieldKeyboardNav$$.ctor
// il2cpp: void UI_InputFieldKeyboardNav___ctor (UI_InputFieldKeyboardNav_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_InputFieldKeyboardNav___ctor(UI_InputFieldKeyboardNav_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


