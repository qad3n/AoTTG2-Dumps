// Type: UI.InGameLabel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/InGameLabel.cs
// Prior real C# source: none
// --------------------------------

// UI.InGameLabel$$get_Root
// il2cpp: UnityEngine_GameObject_o* UI_InGameLabel__get_Root (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x18058a570

UnityEngine_GameObject_o*
UI_InGameLabel__get_Root(UI_InGameLabel_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// UI.InGameLabel$$set_Root
// il2cpp: void UI_InGameLabel__set_Root (UI_InGameLabel_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x180a37140

void
UI_InGameLabel__set_Root(UI_InGameLabel_o* __this, UnityEngine_GameObject_o* value, MethodInfo* method)

{
  (*(uint64_t *)((char *)__this + 0x78)) = (System_Collections_Generic_IEnumerator_IProperty_TContainer___o *)value;
  Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this + 0x78)),value);
  return;
}


// UI.InGameLabel$$get_TextTransform
// il2cpp: UnityEngine_Transform_o* UI_InGameLabel__get_TextTransform (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x18224bfc0

UnityEngine_Transform_o * UI_InGameLabel__get_TextTransform(UI_InGameLabel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  TMPro_TextMeshProUGUI_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  
  if ((__this->fields)._legacy == false) {
    __this_01 = (__this->fields)._tmpText;
    if (__this_01 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pUVar1 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)__this_01,(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  else {
    __this_00 = (__this->fields)._legacyText;
    if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameLabel$$get_Text
// il2cpp: System_String_o* UI_InGameLabel__get_Text (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x18224c000

System_String_o * UI_InGameLabel__get_Text(UI_InGameLabel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar3;
  System_String_o *pSVar4;
  
  if ((__this->fields)._legacy == false) {
    pTVar2 = (__this->fields)._tmpText;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pSVar4 = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                         (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
      return pSVar4;
    }
  }
  else {
    pUVar1 = (__this->fields)._legacyText;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      GVar3 = (*(pUVar1->klass->vtable)._74_get_text.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._74_get_text.method);
      return (System_String_o *)GVar3.fields;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameLabel$$set_Text
// il2cpp: void UI_InGameLabel__set_Text (UI_InGameLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18224c050

void UI_InGameLabel__set_Text(UI_InGameLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Image_o *__this_00;
  bool bVar3;
  System_String_o *value_00;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((__this->fields)._legacy == false) {
    pTVar1 = (__this->fields)._tmpText;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18224c0f6;
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,value,(pTVar1->klass->vtable)._66_set_text.method);
  }
  else {
    pUVar2 = (__this->fields)._legacyText;
    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_18224c0f6;
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,value,(pUVar2->klass->vtable)._75_set_text.method);
  }
  if ((__this->fields)._legacy != false) {
    return;
  }
  pTVar1 = (__this->fields)._tmpText;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    __this_00 = (__this->fields)._background;
    value_00 = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                         (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
    bVar3 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,!bVar3,(MethodInfo *)0x0);
      return;
    }
  }
label_18224c0f6:
  ThrowNullReferenceException();
}


// UI.InGameLabel$$.ctor
// il2cpp: void UI_InGameLabel___ctor (UI_InGameLabel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t alignment, int32_t anchor, UnityEngine_Vector2_o offset, bool legacy, const MethodInfo* method);
// 0x18224bf50

void UI_InGameLabel___ctor
               (UI_InGameLabel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               int32_t alignment,int32_t anchor,UnityEngine_Vector2_o offset,bool legacy,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent,parent);
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style,style);
  (__this->fields)._offset.fields = offset.fields;
  (__this->fields)._alignment = alignment;
  (__this->fields)._anchor = anchor;
  UI_InGameLabel__SetLegacy(__this,legacy,(MethodInfo *)0x0);
  return;
}


// UI.InGameLabel$$SetLegacy
// il2cpp: void UI_InGameLabel__SetLegacy (UI_InGameLabel_o* __this, bool legacy, const MethodInfo* method);
// 0x18224ba40

