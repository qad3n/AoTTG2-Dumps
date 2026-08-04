// Type: PatreonEffects.NameEffectLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectLabel.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectLabel$$get_prefix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_prefix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432dbb0

System_String_o *
PatreonEffects_NameEffectLabel__get_prefix(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._prefix;
}


// PatreonEffects.NameEffectLabel$$set_prefix
// il2cpp: void PatreonEffects_NameEffectLabel__set_prefix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x432dbc0

void PatreonEffects_NameEffectLabel__set_prefix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  undefined1 *puVar7;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar9;
  
  puVar7 = &stack0xfffffffffffffff8;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this == (PatreonEffects_NameEffectLabel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    pSVar5 = extraout_RDX;
  }
  else {
    (__this->fields)._prefix = value;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._prefix);
    pSVar5 = (__this->fields)._prefix;
    value = (System_String_o *)(__this->fields)._prefixLayout;
    puVar7 = (undefined1 *)register0x00000020;
    __this = (PatreonEffects_NameEffectLabel_o *)(__this->fields)._prefixTmp;
  }
  *(undefined8 *)(puVar7 + -8) = unaff_R15;
  *(undefined8 *)(puVar7 + -0x10) = unaff_R14;
  *(undefined8 *)(puVar7 + -0x18) = unaff_R12;
  *(undefined8 *)(puVar7 + -0x20) = unaff_RBX;
  if (g_data_057ae066 == '\0') {
    *(undefined8 *)(puVar7 + -0x40) = 0x432dc39;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar7 + -0x40) = 0x432dc45;
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057ae066 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar7 + -0x40) = 0x432dc64;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar7 + -0x40) = 0x432dc70;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar7 + -0x40) = 0x432dc85;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar7 + -0x40) = 0x432dc91;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if ((TMPro_TextMeshProUGUI_o *)__this != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar1 = (((TMPro_TextMeshProUGUI_o *)__this)->klass->vtable)._66_set_text.method;
        vtableDispatch = (((TMPro_TextMeshProUGUI_o *)__this)->klass->vtable)._66_set_text.methodPtr;
        *(undefined8 *)(puVar7 + -0x40) = 0x432dcc1;
        (*vtableDispatch)(__this,pSVar5,pMVar1);
        *(undefined8 *)(puVar7 + -0x40) = 0x432dccb;
        bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          *(undefined8 *)(puVar7 + -0x40) = 0x432dd11;
          pSVar5 = System_String__Concat_3ae5ba0(pSVar5,"|",(MethodInfo *)0x0);
          *(undefined8 *)(puVar7 + -0x40) = 0x432dd29;
          UVar3 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            ((TMPro_TMP_Text_o *)__this,pSVar5,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc;
          auVar2._0_4_ = UVar3.fields.x;
          auVar2._4_4_ = UVar3.fields.y;
          auVar2._12_4_ = extraout_XMM0_Dd;
          *(undefined1 (*) [16])(puVar7 + -0x38) = auVar2;
          *(undefined8 *)(puVar7 + -0x40) = 0x432dd45;
          UVar3 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            ((TMPro_TMP_Text_o *)__this,"|",3.4028235e+38,3.4028235e+38,
                             (MethodInfo *)0x0);
          if ((UnityEngine_UI_LayoutElement_o *)value == (UnityEngine_UI_LayoutElement_o *)0x0)
          goto label_0432dda4;
          fVar9 = *(float *)(puVar7 + -0x38) - UVar3.fields.x;
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          pMVar1 = (((UnityEngine_UI_LayoutElement_o *)value)->klass->vtable)._36_set_preferredWidth.method;
          vtableDispatch =
               (((UnityEngine_UI_LayoutElement_o *)value)->klass->vtable)._36_set_preferredWidth.methodPtr;
          *(undefined8 *)(puVar7 + -0x40) = 0x432dd6f;
          (*vtableDispatch)(fVar9,value,pMVar1);
          pMVar1 = (((TMPro_TextMeshProUGUI_o *)__this)->klass->vtable)._85_get_preferredHeight.method;
          vtableDispatch =
               (((TMPro_TextMeshProUGUI_o *)__this)->klass->vtable)._85_get_preferredHeight.methodPtr;
          *(undefined8 *)(puVar7 + -0x40) = 0x432dd83;
          uVar8 = (*vtableDispatch)(__this,pMVar1);
          uVar6 = extraout_RDX_01;
        }
        else {
          if ((UnityEngine_UI_LayoutElement_o *)value == (UnityEngine_UI_LayoutElement_o *)0x0)
          goto label_0432dda4;
          pMVar1 = (((UnityEngine_UI_LayoutElement_o *)value)->klass->vtable)._36_set_preferredWidth.method;
          vtableDispatch =
               (((UnityEngine_UI_LayoutElement_o *)value)->klass->vtable)._36_set_preferredWidth.methodPtr;
          *(undefined8 *)(puVar7 + -0x40) = 0x432dcee;
          (*vtableDispatch)(0,value,pMVar1);
          uVar8._0_1_ = (((TMPro_TextMeshProUGUI_o *)__this)->fields).m_spriteColor.fields.r;
          uVar8._1_1_ = (((TMPro_TextMeshProUGUI_o *)__this)->fields).m_spriteColor.fields.g;
          uVar8._2_1_ = (((TMPro_TextMeshProUGUI_o *)__this)->fields).m_spriteColor.fields.b;
          uVar8._3_1_ = (((TMPro_TextMeshProUGUI_o *)__this)->fields).m_spriteColor.fields.a;
          uVar6 = extraout_RDX_00;
        }
        vtableDispatch =
             (((UnityEngine_UI_LayoutElement_o *)value)->klass->vtable)._38_set_preferredHeight.methodPtr;
        (*vtableDispatch)
                  (uVar8,value,
                   (((UnityEngine_UI_LayoutElement_o *)value)->klass->vtable)._38_set_preferredHeight.method,
                   uVar6,vtableDispatch);
        return;
      }
label_0432dda4:
      *(undefined8 *)(puVar7 + -0x40) = 0x432dda9;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$get_nameText
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_nameText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432ddb0

System_String_o *
PatreonEffects_NameEffectLabel__get_nameText(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._name;
}


// PatreonEffects.NameEffectLabel$$set_nameText
// il2cpp: void PatreonEffects_NameEffectLabel__set_nameText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x432ddc0

void PatreonEffects_NameEffectLabel__set_nameText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._name = value;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._name);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,in_RCX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// PatreonEffects.NameEffectLabel$$get_suffix
// il2cpp: System_String_o* PatreonEffects_NameEffectLabel__get_suffix (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432de10

System_String_o *
PatreonEffects_NameEffectLabel__get_suffix(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._suffix;
}


// PatreonEffects.NameEffectLabel$$set_suffix
// il2cpp: void PatreonEffects_NameEffectLabel__set_suffix (PatreonEffects_NameEffectLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x432de20

void PatreonEffects_NameEffectLabel__set_suffix
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._suffix = value;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._suffix);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,in_RCX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// PatreonEffects.NameEffectLabel$$get_fontSize
// il2cpp: float PatreonEffects_NameEffectLabel__get_fontSize (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432de70

float PatreonEffects_NameEffectLabel__get_fontSize
                (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.NameEffectLabel$$set_fontSize
// il2cpp: void PatreonEffects_NameEffectLabel__set_fontSize (PatreonEffects_NameEffectLabel_o* __this, float value, const MethodInfo* method);
// 0x432de80

void PatreonEffects_NameEffectLabel__set_fontSize
               (PatreonEffects_NameEffectLabel_o *__this,float value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  MethodInfo *in_RCX;
  
  if (g_data_057ae05c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae05c = '\x01';
  }
  (__this->fields)._fontSize = value;
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432dfb8;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432dfb8;
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_0432dfb8:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,in_RCX);
  return;
}


// PatreonEffects.NameEffectLabel$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectLabel__get_color (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432dfc0

UnityEngine_Color_o
PatreonEffects_NameEffectLabel__get_color(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._color.fields;
}


// PatreonEffects.NameEffectLabel$$set_color
// il2cpp: void PatreonEffects_NameEffectLabel__set_color (PatreonEffects_NameEffectLabel_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x432dfd0

void PatreonEffects_NameEffectLabel__set_color
               (PatreonEffects_NameEffectLabel_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  PatreonEffects_NameEffectController_o *x;
  bool_conflict bVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  
  if (g_data_057ae05d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae05d = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432e132;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)(local_38,fVar3);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432e132;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)(local_38,fVar3);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    x = (__this->fields)._nameEffect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
label_0432e132:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$get_alignment
// il2cpp: int32_t PatreonEffects_NameEffectLabel__get_alignment (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432e140

int32_t PatreonEffects_NameEffectLabel__get_alignment
                  (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignment;
}


// PatreonEffects.NameEffectLabel$$set_alignment
// il2cpp: void PatreonEffects_NameEffectLabel__set_alignment (PatreonEffects_NameEffectLabel_o* __this, int32_t value, const MethodInfo* method);
// 0x432e150

void PatreonEffects_NameEffectLabel__set_alignment
               (PatreonEffects_NameEffectLabel_o *__this,int32_t value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae05e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae05e = '\x01';
  }
  (__this->fields)._alignment = value;
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432e245;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432e245;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
label_0432e245:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// PatreonEffects.NameEffectLabel$$get_richText
// il2cpp: bool PatreonEffects_NameEffectLabel__get_richText (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432e250

bool_conflict
PatreonEffects_NameEffectLabel__get_richText(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._richText);
}


// PatreonEffects.NameEffectLabel$$set_richText
// il2cpp: void PatreonEffects_NameEffectLabel__set_richText (PatreonEffects_NameEffectLabel_o* __this, bool value, const MethodInfo* method);
// 0x432e260

void PatreonEffects_NameEffectLabel__set_richText
               (PatreonEffects_NameEffectLabel_o *__this,bool_conflict value,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  MethodInfo *in_RCX;
  
  if (g_data_057ae05f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae05f = '\x01';
  }
  *(char *)&(__this->fields)._richText = (char)value;
  pTVar1 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._prefixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432e387;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value & 0xff,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._nameTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432e387;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value & 0xff,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._suffixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._suffixTmp;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_0432e387:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,value & 0xff,(MethodInfo *)0x0);
  }
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,in_RCX);
  PatreonEffects_NameEffectLabel__ApplyText
            ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,in_RCX);
  return;
}


