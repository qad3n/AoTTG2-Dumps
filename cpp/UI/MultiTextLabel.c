// Type: UI.MultiTextLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiTextLabel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/MultiTextLabel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MultiTextLabel$$Setup
// il2cpp: void UI_MultiTextLabel__Setup (UI_MultiTextLabel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t fontStyle, int32_t anchor, float fontSize, int32_t numberOfLabels, bool richText, const MethodInfo* method);
// 0x40c4ff0

void UI_MultiTextLabel__Setup
               (UI_MultiTextLabel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style
               ,int32_t fontStyle,int32_t anchor,float fontSize,int32_t numberOfLabels,
               bool_conflict richText,MethodInfo *method)

{
  UnityEngine_UI_Text_array *pUVar1;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (DAT_057046ca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    fontSize = (float)il2cpp_init_method_metadata(&TypeInfo_Text);
    DAT_057046ca = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Text_array *)il2cpp_glue_02274930(fontSize,TypeInfo_Text,numberOfLabels);
  (__this->fields).texts = pUVar1;
  il2cpp_runtime_glue();
  if (0 < numberOfLabels) {
    uVar5 = 0;
    do {
      pUVar1 = (__this->fields).texts;
      parent_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_00 = UI_ElementFactory__CreateWhiteLabel
                            (parent_00,style,
                             (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),fontStyle,
                             anchor,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
LAB_040c5166:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar2 = (UnityEngine_UI_Text_o *)
               UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Text_GetComponent_Text);
      if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) goto LAB_040c5166;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pUVar2,(((pUVar1->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if ((uint)pUVar1->max_length <= uVar5) {
LAB_040c516b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar1->m_Items[(int)uVar5] = pUVar2;
      il2cpp_runtime_glue(pUVar1->m_Items + (int)uVar5,pUVar2);
      pUVar1 = (__this->fields).texts;
      if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) goto LAB_040c5166;
      if ((uint)pUVar1->max_length <= uVar5) goto LAB_040c516b;
      if (pUVar1->m_Items[(int)uVar5] == (UnityEngine_UI_Text_o *)0x0) goto LAB_040c5166;
      UnityEngine_UI_Text__set_supportRichText
                (pUVar1->m_Items[(int)uVar5],richText & 0xff,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
    } while (numberOfLabels != uVar5);
  }
  return;
}


// UI.MultiTextLabel$$SetEnabled
// il2cpp: void UI_MultiTextLabel__SetEnabled (UI_MultiTextLabel_o* __this, bool enabled, const MethodInfo* method);
// 0x40c5180

void UI_MultiTextLabel__SetEnabled
               (UI_MultiTextLabel_o *__this,bool_conflict enabled,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((byte)((byte)bVar1 ^ (byte)enabled) != 1) {
      return;
    }
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,enabled & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiTextLabel$$GetEnabled
// il2cpp: bool UI_MultiTextLabel__GetEnabled (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x40c51e0

bool_conflict UI_MultiTextLabel__GetEnabled(UI_MultiTextLabel_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiTextLabel$$SetElementEnabled
// il2cpp: void UI_MultiTextLabel__SetElementEnabled (UI_MultiTextLabel_o* __this, int32_t index, bool enabled, const MethodInfo* method);
// 0x40c5200

void UI_MultiTextLabel__SetElementEnabled
               (UI_MultiTextLabel_o *__this,int32_t index,bool_conflict enabled,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  bool_conflict bVar3;
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
LAB_040c5299:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pUVar2->m_Items[index] != (UnityEngine_UI_Text_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2->m_Items[index],(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((byte)((byte)bVar3 ^ (byte)enabled) != 1) {
        return;
      }
      pUVar2 = (__this->fields).texts;
      if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
        if ((uint)pUVar2->max_length <= (uint)index) goto LAB_040c5299;
        if ((pUVar2->m_Items[index] != (UnityEngine_UI_Text_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar2->m_Items[index],(MethodInfo *)0x0)
           , pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,enabled & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiTextLabel$$GetElementEnabled
// il2cpp: bool UI_MultiTextLabel__GetElementEnabled (UI_MultiTextLabel_o* __this, int32_t index, const MethodInfo* method);
// 0x40c52a0

bool_conflict
UI_MultiTextLabel__GetElementEnabled(UI_MultiTextLabel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_00;
  
  if (index < 0) {
    return 0;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return 0;
    }
    if (uVar1 <= (uint)index) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pUVar2->m_Items[index] != (UnityEngine_UI_Text_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2->m_Items[index],(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiTextLabel$$SetValue
// il2cpp: void UI_MultiTextLabel__SetValue (UI_MultiTextLabel_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x40c52f0

void UI_MultiTextLabel__SetValue
               (UI_MultiTextLabel_o *__this,int32_t index,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  
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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = pUVar2->m_Items[index];
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      vtable_dispatch = (pUVar3->klass->vtable)._75_set_text.methodPtr;
      (*vtable_dispatch)
                (pUVar3,value,(pUVar3->klass->vtable)._75_set_text.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiTextLabel$$ChangeTextColor
// il2cpp: void UI_MultiTextLabel__ChangeTextColor (UI_MultiTextLabel_o* __this, int32_t index, UnityEngine_Color_o color, const MethodInfo* method);
// 0x40c5340

void UI_MultiTextLabel__ChangeTextColor
               (UI_MultiTextLabel_o *__this,int32_t index,UnityEngine_Color_o color,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  
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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(color.fields._0_8_,color.fields._8_8_);
    }
    pUVar3 = pUVar2->m_Items[index];
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      vtable_dispatch = (pUVar3->klass->vtable)._23_set_color.methodPtr;
      (*vtable_dispatch)
                (pUVar3,(pUVar3->klass->vtable)._23_set_color.method,method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiTextLabel$$GetValue
// il2cpp: System_String_o* UI_MultiTextLabel__GetValue (UI_MultiTextLabel_o* __this, int32_t index, const MethodInfo* method);
// 0x40c5390

System_String_o *
UI_MultiTextLabel__GetValue(UI_MultiTextLabel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar4;
  
  if (-1 < index) {
    pUVar2 = (__this->fields).texts;
    if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
      uVar1 = (uint)pUVar2->max_length;
      if ((int)uVar1 <= index) goto LAB_040c53c6;
      if (uVar1 <= (uint)index) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = pUVar2->m_Items[index];
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        vtable_dispatch = (pUVar3->klass->vtable)._74_get_text.methodPtr;
        pSVar4 = (System_String_o *)
                 (*vtable_dispatch)
                           (pUVar3,(pUVar3->klass->vtable)._74_get_text.method,method,
                            vtable_dispatch);
        return pSVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040c53c6:
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.MultiTextLabel$$.ctor
// il2cpp: void UI_MultiTextLabel___ctor (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x40c53f0

void UI_MultiTextLabel___ctor(UI_MultiTextLabel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


