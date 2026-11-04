// Type: PatreonEffects.NameEffectLabel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectLabel.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectLabel$$get_prefix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_prefix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
PatreonEffects_NameEffectLabel__get_prefix(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (__this->fields)._prefix;
}


// PatreonEffects.NameEffectLabel$$set_prefix
// il2cpp: void PatreonEffects_NameEffectLabel__set_prefix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1820cab10

void PatreonEffects_NameEffectLabel__set_prefix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._prefix = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix,value);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$get_nameText
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_nameText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x180584c80

System_String_o*
PatreonEffects_NameEffectLabel__get_nameText(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (__this->fields)._name;
}


// PatreonEffects.NameEffectLabel$$set_nameText
// il2cpp: void PatreonEffects_NameEffectLabel__set_nameText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1820caac0

void PatreonEffects_NameEffectLabel__set_nameText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._name = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._name,value);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,(MethodInfo *)0x0
              );
    return;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$get_suffix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_suffix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x1805853f0

System_String_o*
PatreonEffects_NameEffectLabel__get_suffix(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (__this->fields)._suffix;
}


// PatreonEffects.NameEffectLabel$$set_suffix
// il2cpp: void PatreonEffects_NameEffectLabel__set_suffix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1820cacb0

void PatreonEffects_NameEffectLabel__set_suffix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._suffix = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._suffix,value);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$get_fontSize
// il2cpp: float PatreonEffects_NameEffectLabel__get_fontSize (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x180585020

