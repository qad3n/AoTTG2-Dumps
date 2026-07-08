// Type: PatreonEffects.NameEffectLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectLabel.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.NameEffectLabel$$get_prefix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_prefix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038630

System_String_o *
PatreonEffects_NameEffectLabel__get_prefix
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._prefix;
}


// PatreonEffects.NameEffectLabel$$set_prefix
// il2cpp: void PatreonEffects_NameEffectLabel__set_prefix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4038640

void PatreonEffects_NameEffectLabel__set_prefix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._prefix = value;
    il2cpp_runtime_glue(&(__this->fields)._prefix);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
               in_RCX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$get_nameText
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_nameText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038830

System_String_o *
PatreonEffects_NameEffectLabel__get_nameText
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._name;
}


// PatreonEffects.NameEffectLabel$$set_nameText
// il2cpp: void PatreonEffects_NameEffectLabel__set_nameText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4038840

void PatreonEffects_NameEffectLabel__set_nameText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._name = value;
    il2cpp_runtime_glue(&(__this->fields)._name);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,in_RCX)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$get_suffix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_suffix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038890

System_String_o *
PatreonEffects_NameEffectLabel__get_suffix
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._suffix;
}


// PatreonEffects.NameEffectLabel$$set_suffix
// il2cpp: void PatreonEffects_NameEffectLabel__set_suffix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x40388a0

void PatreonEffects_NameEffectLabel__set_suffix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._suffix = value;
    il2cpp_runtime_glue(&(__this->fields)._suffix);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
               in_RCX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$get_fontSize
// il2cpp: float PatreonEffects_NameEffectLabel__get_fontSize (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x40388f0

float PatreonEffects_NameEffectLabel__get_fontSize
                (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.NameEffectLabel$$set_fontSize
// il2cpp: void PatreonEffects_NameEffectLabel__set_fontSize (PatreonEffects_NameEffectLabel_o* __this, float value, const MethodInfo* method);
// 0x4038900

void PatreonEffects_NameEffectLabel__set_fontSize
               (PatreonEffects_NameEffectLabel_o *__this,float value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05704395 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704395 = '\x01';
  }
  (__this->fields)._fontSize = value;
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038a38;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038a38;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
LAB_04038a38:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
             in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
             in_RCX);
  return;
}


// PatreonEffects.NameEffectLabel$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectLabel__get_color (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038a40

UnityEngine_Color_o
PatreonEffects_NameEffectLabel__get_color
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._color.fields;
}


// PatreonEffects.NameEffectLabel$$set_color
// il2cpp: void PatreonEffects_NameEffectLabel__set_color (PatreonEffects_NameEffectLabel_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x4038a50

void PatreonEffects_NameEffectLabel__set_color
               (PatreonEffects_NameEffectLabel_o *__this,UnityEngine_Color_o value,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  PatreonEffects_NameEffectController_o *x;
  bool_conflict bVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  
  if (DAT_05704396 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704396 = '\x01';
  }
  local_38 = value.fields.r;
  fStack_34 = value.fields.g;
  fVar3 = value.fields.b;
  (__this->fields)._color.fields.r = local_38;
  (__this->fields)._color.fields.g = fStack_34;
  (__this->fields)._color.fields.b = fVar3;
  (__this->fields)._color.fields.a = value.fields.a;
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038bb2;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)(local_38,fVar3);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038bb2;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)(local_38,fVar3);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    x = (__this->fields)._nameEffect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pTVar1 = (__this->fields)._nameTmp;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                  (local_38,fVar3,pTVar1,(pTVar1->klass->vtable)._23_set_color.method);
        return;
      }
LAB_04038bb2:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$get_alignment
// il2cpp: int32_t PatreonEffects_NameEffectLabel__get_alignment (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038bc0

int32_t PatreonEffects_NameEffectLabel__get_alignment
                  (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignment;
}


// PatreonEffects.NameEffectLabel$$set_alignment
// il2cpp: void PatreonEffects_NameEffectLabel__set_alignment (PatreonEffects_NameEffectLabel_o* __this, int32_t value, const MethodInfo* method);
// 0x4038bd0

void PatreonEffects_NameEffectLabel__set_alignment
               (PatreonEffects_NameEffectLabel_o *__this,int32_t value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  
  if (DAT_05704397 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704397 = '\x01';
  }
  (__this->fields)._alignment = value;
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038cc5;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038cc5;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
    return;
  }