// PatreonEffects.NameEffectLabel$$get_prefixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_prefixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432e390

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_prefixComponent
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._prefixTmp;
}


// PatreonEffects.NameEffectLabel$$get_nameComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_nameComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432e3a0

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_nameComponent(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._nameTmp;
}


// PatreonEffects.NameEffectLabel$$get_suffixComponent
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__get_suffixComponent (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432e3b0

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__get_suffixComponent
          (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._suffixTmp;
}


// PatreonEffects.NameEffectLabel$$SetFont
// il2cpp: void PatreonEffects_NameEffectLabel__SetFont (PatreonEffects_NameEffectLabel_o* __this, TMPro_TMP_FontAsset_o* font, const MethodInfo* method);
// 0x432e3c0

void PatreonEffects_NameEffectLabel__SetFont
               (PatreonEffects_NameEffectLabel_o *__this,TMPro_TMP_FontAsset_o *font,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o **ppUVar1;
  PatreonEffects_NameEffectController_o **ppPVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PatreonEffects_NameEffectController_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_CanvasRenderer_o *pUVar8;
  long *plVar9;
  UnityEngine_Object_o *pUVar10;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar11;
  UnityEngine_GameObject_o *pUVar12;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectSettings_o *settings;
  PatreonEffects_NameEffectLabel_o *pPVar13;
  PatreonEffects_NameEffectLabel_o *pPVar14;
  TMPro_TextMeshProUGUI_o *pTVar15;
  System_Type_array *components;
  System_Type_o *pSVar16;
  long lVar17;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar18;
  TMPro_TMP_Text_o *__this_02;
  TMPro_TMP_SpriteAsset_o *pTVar19;
  MethodInfo_255A020 **in_RCX;
  MethodInfo *pMVar20;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  long *extraout_RDX_00;
  System_String_o *pSVar21;
  MethodInfo_255A020 *name;
  PatreonEffects_NameEffectLabel_o *pPVar22;
  TMPro_TextMeshProUGUI_o *pTVar23;
  PatreonEffects_NameEffectLabel_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  undefined8 uVar24;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM2_Da;
  float in_XMM2_Db;
  float in_XMM3_Da;
  float in_XMM3_Db;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM6_Da;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  float fVar25;
  
  if (g_data_057ae060 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae060 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  pTVar15 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar21 = (System_String_o *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432e45c:
    pTVar15 = (__this->fields)._nameTmp;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_String_o *)0x0;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pTVar15 = (__this->fields)._nameTmp;
      if (pTVar15 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432e513;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar15,font,(MethodInfo *)0x0);
    }
    pTVar15 = (__this->fields)._suffixTmp;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar21 = (System_String_o *)0x0;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
label_0432e4d2:
      PatreonEffects_NameEffectLabel__ApplyText
                ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,
                 (MethodInfo *)in_RCX);
      PatreonEffects_NameEffectLabel__ApplyText
                ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,
                 (MethodInfo *)in_RCX);
      PatreonEffects_NameEffectLabel__ApplyText
                ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,
                 (MethodInfo *)in_RCX);
      return;
    }
    pTVar15 = (__this->fields)._suffixTmp;
    if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar15,font,(MethodInfo *)0x0);
      goto label_0432e4d2;
    }
  }
  else {
    pTVar15 = (__this->fields)._prefixTmp;
    if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar15,font,(MethodInfo *)0x0);
      goto label_0432e45c;
    }
  }
label_0432e513:
  pPVar22 = (PatreonEffects_NameEffectLabel_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (pSVar21 == (System_String_o *)0x0) {
    pSVar21 = (System_String_o *)**(ulong **)(g_data_057b9c00 + 0xb8);
  }
  if (pPVar22 != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (pPVar22->fields)._prefix = pSVar21;
    pMVar20 = (MethodInfo *)in_RCX;
    il2cpp_runtime_helper_022b4080(&(pPVar22->fields)._prefix);
    pSVar21 = extraout_RDX;
    if (extraout_RDX == (System_String_o *)0x0) {
      pSVar21 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    }
    (pPVar22->fields)._name = pSVar21;
    il2cpp_runtime_helper_022b4080(&(pPVar22->fields)._name,pSVar21);
    if ((MethodInfo *)in_RCX == (MethodInfo *)0x0) {
      in_RCX = (MethodInfo_255A020 **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (pPVar22->fields)._suffix = (System_String_o *)in_RCX;
    il2cpp_runtime_helper_022b4080(&(pPVar22->fields)._suffix,in_RCX);
    PatreonEffects_NameEffectLabel__ApplyText
              ((pPVar22->fields)._prefixTmp,(pPVar22->fields)._prefixLayout,(pPVar22->fields)._prefix,pMVar20)
    ;
    PatreonEffects_NameEffectLabel__ApplyText
              ((pPVar22->fields)._nameTmp,(pPVar22->fields)._nameLayout,(pPVar22->fields)._name,pMVar20);
    PatreonEffects_NameEffectLabel__ApplyText
              ((pPVar22->fields)._suffixTmp,(pPVar22->fields)._suffixLayout,(pPVar22->fields)._suffix,pMVar20)
    ;
    return;
  }
  uVar24 = il2cpp_runtime_helper_022b2c90();
  fVar25 = (float)((ulong)uVar24 >> 0x20);
  pTVar15 = (TMPro_TextMeshProUGUI_o *)((ulong)pSVar21 & 0xffffffff);
  if (g_data_057ae061 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae061 = '\x01';
  }
  pTVar23 = (pPVar22->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  if ((int)pSVar21 == 0) {
    PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar22,pMVar20);
    return;
  }
  pTVar23 = (TMPro_TextMeshProUGUI_o *)(pPVar22->fields)._nameEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppPVar2 = &(pPVar22->fields)._nameEffect;
  method_00 = (PatreonEffects_NameEffectController_o *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432e719:
    __this_00 = *ppPVar2;
    if (__this_00 != (PatreonEffects_NameEffectController_o *)0x0) {
      bVar11 = PatreonEffects_NameEffectController__FindText(__this_00,(MethodInfo *)method_00);
      if ((char)bVar11 != '\0') {
        *(undefined1 *)&(__this_00->fields).outlineActive = 0;
        bVar11 = PatreonEffects_NameEffectController__RefreshOriginalMaterial
                           (__this_00,(MethodInfo *)method_00);
        if ((char)bVar11 != '\0') {
          (__this_00->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
          method_00 = (PatreonEffects_NameEffectController_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).runtimeMat);
          *(undefined1 *)&(__this_00->fields).initialized = 0;
        }
      }
      settings = PatreonEffects_NameEffectPresets__GetPreset((int)pSVar21,(MethodInfo *)method_00);
      pTVar23 = pTVar15;
      if (9.9999994e-11 <=
          in_XMM1_Db * in_XMM1_Db + fVar25 * fVar25 + (float)uVar24 * (float)uVar24 + in_XMM1_Da * in_XMM1_Da)
      {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientA.fields.r = (float)(int)uVar24;
        (settings->fields).gradientA.fields.g = (float)(int)((ulong)uVar24 >> 0x20);
        (settings->fields).gradientA.fields.b = in_XMM1_Da;
        (settings->fields).gradientA.fields.a = in_XMM1_Db;
      }
      if (9.9999994e-11 <=
          in_XMM3_Db * in_XMM3_Db +
          in_XMM2_Db * in_XMM2_Db + in_XMM2_Da * in_XMM2_Da + in_XMM3_Da * in_XMM3_Da) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientB.fields.r = in_XMM2_Da;
        (settings->fields).gradientB.fields.g = in_XMM2_Db;
        (settings->fields).gradientB.fields.b = in_XMM3_Da;
        (settings->fields).gradientB.fields.a = in_XMM3_Db;
      }
      if (9.9999994e-11 <=
          in_XMM5_Db * in_XMM5_Db +
          in_XMM4_Db * in_XMM4_Db + in_XMM4_Da * in_XMM4_Da + in_XMM5_Da * in_XMM5_Da) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientC.fields.r = in_XMM4_Da;
        (settings->fields).gradientC.fields.g = in_XMM4_Db;
        (settings->fields).gradientC.fields.b = in_XMM5_Da;
        (settings->fields).gradientC.fields.a = in_XMM5_Db;
      }
      if (9.9999994e-11 <=
          in_XMM7_Db * in_XMM7_Db +
          in_XMM6_Db * in_XMM6_Db + in_XMM6_Da * in_XMM6_Da + in_XMM7_Da * in_XMM7_Da) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientD.fields.r = in_XMM6_Da;
        (settings->fields).gradientD.fields.g = in_XMM6_Db;
        (settings->fields).gradientD.fields.b = in_XMM7_Da;
        (settings->fields).gradientD.fields.a = in_XMM7_Db;
      }
      pTVar15 = (pPVar22->fields)._nameTmp;
      pTVar23 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar15->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
        pTVar23 = (TMPro_TextMeshProUGUI_o *)0x0;
        if (*ppPVar2 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppPVar2,settings,method_01);
          return;
        }
      }
    }
  }
  else {
    pTVar23 = (pPVar22->fields)._nameTmp;
    if (pTVar23 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar23,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        in_RCX = &MethodInfo_NameEffectController_AddComponent_NameEffectController;
        method_00 = (PatreonEffects_NameEffectController_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_NameEffectController_AddComponent_NameEffectController);
        *ppPVar2 = method_00;
        pTVar23 = (TMPro_TextMeshProUGUI_o *)ppPVar2;
        il2cpp_runtime_helper_022b4080();
        goto label_0432e719;
      }
    }
  }
