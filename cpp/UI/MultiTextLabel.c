// Type: UI.MultiTextLabel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiTextLabel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MultiTextLabel.cs
// --------------------------------

// UI.MultiTextLabel$$Setup
// il2cpp: void UI_MultiTextLabel__Setup (UI_MultiTextLabel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t fontStyle, int32_t anchor, float fontSize, int32_t numberOfLabels, bool richText, const MethodInfo* method);
// 0x18225e500
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225e573: mov qword ptr [rsp + 0x60], rdi
// asm:   0x18225e578: mov qword ptr [rsp + 0x68], r12
// asm:   0x18225e57d: mov r12d, dword ptr [rsp + 0x80]
// asm:   0x18225e585: mov qword ptr [rsp + 0x78], r15
// asm:   0x18225e58a: movzx r15d, byte ptr [rsp + 0x98]
// asm:   0x18225e593: nop dword ptr [rax]
// asm:   0x18225e597: nop word ptr [rax + rax]
// asm:   0x18225e65f: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x18225e664: jmp 0x18225e5a0
// asm:   0x18225e669: mov r12, qword ptr [rsp + 0x68]
// asm:   0x18225e66e: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x18225e673: mov r15, qword ptr [rsp + 0x78]

void UI_MultiTextLabel__Setup
               (UI_MultiTextLabel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               int32_t fontStyle,int32_t anchor,float fontSize,int32_t numberOfLabels,bool richText,
               MethodInfo *method)

{
  UnityEngine_UI_Text_array *pUVar1;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *obj;
  Il2CppObject *pIVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (Il2CppMethodInitialized_1843472ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Text_array);
    Il2CppMethodInitialized_1843472ec = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Text_array *)SZArrayNew(TypeInfo_UnityEngine_UI_Text_array,numberOfLabels);
  (__this->fields).texts = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).texts,pUVar1);
  uVar4 = 0;
  if (0 < numberOfLabels) {
    do {
      pUVar1 = (__this->fields).texts;
      parent_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_00 = UI_ElementFactory__CreateWhiteLabel
                            (parent_00,style,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                             fontStyle,anchor,(MethodInfo *)0x0);
      if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
         (obj = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
         , pUVar1 == (UnityEngine_UI_Text_array *)0x0)) {
label_18225e69a:
        ThrowNullReferenceException();
      }
      if ((obj != (UnityEngine_UI_Text_o *)0x0) &&
         (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pUVar1->obj).klass)->_1).element_class),
         pIVar2 == (Il2CppObject *)0x0)) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      uVar3 = (uint)uVar4;
      if ((uint)pUVar1->max_length <= uVar3) {
label_18225e694:
        ThrowIndexOutOfRangeException();
      }
      pUVar1->m_Items[uVar4] = obj;
      Il2CppCodeGenWriteBarrier(pUVar1->m_Items + uVar4,obj);
      pUVar1 = (__this->fields).texts;
      if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) goto label_18225e69a;
      if ((uint)pUVar1->max_length <= uVar3) goto label_18225e694;
      if (pUVar1->m_Items[uVar4] == (UnityEngine_UI_Text_o *)0x0) goto label_18225e69a;
      UnityEngine_UI_Text__set_supportRichText(pUVar1->m_Items[uVar4],richText,(MethodInfo *)0x0);
      uVar4 = (ulonglong)(uVar3 + 1);
    } while ((int)(uVar3 + 1) < numberOfLabels);
  }
  return;
}


// UI.MultiTextLabel$$SetEnabled
// il2cpp: void UI_MultiTextLabel__SetEnabled (UI_MultiTextLabel_o* __this, bool enabled, const MethodInfo* method);
// 0x18225e440

void UI_MultiTextLabel__SetEnabled(UI_MultiTextLabel_o *__this,bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (bVar1 != enabled) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18225e492;
      UnityEngine_GameObject__SetActive(pUVar2,enabled,(MethodInfo *)0x0);
    }
    return;
  }
label_18225e492:
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$GetEnabled
// il2cpp: bool UI_MultiTextLabel__GetEnabled (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x18225e300

bool UI_MultiTextLabel__GetEnabled(UI_MultiTextLabel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$SetElementEnabled
// il2cpp: void UI_MultiTextLabel__SetElementEnabled (UI_MultiTextLabel_o* __this, int32_t index, bool enabled, const MethodInfo* method);
// 0x18225e390

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
label_18225e42f:
      ThrowIndexOutOfRangeException();
    }
    if ((pUVar2->m_Items[index] != (UnityEngine_UI_Text_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2->m_Items[index],(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if (bVar3 == enabled) {
        return;
      }
      pUVar2 = (__this->fields).texts;
      if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
        if ((uint)pUVar2->max_length <= (uint)index) goto label_18225e42f;
        if ((pUVar2->m_Items[index] != (UnityEngine_UI_Text_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar2->m_Items[index],(MethodInfo *)0x0),
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
// 0x18225e2a0

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
    if ((pUVar2->m_Items[index] != (UnityEngine_UI_Text_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2->m_Items[index],(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiTextLabel$$SetValue
// il2cpp: void UI_MultiTextLabel__SetValue (UI_MultiTextLabel_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x18225e4a0

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
    pUVar3 = pUVar2->m_Items[index];
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
// 0x18225e240

void UI_MultiTextLabel__ChangeTextColor
               (UI_MultiTextLabel_o *__this,int32_t index,UnityEngine_Color_o *color,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Color_o local_18;
  
  if (-1 < index) {
    pUVar2 = (__this->fields).texts;
    if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_18225e28b:
      ThrowNullReferenceException();
    }
    uVar1 = (uint)pUVar2->max_length;
    if (index < (int)uVar1) {
      if (uVar1 <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      pUVar3 = pUVar2->m_Items[index];
      if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto label_18225e28b;
      local_18.fields.r = (color->fields).r;
      local_18.fields.g = (color->fields).g;
      local_18.fields.b = (color->fields).b;
      local_18.fields.a = (color->fields).a;
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,&local_18,(pUVar3->klass->vtable)._23_set_color.method);
    }
  }
  return;
}


// UI.MultiTextLabel$$GetValue
// il2cpp: System_String_o* UI_MultiTextLabel__GetValue (UI_MultiTextLabel_o* __this, int32_t index, const MethodInfo* method);
// 0x18225e330

System_String_o * UI_MultiTextLabel__GetValue(UI_MultiTextLabel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar4;
  
  if (-1 < index) {
    pUVar2 = (__this->fields).texts;
    if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
      uVar1 = (uint)pUVar2->max_length;
      if ((int)uVar1 <= index) goto label_18225e36d;
      if (uVar1 <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      pUVar3 = pUVar2->m_Items[index];
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        GVar4 = (*(pUVar3->klass->vtable)._74_get_text.methodPtr)
                          (pUVar3,(pUVar3->klass->vtable)._74_get_text.method);
        return (System_String_o *)GVar4.fields;
      }
    }
    ThrowNullReferenceException();
  }
label_18225e36d:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.MultiTextLabel$$.ctor
// il2cpp: void UI_MultiTextLabel___ctor (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_MultiTextLabel___ctor(UI_MultiTextLabel_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


