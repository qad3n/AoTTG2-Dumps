// Type: PatreonEffects.NameEffectLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectLabel.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectLabel$$get_prefix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_prefix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c65d0

System_String_o *
PatreonEffects_NameEffectLabel__get_prefix(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._prefix;
}


// PatreonEffects.NameEffectLabel$$set_prefix
// il2cpp: void PatreonEffects_NameEffectLabel__set_prefix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59c65e0

void PatreonEffects_NameEffectLabel__set_prefix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (PatreonEffects_NameEffectLabel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._prefix = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix);
  PatreonEffects_NameEffectLabel__ApplyAll(__this,(MethodInfo *)value);
  return;
}


// PatreonEffects.NameEffectLabel$$get_nameText
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_nameText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c66f0

System_String_o *
PatreonEffects_NameEffectLabel__get_nameText(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._name;
}


// PatreonEffects.NameEffectLabel$$set_nameText
// il2cpp: void PatreonEffects_NameEffectLabel__set_nameText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59c6700

void PatreonEffects_NameEffectLabel__set_nameText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (PatreonEffects_NameEffectLabel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._name = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
  PatreonEffects_NameEffectLabel__ApplyAll(__this,(MethodInfo *)value);
  return;
}


// PatreonEffects.NameEffectLabel$$get_suffix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_suffix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c6750

System_String_o *
PatreonEffects_NameEffectLabel__get_suffix(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._suffix;
}


// PatreonEffects.NameEffectLabel$$set_suffix
// il2cpp: void PatreonEffects_NameEffectLabel__set_suffix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59c6760

void PatreonEffects_NameEffectLabel__set_suffix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (PatreonEffects_NameEffectLabel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._suffix = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._suffix);
  PatreonEffects_NameEffectLabel__ApplyAll(__this,(MethodInfo *)value);
  return;
}


// PatreonEffects.NameEffectLabel$$get_fontSize
// il2cpp: float PatreonEffects_NameEffectLabel__get_fontSize (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c67b0

float PatreonEffects_NameEffectLabel__get_fontSize
                (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.NameEffectLabel$$set_fontSize
// il2cpp: void PatreonEffects_NameEffectLabel__set_fontSize (PatreonEffects_NameEffectLabel_o* __this, float value, const MethodInfo* method);
// 0x59c67c0

void PatreonEffects_NameEffectLabel__set_fontSize
               (PatreonEffects_NameEffectLabel_o *__this,float value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c0a = '\x01';
  }
  (__this->fields)._fontSize = value;
  pTVar1 = (__this->fields)._prefixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c68c7;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c68c7;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_059c68c7:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyAll(__this,method_00);
  return;
}


// PatreonEffects.NameEffectLabel$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectLabel__get_color (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c68d0

UnityEngine_Color_o
PatreonEffects_NameEffectLabel__get_color(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._color.fields;
}


// PatreonEffects.NameEffectLabel$$set_color
// il2cpp: void PatreonEffects_NameEffectLabel__set_color (PatreonEffects_NameEffectLabel_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x59c68e0

void PatreonEffects_NameEffectLabel__set_color
               (PatreonEffects_NameEffectLabel_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  PatreonEffects_NameEffectController_o *x;
  bool bVar2;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07545c0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c0b = '\x01';
  }
  local_38 = value.fields.r;
  fStack_34 = value.fields.g;
  (__this->fields)._color.fields.r = local_38;
  (__this->fields)._color.fields.g = fStack_34;
  (__this->fields)._color.fields.b = value.fields.b;
  (__this->fields)._color.fields.a = value.fields.a;
  pTVar1 = (__this->fields)._prefixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c6a42;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,value,(pTVar1->klass->vtable)._23_set_color.method);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c6a42;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,value,(pTVar1->klass->vtable)._23_set_color.method);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    x = (__this->fields)._nameEffect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._nameTmp;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                  (pTVar1,value,(pTVar1->klass->vtable)._23_set_color.method);
        return;
      }
label_059c6a42:
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$get_alignment
// il2cpp: int32_t PatreonEffects_NameEffectLabel__get_alignment (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c6a50

int32_t PatreonEffects_NameEffectLabel__get_alignment
                  (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignment;
}