LAB_04038cc5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$get_richText
// il2cpp: bool PatreonEffects_NameEffectLabel__get_richText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038cd0

bool_conflict
PatreonEffects_NameEffectLabel__get_richText
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._richText);
}


// PatreonEffects.NameEffectLabel$$set_richText
// il2cpp: void PatreonEffects_NameEffectLabel__set_richText (PatreonEffects_NameEffectLabel_o* __this, bool value, const MethodInfo* method);
// 0x4038ce0

void PatreonEffects_NameEffectLabel__set_richText
               (PatreonEffects_NameEffectLabel_o *__this,bool_conflict value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05704398 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704398 = '\x01';
  }
  *(char *)&(__this->fields)._richText = (char)value;
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038e07;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value & 0xff,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038e07;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value & 0xff,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
LAB_04038e07:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value & 0xff,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
             in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
             in_RCX);
  return;
}


// PatreonEffects.NameEffectLabel$$get_prefixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_prefixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038e10

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_prefixComponent
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._prefixTmp;
}


// PatreonEffects.NameEffectLabel$$get_nameComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_nameComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038e20

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_nameComponent
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._nameTmp;
}


// PatreonEffects.NameEffectLabel$$get_suffixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_suffixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4038e30

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_suffixComponent
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._suffixTmp;
}


// PatreonEffects.NameEffectLabel$$SetFont
// il2cpp: void PatreonEffects_NameEffectLabel__SetFont (PatreonEffects_NameEffectLabel_o* __this, TMPro_TMP_FontAsset_o* font, const MethodInfo* method);
// 0x4038e40

void PatreonEffects_NameEffectLabel__SetFont
               (PatreonEffects_NameEffectLabel_o *__this,TMPro_TMP_FontAsset_o *font,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05704399 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704399 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038f93;
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,font,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04038f93;
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,font,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
LAB_04038f93:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,font,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
             in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
             in_RCX);
  return;
}


// PatreonEffects.NameEffectLabel$$SetText
// il2cpp: void PatreonEffects_NameEffectLabel__SetText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* prefix, System_String_o* name, System_String_o* suffix, const MethodInfo* method);
// 0x4038fa0

void PatreonEffects_NameEffectLabel__SetText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *prefix,
               System_String_o *name,System_String_o *suffix,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (prefix == (System_String_o *)0x0) {
    prefix = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._prefix = prefix;
    method_00 = (MethodInfo *)suffix;
    il2cpp_runtime_glue(&(__this->fields)._prefix);
    if (name == (System_String_o *)0x0) {
      name = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    (__this->fields)._name = name;
    il2cpp_runtime_glue(&(__this->fields)._name,name);
    if (suffix == (System_String_o *)0x0) {
      suffix = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    (__this->fields)._suffix = suffix;
    il2cpp_runtime_glue(&(__this->fields)._suffix,suffix);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
               method_00);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,
               method_00);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
               method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$SetNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__SetNameEffect (PatreonEffects_NameEffectLabel_o* __this, int32_t effect, UnityEngine_Color_o a, UnityEngine_Color_o b, UnityEngine_Color_o c, UnityEngine_Color_o d, const MethodInfo* method);
// 0x4039080

void PatreonEffects_NameEffectLabel__SetNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,int32_t effect,UnityEngine_Color_o a,
               UnityEngine_Color_o b,UnityEngine_Color_o c,UnityEngine_Color_o d,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **ppPVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  PatreonEffects_NameEffectController_o *x;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_01;
  MethodInfo *method_02;
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
  
  if (DAT_0570439a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570439a = '\x01';
  }
  pTVar2 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_02 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (effect == 0) {
    PatreonEffects_NameEffectLabel__ClearNameEffect(__this,method_02);
    return;
  }
  x = (__this->fields)._nameEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppPVar1 = &(__this->fields)._nameEffect;
  method_00 = (PatreonEffects_NameEffectController_o *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar2 = (__this->fields)._nameTmp;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04039328;
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_04039328;
    method_00 = (PatreonEffects_NameEffectController_o *)
                UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    *ppPVar1 = method_00;
    il2cpp_runtime_glue(ppPVar1);
  }
  if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(*ppPVar1,(MethodInfo *)method_00);
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
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_04039328;
      (settings->fields).gradientA.fields.r = local_98;
      (settings->fields).gradientA.fields.g = fStack_94;
      (settings->fields).gradientA.fields.b = local_a8;
      (settings->fields).gradientA.fields.a = fStack_a4;
    }
    if (9.9999994e-11 <=
        fStack_84 * fStack_84 + fStack_74 * fStack_74 + local_78 * local_78 + local_88 * local_88) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_04039328;
      (settings->fields).gradientB.fields.r = local_78;
      (settings->fields).gradientB.fields.g = fStack_74;
      (settings->fields).gradientB.fields.b = local_88;
      (settings->fields).gradientB.fields.a = fStack_84;
    }
    if (9.9999994e-11 <=
        fStack_64 * fStack_64 + fStack_54 * fStack_54 + local_58 * local_58 + local_68 * local_68) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_04039328;
      (settings->fields).gradientC.fields.r = local_58;
      (settings->fields).gradientC.fields.g = fStack_54;
      (settings->fields).gradientC.fields.b = local_68;
      (settings->fields).gradientC.fields.a = fStack_64;
    }
    if (9.9999994e-11 <=
        fStack_44 * fStack_44 + fStack_34 * fStack_34 + local_38 * local_38 + local_48 * local_48) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto LAB_04039328;
      (settings->fields).gradientD.fields.r = local_38;
      (settings->fields).gradientD.fields.g = fStack_34;
      (settings->fields).gradientD.fields.b = local_48;
      (settings->fields).gradientD.fields.a = fStack_44;
    }
    pTVar2 = (__this->fields)._nameTmp;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,pTVar2,(pTVar2->klass->vtable)._23_set_color.method);
      if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply(*ppPVar1,settings,method_01);
        return;
      }
    }
  }