float
PatreonEffects_NameEffectLabel__get_fontSize(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.NameEffectLabel$$set_fontSize
// il2cpp: void PatreonEffects_NameEffectLabel__set_fontSize (PatreonEffects_NameEffectLabel_o* __this, float value, const MethodInfo* method);
// 0x1820ca970

void PatreonEffects_NameEffectLabel__set_fontSize
               (PatreonEffects_NameEffectLabel_o *__this,float value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346974 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346974 = '\x01';
  }
  pTVar1 = (__this->fields)._prefixTmp;
  (__this->fields)._fontSize = value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820caab6;
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
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820caab6;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820caab6:
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
             (MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
             (MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectLabel$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectLabel__get_color (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x1820ca6d0

UnityEngine_Color_o
PatreonEffects_NameEffectLabel__get_color(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields)._color.fields.y;
  fVar2 = (__this->fields)._color.fields.z;
  fVar3 = (__this->fields)._color.fields.w;
  (__return_storage_ptr__->fields).x = (__this->fields)._color.fields.x;
  (__return_storage_ptr__->fields).y = fVar1;
  (__return_storage_ptr__->fields).z = fVar2;
  (__return_storage_ptr__->fields).w = fVar3;
  return __return_storage_ptr__;
}


// PatreonEffects.NameEffectLabel$$set_color
// il2cpp: void PatreonEffects_NameEffectLabel__set_color (PatreonEffects_NameEffectLabel_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x1820ca7f0

void PatreonEffects_NameEffectLabel__set_color
               (PatreonEffects_NameEffectLabel_o *__this,UnityEngine_Color_o *value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  PatreonEffects_NameEffectController_o *x;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346975 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346975 = '\x01';
  }
  fVar2 = (value->fields).g;
  fVar3 = (value->fields).b;
  fVar4 = (value->fields).a;
  pTVar1 = (__this->fields)._prefixTmp;
  (__this->fields)._color.fields.r = (value->fields).r;
  (__this->fields)._color.fields.g = fVar2;
  (__this->fields)._color.fields.b = fVar3;
  (__this->fields)._color.fields.a = fVar4;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820ca95d;
    local_18.r = (value->fields).r;
    local_18.g = (value->fields).g;
    local_18.b = (value->fields).b;
    local_18.a = (value->fields).a;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820ca95d;
    local_18.r = (value->fields).r;
    local_18.g = (value->fields).g;
    local_18.b = (value->fields).b;
    local_18.a = (value->fields).a;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    x = (__this->fields)._nameEffect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pTVar1 = (__this->fields)._nameTmp;
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820ca95d:
        ThrowNullReferenceException();
      }
      local_18.r = (value->fields).r;
      local_18.g = (value->fields).g;
      local_18.b = (value->fields).b;
      local_18.a = (value->fields).a;
      (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method);
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$get_alignment
// il2cpp: int32_t PatreonEffects_NameEffectLabel__get_alignment (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x18058a610

int32_t
PatreonEffects_NameEffectLabel__get_alignment(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (__this->fields).m_RolloverSize;
}


// PatreonEffects.NameEffectLabel$$set_alignment
// il2cpp: void PatreonEffects_NameEffectLabel__set_alignment (PatreonEffects_NameEffectLabel_o* __this, int32_t value, const MethodInfo* method);
// 0x1820ca6e0

void PatreonEffects_NameEffectLabel__set_alignment
               (PatreonEffects_NameEffectLabel_o *__this,int32_t value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346976 = '\x01';
  }
  pTVar1 = (__this->fields)._prefixTmp;
  (__this->fields)._alignment = value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820ca7de;
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
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820ca7de;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820ca7de:
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  return;
}


// PatreonEffects.NameEffectLabel$$get_richText
// il2cpp: bool PatreonEffects_NameEffectLabel__get_richText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x180c7fb40

bool
PatreonEffects_NameEffectLabel__get_richText(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (__this->fields)._richText;
}


// PatreonEffects.NameEffectLabel$$set_richText
// il2cpp: void PatreonEffects_NameEffectLabel__set_richText (PatreonEffects_NameEffectLabel_o* __this, bool value, const MethodInfo* method);
// 0x1820cab60

void PatreonEffects_NameEffectLabel__set_richText
               (PatreonEffects_NameEffectLabel_o *__this,bool value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346977 = '\x01';
  }
  pTVar1 = (__this->fields)._prefixTmp;
  (__this->fields)._richText = value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820caca8;
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
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820caca8;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820caca8:
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
             (MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
             (MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectLabel$$get_prefixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_prefixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x18058a570

TMPro_TextMeshProUGUI_o*
PatreonEffects_NameEffectLabel__get_prefixComponent(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// PatreonEffects.NameEffectLabel$$get_nameComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_nameComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x18152f220

TMPro_TextMeshProUGUI_o*
PatreonEffects_NameEffectLabel__get_nameComponent(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)__this[1].fields.m_Properties.fields._list;
}


// PatreonEffects.NameEffectLabel$$get_suffixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_suffixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x18058a6f0

TMPro_TextMeshProUGUI_o*
PatreonEffects_NameEffectLabel__get_suffixComponent(PatreonEffects_NameEffectLabel_o* __this, MethodInfo* method)

{
  return (Unity_IntegerTime_DiscreteTime_o)
         (Unity_IntegerTime_DiscreteTime_Fields)(__this->fields)._suffixTmp.fields.Value;
}


// PatreonEffects.NameEffectLabel$$SetFont
// il2cpp: void PatreonEffects_NameEffectLabel__SetFont (PatreonEffects_NameEffectLabel_o* __this, TMPro_TMP_FontAsset_o* font, const MethodInfo* method);
// 0x1820c9f40

void PatreonEffects_NameEffectLabel__SetFont
               (PatreonEffects_NameEffectLabel_o *__this,TMPro_TMP_FontAsset_o *font,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346978 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pTVar1 = (__this->fields)._prefixTmp;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._prefixTmp;
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820ca0ac;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,font,(MethodInfo *)0x0);
    }
    pTVar1 = (__this->fields)._nameTmp;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._nameTmp;
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820ca0ac;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,font,(MethodInfo *)0x0);
    }
    pTVar1 = (__this->fields)._suffixTmp;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._suffixTmp;
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820ca0ac:
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,font,(MethodInfo *)0x0);
    }
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
               (MethodInfo *)0x0);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,(MethodInfo *)0x0
              );
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
               (MethodInfo *)0x0);
  }
  return;
}