// PatreonEffects.NameEffectLabel$$set_alignment
// il2cpp: void PatreonEffects_NameEffectLabel__set_alignment (PatreonEffects_NameEffectLabel_o* __this, int32_t value, const MethodInfo* method);
// 0x59c6a60

void PatreonEffects_NameEffectLabel__set_alignment
               (PatreonEffects_NameEffectLabel_o *__this,int32_t value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545c0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c0c = '\x01';
  }
  (__this->fields)._alignment = value;
  pTVar1 = (__this->fields)._prefixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c6b55;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c6b55;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
    return;
  }
label_059c6b55:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$get_richText
// il2cpp: bool PatreonEffects_NameEffectLabel__get_richText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c6b60

bool PatreonEffects_NameEffectLabel__get_richText(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._richText;
}


// PatreonEffects.NameEffectLabel$$set_richText
// il2cpp: void PatreonEffects_NameEffectLabel__set_richText (PatreonEffects_NameEffectLabel_o* __this, bool value, const MethodInfo* method);
// 0x59c6b70

void PatreonEffects_NameEffectLabel__set_richText
               (PatreonEffects_NameEffectLabel_o *__this,bool value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c0d = '\x01';
  }
  (__this->fields)._richText = value;
  pTVar1 = (__this->fields)._prefixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c6c65;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c6c65;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_059c6c65:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)(ulong)value;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyAll(__this,method_00);
  return;
}


// PatreonEffects.NameEffectLabel$$get_prefixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_prefixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c6c70

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_prefixComponent
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._prefixTmp;
}


// PatreonEffects.NameEffectLabel$$get_nameComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_nameComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c6c80

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_nameComponent(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._nameTmp;
}


// PatreonEffects.NameEffectLabel$$get_suffixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_suffixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c6c90

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_suffixComponent
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._suffixTmp;
}


// PatreonEffects.NameEffectLabel$$SetFont
// il2cpp: void PatreonEffects_NameEffectLabel__SetFont (PatreonEffects_NameEffectLabel_o* __this, TMPro_TMP_FontAsset_o* font, const MethodInfo* method);
// 0x59c6ca0

void PatreonEffects_NameEffectLabel__SetFont
               (PatreonEffects_NameEffectLabel_o *__this,TMPro_TMP_FontAsset_o *font,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545c0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c0e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields)._font = font;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._font);
  PatreonEffects_NameEffectLabel__ApplyAll(__this,(MethodInfo *)font);
  return;
}


// PatreonEffects.NameEffectLabel$$SetText
// il2cpp: void PatreonEffects_NameEffectLabel__SetText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* prefix, System_String_o* name, System_String_o* suffix, const MethodInfo* method);
// 0x59c6d20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c6d42: test r12, r12
// asm:   0x59c6d45: je 0x59c6e21

void PatreonEffects_NameEffectLabel__SetText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *prefix,System_String_o *name,
               System_String_o *suffix,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_07545c0f = '\x01';
  }
  if (prefix == (System_String_o *)0x0) {
    prefix = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(prefix,false,(MethodInfo *)0x0);
  if (__this == (PatreonEffects_NameEffectLabel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._prefix = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix);
  if (name == (System_String_o *)0x0) {
    name = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(name,false,(MethodInfo *)0x0);
  (__this->fields)._name = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
  if (suffix == (System_String_o *)0x0) {
    suffix = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  method_00 = (MethodInfo *)
              Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(suffix,false,(MethodInfo *)0x0);
  (__this->fields)._suffix = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._suffix);
  PatreonEffects_NameEffectLabel__ApplyAll(__this,method_00);
  return;
}


// PatreonEffects.NameEffectLabel$$ApplyAll
// il2cpp: void PatreonEffects_NameEffectLabel__ApplyAll (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c6630

void PatreonEffects_NameEffectLabel__ApplyAll(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  System_String_o *text;
  TMPro_TMP_FontAsset_o *pTVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545c10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07545c10 = '\x01';
  }
  text = System_String__Concat_5301f10
                   ((__this->fields)._prefix,(__this->fields)._name,(__this->fields)._suffix,(MethodInfo *)0x0
                   );
  pTVar1 = (__this->fields)._font;
  if (pTVar1 == (TMPro_TMP_FontAsset_o *)0x0) {
    pTVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                       ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  pTVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText(text,pTVar1,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,pTVar1,in_R8)
  ;
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,pTVar1,in_R8);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,pTVar1,in_R8)
  ;
  return;
}