label_0432e8d2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae062 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae062 = '\x01';
  }
  pUVar7 = (pTVar23->fields).m_OnDirtyMaterialCallback;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432e97f:
    pUVar8 = (pTVar23->fields).m_CanvasRenderer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    pUVar8 = (pTVar23->fields).m_CanvasRenderer;
    if (pUVar8 != (UnityEngine_CanvasRenderer_o *)0x0) {
      uVar3 = (pTVar23->fields).m_SkipMaterialUpdate;
      uVar4 = (pTVar23->fields).m_RaycastTargetCache;
      (**(code **)&pUVar8->klass[1]._2.naturalAligment)
                (uVar3,uVar4,pUVar8,pUVar8->klass[1].vtable._0_Equals.methodPtr);
      return;
    }
  }
  else {
    ppUVar1 = &(pTVar23->fields).m_OnDirtyMaterialCallback;
    if ((PatreonEffects_NameEffectController_o *)*ppUVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
      PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*ppUVar1,pMVar20);
      pUVar7 = *ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      *ppUVar1 = (UnityEngine_Events_UnityAction_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      goto label_0432e97f;
    }
  }
  pPVar22 = (PatreonEffects_NameEffectLabel_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae063 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Prefix");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Suffix");
    g_data_057ae063 = '\x01';
  }
  pTVar15 = (pPVar22->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  pPVar13 = (PatreonEffects_NameEffectLabel_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar22,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = (MethodInfo_255A020 *)0x0;
  pPVar14 = pPVar13;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pPVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432eb08:
    __this_03 = pPVar14;
    if (pPVar13 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pPVar13,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0.0,(MethodInfo *)0x0);
      pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar22,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = (MethodInfo_255A020 *)0x0;
      pPVar14 = pPVar13;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pPVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        name = (MethodInfo_255A020 *)0x0;
        __this_03 = pPVar22;
        pPVar14 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar22,(MethodInfo *)0x0);
        if (pPVar14 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0432ec4a;
        in_RCX = &MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        name = MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pPVar14,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
      }
      __this_03 = pPVar14;
      if (pPVar13 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar13,2,(MethodInfo *)0x0);
        UnityEngine_UI_ContentSizeFitter__set_verticalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar13,2,(MethodInfo *)0x0);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (pPVar22,"Prefix",&(pPVar22->fields)._prefixLayout,(MethodInfo *)in_RCX);
        (pPVar22->fields)._prefixTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(pPVar22->fields)._prefixTmp,pTVar15);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (pPVar22,"Name",&(pPVar22->fields)._nameLayout,(MethodInfo *)in_RCX);
        (pPVar22->fields)._nameTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(pPVar22->fields)._nameTmp,pTVar15);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (pPVar22,"Suffix",&(pPVar22->fields)._suffixLayout,(MethodInfo *)in_RCX);
        (pPVar22->fields)._suffixTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(pPVar22->fields)._suffixTmp,pTVar15);
        return;
      }
    }
  }
  else {
    name = (MethodInfo_255A020 *)0x0;
    __this_03 = pPVar22;
    pPVar14 = (PatreonEffects_NameEffectLabel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar22,(MethodInfo *)0x0);
    if (pPVar14 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      in_RCX = &MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      name = MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar14,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup)
      ;
      goto label_0432eb08;
    }
  }
label_0432ec4a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae064 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0432efc2:
    il2cpp_runtime_helper_022b2c90();
label_0432efc7:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar16 == (System_Type_o *)0x0) {
label_0432ed45:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar16;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar16 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar16 != (System_Type_o *)0x0) {
          lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
          if (lVar17 == 0) goto label_0432efcc;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar16;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSVar16 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if (pSVar16 != (System_Type_o *)0x0) {
            lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
            if (lVar17 == 0) goto label_0432efcc;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar16;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSVar16 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (pSVar16 != (System_Type_o *)0x0) {
              lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
              if (lVar17 == 0) goto label_0432efcc;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar16;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar16);
              pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440
                        (pUVar12,(System_String_o *)name,components,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                __this_01 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                  pMVar20 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
                  pTVar15 = (TMPro_TextMeshProUGUI_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (pUVar12,(MethodInfo_255A0F0 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  PatreonEffects_NameEffectLabel__ApplySharedFont(pTVar15,pMVar20);
                  if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)pTVar15,
                               (((UnityEngine_Vector2_o *)&(__this_03->fields)._fontSize)->fields).x,
                               (MethodInfo *)0x0);
                    uVar5 = (__this_03->fields)._color.fields.r;
                    uVar6 = (__this_03->fields)._color.fields.b;
                    (*(pTVar15->klass->vtable)._23_set_color.methodPtr)
                              (uVar5,uVar6,pTVar15,(pTVar15->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment
                              ((TMPro_TMP_Text_o *)pTVar15,(__this_03->fields)._alignment,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_richText
                              ((TMPro_TMP_Text_o *)pTVar15,(uint)*(byte *)&(__this_03->fields)._richText,
                               (MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar15,0,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar15,0,(MethodInfo *)0x0);
                    (*(pTVar15->klass->vtable)._66_set_text.methodPtr)
                              (pTVar15,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (pTVar15->klass->vtable)._66_set_text.method);
                    pIVar18 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    *extraout_RDX_00 = (long)pIVar18;
                    il2cpp_runtime_helper_022b4080(extraout_RDX_00);
                    if ((long *)*extraout_RDX_00 != (long *)0x0) {
                      (**(code **)(*(long *)*extraout_RDX_00 + 0x378))(0);
                      plVar9 = (long *)*extraout_RDX_00;
                      if (plVar9 != (long *)0x0) {
                        (**(code **)(*plVar9 + 0x398))(0,plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
                        return;
                      }
                    }
                  }
                }
              }
              goto label_0432efc2;
            }
          }
        }
      }
      goto label_0432efc7;
    }
    lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
    if (lVar17 != 0) goto label_0432ed45;
  }