// PatreonEffects.NameEffectLabel$$SetText
// il2cpp: void PatreonEffects_NameEffectLabel__SetText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* prefix, System_String_o* name, System_String_o* suffix, const MethodInfo* method);
// 0x1820ca540

void PatreonEffects_NameEffectLabel__SetText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *prefix,System_String_o *name,
               System_String_o *suffix,MethodInfo *method)

{
  if (prefix == (System_String_o *)0x0) {
    prefix = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._prefix = prefix;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix,prefix);
    if (name == (System_String_o *)0x0) {
      name = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    (__this->fields)._name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._name,name);
    if (suffix == (System_String_o *)0x0) {
      suffix = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    (__this->fields)._suffix = suffix;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._suffix,suffix);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
               (MethodInfo *)0x0);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,(MethodInfo *)0x0
              );
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$SetNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__SetNameEffect (PatreonEffects_NameEffectLabel_o* __this, int32_t effect, UnityEngine_Color_o a, UnityEngine_Color_o b, UnityEngine_Color_o c, UnityEngine_Color_o d, const MethodInfo* method);
// 0x1820ca0c0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ca50a: mov rax, qword ptr [rcx]
// asm:   0x1820ca50d: lea rdx, [rsp + 0x20]
// asm:   0x1820ca512: movups xmm0, xmmword ptr [rbx + 0x3c]
// asm:   0x1820ca516: mov r8, qword ptr [rax + 0x2b0]
// asm:   0x1820ca51d: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x1820ca522: call qword ptr [rax + 0x2a8]  ; vtable slot 23
// asm:   0x1820ca528: jmp 0x1820ca408