// PatreonEffects.NameEffectLabel$$SetNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__SetNameEffect (PatreonEffects_NameEffectLabel_o* __this, int32_t effect, UnityEngine_Color_o a, UnityEngine_Color_o b, UnityEngine_Color_o c, UnityEngine_Color_o d, const MethodInfo* method);
// 0x59c7080

void PatreonEffects_NameEffectLabel__SetNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,int32_t effect,UnityEngine_Color_o a,
               UnityEngine_Color_o b,UnityEngine_Color_o c,UnityEngine_Color_o d,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **targetAddress;
  TMPro_TextMeshProUGUI_o *pTVar1;
  PatreonEffects_NameEffectController_o *x;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Color_o UVar3;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07545c11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c11 = '\x01';
  }
  pTVar1 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_02 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (effect == 0) {
    PatreonEffects_NameEffectLabel__ClearNameEffect(__this,method_02);
    return;
  }
  x = (__this->fields)._nameEffect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._nameEffect;
  method_00 = (PatreonEffects_NameEffectController_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c731c;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_059c731c;
    method_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    *targetAddress = method_00;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  settings = PatreonEffects_NameEffectPresets__GetPreset(effect,(MethodInfo *)method_00);
  local_98 = a.fields.r;
  fStack_94 = a.fields.g;
  local_a8 = a.fields.b;
  fStack_a4 = a.fields.a;
  local_38 = d.fields.r;
  fStack_34 = d.fields.g;
  local_48 = d.fields.b;
  fStack_44 = d.fields.a;
  local_58 = c.fields.r;
  fStack_54 = c.fields.g;
  local_68 = c.fields.b;
  fStack_64 = c.fields.a;
  local_78 = b.fields.r;
  fStack_74 = b.fields.g;
  local_88 = b.fields.b;
  fStack_84 = b.fields.a;
  if (9.9999994e-11 <=
      fStack_a4 * fStack_a4 + fStack_94 * fStack_94 + local_98 * local_98 + local_a8 * local_a8) {
    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c731c;
    (settings->fields).gradientA.fields.r = local_98;
    (settings->fields).gradientA.fields.g = fStack_94;
    (settings->fields).gradientA.fields.b = local_a8;
    (settings->fields).gradientA.fields.a = fStack_a4;
  }
  if (9.9999994e-11 <=
      fStack_84 * fStack_84 + fStack_74 * fStack_74 + local_78 * local_78 + local_88 * local_88) {
    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c731c;
    (settings->fields).gradientB.fields.r = local_78;
    (settings->fields).gradientB.fields.g = fStack_74;
    (settings->fields).gradientB.fields.b = local_88;
    (settings->fields).gradientB.fields.a = fStack_84;
  }
  if (9.9999994e-11 <=
      fStack_64 * fStack_64 + fStack_54 * fStack_54 + local_58 * local_58 + local_68 * local_68) {
    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c731c;
    (settings->fields).gradientC.fields.r = local_58;
    (settings->fields).gradientC.fields.g = fStack_54;
    (settings->fields).gradientC.fields.b = local_68;
    (settings->fields).gradientC.fields.a = fStack_64;
  }
  if (9.9999994e-11 <=
      fStack_44 * fStack_44 + fStack_34 * fStack_34 + local_38 * local_38 + local_48 * local_48) {
    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c731c;
    (settings->fields).gradientD.fields.r = local_38;
    (settings->fields).gradientD.fields.g = fStack_34;
    (settings->fields).gradientD.fields.b = local_48;
    (settings->fields).gradientD.fields.a = fStack_44;
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    UVar3.fields.b = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.g = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,UVar3,(pTVar1->klass->vtable)._23_set_color.method);
    if (*targetAddress != (PatreonEffects_NameEffectController_o *)0x0) {
      PatreonEffects_NameEffectController__Apply(*targetAddress,settings,method_01);
      return;
    }
  }