label_0432efcc:
  __this_02 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pIVar18 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar18;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this_04 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (__this_02 == (TMPro_TMP_Text_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                (__this_02,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar10 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pTVar19 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar19 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar19 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar17 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar17 + 8) = pTVar19;
      il2cpp_runtime_helper_022b4080(lVar17 + 8);
    }
    __this_04 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  (__this_02,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this_04[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_04 + 1);
      __this_04[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
      __this_04[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields);
      *(undefined4 *)&__this_04[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this_04[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this_04[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this_04[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this_04[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this_04[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this_04[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$SetText
// il2cpp: void PatreonEffects_NameEffectLabel__SetText (PatreonEffects_NameEffectLabel_o* __this, System_String_o* prefix, System_String_o* name, System_String_o* suffix, const MethodInfo* method);
// 0x432e520

void PatreonEffects_NameEffectLabel__SetText
               (PatreonEffects_NameEffectLabel_o *__this,System_String_o *prefix,System_String_o *name,
               System_String_o *suffix,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o **ppUVar1;
  PatreonEffects_NameEffectController_o **ppPVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PatreonEffects_NameEffectController_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_CanvasRenderer_o *pUVar8;
  long *plVar9;
  UnityEngine_Object_o *pUVar10;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar11;
  UnityEngine_GameObject_o *pUVar12;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectSettings_o *settings;
  PatreonEffects_NameEffectLabel_o *pPVar13;
  PatreonEffects_NameEffectLabel_o *pPVar14;
  TMPro_TextMeshProUGUI_o *pTVar15;
  System_Type_array *components;
  System_Type_o *pSVar16;
  long lVar17;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar18;
  TMPro_TMP_Text_o *__this_02;
  TMPro_TMP_SpriteAsset_o *pTVar19;
  MethodInfo *pMVar20;
  MethodInfo_255A020 **method_01;
  MethodInfo *method_02;
  long *extraout_RDX;
  MethodInfo_255A020 *name_00;
  TMPro_TextMeshProUGUI_o *pTVar21;
  PatreonEffects_NameEffectLabel_o *__this_03;
  PatreonEffects_NameEffectLabel_o *__this_04;
  UnityEngine_MonoBehaviour_o *__this_05;
  undefined8 uVar22;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM2_Da;
  float in_XMM2_Db;
  float in_XMM3_Da;
  float in_XMM3_Db;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM6_Da;
  float in_XMM6_Db;
  float in_XMM7_Da;
  float in_XMM7_Db;
  float fVar23;
  
  if (prefix == (System_String_o *)0x0) {
    prefix = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this != (PatreonEffects_NameEffectLabel_o *)0x0) {
    (__this->fields)._prefix = prefix;
    pMVar20 = (MethodInfo *)suffix;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._prefix);
    if (name == (System_String_o *)0x0) {
      name = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (__this->fields)._name = name;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._name,name);
    if (suffix == (System_String_o *)0x0) {
      suffix = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (__this->fields)._suffix = suffix;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._suffix,suffix);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._prefixTmp,(__this->fields)._prefixLayout,(__this->fields)._prefix,pMVar20);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._nameTmp,(__this->fields)._nameLayout,(__this->fields)._name,pMVar20);
    PatreonEffects_NameEffectLabel__ApplyText
              ((__this->fields)._suffixTmp,(__this->fields)._suffixLayout,(__this->fields)._suffix,pMVar20);
    return;
  }
  uVar22 = il2cpp_runtime_helper_022b2c90();
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  pTVar15 = (TMPro_TextMeshProUGUI_o *)((ulong)prefix & 0xffffffff);
  method_01 = (MethodInfo_255A020 **)suffix;
  if (g_data_057ae061 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae061 = '\x01';
    method_01 = (MethodInfo_255A020 **)suffix;
  }
  pTVar21 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  if ((int)prefix == 0) {
    PatreonEffects_NameEffectLabel__ClearNameEffect(__this,pMVar20);
    return;
  }
  pTVar21 = (TMPro_TextMeshProUGUI_o *)(__this->fields)._nameEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppPVar2 = &(__this->fields)._nameEffect;
  method_00 = (PatreonEffects_NameEffectController_o *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432e719:
    __this_00 = *ppPVar2;
    if (__this_00 != (PatreonEffects_NameEffectController_o *)0x0) {
      bVar11 = PatreonEffects_NameEffectController__FindText(__this_00,(MethodInfo *)method_00);
      if ((char)bVar11 != '\0') {
        *(undefined1 *)&(__this_00->fields).outlineActive = 0;
        bVar11 = PatreonEffects_NameEffectController__RefreshOriginalMaterial
                           (__this_00,(MethodInfo *)method_00);
        if ((char)bVar11 != '\0') {
          (__this_00->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
          method_00 = (PatreonEffects_NameEffectController_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).runtimeMat);
          *(undefined1 *)&(__this_00->fields).initialized = 0;
        }
      }
      settings = PatreonEffects_NameEffectPresets__GetPreset((int)prefix,(MethodInfo *)method_00);
      pTVar21 = pTVar15;
      if (9.9999994e-11 <=
          in_XMM1_Db * in_XMM1_Db + fVar23 * fVar23 + (float)uVar22 * (float)uVar22 + in_XMM1_Da * in_XMM1_Da)
      {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientA.fields.r = (float)(int)uVar22;
        (settings->fields).gradientA.fields.g = (float)(int)((ulong)uVar22 >> 0x20);
        (settings->fields).gradientA.fields.b = in_XMM1_Da;
        (settings->fields).gradientA.fields.a = in_XMM1_Db;
      }
      if (9.9999994e-11 <=
          in_XMM3_Db * in_XMM3_Db +
          in_XMM2_Db * in_XMM2_Db + in_XMM2_Da * in_XMM2_Da + in_XMM3_Da * in_XMM3_Da) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientB.fields.r = in_XMM2_Da;
        (settings->fields).gradientB.fields.g = in_XMM2_Db;
        (settings->fields).gradientB.fields.b = in_XMM3_Da;
        (settings->fields).gradientB.fields.a = in_XMM3_Db;
      }
      if (9.9999994e-11 <=
          in_XMM5_Db * in_XMM5_Db +
          in_XMM4_Db * in_XMM4_Db + in_XMM4_Da * in_XMM4_Da + in_XMM5_Da * in_XMM5_Da) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientC.fields.r = in_XMM4_Da;
        (settings->fields).gradientC.fields.g = in_XMM4_Db;
        (settings->fields).gradientC.fields.b = in_XMM5_Da;
        (settings->fields).gradientC.fields.a = in_XMM5_Db;
      }
      if (9.9999994e-11 <=
          in_XMM7_Db * in_XMM7_Db +
          in_XMM6_Db * in_XMM6_Db + in_XMM6_Da * in_XMM6_Da + in_XMM7_Da * in_XMM7_Da) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientD.fields.r = in_XMM6_Da;
        (settings->fields).gradientD.fields.g = in_XMM6_Db;
        (settings->fields).gradientD.fields.b = in_XMM7_Da;
        (settings->fields).gradientD.fields.a = in_XMM7_Db;
      }
      pTVar15 = (__this->fields)._nameTmp;
      pTVar21 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar15->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
        pTVar21 = (TMPro_TextMeshProUGUI_o *)0x0;
        if (*ppPVar2 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppPVar2,settings,method_02);
          return;
        }
      }
    }
  }
  else {
    pTVar21 = (__this->fields)._nameTmp;
    if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar21,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        method_01 = &MethodInfo_NameEffectController_AddComponent_NameEffectController;
        method_00 = (PatreonEffects_NameEffectController_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_NameEffectController_AddComponent_NameEffectController);
        *ppPVar2 = method_00;
        pTVar21 = (TMPro_TextMeshProUGUI_o *)ppPVar2;
        il2cpp_runtime_helper_022b4080();
        goto label_0432e719;
      }
    }
  }
label_0432e8d2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae062 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae062 = '\x01';
  }
  pUVar7 = (pTVar21->fields).m_OnDirtyMaterialCallback;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432e97f:
    pUVar8 = (pTVar21->fields).m_CanvasRenderer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    pUVar8 = (pTVar21->fields).m_CanvasRenderer;
    if (pUVar8 != (UnityEngine_CanvasRenderer_o *)0x0) {
      uVar3 = (pTVar21->fields).m_SkipMaterialUpdate;
      uVar4 = (pTVar21->fields).m_RaycastTargetCache;
      (**(code **)&pUVar8->klass[1]._2.naturalAligment)
                (uVar3,uVar4,pUVar8,pUVar8->klass[1].vtable._0_Equals.methodPtr);
      return;
    }
  }
  else {
    ppUVar1 = &(pTVar21->fields).m_OnDirtyMaterialCallback;
    if ((PatreonEffects_NameEffectController_o *)*ppUVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
      PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*ppUVar1,pMVar20);
      pUVar7 = *ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      *ppUVar1 = (UnityEngine_Events_UnityAction_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      goto label_0432e97f;
    }
  }
  __this_03 = (PatreonEffects_NameEffectLabel_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae063 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Prefix");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Suffix");
    g_data_057ae063 = '\x01';
  }
  pTVar15 = (__this_03->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  pPVar13 = (PatreonEffects_NameEffectLabel_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name_00 = (MethodInfo_255A020 *)0x0;
  pPVar14 = pPVar13;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pPVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432eb08:
    __this_04 = pPVar14;
    if (pPVar13 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pPVar13,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0.0,(MethodInfo *)0x0);
      pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name_00 = (MethodInfo_255A020 *)0x0;
      pPVar14 = pPVar13;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pPVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        name_00 = (MethodInfo_255A020 *)0x0;
        __this_04 = __this_03;
        pPVar14 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        if (pPVar14 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0432ec4a;
        method_01 = &MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        name_00 = MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pPVar14,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
      }
      __this_04 = pPVar14;
      if (pPVar13 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar13,2,(MethodInfo *)0x0);
        UnityEngine_UI_ContentSizeFitter__set_verticalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar13,2,(MethodInfo *)0x0);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Prefix",&(__this_03->fields)._prefixLayout,(MethodInfo *)method_01
                            );
        (__this_03->fields)._prefixTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._prefixTmp,pTVar15);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Name",&(__this_03->fields)._nameLayout,(MethodInfo *)method_01);
        (__this_03->fields)._nameTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._nameTmp,pTVar15);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Suffix",&(__this_03->fields)._suffixLayout,(MethodInfo *)method_01
                            );
        (__this_03->fields)._suffixTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._suffixTmp,pTVar15);
        return;
      }
    }
  }
  else {
    name_00 = (MethodInfo_255A020 *)0x0;
    __this_04 = __this_03;
    pPVar14 = (PatreonEffects_NameEffectLabel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (pPVar14 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      method_01 = &MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      name_00 = MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar14,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup)
      ;
      goto label_0432eb08;
    }
  }
label_0432ec4a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae064 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0432efc2:
    il2cpp_runtime_helper_022b2c90();
label_0432efc7:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar16 == (System_Type_o *)0x0) {
label_0432ed45:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar16;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar16 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar16 != (System_Type_o *)0x0) {
          lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
          if (lVar17 == 0) goto label_0432efcc;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar16;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSVar16 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if (pSVar16 != (System_Type_o *)0x0) {
            lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
            if (lVar17 == 0) goto label_0432efcc;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar16;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSVar16 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (pSVar16 != (System_Type_o *)0x0) {
              lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
              if (lVar17 == 0) goto label_0432efcc;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar16;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar16);
              pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440
                        (pUVar12,(System_String_o *)name_00,components,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                __this_01 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                  pMVar20 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
                  pTVar15 = (TMPro_TextMeshProUGUI_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (pUVar12,(MethodInfo_255A0F0 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  PatreonEffects_NameEffectLabel__ApplySharedFont(pTVar15,pMVar20);
                  if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)pTVar15,
                               (((UnityEngine_Vector2_o *)&(__this_04->fields)._fontSize)->fields).x,
                               (MethodInfo *)0x0);
                    uVar5 = (__this_04->fields)._color.fields.r;
                    uVar6 = (__this_04->fields)._color.fields.b;
                    (*(pTVar15->klass->vtable)._23_set_color.methodPtr)
                              (uVar5,uVar6,pTVar15,(pTVar15->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment
                              ((TMPro_TMP_Text_o *)pTVar15,(__this_04->fields)._alignment,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_richText
                              ((TMPro_TMP_Text_o *)pTVar15,(uint)*(byte *)&(__this_04->fields)._richText,
                               (MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar15,0,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar15,0,(MethodInfo *)0x0);
                    (*(pTVar15->klass->vtable)._66_set_text.methodPtr)
                              (pTVar15,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (pTVar15->klass->vtable)._66_set_text.method);
                    pIVar18 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    *extraout_RDX = (long)pIVar18;
                    il2cpp_runtime_helper_022b4080(extraout_RDX);
                    if ((long *)*extraout_RDX != (long *)0x0) {
                      (**(code **)(*(long *)*extraout_RDX + 0x378))(0);
                      plVar9 = (long *)*extraout_RDX;
                      if (plVar9 != (long *)0x0) {
                        (**(code **)(*plVar9 + 0x398))(0,plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
                        return;
                      }
                    }
                  }
                }
              }
              goto label_0432efc2;
            }
          }
        }
      }
      goto label_0432efc7;
    }
    lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
    if (lVar17 != 0) goto label_0432ed45;
  }
