// Type: ParallaxEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ParallaxEffect.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs
// --------------------------------

// ParallaxEffect$$Awake
// il2cpp: void ParallaxEffect__Awake (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x181dab910

void ParallaxEffect__Awake(ParallaxEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843448df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_1843448df = '\x01';
  }
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields).rectTransform = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).rectTransform,pUVar6);
  pUVar6 = (__this->fields).rectTransform;
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  local_28[0].z = (__this->fields).scale;
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->oneVector).fields.x;
  uVar2 = (pUVar3->oneVector).fields.y;
  local_28[0].x = (float)uVar1 * local_28[0].z;
  local_28[0].y = (float)uVar2 * local_28[0].z;
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    local_28[0].z = local_28[0].z * (pUVar3->oneVector).fields.z;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)pUVar6,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    (__this->fields).lastValidMousePosition.fields.x = (float)iVar4 * 0.5;
    (__this->fields).lastValidMousePosition.fields.y = (float)iVar5 * 0.5;
    return;
  }
  ThrowNullReferenceException();
}


// ParallaxEffect$$Update
// il2cpp: void ParallaxEffect__Update (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x181dabc70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dabf27: movaps xmm0, xmm1

void ParallaxEffect__Update(ParallaxEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float smoothTime;
  UnityEngine_RectTransform_o *pUVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_Fields UVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_Fields UVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_Fields local_res8;
  UnityEngine_Vector2_Fields local_res18 [2];
  UnityEngine_Vector3_o local_a8 [13];
  
  pUVar5 = UnityEngine_Input__get_mousePosition(local_a8,(MethodInfo *)0x0);
  fVar8 = (pUVar5->fields).x;
  if (0.0 <= fVar8) {
    fVar14 = (pUVar5->fields).y;
    iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    if (((fVar8 <= (float)iVar3) && (0.0 <= fVar14)) &&
       (iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0), fVar14 <= (float)iVar3)) {
      (__this->fields).lastValidMousePosition.fields.x = fVar8;
      (__this->fields).lastValidMousePosition.fields.y = fVar14;
      goto label_181dabd1b;
    }
  }
  fVar8 = (__this->fields).lastValidMousePosition.fields.x;
  fVar14 = (__this->fields).lastValidMousePosition.fields.y;
label_181dabd1b:
  fVar9 = (__this->fields).scale;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar12 = (float)(iVar3 / 2) * (fVar9 - 1.0);
  fVar9 = (__this->fields).scale;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar13 = (float)(iVar3 / 2) * (fVar9 - 1.0);
  fVar9 = -fVar12;
  fVar10 = -fVar13;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar2 = (__this->fields).rectTransform;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    local_res18[0] =
         (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0)
    ;
    fVar1 = (__this->fields).parallaxIntensity;
    smoothTime = (__this->fields).smoothTime;
    local_res8.y = (((fVar14 - 0.0) / ((float)iVar4 - 0.0)) * (fVar13 - fVar10) + fVar10) * fVar1;
    local_res8.x = (((fVar8 - 0.0) / ((float)iVar3 - 0.0)) * (fVar12 - fVar9) + fVar9) * fVar1;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar6 = UnityEngine_Vector2__SmoothDamp_2f0b1f0
                      ((UnityEngine_Vector2_o *)local_res18,(UnityEngine_Vector2_o *)&local_res8,
                       &(__this->fields).currentVelocity,smoothTime,INFINITY,fVar8,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition(pUVar2,UVar6,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).rectTransform;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar7 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      fVar8 = (__this->fields).scale;
      local_res8.y = UVar7.y;
      fVar14 = local_res8.y;
      local_res8 = UVar7;
      iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      UVar11.x = (float)(iVar3 / 2) * (fVar8 - 1.0);
      UVar11.y = 0.0;
      fVar8 = (__this->fields).scale;
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar8 = (float)(iVar3 / 2) * (fVar8 - 1.0);
      if (UVar7.x < -UVar11.x) {
        UVar11.y = 0.0;
        UVar11.x = -UVar11.x;
      }
      else if (UVar7.x <= UVar11.x) {
        UVar11 = UVar7;
      }
      fVar9 = -fVar8;
      if ((fVar9 <= fVar14) && (fVar9 = fVar8, fVar14 <= fVar8)) {
        fVar9 = fVar14;
      }
      UVar6.fields.x = UVar11.x;
      UVar6.fields.y = fVar9;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,UVar6,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ParallaxEffect$$GetConstrainedTargetPosition
// il2cpp: UnityEngine_Vector2_o ParallaxEffect__GetConstrainedTargetPosition (ParallaxEffect_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x181dabb00

UnityEngine_Vector2_o
ParallaxEffect__GetConstrainedTargetPosition
          (ParallaxEffect_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  float fStackX_c;
  
  fVar2 = (__this->fields).scale;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar4 = (float)(iVar1 / 2) * (fVar2 - 1.0);
  fVar2 = (__this->fields).scale;
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (float)(iVar1 / 2) * (fVar2 - 1.0);
  fVar2 = -fVar4;
  fVar3 = -fVar5;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UVar6.x = ((mousePosition.fields.x - 0.0) / ((float)iVar1 - 0.0)) * (fVar4 - fVar2) + fVar2;
  fStackX_c = mousePosition.fields.y;
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar6.y = ((fStackX_c - 0.0) / ((float)iVar1 - 0.0)) * (fVar5 - fVar3) + fVar3;
  return (UnityEngine_Vector2_o)UVar6;
}


// ParallaxEffect$$ClampPosition
// il2cpp: UnityEngine_Vector2_o ParallaxEffect__ClampPosition (ParallaxEffect_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x181daba20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dabad1: movaps xmm0, xmm1

UnityEngine_Vector2_o
ParallaxEffect__ClampPosition(ParallaxEffect_o *__this,UnityEngine_Vector2_o position,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector2_Fields UVar5;
  float fStackX_c;
  
  fVar2 = (__this->fields).scale;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UVar4.x = (float)(iVar1 / 2) * (fVar2 - 1.0);
  UVar4.y = 0.0;
  fVar2 = (__this->fields).scale;
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar2 = (float)(iVar1 / 2) * (fVar2 - 1.0);
  if (position.fields.x < -UVar4.x) {
    UVar4.y = 0.0;
    UVar4.x = -UVar4.x;
  }
  else if (position.fields.x <= UVar4.x) {
    UVar4 = position.fields;
  }
  fVar3 = -fVar2;
  fStackX_c = position.fields.y;
  if ((fVar3 <= fStackX_c) && (fVar3 = fVar2, fStackX_c <= fVar2)) {
    fVar3 = fStackX_c;
  }
  UVar5.x = UVar4.x;
  UVar5.y = fVar3;
  return (UnityEngine_Vector2_o)UVar5;
}


// ParallaxEffect$$MapRange
// il2cpp: float ParallaxEffect__MapRange (ParallaxEffect_o* __this, float value, float fromSource, float toSource, float fromTarget, float toTarget, const MethodInfo* method);
// 0x181dabc40

float
ParallaxEffect__MapRange(ParallaxEffect_o* __this, float value, float fromSource, float toSource, float fromTarget, float toTarget, MethodInfo* method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// ParallaxEffect$$.ctor
// il2cpp: void ParallaxEffect___ctor (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x181dabf80

void ParallaxEffect___ctor(ParallaxEffect_o *__this,MethodInfo *method)

{
  (__this->fields).parallaxIntensity = 1.0;
  (__this->fields).smoothTime = 0.3;
  (__this->fields).scale = 1.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


