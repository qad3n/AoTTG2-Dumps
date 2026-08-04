// Type: ParallaxEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ParallaxEffect.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs
// --------------------------------

// ParallaxEffect$$Awake
// il2cpp: void ParallaxEffect__Awake (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x4064150

void ParallaxEffect__Awake(ParallaxEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_RectTransform_o **ppUVar7;
  uint uVar8;
  UnityEngine_Vector2_o UVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector2_o UStack_80;
  
  if (g_data_057ac2b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ac2b0 = '\x01';
  }
  pUVar6 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  ppUVar7 = &(__this->fields).rectTransform;
  (__this->fields).rectTransform = pUVar6;
  il2cpp_runtime_helper_022b4080();
  pUVar6 = (__this->fields).rectTransform;
  if (g_data_057a6932 == '\0') {
    ppUVar7 = (UnityEngine_RectTransform_o **)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    fVar10 = (__this->fields).scale;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    UVar13.fields.x = fVar10 * (float)uVar1;
    UVar13.fields.y = fVar10 * (float)((ulong)uVar1 >> 0x20);
    UVar13.fields.z = fVar10 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar6,UVar13,(MethodInfo *)0x0);
    iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    (__this->fields).lastValidMousePosition.fields.x = (float)iVar2 * 0.5;
    (__this->fields).lastValidMousePosition.fields.y = (float)iVar3 * 0.5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UVar13 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (0.0 <= UVar13.fields.x) {
    iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    UStack_80.fields.y = UVar13.fields.y;
    if ((UVar13.fields.x <= (float)iVar2) && (0.0 <= UStack_80.fields.y)) {
      iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (UStack_80.fields.y <= (float)iVar2) {
        ppUVar7[8] = (UnityEngine_RectTransform_o *)UVar13.fields._0_8_;
        UStack_80.fields = (UnityEngine_Vector2_Fields)UVar13.fields._0_8_;
        goto label_04064286;
      }
    }
  }
  UStack_80.fields = (UnityEngine_Vector2_Fields)ppUVar7[8];
label_04064286:
  fVar10 = *(float *)(ppUVar7 + 5);
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar12 = *(float *)(ppUVar7 + 5);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar6 = ppUVar7[7];
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    fVar11 = (fVar10 + -1.0) * (float)(iVar2 / 2);
    fVar12 = (fVar12 + -1.0) * (float)(iVar3 / 2);
    UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
    fVar10 = *(float *)((long)ppUVar7 + 0x24);
    UStack_80.fields.y =
         ((fVar12 + fVar12) * (UStack_80.fields.y / (float)iVar5) - fVar12) * *(float *)(ppUVar7 + 4);
    UStack_80.fields.x =
         ((UStack_80.fields.x / (float)iVar4) * (fVar11 + fVar11) - fVar11) * *(float *)(ppUVar7 + 4);
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar9 = UnityEngine_Vector2__SmoothDamp_4def270
                      (UVar9,UStack_80,(UnityEngine_Vector2_o *)((long)ppUVar7 + 0x2c),fVar10,INFINITY,fVar12,
                       (MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition(pUVar6,UVar9,(MethodInfo *)0x0);
    pUVar6 = ppUVar7[7];
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
      fVar10 = *(float *)(ppUVar7 + 5);
      iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      fVar12 = (float)(iVar2 / 2) * (fVar10 + -1.0);
      fVar10 = *(float *)(ppUVar7 + 5);
      iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar11 = (float)(iVar2 / 2) * (fVar10 + -1.0);
      UStack_80.fields.x = UVar9.fields.x;
      UStack_80.fields.y = UVar9.fields.y;
      fVar10 = fVar12;
      if (UStack_80.fields.x <= fVar12) {
        fVar10 = UStack_80.fields.x;
      }
      uVar8 = -(uint)(-fVar12 <= UStack_80.fields.x);
      UVar9.fields.x = (float)(~uVar8 & (uint)-fVar12 | (uint)fVar10 & uVar8);
      fVar10 = fVar11;
      if (UStack_80.fields.y <= fVar11) {
        fVar10 = UStack_80.fields.y;
      }
      uVar8 = -(uint)(-fVar11 <= UStack_80.fields.y);
      UVar9.fields.y = (float)(~uVar8 & (uint)-fVar11 | (uint)fVar10 & uVar8);
      UnityEngine_RectTransform__set_anchoredPosition(pUVar6,UVar9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return;
}


// ParallaxEffect$$Update
// il2cpp: void ParallaxEffect__Update (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x4064230

void ParallaxEffect__Update(ParallaxEffect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector2_Fields UStack_68;
  
  UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (0.0 <= UVar12.fields.x) {
    iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    UStack_68.y = UVar12.fields.y;
    if ((UVar12.fields.x <= (float)iVar2) && (0.0 <= UStack_68.y)) {
      iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (UStack_68.y <= (float)iVar2) {
        (__this->fields).lastValidMousePosition.fields = UVar12.fields._0_8_;
        UStack_68 = UVar12.fields._0_8_;
        goto label_04064286;
      }
    }
  }
  UStack_68 = (__this->fields).lastValidMousePosition.fields;
label_04064286:
  fVar7 = (__this->fields).scale;
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar8 = (__this->fields).scale;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar1 = (__this->fields).rectTransform;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    fVar10 = (fVar7 + -1.0) * (float)(iVar2 / 2);
    fVar11 = (fVar8 + -1.0) * (float)(iVar3 / 2);
    UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    fVar7 = (__this->fields).parallaxIntensity;
    fVar8 = (__this->fields).smoothTime;
    UStack_68.y = ((fVar11 + fVar11) * (UStack_68.y / (float)iVar5) - fVar11) * fVar7;
    UStack_68.x = ((UStack_68.x / (float)iVar4) * (fVar10 + fVar10) - fVar10) * fVar7;
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar9 = UnityEngine_Vector2__SmoothDamp_4def270
                      (UVar9,UStack_68,&(__this->fields).currentVelocity,fVar8,INFINITY,fVar7,
                       (MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar9,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).rectTransform;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
      fVar7 = (__this->fields).scale;
      iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      fVar8 = (float)(iVar2 / 2) * (fVar7 + -1.0);
      fVar7 = (__this->fields).scale;
      iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar10 = (float)(iVar2 / 2) * (fVar7 + -1.0);
      UStack_68.x = UVar9.fields.x;
      UStack_68.y = UVar9.fields.y;
      fVar7 = fVar8;
      if (UStack_68.x <= fVar8) {
        fVar7 = UStack_68.x;
      }
      uVar6 = -(uint)(-fVar8 <= UStack_68.x);
      UVar9.fields.x = (float)(~uVar6 & (uint)-fVar8 | (uint)fVar7 & uVar6);
      fVar7 = fVar10;
      if (UStack_68.y <= fVar10) {
        fVar7 = UStack_68.y;
      }
      uVar6 = -(uint)(-fVar10 <= UStack_68.y);
      UVar9.fields.y = (float)(~uVar6 & (uint)-fVar10 | (uint)fVar7 & uVar6);
      UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return;
}


// ParallaxEffect$$GetConstrainedTargetPosition
// il2cpp: UnityEngine_Vector2_o ParallaxEffect__GetConstrainedTargetPosition (ParallaxEffect_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x4064500

UnityEngine_Vector2_o
ParallaxEffect__GetConstrainedTargetPosition
          (ParallaxEffect_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  int32_t iVar2;
  int32_t iVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float fStack_14;
  
  fVar5 = (__this->fields).scale;
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar4 = (float)(iVar2 / 2) * (fVar5 + -1.0);
  fVar5 = (__this->fields).scale;
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (float)(iVar2 / 2) * (fVar5 + -1.0);
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  local_18 = mousePosition.fields.x;
  fStack_14 = mousePosition.fields.y;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar1.fields.y = (fVar5 + fVar5) * (fStack_14 / (float)iVar3) - fVar5;
  UVar1.fields.x = (local_18 / (float)iVar2) * (fVar4 + fVar4) - fVar4;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// ParallaxEffect$$ClampPosition
// il2cpp: UnityEngine_Vector2_o ParallaxEffect__ClampPosition (ParallaxEffect_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x4064600

UnityEngine_Vector2_o
ParallaxEffect__ClampPosition(ParallaxEffect_o *__this,UnityEngine_Vector2_o position,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  float fVar3;
  UnityEngine_Vector2_Fields UVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  
  fVar6 = (__this->fields).scale;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar3 = (float)(iVar1 / 2) * (fVar6 + -1.0);
  fVar6 = (__this->fields).scale;
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (float)(iVar1 / 2) * (fVar6 + -1.0);
  local_18 = position.fields.x;
  fStack_14 = position.fields.y;
  fVar6 = fVar3;
  if (local_18 <= fVar3) {
    fVar6 = local_18;
  }
  uVar2 = -(uint)(-fVar3 <= local_18);
  UVar4.x = (float)(~uVar2 & (uint)-fVar3 | (uint)fVar6 & uVar2);
  fVar6 = fVar5;
  if (fStack_14 <= fVar5) {
    fVar6 = fStack_14;
  }
  uVar2 = -(uint)(-fVar5 <= fStack_14);
  UVar4.y = (float)(~uVar2 & (uint)-fVar5 | (uint)fVar6 & uVar2);
  return (UnityEngine_Vector2_o)UVar4;
}


// ParallaxEffect$$MapRange
// il2cpp: float ParallaxEffect__MapRange (ParallaxEffect_o* __this, float value, float fromSource, float toSource, float fromTarget, float toTarget, const MethodInfo* method);
// 0x40646d0

float ParallaxEffect__MapRange
                (ParallaxEffect_o *__this,float value,float fromSource,float toSource,float fromTarget,
                float toTarget,MethodInfo *method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// ParallaxEffect$$.ctor
// il2cpp: void ParallaxEffect___ctor (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x40646f0

void ParallaxEffect___ctor(ParallaxEffect_o *__this,MethodInfo *method)

{
  (__this->fields).parallaxIntensity = 1.0;
  (__this->fields).smoothTime = 0.3;
  (__this->fields).scale = 1.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