LAB_04039328:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$ClearNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__ClearNameEffect (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4039330

void PatreonEffects_NameEffectLabel__ClearNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **ppPVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  PatreonEffects_NameEffectController_o *pPVar4;
  TMPro_TextMeshProUGUI_o *pTVar5;
  bool_conflict bVar6;
  MethodInfo *method_00;
  
  if (DAT_0570439b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570439b = '\x01';
  }
  pPVar4 = (__this->fields)._nameEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    ppPVar1 = &(__this->fields)._nameEffect;
    if (*ppPVar1 == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_04039434;
    PatreonEffects_NameEffectController__Clear(*ppPVar1,method_00);
    pPVar4 = *ppPVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pPVar4,(MethodInfo *)0x0);
    *ppPVar1 = (PatreonEffects_NameEffectController_o *)0x0;
    il2cpp_runtime_glue(ppPVar1);
  }
  pTVar5 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pTVar5 = (__this->fields)._nameTmp;
  if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
    uVar2._0_4_ = (__this->fields)._color.fields.r;
    uVar2._4_4_ = (__this->fields)._color.fields.g;
    uVar3._0_4_ = (__this->fields)._color.fields.b;
    uVar3._4_4_ = (__this->fields)._color.fields.a;
    (*(pTVar5->klass->vtable)._23_set_color.methodPtr)
              (uVar2,uVar3,pTVar5,(pTVar5->klass->vtable)._23_set_color.method);
    return;
  }
LAB_04039434:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$Awake
// il2cpp: void PatreonEffects_NameEffectLabel__Awake (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4039440

void PatreonEffects_NameEffectLabel__Awake
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  TMPro_TextMeshProUGUI_o *pTVar3;
  MethodInfo *in_RCX;
  
  if (DAT_0570439c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Prefix");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Suffix");
    DAT_0570439c = '\x01';
  }
  pTVar3 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0403969a;
    in_RCX = (MethodInfo *)&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay;
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
  }
  if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    UnityEngine_UI_LayoutGroup__set_childAlignment
              ((UnityEngine_UI_LayoutGroup_o *)__this_00,3,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
              (__this_00,0,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
              (__this_00,0,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,0.0,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0403969a;
      in_RCX = (MethodInfo *)&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
      __this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                  UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    }
    if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,2,(MethodInfo *)0x0);
      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Prefix",&(__this->fields)._prefixLayout,in_RCX);
      (__this->fields)._prefixTmp = pTVar3;
      il2cpp_runtime_glue(&(__this->fields)._prefixTmp,pTVar3);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Name",&(__this->fields)._nameLayout,in_RCX);
      (__this->fields)._nameTmp = pTVar3;
      il2cpp_runtime_glue(&(__this->fields)._nameTmp,pTVar3);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Suffix",&(__this->fields)._suffixLayout,in_RCX);
      (__this->fields)._suffixTmp = pTVar3;
      il2cpp_runtime_glue(&(__this->fields)._suffixTmp,pTVar3);
      return;
    }
  }