void PatreonEffects_NameEffectLabel__SetNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,int32_t effect,UnityEngine_Color_o *a,
               UnityEngine_Color_o *b,UnityEngine_Color_o *c,UnityEngine_Color_o *d,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *settings;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Color_Fields local_58 [4];
  
  if (Il2CppMethodInitialized_184346979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346979 = '\x01';
  }
  pTVar1 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (effect == 0) {
    if (Il2CppMethodInitialized_18434697a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434697a = '\x01';
    }
    pPVar3 = (__this->fields)._nameEffect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pPVar3 = (__this->fields)._nameEffect;
      if (pPVar3 == (PatreonEffects_NameEffectController_o *)0x0) goto label_1820ca52d;
      PatreonEffects_NameEffectController__Clear(pPVar3,(MethodInfo *)0x0);
      pPVar3 = (__this->fields)._nameEffect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar3,(MethodInfo *)0x0);
      (__this->fields)._nameEffect = (PatreonEffects_NameEffectController_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._nameEffect,(void *)0x0);
    }
    pTVar1 = (__this->fields)._nameTmp;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      local_58[0].r = (__this->fields)._color.fields.r;
      local_58[0].g = (__this->fields)._color.fields.g;
      local_58[0].b = (__this->fields)._color.fields.b;
      local_58[0].a = (__this->fields)._color.fields.a;
      (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                (pTVar1,(UnityEngine_Color_o *)local_58,(pTVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
  else {
    pPVar3 = (__this->fields)._nameEffect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._nameTmp;
      if ((pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_1820ca52d;
      pPVar3 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
      (__this->fields)._nameEffect = pPVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._nameEffect,pPVar3);
    }
    pPVar3 = (__this->fields)._nameEffect;
    if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
      bVar2 = PatreonEffects_NameEffectController__FindText(pPVar3,(MethodInfo *)0x0);
      if (bVar2) {
        (pPVar3->fields).cleared = false;
        bVar2 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(pPVar3,(MethodInfo *)0x0);
        if (bVar2) {
          (pPVar3->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pPVar3->fields).runtimeMat,(void *)0x0);
          (pPVar3->fields).initialized = false;
        }
      }
      settings = PatreonEffects_NameEffectPresets__GetPreset(effect,(MethodInfo *)0x0);
      fVar6 = (a->fields).r - 0.0;
      fVar7 = (a->fields).g - 0.0;
      fVar4 = (a->fields).b - 0.0;
      fVar5 = (a->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820ca52d;
        fVar4 = (a->fields).g;
        fVar5 = (a->fields).b;
        fVar6 = (a->fields).a;
        (settings->fields).gradientA.fields.r = (a->fields).r;
        (settings->fields).gradientA.fields.g = fVar4;
        (settings->fields).gradientA.fields.b = fVar5;
        (settings->fields).gradientA.fields.a = fVar6;
      }
      fVar6 = (b->fields).r - 0.0;
      fVar7 = (b->fields).g - 0.0;
      fVar4 = (b->fields).b - 0.0;
      fVar5 = (b->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820ca52d;
        fVar4 = (b->fields).g;
        fVar5 = (b->fields).b;
        fVar6 = (b->fields).a;
        (settings->fields).gradientB.fields.r = (b->fields).r;
        (settings->fields).gradientB.fields.g = fVar4;
        (settings->fields).gradientB.fields.b = fVar5;
        (settings->fields).gradientB.fields.a = fVar6;
      }
      fVar6 = (c->fields).r - 0.0;
      fVar7 = (c->fields).g - 0.0;
      fVar4 = (c->fields).b - 0.0;
      fVar5 = (c->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820ca52d;
        fVar4 = (c->fields).g;
        fVar5 = (c->fields).b;
        fVar6 = (c->fields).a;
        (settings->fields).gradientC.fields.r = (c->fields).r;
        (settings->fields).gradientC.fields.g = fVar4;
        (settings->fields).gradientC.fields.b = fVar5;
        (settings->fields).gradientC.fields.a = fVar6;
      }
      fVar6 = (d->fields).r - 0.0;
      fVar7 = (d->fields).g - 0.0;
      fVar4 = (d->fields).b - 0.0;
      fVar5 = (d->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820ca52d;
        fVar4 = (d->fields).g;
        fVar5 = (d->fields).b;
        fVar6 = (d->fields).a;
        (settings->fields).gradientD.fields.r = (d->fields).r;
        (settings->fields).gradientD.fields.g = fVar4;
        (settings->fields).gradientD.fields.b = fVar5;
        (settings->fields).gradientD.fields.a = fVar6;
      }
      pTVar1 = (__this->fields)._nameTmp;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        local_58[0].r = 1.0;
        local_58[0].g = 1.0;
        local_58[0].b = 1.0;
        local_58[0].a = 1.0;
        (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                  (pTVar1,(UnityEngine_Color_o *)local_58,(pTVar1->klass->vtable)._23_set_color.method);
        pPVar3 = (__this->fields)._nameEffect;
        if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(pPVar3,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1820ca52d:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$ClearNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__ClearNameEffect (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x1820c9a80

void PatreonEffects_NameEffectLabel__ClearNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  bool bVar3;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_18434697a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434697a = '\x01';
  }
  pPVar1 = (__this->fields)._nameEffect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pPVar1 = (__this->fields)._nameEffect;
    if (pPVar1 == (PatreonEffects_NameEffectController_o *)0x0) goto label_1820c9b88;
    PatreonEffects_NameEffectController__Clear(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._nameEffect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    (__this->fields)._nameEffect = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._nameEffect,(void *)0x0);
  }
  pTVar2 = (__this->fields)._nameTmp;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar2 = (__this->fields)._nameTmp;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820c9b88:
      ThrowNullReferenceException();
    }
    local_18.fields.r = (__this->fields)._color.fields.r;
    local_18.fields.g = (__this->fields)._color.fields.g;
    local_18.fields.b = (__this->fields)._color.fields.b;
    local_18.fields.a = (__this->fields)._color.fields.a;
    (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
              (pTVar2,&local_18,(pTVar2->klass->vtable)._23_set_color.method);
  }
  return;
}


// PatreonEffects.NameEffectLabel$$Awake
// il2cpp: void PatreonEffects_NameEffectLabel__Awake (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x1820c9810

void PatreonEffects_NameEffectLabel__Awake(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel__BuildIfNeeded(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectLabel$$BuildIfNeeded
// il2cpp: void PatreonEffects_NameEffectLabel__BuildIfNeeded (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x1820c9820

void PatreonEffects_NameEffectLabel__BuildIfNeeded
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  TMPro_TextMeshProUGUI_o *pTVar3;
  
  if (Il2CppMethodInitialized_18434697b == '\0') {
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
    Il2CppMethodInitialized_18434697b = '\x01';
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
                         (MethodInfo_6651A0 *)
                         MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_1820c9a6f;
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar2,(MethodInfo_6F4D60 *)
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
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_1820c9a6f;
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar2,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    }
    if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,2,(MethodInfo *)0x0);
      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Prefix",&(__this->fields)._prefixLayout,(MethodInfo *)0x0);
      (__this->fields)._prefixTmp = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._prefixTmp,pTVar3);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Name",&(__this->fields)._nameLayout,(MethodInfo *)0x0);
      (__this->fields)._nameTmp = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._nameTmp,pTVar3);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Suffix",&(__this->fields)._suffixLayout,(MethodInfo *)0x0);
      (__this->fields)._suffixTmp = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._suffixTmp,pTVar3);
      return;
    }
  }