label_0432efcc:
  __this_02 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pIVar18 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar18;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this_05 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (__this_02 == (TMPro_TMP_Text_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                (__this_02,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar10 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pTVar19 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar19 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar19 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar17 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar17 + 8) = pTVar19;
      il2cpp_runtime_helper_022b4080(lVar17 + 8);
    }
    __this_05 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  (__this_02,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this_05[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_05 + 1);
      __this_05[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_05[1].monitor);
      __this_05[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_05[1].fields);
      *(undefined4 *)&__this_05[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this_05[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this_05[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this_05[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this_05[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this_05[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this_05[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this_05,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$SetNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__SetNameEffect (PatreonEffects_NameEffectLabel_o* __this, int32_t effect, UnityEngine_Color_o a, UnityEngine_Color_o b, UnityEngine_Color_o c, UnityEngine_Color_o d, const MethodInfo* method);
// 0x432e600

void PatreonEffects_NameEffectLabel__SetNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,int32_t effect,UnityEngine_Color_o a,
               UnityEngine_Color_o b,UnityEngine_Color_o c,UnityEngine_Color_o d,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o **ppUVar1;
  PatreonEffects_NameEffectController_o **ppPVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PatreonEffects_NameEffectController_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_CanvasRenderer_o *pUVar8;
  long *plVar9;
  UnityEngine_Object_o *pUVar10;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar11;
  UnityEngine_GameObject_o *pUVar12;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectSettings_o *settings;
  PatreonEffects_NameEffectLabel_o *pPVar13;
  PatreonEffects_NameEffectLabel_o *pPVar14;
  TMPro_TextMeshProUGUI_o *pTVar15;
  System_Type_array *components;
  System_Type_o *pSVar16;
  long lVar17;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar18;
  TMPro_TMP_Text_o *__this_02;
  TMPro_TMP_SpriteAsset_o *pTVar19;
  MethodInfo_255A020 **in_RCX;
  MethodInfo *method_01;
  long *extraout_RDX;
  MethodInfo *pMVar20;
  MethodInfo_255A020 *name;
  TMPro_TextMeshProUGUI_o *pTVar21;
  PatreonEffects_NameEffectLabel_o *__this_03;
  PatreonEffects_NameEffectLabel_o *__this_04;
  UnityEngine_MonoBehaviour_o *__this_05;
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
  
  pTVar15 = (TMPro_TextMeshProUGUI_o *)(ulong)(uint)effect;
  if (g_data_057ae061 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae061 = '\x01';
  }
  pTVar21 = (__this->fields)._nameTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  if (effect == 0) {
    PatreonEffects_NameEffectLabel__ClearNameEffect(__this,pMVar20);
    return;
  }
  pTVar21 = (TMPro_TextMeshProUGUI_o *)(__this->fields)._nameEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppPVar2 = &(__this->fields)._nameEffect;
  method_00 = (PatreonEffects_NameEffectController_o *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432e719:
    __this_00 = *ppPVar2;
    if (__this_00 != (PatreonEffects_NameEffectController_o *)0x0) {
      bVar11 = PatreonEffects_NameEffectController__FindText(__this_00,(MethodInfo *)method_00);
      if ((char)bVar11 != '\0') {
        *(undefined1 *)&(__this_00->fields).outlineActive = 0;
        bVar11 = PatreonEffects_NameEffectController__RefreshOriginalMaterial
                           (__this_00,(MethodInfo *)method_00);
        if ((char)bVar11 != '\0') {
          (__this_00->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
          method_00 = (PatreonEffects_NameEffectController_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).runtimeMat);
          *(undefined1 *)&(__this_00->fields).initialized = 0;
        }
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
      pTVar21 = pTVar15;
      if (9.9999994e-11 <=
          fStack_a4 * fStack_a4 + fStack_94 * fStack_94 + local_98 * local_98 + local_a8 * local_a8) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientA.fields.r = local_98;
        (settings->fields).gradientA.fields.g = fStack_94;
        (settings->fields).gradientA.fields.b = local_a8;
        (settings->fields).gradientA.fields.a = fStack_a4;
      }
      if (9.9999994e-11 <=
          fStack_84 * fStack_84 + fStack_74 * fStack_74 + local_78 * local_78 + local_88 * local_88) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientB.fields.r = local_78;
        (settings->fields).gradientB.fields.g = fStack_74;
        (settings->fields).gradientB.fields.b = local_88;
        (settings->fields).gradientB.fields.a = fStack_84;
      }
      if (9.9999994e-11 <=
          fStack_64 * fStack_64 + fStack_54 * fStack_54 + local_58 * local_58 + local_68 * local_68) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientC.fields.r = local_58;
        (settings->fields).gradientC.fields.g = fStack_54;
        (settings->fields).gradientC.fields.b = local_68;
        (settings->fields).gradientC.fields.a = fStack_64;
      }
      if (9.9999994e-11 <=
          fStack_44 * fStack_44 + fStack_34 * fStack_34 + local_38 * local_38 + local_48 * local_48) {
        if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0432e8d2;
        (settings->fields).gradientD.fields.r = local_38;
        (settings->fields).gradientD.fields.g = fStack_34;
        (settings->fields).gradientD.fields.b = local_48;
        (settings->fields).gradientD.fields.a = fStack_44;
      }
      pTVar15 = (__this->fields)._nameTmp;
      pTVar21 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar15->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
        pTVar21 = (TMPro_TextMeshProUGUI_o *)0x0;
        if (*ppPVar2 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppPVar2,settings,method_01);
          return;
        }
      }
    }
  }
  else {
    pTVar21 = (__this->fields)._nameTmp;
    if (pTVar21 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar21,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        in_RCX = &MethodInfo_NameEffectController_AddComponent_NameEffectController;
        method_00 = (PatreonEffects_NameEffectController_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_NameEffectController_AddComponent_NameEffectController);
        *ppPVar2 = method_00;
        pTVar21 = (TMPro_TextMeshProUGUI_o *)ppPVar2;
        il2cpp_runtime_helper_022b4080();
        goto label_0432e719;
      }
    }
  }
label_0432e8d2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae062 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae062 = '\x01';
  }
  pUVar7 = (pTVar21->fields).m_OnDirtyMaterialCallback;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432e97f:
    pUVar8 = (pTVar21->fields).m_CanvasRenderer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    pUVar8 = (pTVar21->fields).m_CanvasRenderer;
    if (pUVar8 != (UnityEngine_CanvasRenderer_o *)0x0) {
      uVar3 = (pTVar21->fields).m_SkipMaterialUpdate;
      uVar4 = (pTVar21->fields).m_RaycastTargetCache;
      (**(code **)&pUVar8->klass[1]._2.naturalAligment)
                (uVar3,uVar4,pUVar8,pUVar8->klass[1].vtable._0_Equals.methodPtr);
      return;
    }
  }
  else {
    ppUVar1 = &(pTVar21->fields).m_OnDirtyMaterialCallback;
    if ((PatreonEffects_NameEffectController_o *)*ppUVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
      PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*ppUVar1,pMVar20);
      pUVar7 = *ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      *ppUVar1 = (UnityEngine_Events_UnityAction_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      goto label_0432e97f;
    }
  }
  __this_03 = (PatreonEffects_NameEffectLabel_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae063 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Prefix");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Suffix");
    g_data_057ae063 = '\x01';
  }
  pTVar15 = (__this_03->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  pPVar13 = (PatreonEffects_NameEffectLabel_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = (MethodInfo_255A020 *)0x0;
  pPVar14 = pPVar13;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pPVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_0432eb08:
    __this_04 = pPVar14;
    if (pPVar13 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pPVar13,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar13,0.0,(MethodInfo *)0x0);
      pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = (MethodInfo_255A020 *)0x0;
      pPVar14 = pPVar13;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pPVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        name = (MethodInfo_255A020 *)0x0;
        __this_04 = __this_03;
        pPVar14 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        if (pPVar14 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0432ec4a;
        in_RCX = &MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        name = MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pPVar14,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
      }
      __this_04 = pPVar14;
      if (pPVar13 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar13,2,(MethodInfo *)0x0);
        UnityEngine_UI_ContentSizeFitter__set_verticalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar13,2,(MethodInfo *)0x0);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Prefix",&(__this_03->fields)._prefixLayout,(MethodInfo *)in_RCX);
        (__this_03->fields)._prefixTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._prefixTmp,pTVar15);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Name",&(__this_03->fields)._nameLayout,(MethodInfo *)in_RCX);
        (__this_03->fields)._nameTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._nameTmp,pTVar15);
        pTVar15 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Suffix",&(__this_03->fields)._suffixLayout,(MethodInfo *)in_RCX);
        (__this_03->fields)._suffixTmp = pTVar15;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._suffixTmp,pTVar15);
        return;
      }
    }
  }
  else {
    name = (MethodInfo_255A020 *)0x0;
    __this_04 = __this_03;
    pPVar14 = (PatreonEffects_NameEffectLabel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (pPVar14 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      in_RCX = &MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      name = MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      pPVar13 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar14,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup)
      ;
      goto label_0432eb08;
    }
  }
label_0432ec4a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae064 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0432efc2:
    il2cpp_runtime_helper_022b2c90();
label_0432efc7:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar16 == (System_Type_o *)0x0) {
label_0432ed45:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar16;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar16 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar16 != (System_Type_o *)0x0) {
          lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
          if (lVar17 == 0) goto label_0432efcc;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar16;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSVar16 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if (pSVar16 != (System_Type_o *)0x0) {
            lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
            if (lVar17 == 0) goto label_0432efcc;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar16;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSVar16 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (pSVar16 != (System_Type_o *)0x0) {
              lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
              if (lVar17 == 0) goto label_0432efcc;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar16;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar16);
              pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440
                        (pUVar12,(System_String_o *)name,components,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                __this_01 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                  pMVar20 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
                  pTVar15 = (TMPro_TextMeshProUGUI_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (pUVar12,(MethodInfo_255A0F0 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  PatreonEffects_NameEffectLabel__ApplySharedFont(pTVar15,pMVar20);
                  if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)pTVar15,
                               (((UnityEngine_Vector2_o *)&(__this_04->fields)._fontSize)->fields).x,
                               (MethodInfo *)0x0);
                    uVar5 = (__this_04->fields)._color.fields.r;
                    uVar6 = (__this_04->fields)._color.fields.b;
                    (*(pTVar15->klass->vtable)._23_set_color.methodPtr)
                              (uVar5,uVar6,pTVar15,(pTVar15->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment
                              ((TMPro_TMP_Text_o *)pTVar15,(__this_04->fields)._alignment,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_richText
                              ((TMPro_TMP_Text_o *)pTVar15,(uint)*(byte *)&(__this_04->fields)._richText,
                               (MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar15,0,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar15,0,(MethodInfo *)0x0);
                    (*(pTVar15->klass->vtable)._66_set_text.methodPtr)
                              (pTVar15,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (pTVar15->klass->vtable)._66_set_text.method);
                    pIVar18 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    *extraout_RDX = (long)pIVar18;
                    il2cpp_runtime_helper_022b4080(extraout_RDX);
                    if ((long *)*extraout_RDX != (long *)0x0) {
                      (**(code **)(*(long *)*extraout_RDX + 0x378))(0);
                      plVar9 = (long *)*extraout_RDX;
                      if (plVar9 != (long *)0x0) {
                        (**(code **)(*plVar9 + 0x398))(0,plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
                        return;
                      }
                    }
                  }
                }
              }
              goto label_0432efc2;
            }
          }
        }
      }
      goto label_0432efc7;
    }
    lVar17 = il2cpp_runtime_helper_023051f0(pSVar16);
    if (lVar17 != 0) goto label_0432ed45;
  }