LAB_0403969a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$BuildIfNeeded
// il2cpp: void PatreonEffects_NameEffectLabel__BuildIfNeeded (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4039450

void PatreonEffects_NameEffectLabel__BuildIfNeeded
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  TMPro_TextMeshProUGUI_o *pTVar3;
  MethodInfo *in_RCX;
  
  if (DAT_0570439c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Prefix");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Suffix");
    DAT_0570439c = '\x01';
  }
  pTVar3 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0403969a;
    in_RCX = (MethodInfo *)&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay;
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
  }
  if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    UnityEngine_UI_LayoutGroup__set_childAlignment
              ((UnityEngine_UI_LayoutGroup_o *)__this_00,3,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
              (__this_00,0,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
              (__this_00,0,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,0.0,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0403969a;
      in_RCX = (MethodInfo *)&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
      __this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                  UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    }
    if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,2,(MethodInfo *)0x0);
      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Prefix",&(__this->fields)._prefixLayout,in_RCX);
      (__this->fields)._prefixTmp = pTVar3;
      il2cpp_runtime_glue(&(__this->fields)._prefixTmp,pTVar3);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Name",&(__this->fields)._nameLayout,in_RCX);
      (__this->fields)._nameTmp = pTVar3;
      il2cpp_runtime_glue(&(__this->fields)._nameTmp,pTVar3);
      pTVar3 = PatreonEffects_NameEffectLabel__CreateSegment
                         (__this,"Suffix",&(__this->fields)._suffixLayout,in_RCX);
      (__this->fields)._suffixTmp = pTVar3;
      il2cpp_runtime_glue(&(__this->fields)._suffixTmp,pTVar3);
      return;
    }
  }
LAB_0403969a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$CreateSegment
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__CreateSegment (PatreonEffects_NameEffectLabel_o* __this, System_String_o* name, UnityEngine_UI_LayoutElement_o** layout, const MethodInfo* method);
// 0x40396a0

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__CreateSegment
          (PatreonEffects_NameEffectLabel_o *__this,System_String_o *name,
          UnityEngine_UI_LayoutElement_o **layout,MethodInfo *method)

{
  undefined8 uVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  TMPro_TextMeshProUGUI_o *tmp;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  
  if (DAT_0570439d == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_0570439d = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_04039a12:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_04039a1c;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_04039a1c;
    }
    if ((uint)components->max_length < 2) goto LAB_04039a17;
    components->m_Items[1] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_04039a1c;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 2);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_04039a1c:
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
      }
      if (3 < (uint)components->max_length) {
        components->m_Items[3] = pSVar2;
        il2cpp_runtime_glue(components->m_Items + 3,pSVar2);
        __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_00,name,components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
            method_00 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
            tmp = (TMPro_TextMeshProUGUI_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_00,(MethodInfo_24F0F80 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            PatreonEffects_NameEffectLabel__ApplySharedFont(tmp,method_00);
            if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
              TMPro_TMP_Text__set_fontSize
                        ((TMPro_TMP_Text_o *)tmp,(__this->fields)._fontSize,(MethodInfo *)0x0);
              uVar5._0_4_ = (__this->fields)._color.fields.r;
              uVar5._4_4_ = (__this->fields)._color.fields.g;
              uVar1._0_4_ = (__this->fields)._color.fields.b;
              uVar1._4_4_ = (__this->fields)._color.fields.a;
              (*(tmp->klass->vtable)._23_set_color.methodPtr)
                        (uVar5,uVar1,tmp,(tmp->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment
                        ((TMPro_TMP_Text_o *)tmp,(__this->fields)._alignment,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_richText
                        ((TMPro_TMP_Text_o *)tmp,(uint)(byte)(__this->fields)._richText,
                         (MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)tmp,0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)tmp,0,(MethodInfo *)0x0);
              (*(tmp->klass->vtable)._66_set_text.methodPtr)
                        (tmp,**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (tmp->klass->vtable)._66_set_text.method);
              pUVar4 = (UnityEngine_UI_LayoutElement_o *)
                       UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              *layout = pUVar4;
              il2cpp_runtime_glue(layout,pUVar4);
              pUVar4 = *layout;
              if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (0,pUVar4,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
                pUVar4 = *layout;
                if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (0,pUVar4,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
                  return tmp;
                }
              }
            }
          }
        }
        goto LAB_04039a12;
      }
    }
  }
