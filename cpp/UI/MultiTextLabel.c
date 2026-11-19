// Type: UI.MultiTextLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MultiTextLabel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MultiTextLabel.cs
// --------------------------------

// UI.MultiTextLabel$$Setup
// il2cpp: void UI_MultiTextLabel__Setup (UI_MultiTextLabel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t fontStyle, int32_t anchor, float fontSize, int32_t numberOfLabels, bool richText, const MethodInfo* method);
// 0x5d3a0e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3a16c: nop dword ptr [rax]

void UI_MultiTextLabel__Setup
               (UI_MultiTextLabel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               int32_t fontStyle,int32_t anchor,float fontSize,int32_t numberOfLabels,bool richText,
               MethodInfo *method)

{
  UnityEngine_UI_Text_array **targetAddress;
  UnityEngine_UI_Text_array *pUVar1;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_07547e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Text_array);
    Il2CppMethodInitialized_07547e64 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Text_array *)SZArrayNew(TypeInfo_UnityEngine_UI_Text_array,numberOfLabels);
  targetAddress = &(__this->fields).texts;
  (__this->fields).texts = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (0 < numberOfLabels) {
    uVar5 = 0;
    lVar4 = 0x20;
    do {
      pUVar1 = (__this->fields).texts;
      parent_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_00 = UI_ElementFactory__CreateWhiteLabel
                            (parent_00,style,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                             fontStyle,anchor,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_05d3a24a:
        ThrowNullReferenceException();
      }
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
      ;
      if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) goto label_05d3a24a;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar2,(((pUVar1->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((uint)pUVar1->max_length <= uVar5) {
label_05d3a24f:
        ThrowIndexOutOfRangeException();
      }
      *(UnityEngine_UI_Text_o **)((long)pUVar1->m_Items + lVar4 + -0x20) = pUVar2;
      Il2CppCodeGenWriteBarrier((void **)((long)pUVar1->m_Items + lVar4 + -0x20));
      pUVar1 = *targetAddress;
      if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) goto label_05d3a24a;
      if ((uint)pUVar1->max_length <= uVar5) goto label_05d3a24f;
      pUVar2 = *(UnityEngine_UI_Text_o **)((long)pUVar1->m_Items + lVar4 + -0x20);
      if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_05d3a24a;
      UnityEngine_UI_Text__set_supportRichText(pUVar2,richText,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (numberOfLabels != uVar5);
  }
  return;
}


// UI.MultiTextLabel$$SetEnabled
// il2cpp: void UI_MultiTextLabel__SetEnabled (UI_MultiTextLabel_o* __this, bool enabled, const MethodInfo* method);
// 0x5d3a270

void UI_MultiTextLabel__SetEnabled(UI_MultiTextLabel_o *__this,bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (bVar1 == enabled) {
      return;
    }
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,enabled,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$GetEnabled
// il2cpp: bool UI_MultiTextLabel__GetEnabled (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x5d3a2d0

bool UI_MultiTextLabel__GetEnabled(UI_MultiTextLabel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MultiTextLabel$$SetElementEnabled
// il2cpp: void UI_MultiTextLabel__SetElementEnabled (UI_MultiTextLabel_o* __this, int32_t index, bool enabled, const MethodInfo* method);
// 0x5d3a2f0

void UI_MultiTextLabel__SetElementEnabled
               (UI_MultiTextLabel_o *__this,int32_t index,bool enabled,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if (uVar1 <= (uint)index) {
label_05d3a387:
      ThrowIndexOutOfRangeException();
    }
    if ((pUVar2->m_Items[(uint)index] != (UnityEngine_UI_Text_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2->m_Items[(uint)index],(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if (bVar3 == enabled) {
        return;
      }
      pUVar2 = (__this->fields).texts;
      if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
        if ((uint)pUVar2->max_length <= (uint)index) goto label_05d3a387;
        if ((pUVar2->m_Items[(uint)index] != (UnityEngine_UI_Text_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar2->m_Items[(uint)index],(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,enabled,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$GetElementEnabled
// il2cpp: bool UI_MultiTextLabel__GetElementEnabled (UI_MultiTextLabel_o* __this, int32_t index, const MethodInfo* method);
// 0x5d3a390

bool UI_MultiTextLabel__GetElementEnabled(UI_MultiTextLabel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  
  if (index < 0) {
    return false;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return false;
    }
    if (uVar1 <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    if ((pUVar2->m_Items[(uint)index] != (UnityEngine_UI_Text_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2->m_Items[(uint)index],(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$SetValue
// il2cpp: void UI_MultiTextLabel__SetValue (UI_MultiTextLabel_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x5d3a3e0

void UI_MultiTextLabel__SetValue
               (UI_MultiTextLabel_o *__this,int32_t index,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if (uVar1 <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    pUVar3 = pUVar2->m_Items[(uint)index];
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,value,(pUVar3->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$ChangeTextColor
// il2cpp: void UI_MultiTextLabel__ChangeTextColor (UI_MultiTextLabel_o* __this, int32_t index, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5d3a430

void UI_MultiTextLabel__ChangeTextColor
               (UI_MultiTextLabel_o *__this,int32_t index,UnityEngine_Color_o color,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if (uVar1 <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    pUVar3 = pUVar2->m_Items[(uint)index];
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,color,(pUVar3->klass->vtable)._23_set_color.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$GetValue
// il2cpp: System_String_o* UI_MultiTextLabel__GetValue (UI_MultiTextLabel_o* __this, int32_t index, const MethodInfo* method);
// 0x5d3a480

System_String_o * UI_MultiTextLabel__GetValue(UI_MultiTextLabel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_String_o *pSVar4;
  
  if (index < 0) {
label_05d3a4b5:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) goto label_05d3a4b5;
    if (uVar1 <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    pUVar3 = pUVar2->m_Items[(uint)index];
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      pSVar4 = (*(pUVar3->klass->vtable)._74_get_text.methodPtr)
                         (pUVar3,(pUVar3->klass->vtable)._74_get_text.method);
      return pSVar4;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$.ctor
// il2cpp: void UI_MultiTextLabel___ctor (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x5d3a4e0

void UI_MultiTextLabel___ctor(UI_MultiTextLabel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