label_0432efcc:
  __this_02 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pUVar10 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pIVar18 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar18;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this_05 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (__this_02 == (TMPro_TMP_Text_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                (__this_02,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar10 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pTVar19 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar19 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar19 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar17 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar17 + 8) = pTVar19;
      il2cpp_runtime_helper_022b4080(lVar17 + 8);
    }
    __this_05 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  (__this_02,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this_05[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_05 + 1);
      __this_05[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_05[1].monitor);
      __this_05[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_05[1].fields);
      *(undefined4 *)&__this_05[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this_05[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this_05[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this_05[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this_05[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this_05[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this_05[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this_05,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$ClearNameEffect
// il2cpp: void PatreonEffects_NameEffectLabel__ClearNameEffect (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432e8e0

void PatreonEffects_NameEffectLabel__ClearNameEffect
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **ppPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  PatreonEffects_NameEffectController_o *pPVar6;
  long *plVar7;
  UnityEngine_Object_o *pUVar8;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar9;
  PatreonEffects_NameEffectLabel_o *pPVar10;
  PatreonEffects_NameEffectLabel_o *pPVar11;
  TMPro_TextMeshProUGUI_o *pTVar12;
  System_Type_array *components;
  System_Type_o *pSVar13;
  long lVar14;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar15;
  TMPro_TMP_Text_o *__this_02;
  TMPro_TMP_SpriteAsset_o *pTVar16;
  MethodInfo_255A020 **in_RCX;
  long *extraout_RDX;
  MethodInfo *pMVar17;
  MethodInfo_255A020 *name;
  PatreonEffects_NameEffectLabel_o *__this_03;
  PatreonEffects_NameEffectLabel_o *__this_04;
  UnityEngine_MonoBehaviour_o *__this_05;
  
  if (g_data_057ae062 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae062 = '\x01';
  }
  pPVar6 = (__this->fields)._nameEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_0432e97f:
    pTVar12 = (__this->fields)._nameTmp;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pTVar12 = (__this->fields)._nameTmp;
    if (pTVar12 != (TMPro_TextMeshProUGUI_o *)0x0) {
      uVar2 = (__this->fields)._color.fields.r;
      uVar4._0_4_ = (__this->fields)._color.fields.b;
      uVar4._4_4_ = (__this->fields)._color.fields.a;
      (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
                (uVar2,uVar4,pTVar12,(pTVar12->klass->vtable)._23_set_color.method);
      return;
    }
  }
  else {
    ppPVar1 = &(__this->fields)._nameEffect;
    if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
      PatreonEffects_NameEffectController__Clear(*ppPVar1,pMVar17);
      pPVar6 = *ppPVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pPVar6,(MethodInfo *)0x0);
      *ppPVar1 = (PatreonEffects_NameEffectController_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppPVar1);
      goto label_0432e97f;
    }
  }
  __this_03 = (PatreonEffects_NameEffectLabel_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae063 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Prefix");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Suffix");
    g_data_057ae063 = '\x01';
  }
  pTVar12 = (__this_03->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  pPVar10 = (PatreonEffects_NameEffectLabel_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = (MethodInfo_255A020 *)0x0;
  pPVar11 = pPVar10;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_0432eb08:
    __this_04 = pPVar11;
    if (pPVar10 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pPVar10,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar10,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar10,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar10,0.0,(MethodInfo *)0x0);
      pPVar10 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = (MethodInfo_255A020 *)0x0;
      pPVar11 = pPVar10;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pPVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        name = (MethodInfo_255A020 *)0x0;
        __this_04 = __this_03;
        pPVar11 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        if (pPVar11 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0432ec4a;
        in_RCX = &MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        name = MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        pPVar10 = (PatreonEffects_NameEffectLabel_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pPVar11,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
      }
      __this_04 = pPVar11;
      if (pPVar10 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar10,2,(MethodInfo *)0x0);
        UnityEngine_UI_ContentSizeFitter__set_verticalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar10,2,(MethodInfo *)0x0);
        pTVar12 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Prefix",&(__this_03->fields)._prefixLayout,(MethodInfo *)in_RCX);
        (__this_03->fields)._prefixTmp = pTVar12;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._prefixTmp,pTVar12);
        pTVar12 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Name",&(__this_03->fields)._nameLayout,(MethodInfo *)in_RCX);
        (__this_03->fields)._nameTmp = pTVar12;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._nameTmp,pTVar12);
        pTVar12 = PatreonEffects_NameEffectLabel__CreateSegment
                            (__this_03,"Suffix",&(__this_03->fields)._suffixLayout,(MethodInfo *)in_RCX);
        (__this_03->fields)._suffixTmp = pTVar12;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._suffixTmp,pTVar12);
        return;
      }
    }
  }
  else {
    name = (MethodInfo_255A020 *)0x0;
    __this_04 = __this_03;
    pPVar11 = (PatreonEffects_NameEffectLabel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (pPVar11 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      in_RCX = &MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      name = MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      pPVar10 = (PatreonEffects_NameEffectLabel_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar11,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup)
      ;
      goto label_0432eb08;
    }
  }
label_0432ec4a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae064 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0432efc2:
    il2cpp_runtime_helper_022b2c90();
label_0432efc7:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar13 == (System_Type_o *)0x0) {
label_0432ed45:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar13;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar13 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar13 != (System_Type_o *)0x0) {
          lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
          if (lVar14 == 0) goto label_0432efcc;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar13;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSVar13 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if (pSVar13 != (System_Type_o *)0x0) {
            lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
            if (lVar14 == 0) goto label_0432efcc;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar13;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSVar13 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (pSVar13 != (System_Type_o *)0x0) {
              lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
              if (lVar14 == 0) goto label_0432efcc;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar13;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar13);
              __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440
                        (__this_00,(System_String_o *)name,components,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                  pMVar17 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
                  pTVar12 = (TMPro_TextMeshProUGUI_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (__this_00,(MethodInfo_255A0F0 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  PatreonEffects_NameEffectLabel__ApplySharedFont(pTVar12,pMVar17);
                  if (pTVar12 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)pTVar12,
                               (((UnityEngine_Vector2_o *)&(__this_04->fields)._fontSize)->fields).x,
                               (MethodInfo *)0x0);
                    uVar3 = (__this_04->fields)._color.fields.r;
                    uVar5._0_4_ = (__this_04->fields)._color.fields.b;
                    uVar5._4_4_ = (__this_04->fields)._color.fields.a;
                    (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
                              (uVar3,uVar5,pTVar12,(pTVar12->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment
                              ((TMPro_TMP_Text_o *)pTVar12,(__this_04->fields)._alignment,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_richText
                              ((TMPro_TMP_Text_o *)pTVar12,(uint)*(byte *)&(__this_04->fields)._richText,
                               (MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar12,0,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar12,0,(MethodInfo *)0x0);
                    (*(pTVar12->klass->vtable)._66_set_text.methodPtr)
                              (pTVar12,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (pTVar12->klass->vtable)._66_set_text.method);
                    pIVar15 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    *extraout_RDX = (long)pIVar15;
                    il2cpp_runtime_helper_022b4080(extraout_RDX);
                    if ((long *)*extraout_RDX != (long *)0x0) {
                      (**(code **)(*(long *)*extraout_RDX + 0x378))(0);
                      plVar7 = (long *)*extraout_RDX;
                      if (plVar7 != (long *)0x0) {
                        (**(code **)(*plVar7 + 0x398))(0,plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
                        return;
                      }
                    }
                  }
                }
              }
              goto label_0432efc2;
            }
          }
        }
      }
      goto label_0432efc7;
    }
    lVar14 = il2cpp_runtime_helper_023051f0(pSVar13);
    if (lVar14 != 0) goto label_0432ed45;
  }
label_0432efcc:
  __this_02 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pUVar8 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pIVar15 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar15;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this_05 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (__this_02 == (TMPro_TMP_Text_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                (__this_02,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar8 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pTVar16 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar16 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar16 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar14 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar14 + 8) = pTVar16;
      il2cpp_runtime_helper_022b4080(lVar14 + 8);
    }
    __this_05 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  (__this_02,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this_05[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_05 + 1);
      __this_05[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_05[1].monitor);
      __this_05[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_05[1].fields);
      *(undefined4 *)&__this_05[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this_05[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this_05[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this_05[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this_05[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this_05[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this_05[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this_05,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$Awake
// il2cpp: void PatreonEffects_NameEffectLabel__Awake (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432e9f0

void PatreonEffects_NameEffectLabel__Awake(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  UnityEngine_Object_o *pUVar4;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  PatreonEffects_NameEffectLabel_o *pPVar6;
  PatreonEffects_NameEffectLabel_o *pPVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  System_Type_array *components;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar11;
  TMPro_TMP_Text_o *__this_02;
  TMPro_TMP_SpriteAsset_o *pTVar12;
  MethodInfo_255A020 **in_RCX;
  long *extraout_RDX;
  MethodInfo_255A020 *name;
  MethodInfo *method_00;
  PatreonEffects_NameEffectLabel_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  
  if (g_data_057ae063 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Prefix");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Suffix");
    g_data_057ae063 = '\x01';
  }
  pTVar8 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pPVar6 = (PatreonEffects_NameEffectLabel_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = (MethodInfo_255A020 *)0x0;
  pPVar7 = pPVar6;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0432eb08:
    __this_03 = pPVar7;
    if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pPVar6,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar6,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar6,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar6,0.0,(MethodInfo *)0x0);
      pPVar6 = (PatreonEffects_NameEffectLabel_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = (MethodInfo_255A020 *)0x0;
      pPVar7 = pPVar6;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pPVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        name = (MethodInfo_255A020 *)0x0;
        __this_03 = __this;
        pPVar7 = (PatreonEffects_NameEffectLabel_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pPVar7 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0432ec4a;
        in_RCX = &MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        name = MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        pPVar6 = (PatreonEffects_NameEffectLabel_o *)
                 UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar7,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter)
        ;
      }
      __this_03 = pPVar7;
      if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar6,2,(MethodInfo *)0x0);
        UnityEngine_UI_ContentSizeFitter__set_verticalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar6,2,(MethodInfo *)0x0);
        pTVar8 = PatreonEffects_NameEffectLabel__CreateSegment
                           (__this,"Prefix",&(__this->fields)._prefixLayout,(MethodInfo *)in_RCX);
        (__this->fields)._prefixTmp = pTVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._prefixTmp,pTVar8);
        pTVar8 = PatreonEffects_NameEffectLabel__CreateSegment
                           (__this,"Name",&(__this->fields)._nameLayout,(MethodInfo *)in_RCX);
        (__this->fields)._nameTmp = pTVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._nameTmp,pTVar8);
        pTVar8 = PatreonEffects_NameEffectLabel__CreateSegment
                           (__this,"Suffix",&(__this->fields)._suffixLayout,(MethodInfo *)in_RCX);
        (__this->fields)._suffixTmp = pTVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._suffixTmp,pTVar8);
        return;
      }
    }
  }
  else {
    name = (MethodInfo_255A020 *)0x0;
    __this_03 = __this;
    pPVar7 = (PatreonEffects_NameEffectLabel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      in_RCX = &MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      name = MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      pPVar6 = (PatreonEffects_NameEffectLabel_o *)
               UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar7,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
      goto label_0432eb08;
    }
  }
label_0432ec4a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae064 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0432efc2:
    il2cpp_runtime_helper_022b2c90();
label_0432efc7:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar9 == (System_Type_o *)0x0) {
label_0432ed45:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar9;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar9 != (System_Type_o *)0x0) {
          lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
          if (lVar10 == 0) goto label_0432efcc;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar9;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSVar9 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if (pSVar9 != (System_Type_o *)0x0) {
            lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
            if (lVar10 == 0) goto label_0432efcc;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar9;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (pSVar9 != (System_Type_o *)0x0) {
              lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
              if (lVar10 == 0) goto label_0432efcc;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar9;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar9);
              __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440
                        (__this_00,(System_String_o *)name,components,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                  method_00 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
                  pTVar8 = (TMPro_TextMeshProUGUI_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,(MethodInfo_255A0F0 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  PatreonEffects_NameEffectLabel__ApplySharedFont(pTVar8,method_00);
                  if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)pTVar8,
                               (((UnityEngine_Vector2_o *)&(__this_03->fields)._fontSize)->fields).x,
                               (MethodInfo *)0x0);
                    uVar1 = (__this_03->fields)._color.fields.r;
                    uVar2._0_4_ = (__this_03->fields)._color.fields.b;
                    uVar2._4_4_ = (__this_03->fields)._color.fields.a;
                    (*(pTVar8->klass->vtable)._23_set_color.methodPtr)
                              (uVar1,uVar2,pTVar8,(pTVar8->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment
                              ((TMPro_TMP_Text_o *)pTVar8,(__this_03->fields)._alignment,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_richText
                              ((TMPro_TMP_Text_o *)pTVar8,(uint)*(byte *)&(__this_03->fields)._richText,
                               (MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar8,0,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar8,0,(MethodInfo *)0x0);
                    (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
                              (pTVar8,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (pTVar8->klass->vtable)._66_set_text.method);
                    pIVar11 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    *extraout_RDX = (long)pIVar11;
                    il2cpp_runtime_helper_022b4080(extraout_RDX);
                    if ((long *)*extraout_RDX != (long *)0x0) {
                      (**(code **)(*(long *)*extraout_RDX + 0x378))(0);
                      plVar3 = (long *)*extraout_RDX;
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x398))(0,plVar3,*(undefined8 *)(*plVar3 + 0x3a0));
                        return;
                      }
                    }
                  }
                }
              }
              goto label_0432efc2;
            }
          }
        }
      }
      goto label_0432efc7;
    }
    lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
    if (lVar10 != 0) goto label_0432ed45;
  }