label_059c731c:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$ClearNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__ClearNameEffect (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c7330

void PatreonEffects_NameEffectLabel__ClearNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **targetAddress;
  PatreonEffects_NameEffectController_o *pPVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  bool bVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c12 = '\x01';
  }
  pPVar1 = (__this->fields)._nameEffect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    targetAddress = &(__this->fields)._nameEffect;
    if (*targetAddress == (PatreonEffects_NameEffectController_o *)0x0) goto label_059c7434;
    PatreonEffects_NameEffectController__Clear(*targetAddress,method_00);
    pPVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *targetAddress = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pTVar2 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pTVar2 = (__this->fields)._nameTmp;
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
              (pTVar2,(UnityEngine_Color_o)(__this->fields)._color.fields,
               (pTVar2->klass->vtable)._23_set_color.method);
    return;
  }
label_059c7434:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$Awake
// il2cpp: void PatreonEffects_NameEffectLabel__Awake (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c7440

void PatreonEffects_NameEffectLabel__Awake(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel__BuildIfNeeded(__this,method);
  return;
}


// PatreonEffects.NameEffectLabel$$BuildIfNeeded
// il2cpp: void PatreonEffects_NameEffectLabel__BuildIfNeeded (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c7450

void PatreonEffects_NameEffectLabel__BuildIfNeeded
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  TMPro_TextMeshProUGUI_o *pTVar3;
  MethodInfo **in_RCX;
  
  if (Il2CppMethodInitialized_07545c13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefix");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Suffix");
    Il2CppMethodInitialized_07545c13 = '\x01';
  }
  pTVar3 = (__this->fields)._prefixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)
                         MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_059c769a;
    in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup;
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar2,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
  }
  if (__this_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
    UnityEngine_UI_LayoutGroup__set_childAlignment
              ((UnityEngine_UI_LayoutGroup_o *)__this_00,3,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,0.0,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0830 *)
                           MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_059c769a;
      in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter;
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar2,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    }
    if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,2,(MethodInfo *)0x0);
      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Prefix",&(__this->fields)._prefixLayout,(MethodInfo *)in_RCX);
      (__this->fields)._prefixTmp = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._prefixTmp);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Name",&(__this->fields)._nameLayout,(MethodInfo *)in_RCX);
      (__this->fields)._nameTmp = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._nameTmp);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Suffix",&(__this->fields)._suffixLayout,(MethodInfo *)in_RCX);
      (__this->fields)._suffixTmp = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._suffixTmp);
      return;
    }
  }
label_059c769a:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$CreateSegment
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__CreateSegment (PatreonEffects_NameEffectLabel_o* __this, System_String_o* name, UnityEngine_UI_LayoutElement_o** layout, const MethodInfo* method);
// 0x59c76a0

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__CreateSegment
          (PatreonEffects_NameEffectLabel_o *__this,System_String_o *name,
          UnityEngine_UI_LayoutElement_o **layout,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  TMPro_TextMeshProUGUI_o *tmp;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07545c14 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_059c7a18:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_059c7a22;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_059c7a22;
    }
    if ((components->max_length & 0xfffffffe) == 0) goto label_059c7a1d;
    components->m_Items[1] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items + 1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_059c7a22;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 2);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
label_059c7a22:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((components->max_length & 0xfffffffc) != 0) {
        components->m_Items[3] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 3);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this_00,name,components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
            method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI;
            tmp = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
            PatreonEffects_NameEffectLabel__ApplySharedSpriteAsset(tmp,method_00);
            if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
              TMPro_TMP_Text__set_fontSize
                        ((TMPro_TMP_Text_o *)tmp,(__this->fields)._fontSize,(MethodInfo *)0x0);
              (*(tmp->klass->vtable)._23_set_color.methodPtr)
                        (tmp,(UnityEngine_Color_o)(__this->fields)._color.fields,
                         (tmp->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment
                        ((TMPro_TMP_Text_o *)tmp,(__this->fields)._alignment,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_richText
                        ((TMPro_TMP_Text_o *)tmp,(__this->fields)._richText,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)tmp,false,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)tmp,0,(MethodInfo *)0x0);
              (*(tmp->klass->vtable)._66_set_text.methodPtr)
                        (tmp,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                         (tmp->klass->vtable)._66_set_text.method);
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              *layout = pUVar3;
              Il2CppCodeGenWriteBarrier(layout);
              pUVar3 = *layout;
              if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar3,0.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
                pUVar3 = *layout;
                if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar3,0.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
                  return tmp;
                }
              }
            }
          }
        }
        goto label_059c7a18;
      }
    }
  }