void UI_InGameLabel__SetLegacy(UI_InGameLabel_o *__this,bool legacy,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  bool bVar3;
  int32_t index;
  Gilzoide_FlexUi_Yoga_YGValue_Fields value;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  UnityEngine_UI_Image_o *value_00;
  UnityEngine_UI_Text_o *pUVar7;
  int32_t iVar8;
  
  if (Il2CppMethodInitialized_184347276 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_40bec00);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    Il2CppMethodInitialized_184347276 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._legacy == legacy)) {
    return;
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((__this->fields)._legacy == false) {
      pTVar6 = (__this->fields)._tmpText;
      if (pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18224bed2;
      value = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
              (*(pTVar6->klass->vtable)._65_get_text.methodPtr)
                        (pTVar6,(pTVar6->klass->vtable)._65_get_text.method);
    }
    else {
      pUVar7 = (__this->fields)._legacyText;
      if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_18224bed2;
      value = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
              (*(pUVar7->klass->vtable)._74_get_text.methodPtr)
                        (pUVar7,(pUVar7->klass->vtable)._74_get_text.method);
    }
  }
  else {
    value = **(Gilzoide_FlexUi_Yoga_YGValue_Fields **)(g_data_184354e50 + 0xb8);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    pUVar5 = (__this->fields)._Root_k__BackingField;
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_18224bed2;
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar5 = (__this->fields)._Root_k__BackingField;
    if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_18224bed2;
    index = UnityEngine_Transform__GetSiblingIndex(pUVar4,(MethodInfo *)0x0);
  }
  else {
    pUVar4 = (__this->fields)._parent;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18224bed2;
    index = UnityEngine_Transform__get_childCount(pUVar4,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar5 = (__this->fields)._Root_k__BackingField;
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_18224bed2;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
  }
  if (legacy) {
    pUVar7 = (__this->fields)._legacyText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((__this->fields)._alignment == 0x201) {
        iVar8 = 3;
      }
      else {
        iVar8 = ((__this->fields)._alignment == 0x204) + 4;
      }
      pUVar5 = UI_ElementFactory__CreateLegacyHUDLabel
                         ((__this->fields)._parent,(__this->fields)._style,
                          (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,iVar8,(MethodInfo *)0x0
                         );
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_18224bed2;
      pUVar7 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar5,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      (__this->fields)._legacyText = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._legacyText,pUVar7);
      pUVar7 = (__this->fields)._legacyText;
      if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_18224bed2;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      iVar8 = (__this->fields)._anchor;
      UI_ElementFactory__SetAnchor
                (pUVar5,iVar8,iVar8,(UnityEngine_Vector2_o)(__this->fields)._offset.fields,(MethodInfo *)0x0);
    }
    pUVar7 = (__this->fields)._legacyText;
    if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_18224bed2;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  }
  else {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tmpRoot;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar5 = UI_ElementFactory__CreateHUDLabel
                         ((__this->fields)._parent,(__this->fields)._style,
                          (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,
                          (__this->fields)._alignment,(MethodInfo *)0x0);
      (__this->fields)._tmpRoot = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tmpRoot,pUVar5);
      iVar8 = (__this->fields)._anchor;
      UI_ElementFactory__SetAnchor
                ((__this->fields)._tmpRoot,iVar8,iVar8,(UnityEngine_Vector2_o)(__this->fields)._offset.fields,
                 (MethodInfo *)0x0);
      pUVar5 = (__this->fields)._tmpRoot;
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_18224bed2;
      pTVar6 = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                         (pUVar5,true,
                          (MethodInfo_6F5110 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_40bec00);
      (__this->fields)._tmpText = pTVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tmpText,pTVar6);
      pUVar5 = (__this->fields)._tmpRoot;
      if (((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
          pUVar4 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_18224bed2;
      value_00 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._background = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._background,value_00);
    }
    pUVar5 = (__this->fields)._tmpRoot;
  }
  (__this->fields)._Root_k__BackingField = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Root_k__BackingField,pUVar5);
  pUVar5 = (__this->fields)._Root_k__BackingField;
  (__this->fields)._legacy = legacy;
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetSiblingIndex(pUVar4,index,(MethodInfo *)0x0);
    UI_InGameLabel__set_Text(__this,(System_String_o *)value,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._Root_k__BackingField;
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar5,bVar2,(MethodInfo *)0x0);
      return;
    }
  }
label_18224bed2:
  ThrowNullReferenceException();
}


// UI.InGameLabel$$SetBackgroundColor
// il2cpp: void UI_InGameLabel__SetBackgroundColor (UI_InGameLabel_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x18224ba00

void UI_InGameLabel__SetBackgroundColor
               (UI_InGameLabel_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Color_o local_18;
  
  if ((__this->fields)._legacy == false) {
    pUVar1 = (__this->fields)._background;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_18.fields.r = (color->fields).r;
    local_18.fields.g = (color->fields).g;
    local_18.fields.b = (color->fields).b;
    local_18.fields.a = (color->fields).a;
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,&local_18,(pUVar1->klass->vtable)._23_set_color.method);
  }
  return;
}


// UI.InGameLabel$$UpdateBackground
// il2cpp: void UI_InGameLabel__UpdateBackground (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x18224bee0

void UI_InGameLabel__UpdateBackground(UI_InGameLabel_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Image_o *__this_00;
  bool bVar2;
  System_String_o *value;
  
  if ((__this->fields)._legacy != false) {
    return;
  }
  pTVar1 = (__this->fields)._tmpText;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    __this_00 = (__this->fields)._background;
    value = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                      (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,!bVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