label_0432efcc:
  __this_02 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pIVar11 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar11;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this_04 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (__this_02 == (TMPro_TMP_Text_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                (__this_02,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar4 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pTVar12 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar12 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar12 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar10 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar10 + 8) = pTVar12;
      il2cpp_runtime_helper_022b4080(lVar10 + 8);
    }
    __this_04 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  (__this_02,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this_04[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_04 + 1);
      __this_04[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
      __this_04[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields);
      *(undefined4 *)&__this_04[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this_04[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this_04[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this_04[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this_04[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this_04[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this_04[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$BuildIfNeeded
// il2cpp: void PatreonEffects_NameEffectLabel__BuildIfNeeded (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432ea00

void PatreonEffects_NameEffectLabel__BuildIfNeeded
               (PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  UnityEngine_Object_o *pUVar4;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  PatreonEffects_NameEffectLabel_o *pPVar6;
  PatreonEffects_NameEffectLabel_o *pPVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  System_Type_array *components;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar11;
  TMPro_TMP_Text_o *__this_02;
  TMPro_TMP_SpriteAsset_o *pTVar12;
  MethodInfo_255A020 **in_RCX;
  long *extraout_RDX;
  MethodInfo_255A020 *name;
  MethodInfo *method_00;
  PatreonEffects_NameEffectLabel_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  
  if (g_data_057ae063 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Prefix");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Suffix");
    g_data_057ae063 = '\x01';
  }
  pTVar8 = (__this->fields)._prefixTmp;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pPVar6 = (PatreonEffects_NameEffectLabel_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = (MethodInfo_255A020 *)0x0;
  pPVar7 = pPVar6;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0432eb08:
    __this_03 = pPVar7;
    if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pPVar6,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar6,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar6,0,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pPVar6,0.0,(MethodInfo *)0x0);
      pPVar6 = (PatreonEffects_NameEffectLabel_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      name = (MethodInfo_255A020 *)0x0;
      pPVar7 = pPVar6;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pPVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        name = (MethodInfo_255A020 *)0x0;
        __this_03 = __this;
        pPVar7 = (PatreonEffects_NameEffectLabel_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pPVar7 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_0432ec4a;
        in_RCX = &MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        name = MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter;
        pPVar6 = (PatreonEffects_NameEffectLabel_o *)
                 UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar7,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter)
        ;
      }
      __this_03 = pPVar7;
      if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar6,2,(MethodInfo *)0x0);
        UnityEngine_UI_ContentSizeFitter__set_verticalFit
                  ((UnityEngine_UI_ContentSizeFitter_o *)pPVar6,2,(MethodInfo *)0x0);
        pTVar8 = PatreonEffects_NameEffectLabel__CreateSegment
                           (__this,"Prefix",&(__this->fields)._prefixLayout,(MethodInfo *)in_RCX);
        (__this->fields)._prefixTmp = pTVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._prefixTmp,pTVar8);
        pTVar8 = PatreonEffects_NameEffectLabel__CreateSegment
                           (__this,"Name",&(__this->fields)._nameLayout,(MethodInfo *)in_RCX);
        (__this->fields)._nameTmp = pTVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._nameTmp,pTVar8);
        pTVar8 = PatreonEffects_NameEffectLabel__CreateSegment
                           (__this,"Suffix",&(__this->fields)._suffixLayout,(MethodInfo *)in_RCX);
        (__this->fields)._suffixTmp = pTVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._suffixTmp,pTVar8);
        return;
      }
    }
  }
  else {
    name = (MethodInfo_255A020 *)0x0;
    __this_03 = __this;
    pPVar7 = (PatreonEffects_NameEffectLabel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      in_RCX = &MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      name = MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup;
      pPVar6 = (PatreonEffects_NameEffectLabel_o *)
               UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pPVar7,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
      goto label_0432eb08;
    }
  }
label_0432ec4a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae064 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0432efc2:
    il2cpp_runtime_helper_022b2c90();
label_0432efc7:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar9 == (System_Type_o *)0x0) {
label_0432ed45:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar9;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar9 != (System_Type_o *)0x0) {
          lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
          if (lVar10 == 0) goto label_0432efcc;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar9;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSVar9 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if (pSVar9 != (System_Type_o *)0x0) {
            lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
            if (lVar10 == 0) goto label_0432efcc;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar9;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (pSVar9 != (System_Type_o *)0x0) {
              lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
              if (lVar10 == 0) goto label_0432efcc;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar9;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar9);
              __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440
                        (__this_00,(System_String_o *)name,components,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                  method_00 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
                  pTVar8 = (TMPro_TextMeshProUGUI_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,(MethodInfo_255A0F0 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  PatreonEffects_NameEffectLabel__ApplySharedFont(pTVar8,method_00);
                  if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)pTVar8,
                               (((UnityEngine_Vector2_o *)&(__this_03->fields)._fontSize)->fields).x,
                               (MethodInfo *)0x0);
                    uVar1 = (__this_03->fields)._color.fields.r;
                    uVar2._0_4_ = (__this_03->fields)._color.fields.b;
                    uVar2._4_4_ = (__this_03->fields)._color.fields.a;
                    (*(pTVar8->klass->vtable)._23_set_color.methodPtr)
                              (uVar1,uVar2,pTVar8,(pTVar8->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment
                              ((TMPro_TMP_Text_o *)pTVar8,(__this_03->fields)._alignment,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_richText
                              ((TMPro_TMP_Text_o *)pTVar8,(uint)*(byte *)&(__this_03->fields)._richText,
                               (MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar8,0,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar8,0,(MethodInfo *)0x0);
                    (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
                              (pTVar8,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (pTVar8->klass->vtable)._66_set_text.method);
                    pIVar11 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    *extraout_RDX = (long)pIVar11;
                    il2cpp_runtime_helper_022b4080(extraout_RDX);
                    if ((long *)*extraout_RDX != (long *)0x0) {
                      (**(code **)(*(long *)*extraout_RDX + 0x378))(0);
                      plVar3 = (long *)*extraout_RDX;
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x398))(0,plVar3,*(undefined8 *)(*plVar3 + 0x3a0));
                        return;
                      }
                    }
                  }
                }
              }
              goto label_0432efc2;
            }
          }
        }
      }
      goto label_0432efc7;
    }
    lVar10 = il2cpp_runtime_helper_023051f0(pSVar9);
    if (lVar10 != 0) goto label_0432ed45;
  }