LAB_04039a17:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectLabel$$ApplySharedFont
// il2cpp: void PatreonEffects_NameEffectLabel__ApplySharedFont (TMPro_TextMeshProUGUI_o* tmp, const MethodInfo* method);
// 0x4039a30

void PatreonEffects_NameEffectLabel__ApplySharedFont
               (TMPro_TextMeshProUGUI_o *tmp,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  TMPro_TMP_SpriteAsset_o *pTVar5;
  
  if (DAT_0570439e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectLabel);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_init_method_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_init_method_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    DAT_0570439e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pIVar4 = UnityEngine_Resources__Load<object>("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar4;
      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_04039c50;
      TMPro_TMP_Text__set_font
                ((TMPro_TMP_Text_o *)tmp,
                 (TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pTVar5 = (TMPro_TMP_SpriteAsset_o *)
               UnityEngine_Resources__Load<object>("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar5 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar5 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar2 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar2 + 8) = pTVar5;
      il2cpp_runtime_glue(lVar2 + 8);
    }
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  ((TMPro_TMP_Text_o *)tmp,
                   *(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
LAB_04039c50:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$ApplyText
// il2cpp: void PatreonEffects_NameEffectLabel__ApplyText (TMPro_TextMeshProUGUI_o* tmp, UnityEngine_UI_LayoutElement_o* layout, System_String_o* content, const MethodInfo* method);
// 0x4038690

void PatreonEffects_NameEffectLabel__ApplyText
               (TMPro_TextMeshProUGUI_o *tmp,UnityEngine_UI_LayoutElement_o *layout,
               System_String_o *content,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  System_String_o *text;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar4;
  undefined4 uVar5;
  float local_38;
  
  if (DAT_0570439f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"|");
    DAT_0570439f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)layout,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(tmp->klass->vtable)._66_set_text.methodPtr)
                  (tmp,content,(tmp->klass->vtable)._66_set_text.method);
        bVar3 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          text = System_String__Concat(content,"|",(MethodInfo *)0x0);
          UVar1 = TMPro_TMP_Text__GetPreferredValues
                            ((TMPro_TMP_Text_o *)tmp,text,3.4028235e+38,3.4028235e+38,
                             (MethodInfo *)0x0);
          UVar2 = TMPro_TMP_Text__GetPreferredValues
                            ((TMPro_TMP_Text_o *)tmp,"|",3.4028235e+38,3.4028235e+38,
                             (MethodInfo *)0x0);
          if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_04038824;
          local_38 = UVar1.fields.x;
          local_38 = local_38 - UVar2.fields.x;
          if (local_38 <= 0.0) {
            local_38 = 0.0;
          }
          (*(layout->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (local_38,layout,(layout->klass->vtable)._36_set_preferredWidth.method);
          uVar5 = (*(tmp->klass->vtable)._85_get_preferredHeight.methodPtr)
                            (tmp,(tmp->klass->vtable)._85_get_preferredHeight.method);
          uVar4 = extraout_RDX_00;
        }
        else {
          if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_04038824;
          (*(layout->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (0,layout,(layout->klass->vtable)._36_set_preferredWidth.method);
          uVar5._0_1_ = (tmp->fields).m_spriteColor.fields.r;
          uVar5._1_1_ = (tmp->fields).m_spriteColor.fields.g;
          uVar5._2_1_ = (tmp->fields).m_spriteColor.fields.b;
          uVar5._3_1_ = (tmp->fields).m_spriteColor.fields.a;
          uVar4 = extraout_RDX;
        }
        vtable_dispatch = (layout->klass->vtable)._38_set_preferredHeight.methodPtr;
        (*vtable_dispatch)
                  (uVar5,layout,(layout->klass->vtable)._38_set_preferredHeight.method,uVar4,
                   vtable_dispatch);
        return;
      }
LAB_04038824:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$.ctor
// il2cpp: void PatreonEffects_NameEffectLabel___ctor (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x4039c60

void PatreonEffects_NameEffectLabel___ctor
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  (__this->fields)._prefix = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._prefix);
  (__this->fields)._name = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._name);
  (__this->fields)._suffix = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._suffix);
  (__this->fields)._fontSize = 18.0;
  (__this->fields)._color.fields.r = 1.0;
  (__this->fields)._color.fields.g = 1.0;
  (__this->fields)._color.fields.b = 1.0;
  (__this->fields)._color.fields.a = 1.0;
  (__this->fields)._alignment = 0x1001;
  *(undefined1 *)&(__this->fields)._richText = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


