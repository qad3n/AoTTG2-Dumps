// Type: ParallaxEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ParallaxEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs  [CHANGED since prior version]
// --------------------------------

// ParallaxEffect$$Awake
// il2cpp: void ParallaxEffect__Awake (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x3d6e800

void ParallaxEffect__Awake(ParallaxEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702600 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    DAT_05702600 = '\x01';
  }
  pUVar5 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields).rectTransform = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).rectTransform);
  pUVar5 = (__this->fields).rectTransform;
  if (DAT_056fe077 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fe077 = '\x01';
  }
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    fVar1 = (__this->fields).scale;
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    value.fields.x = fVar1 * (float)uVar2;
    value.fields.y = fVar1 * (float)((ulong)uVar2 >> 0x20);
    value.fields.z = fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar5,value,(MethodInfo *)0x0)
    ;
    iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    (__this->fields).lastValidMousePosition.fields.x = (float)iVar3 * 0.5;
    (__this->fields).lastValidMousePosition.fields.y = (float)iVar4 * 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ParallaxEffect$$Update
// il2cpp: void ParallaxEffect__Update (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x3d6e8e0

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
        goto LAB_03d6e936;
      }
    }
  }
  UStack_68 = (__this->fields).lastValidMousePosition.fields;
LAB_03d6e936:
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
    UVar9 = UnityEngine_Vector2__SmoothDamp
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ParallaxEffect$$GetConstrainedTargetPosition
// il2cpp: UnityEngine_Vector2_o ParallaxEffect__GetConstrainedTargetPosition (ParallaxEffect_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x3d6ebb0

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
// 0x3d6ecb0

UnityEngine_Vector2_o
ParallaxEffect__ClampPosition
          (ParallaxEffect_o *__this,UnityEngine_Vector2_o position,MethodInfo *method)

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
// 0x3d6ed80

float ParallaxEffect__MapRange
                (ParallaxEffect_o *__this,float value,float fromSource,float toSource,
                float fromTarget,float toTarget,MethodInfo *method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// ParallaxEffect$$.ctor
// il2cpp: void ParallaxEffect___ctor (ParallaxEffect_o* __this, const MethodInfo* method);
// 0x3d6eda0

void ParallaxEffect___ctor(ParallaxEffect_o *__this,MethodInfo *method)

{
  (__this->fields).parallaxIntensity = 1.0;
  (__this->fields).smoothTime = 0.3;
  (__this->fields).scale = 1.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