label_059c7a1d:
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.NameEffectLabel$$ApplySharedSpriteAsset
// il2cpp: void PatreonEffects_NameEffectLabel__ApplySharedSpriteAsset (TMPro_TextMeshProUGUI_o* tmp, const MethodInfo* method);
// 0x59c7a40

void PatreonEffects_NameEffectLabel__ApplySharedSpriteAsset(TMPro_TextMeshProUGUI_o *tmp,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_SpriteAsset_o *pTVar2;
  
  if (Il2CppMethodInitialized_07545c15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectLabel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    Il2CppMethodInitialized_07545c15 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pTVar2 = TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pTVar2 = UnityEngine_Resources__Load_object_
                         ("UI/Icons/Profile/ProfileIconsAtlas_256",
                          (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
      if (pTVar2 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
        }
        pTVar2 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset = pTVar2;
      Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset);
    }
    pTVar2 = TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) {
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_spriteAsset
                ((TMPro_TMP_Text_o *)tmp,
                 TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$ApplyText
// il2cpp: void PatreonEffects_NameEffectLabel__ApplyText (TMPro_TextMeshProUGUI_o* tmp, UnityEngine_UI_LayoutElement_o* layout, System_String_o* content, TMPro_TMP_FontAsset_o* font, const MethodInfo* method);
// 0x59c6ed0

void PatreonEffects_NameEffectLabel__ApplyText
               (TMPro_TextMeshProUGUI_o *tmp,UnityEngine_UI_LayoutElement_o *layout,System_String_o *content,
               TMPro_TMP_FontAsset_o *font,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  System_String_o *text;
  float fVar4;
  float local_38;
  
  if (Il2CppMethodInitialized_07545c16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07545c16 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)layout,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) {
label_059c7079:
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)tmp,font,(MethodInfo *)0x0);
      (*(tmp->klass->vtable)._66_set_text.methodPtr)(tmp,content,(tmp->klass->vtable)._66_set_text.method);
      bVar3 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0);
      if (bVar3) {
        if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_059c7079;
        (*(layout->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (layout,0.0,(layout->klass->vtable)._36_set_preferredWidth.method);
        fVar4 = (tmp->fields).m_fontSize;
      }
      else {
        text = System_String__Concat_52f0320(content,"|",(MethodInfo *)0x0);
        UVar1 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                          ((TMPro_TMP_Text_o *)tmp,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
        UVar2 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                          ((TMPro_TMP_Text_o *)tmp,"|",3.4028235e+38,3.4028235e+38,
                           (MethodInfo *)0x0);
        if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_059c7079;
        local_38 = UVar1.fields.x;
        local_38 = local_38 - UVar2.fields.x;
        if (local_38 <= 0.0) {
          local_38 = 0.0;
        }
        (*(layout->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (layout,local_38,(layout->klass->vtable)._36_set_preferredWidth.method);
        fVar4 = (*(tmp->klass->vtable)._85_get_preferredHeight.methodPtr)
                          (tmp,(tmp->klass->vtable)._85_get_preferredHeight.method);
      }
      (*(layout->klass->vtable)._38_set_preferredHeight.methodPtr)
                (layout,fVar4,(layout->klass->vtable)._38_set_preferredHeight.method);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$.ctor
// il2cpp: void PatreonEffects_NameEffectLabel___ctor (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x59c7bc0

void PatreonEffects_NameEffectLabel___ctor(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  (__this->fields)._prefix = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix);
  (__this->fields)._name = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
  (__this->fields)._suffix = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._suffix);
  (__this->fields)._fontSize = 18.0;
  (__this->fields)._color.fields.r = 1.0;
  (__this->fields)._color.fields.g = 1.0;
  (__this->fields)._color.fields.b = 1.0;
  (__this->fields)._color.fields.a = 1.0;
  (__this->fields)._alignment = 0x1001;
  (__this->fields)._richText = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