label_1820c9a6f:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectLabel$$CreateSegment
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__CreateSegment (PatreonEffects_NameEffectLabel_o* __this, System_String_o* name, UnityEngine_UI_LayoutElement_o** layout, const MethodInfo* method);
// 0x1820c9b90

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
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_18434697c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_18434697c = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1820c9ef2:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar1);
        pSVar1 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0
                           );
        if (pSVar1 != (System_Type_o *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar1;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar1);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(__this_00,name,components,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
              tmp = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
              PatreonEffects_NameEffectLabel__ApplySharedFont(tmp,(MethodInfo *)0x0);
              if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
                TMPro_TMP_Text__set_fontSize
                          ((TMPro_TMP_Text_o *)tmp,(__this->fields)._fontSize,(MethodInfo *)0x0);
                local_28.r = (__this->fields)._color.fields.r;
                local_28.g = (__this->fields)._color.fields.g;
                local_28.b = (__this->fields)._color.fields.b;
                local_28.a = (__this->fields)._color.fields.a;
                (*(tmp->klass->vtable)._23_set_color.methodPtr)
                          (tmp,(UnityEngine_Color_o *)&local_28,(tmp->klass->vtable)._23_set_color.method);
                TMPro_TMP_Text__set_alignment
                          ((TMPro_TMP_Text_o *)tmp,(__this->fields)._alignment,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_richText
                          ((TMPro_TMP_Text_o *)tmp,(__this->fields)._richText,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)tmp,false,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)tmp,0,(MethodInfo *)0x0);
                (*(tmp->klass->vtable)._66_set_text.methodPtr)
                          (tmp,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                           (tmp->klass->vtable)._66_set_text.method);
                pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_00,
                                    (MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                *layout = pUVar3;
                Il2CppCodeGenWriteBarrier(layout,pUVar3);
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
          goto label_1820c9ef2;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.NameEffectLabel$$ApplySharedFont
// il2cpp: void PatreonEffects_NameEffectLabel__ApplySharedFont (TMPro_TextMeshProUGUI_o* tmp, const MethodInfo* method);
// 0x1820c93d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c962a: mov rdi, qword ptr [rsp + 0x30]

void PatreonEffects_NameEffectLabel__ApplySharedFont(TMPro_TextMeshProUGUI_o *tmp,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  TMPro_TMP_SpriteAsset_o *pTVar3;
  
  if (Il2CppMethodInitialized_18434697d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectLabel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    Il2CppMethodInitialized_18434697d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pTVar2 = TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedFontAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pTVar2 = UnityEngine_Resources__Load_object_
                         ("UI/Fonts/Vegur-Regular-SDF",
                          (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
      TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedFontAsset = pTVar2;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedFontAsset,pTVar2);
    }
    pTVar2 = TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedFontAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820c9635;
      TMPro_TMP_Text__set_font
                ((TMPro_TMP_Text_o *)tmp,
                 TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedFontAsset,(MethodInfo *)0x0);
    }
    pTVar3 = TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pTVar3 = UnityEngine_Resources__Load_object_
                         ("UI/Icons/Profile/ProfileIconsAtlas_256",
                          (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
      if (pTVar3 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
        }
        pTVar3 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset = pTVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset,pTVar3);
    }
    pTVar3 = TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820c9635:
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_spriteAsset
                ((TMPro_TMP_Text_o *)tmp,
                 TypeInfo_PatreonEffects_NameEffectLabel->static_fields->_sharedSpriteAsset,(MethodInfo *)0x0)
      ;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$ApplyText
// il2cpp: void PatreonEffects_NameEffectLabel__ApplyText (TMPro_TextMeshProUGUI_o* tmp, UnityEngine_UI_LayoutElement_o* layout, System_String_o* content, const MethodInfo* method);
// 0x1820c9640

void PatreonEffects_NameEffectLabel__ApplyText
               (TMPro_TextMeshProUGUI_o *tmp,UnityEngine_UI_LayoutElement_o *layout,System_String_o *content,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *text;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_UI_LayoutElement_c *pUVar4;
  MethodInfo *pMVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434697e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_18434697e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)layout,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) {
label_1820c9801:
        ThrowNullReferenceException();
      }
      (*(tmp->klass->vtable)._66_set_text.methodPtr)(tmp,content,(tmp->klass->vtable)._66_set_text.method);
      bVar1 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0);
      if (bVar1) {
        if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1820c9801;
        (*(layout->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (layout,0.0,(layout->klass->vtable)._36_set_preferredWidth.method);
        pUVar4 = layout->klass;
        fVar6 = (tmp->fields).m_fontSize;
        pMVar5 = (pUVar4->vtable)._38_set_preferredHeight.method;
      }
      else {
        text = System_String__Concat_1969e50(content,"|",(MethodInfo *)0x0);
        UVar2 = TMPro_TMP_Text__GetPreferredValues_2d12740
                          ((TMPro_TMP_Text_o *)tmp,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
        UVar3 = TMPro_TMP_Text__GetPreferredValues_2d12740
                          ((TMPro_TMP_Text_o *)tmp,"|",3.4028235e+38,3.4028235e+38,
                           (MethodInfo *)0x0);
        if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1820c9801;
        fVar6 = UVar2.fields.x - UVar3.fields.x;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        (*(layout->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (layout,fVar6,(layout->klass->vtable)._36_set_preferredWidth.method);
        fVar6 = (*(tmp->klass->vtable)._85_get_preferredHeight.methodPtr)
                          (tmp,(tmp->klass->vtable)._85_get_preferredHeight.method);
        pUVar4 = layout->klass;
        pMVar5 = (pUVar4->vtable)._38_set_preferredHeight.method;
      }
      (*(pUVar4->vtable)._38_set_preferredHeight.methodPtr)(layout,fVar6,pMVar5);
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$.ctor
// il2cpp: void PatreonEffects_NameEffectLabel___ctor (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x1820ca630

void PatreonEffects_NameEffectLabel___ctor(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._prefix = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._name = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._suffix = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._suffix,pSVar1);
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