label_0432efcc:
  __this_02 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pIVar11 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar11;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this_04 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (__this_02 == (TMPro_TMP_Text_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                (__this_02,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar4 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pTVar12 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar12 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar12 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar10 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar10 + 8) = pTVar12;
      il2cpp_runtime_helper_022b4080(lVar10 + 8);
    }
    __this_04 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  (__this_02,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this_04[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_04 + 1);
      __this_04[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
      __this_04[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields);
      *(undefined4 *)&__this_04[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this_04[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this_04[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this_04[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this_04[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this_04[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this_04[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$CreateSegment
// il2cpp: TMPro_TextMeshProUGUI_o* PatreonEffects_NameEffectLabel__CreateSegment (PatreonEffects_NameEffectLabel_o* __this, System_String_o* name, UnityEngine_UI_LayoutElement_o** layout, const MethodInfo* method);
// 0x432ec50

TMPro_TextMeshProUGUI_o *
PatreonEffects_NameEffectLabel__CreateSegment
          (PatreonEffects_NameEffectLabel_o *__this,System_String_o *name,
          UnityEngine_UI_LayoutElement_o **layout,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  TMPro_TextMeshProUGUI_o *pTVar7;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  TMPro_TMP_Text_o *__this_02;
  undefined4 extraout_var;
  Il2CppObject *pIVar9;
  TMPro_TMP_SpriteAsset_o *pTVar10;
  undefined4 extraout_var_00;
  TMPro_TextMeshProUGUI_o *extraout_RAX;
  TMPro_TextMeshProUGUI_o *extraout_RAX_00;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_03;
  
  if (g_data_057ae064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057ae064 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0432efc2:
    il2cpp_runtime_helper_022b2c90();
label_0432efc7:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar5 == (System_Type_o *)0x0) {
label_0432ed45:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar5;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar5 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar5 != (System_Type_o *)0x0) {
          lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
          if (lVar6 == 0) goto label_0432efcc;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar5;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if (pSVar5 != (System_Type_o *)0x0) {
            lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
            if (lVar6 == 0) goto label_0432efcc;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar5;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSVar5 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (pSVar5 != (System_Type_o *)0x0) {
              lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
              if (lVar6 == 0) goto label_0432efcc;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar5;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar5);
              __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor_4dfc440(__this_00,name,components,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                parent = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                  method_00 = MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI;
                  pTVar7 = (TMPro_TextMeshProUGUI_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,(MethodInfo_255A0F0 *)MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  PatreonEffects_NameEffectLabel__ApplySharedFont(pTVar7,method_00);
                  if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontSize
                              ((TMPro_TMP_Text_o *)pTVar7,(__this->fields)._fontSize,(MethodInfo *)0x0);
                    uVar1 = (__this->fields)._color.fields.r;
                    uVar2._0_4_ = (__this->fields)._color.fields.b;
                    uVar2._4_4_ = (__this->fields)._color.fields.a;
                    (*(pTVar7->klass->vtable)._23_set_color.methodPtr)
                              (uVar1,uVar2,pTVar7,(pTVar7->klass->vtable)._23_set_color.method);
                    TMPro_TMP_Text__set_alignment
                              ((TMPro_TMP_Text_o *)pTVar7,(__this->fields)._alignment,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_richText
                              ((TMPro_TMP_Text_o *)pTVar7,(uint)(byte)(__this->fields)._richText,
                               (MethodInfo *)0x0);
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar7,0,(MethodInfo *)0x0);
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar7,0,(MethodInfo *)0x0);
                    (*(pTVar7->klass->vtable)._66_set_text.methodPtr)
                              (pTVar7,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (pTVar7->klass->vtable)._66_set_text.method);
                    pUVar8 = (UnityEngine_UI_LayoutElement_o *)
                             UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    *layout = pUVar8;
                    il2cpp_runtime_helper_022b4080(layout);
                    if (*layout != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*((*layout)->klass->vtable)._36_set_preferredWidth.methodPtr)(0);
                      pUVar8 = *layout;
                      if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                        (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                                  (0,pUVar8,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
                        return pTVar7;
                      }
                    }
                  }
                }
              }
              goto label_0432efc2;
            }
          }
        }
      }
      goto label_0432efc7;
    }
    lVar6 = il2cpp_runtime_helper_023051f0(pSVar5);
    if (lVar6 != 0) goto label_0432ed45;
  }
label_0432efcc:
  __this_02 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pTVar7 = (TMPro_TextMeshProUGUI_o *)CONCAT44(extraout_var,bVar4);
  if ((char)bVar4 == '\0') {
    pUVar3 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pIVar9 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar9;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this_03 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (__this_02 == (TMPro_TMP_Text_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                (__this_02,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),(MethodInfo *)0x0);
    }
    pUVar3 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pTVar10 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar10 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar10 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar6 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar6 + 8) = pTVar10;
      il2cpp_runtime_helper_022b4080(lVar6 + 8);
    }
    __this_03 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pTVar7 = (TMPro_TextMeshProUGUI_o *)CONCAT44(extraout_var_00,bVar4);
    if ((char)bVar4 != '\0') {
      if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  (__this_02,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return extraout_RAX;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this_03[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this_03 + 1);
      __this_03[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
      __this_03[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this_03[1].fields);
      *(undefined4 *)&__this_03[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this_03[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this_03[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this_03[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this_03[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this_03[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this_03[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this_03,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  return pTVar7;
}


// PatreonEffects.NameEffectLabel$$ApplySharedFont
// il2cpp: void PatreonEffects_NameEffectLabel__ApplySharedFont (TMPro_TextMeshProUGUI_o* tmp, const MethodInfo* method);
// 0x432efe0

void PatreonEffects_NameEffectLabel__ApplySharedFont(TMPro_TextMeshProUGUI_o *tmp,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  TMPro_TMP_SpriteAsset_o *pTVar5;
  UnityEngine_MonoBehaviour_o *__this;
  
  if (g_data_057ae065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
    g_data_057ae065 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pIVar4 = UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
      **(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8) = pIVar4;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_NameEffectLabel + 0xb8));
    }
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0432f200;
      TMPro_TMP_Text__set_font
                ((TMPro_TMP_Text_o *)tmp,(TMPro_TMP_FontAsset_o *)**(undefined8 **)(TypeInfo_NameEffectLabel + 0xb8),
                 (MethodInfo *)0x0);
    }
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pTVar5 = (TMPro_TMP_SpriteAsset_o *)UnityEngine_Resources__Load_object_("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
      if (pTVar5 == (TMPro_TMP_SpriteAsset_o *)0x0) {
        pTVar5 = TMPro_TMP_Settings__get_defaultSpriteAsset((MethodInfo *)0x0);
      }
      lVar2 = *(long *)(TypeInfo_NameEffectLabel + 0xb8);
      *(TMPro_TMP_SpriteAsset_o **)(lVar2 + 8) = pTVar5;
      il2cpp_runtime_helper_022b4080(lVar2 + 8);
    }
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset
                  ((TMPro_TMP_Text_o *)tmp,*(TMPro_TMP_SpriteAsset_o **)(*(long *)(TypeInfo_NameEffectLabel + 0xb8) + 8),
                   (MethodInfo *)0x0);
        return;
      }
label_0432f200:
      il2cpp_runtime_helper_022b2c90();
      __this[1].klass = (UnityEngine_MonoBehaviour_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(__this + 1);
      __this[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this[1].monitor);
      __this[1].fields.m_CachedPtr = **(intptr_t **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&__this[1].fields);
      *(undefined4 *)&__this[1].fields.m_CancellationTokenSource = 0x41900000;
      *(undefined4 *)((long)&__this[1].fields.m_CancellationTokenSource + 4) = 0x3f800000;
      *(undefined4 *)&__this[2].klass = 0x3f800000;
      *(undefined4 *)((long)&__this[2].klass + 4) = 0x3f800000;
      *(undefined4 *)&__this[2].monitor = 0x3f800000;
      *(undefined4 *)((long)&__this[2].monitor + 4) = 0x1001;
      *(undefined1 *)&__this[2].fields.m_CachedPtr = 1;
      UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$ApplyText
// il2cpp: void PatreonEffects_NameEffectLabel__ApplyText (TMPro_TextMeshProUGUI_o* tmp, UnityEngine_UI_LayoutElement_o* layout, System_String_o* content, const MethodInfo* method);
// 0x432dc10

void PatreonEffects_NameEffectLabel__ApplyText
               (TMPro_TextMeshProUGUI_o *tmp,UnityEngine_UI_LayoutElement_o *layout,System_String_o *content,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  System_String_o *text;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar4;
  undefined4 uVar5;
  float local_38;
  
  if (g_data_057ae066 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057ae066 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)layout,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(tmp->klass->vtable)._66_set_text.methodPtr)(tmp,content,(tmp->klass->vtable)._66_set_text.method);
        bVar3 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          text = System_String__Concat_3ae5ba0(content,"|",(MethodInfo *)0x0);
          UVar1 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            ((TMPro_TMP_Text_o *)tmp,text,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          UVar2 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            ((TMPro_TMP_Text_o *)tmp,"|",3.4028235e+38,3.4028235e+38,
                             (MethodInfo *)0x0);
          if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_0432dda4;
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
          if (layout == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_0432dda4;
          (*(layout->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (0,layout,(layout->klass->vtable)._36_set_preferredWidth.method);
          uVar5._0_1_ = (tmp->fields).m_spriteColor.fields.r;
          uVar5._1_1_ = (tmp->fields).m_spriteColor.fields.g;
          uVar5._2_1_ = (tmp->fields).m_spriteColor.fields.b;
          uVar5._3_1_ = (tmp->fields).m_spriteColor.fields.a;
          uVar4 = extraout_RDX;
        }
        vtableDispatch = (layout->klass->vtable)._38_set_preferredHeight.methodPtr;
        (*vtableDispatch)
                  (uVar5,layout,(layout->klass->vtable)._38_set_preferredHeight.method,uVar4,
                   vtableDispatch);
        return;
      }
label_0432dda4:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectLabel$$.ctor
// il2cpp: void PatreonEffects_NameEffectLabel___ctor (PatreonEffects_NameEffectLabel_o* __this, const MethodInfo* method);
// 0x432f210

void PatreonEffects_NameEffectLabel___ctor(PatreonEffects_NameEffectLabel_o *__this,MethodInfo *method)

{
  (__this->fields)._prefix = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._prefix);
  (__this->fields)._name = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._name);
  (__this->fields)._suffix = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._suffix);
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


