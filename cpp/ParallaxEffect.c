// Type: ParallaxEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ParallaxEffect.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs
// --------------------------------

// ParallaxEffect$$Awake
// il2cpp: void ParallaxEffect__Awake (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x584dd80

void ParallaxEffect__Awake(ParallaxEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  int32_t iVar5;
  int32_t iVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545035 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_07545035 = '\x01';
  }
  pUVar7 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields).rectTransform = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).rectTransform);
  pUVar7 = (__this->fields).rectTransform;
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
  }
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar1 = (__this->fields).scale;
  value.fields.z = (pUVar4->oneVector).fields.z * fVar1;
  uVar2 = (pUVar4->oneVector).fields.x;
  uVar3 = (pUVar4->oneVector).fields.y;
  value.fields.x = fVar1 * (float)uVar2;
  value.fields.y = fVar1 * (float)uVar3;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar7,value,(MethodInfo *)0x0);
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar8.x = (float)iVar5 * 0.5;
  UVar8.y = (float)iVar6 * 0.5;
  (__this->fields).lastValidMousePosition.fields = UVar8;
  return;
}


// ParallaxEffect$$Update
// il2cpp: void ParallaxEffect__Update (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x584de60

void ParallaxEffect__Update(ParallaxEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  uint uVar7;
  uint uVar8;
  UnityEngine_Vector2_o UVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar14;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  UnityEngine_Vector2_o UStack_38;
  UnityEngine_Vector2_o UStack_30;
  
  UVar14 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (0.0 <= UVar14.fields.x) {
    uStack_60 = extraout_XMM0_Qb;
    auStack_68._0_4_ = UVar14.fields.x;
    auStack_68._4_4_ = UVar14.fields.y;
    auVar12 = _auStack_68;
    iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    auStack_68._4_4_ = UVar14.fields.y;
    if ((UVar14.fields.x <= (float)iVar3) && (0.0 <= (float)auStack_68._4_4_)) {
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if ((float)auStack_68._4_4_ <= (float)iVar3) {
        (__this->fields).lastValidMousePosition.fields = UVar14.fields._0_8_;
        _auStack_68 = auVar12;
        goto label_0584ded0;
      }
    }
  }
  uStack_60 = 0;
  auStack_68 = (undefined1  [8])(__this->fields).lastValidMousePosition.fields;
label_0584ded0:
  fVar1 = (__this->fields).scale;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar13 = (__this->fields).scale;
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar2 = (__this->fields).rectTransform;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    auVar12._0_4_ = (float)iVar5;
    auVar12._4_4_ = (float)iVar6;
    auVar12._8_8_ = 0;
    auVar12 = divps(_auStack_68,auVar12);
    UStack_30 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
    fVar11 = (float)(iVar3 / 2) * (fVar1 + -1.0);
    fVar13 = (float)(iVar4 / 2) * (fVar13 + -1.0);
    auStack_68._0_4_ = auVar12._0_4_;
    auStack_68._4_4_ = auVar12._4_4_;
    fVar1 = (__this->fields).parallaxIntensity;
    UStack_38.fields.x = fVar1 * ((fVar11 + fVar11) * (float)auStack_68._0_4_ - fVar11);
    UStack_38.fields.y = fVar1 * ((fVar13 + fVar13) * (float)auStack_68._4_4_ - fVar13);
    fVar1 = (__this->fields).smoothTime;
    fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar9 = UnityEngine_Vector2__SmoothDamp_69087f0
                      (&UStack_30,&UStack_38,&(__this->fields).currentVelocity,fVar1,INFINITY,fVar13,
                       (MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition(pUVar2,UVar9,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).rectTransform;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      auStack_58._8_8_ = extraout_XMM0_Qb_00;
      auStack_58._0_4_ = UVar9.fields.x;
      auStack_58._4_4_ = UVar9.fields.y;
      fVar1 = (__this->fields).scale;
      iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      fVar13 = (__this->fields).scale;
      iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      auVar10._0_4_ = (float)(iVar3 / 2) * (fVar1 + -1.0);
      auVar10._4_4_ = (float)(iVar4 / 2) * (fVar13 + -1.0);
      auVar10._8_8_ = 0;
      auVar12 = minps(auVar10,auStack_58);
      uVar7 = -(uint)(-auVar10._0_4_ <= UVar9.fields.x);
      uVar8 = -(uint)(-auVar10._4_4_ <= UVar9.fields.y);
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar2,(UnityEngine_Vector2_o)
                        (CONCAT44(~uVar8 & (uint)-auVar10._4_4_,~uVar7 & (uint)-auVar10._0_4_) |
                        CONCAT44(auVar12._4_4_ & uVar8,auVar12._0_4_ & uVar7)),(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ParallaxEffect$$GetConstrainedTargetPosition
// il2cpp: UnityEngine_Vector2_o ParallaxEffect__GetConstrainedTargetPosition (ParallaxEffect_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x584e0b0

UnityEngine_Vector2_o
ParallaxEffect__GetConstrainedTargetPosition
          (ParallaxEffect_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  float fVar3;
  UnityEngine_Vector2_Fields UVar4;
  float fVar6;
  undefined8 in_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  
  fVar3 = (__this->fields).scale;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar6 = (__this->fields).scale;
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar3 = (float)(iVar1 / 2) * (fVar3 + -1.0);
  fVar6 = (float)(iVar2 / 2) * (fVar6 + -1.0);
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  auVar5._0_4_ = (float)iVar1;
  auVar5._4_4_ = (float)iVar2;
  auVar5._8_8_ = 0;
  auVar7._8_8_ = in_XMM0_Qb;
  auVar7._0_8_ = mousePosition.fields;
  auVar7 = divps(auVar7,auVar5);
  UVar4.x = (fVar3 + fVar3) * auVar7._0_4_ - fVar3;
  UVar4.y = (fVar6 + fVar6) * auVar7._4_4_ - fVar6;
  return (UnityEngine_Vector2_o)UVar4;
}


// ParallaxEffect$$ClampPosition
// il2cpp: UnityEngine_Vector2_o ParallaxEffect__ClampPosition (ParallaxEffect_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x584e160

UnityEngine_Vector2_o
ParallaxEffect__ClampPosition(ParallaxEffect_o *__this,UnityEngine_Vector2_o position,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int32_t iVar3;
  int32_t iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  fVar1 = (__this->fields).scale;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar2 = (__this->fields).scale;
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  auVar7._0_4_ = (float)(iVar3 / 2) * (fVar1 + -1.0);
  auVar7._4_4_ = (float)(iVar4 / 2) * (fVar2 + -1.0);
  auVar7._8_8_ = 0;
  auVar8._8_8_ = in_XMM0_Qb;
  auVar8._0_8_ = position.fields;
  auVar8 = minps(auVar7,auVar8);
  uVar5 = -(uint)(-auVar7._0_4_ <= position.fields.x);
  uVar6 = -(uint)(-auVar7._4_4_ <= position.fields.y);
  return (UnityEngine_Vector2_Fields)
         (CONCAT44(~uVar6 & (uint)-auVar7._4_4_,~uVar5 & (uint)-auVar7._0_4_) |
         CONCAT44(auVar8._4_4_ & uVar6,auVar8._0_4_ & uVar5));
}


// ParallaxEffect$$MapRange
// il2cpp: float ParallaxEffect__MapRange (ParallaxEffect_o* __this, float value, float fromSource, float toSource, float fromTarget, float toTarget, const MethodInfo* method);
// 0x584e1f0

float ParallaxEffect__MapRange
                (ParallaxEffect_o *__this,float value,float fromSource,float toSource,float fromTarget,
                float toTarget,MethodInfo *method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// ParallaxEffect$$.ctor
// il2cpp: void ParallaxEffect___ctor (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x584e210

void ParallaxEffect___ctor(ParallaxEffect_o *__this,MethodInfo *method)

{
  (__this->fields).parallaxIntensity = 1.0;
  (__this->fields).smoothTime = 0.3;
  (__this->fields).scale = 1.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


