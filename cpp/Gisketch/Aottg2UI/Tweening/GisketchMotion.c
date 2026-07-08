// Type: Gisketch.Aottg2UI.Tweening.GisketchMotion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotion.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x3ac8670

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, float value, const MethodInfo* method);
// 0x3aca3c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass11_0__<SlideNoFadeWithOffset>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_o offset;
  float fVar3;
  float fVar4;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar3 = UVar1.x;
    fVar4 = UVar1.y;
    offset.fields.y = value * (UVar2.y - fVar4) + fVar4;
    offset.fields.x = value * (UVar2.x - fVar3) + fVar3;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,offset,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x3aca400

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass11_0__<SlideNoFadeWithOffset>b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x3ac9590

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass19_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$<PlayTargets>b__0
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___PlayTargets_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o* __this, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o a, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o b, const MethodInfo* method);
// 0x3aca420

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass19_0__<PlayTargets>b__0
                  (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *__this,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o a,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o b,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  uint in_EAX;
  int32_t iVar4;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_05701322 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701322 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  bVar3 = (__this->fields).enter;
  cVar1 = *(char *)((long)&(__this->fields).enter + 1);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05701320 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701320 = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar3 == '\0') {
    if (cVar1 != '\0') {
      a.fields.Enter = a.fields.Exit;
    }
    if (a.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      a.fields.Enter = a.fields.Exit;
    }
  }
  if (a.fields.Enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((a.fields.Enter)->fields).order;
  }
  uStack_38 = CONCAT44(iVar4,(uint)uStack_38);
  bVar3 = (__this->fields).enter;
  cVar1 = *(char *)((long)&(__this->fields).enter + 1);
  if (DAT_05701320 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701320 = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar3 == '\0') {
    if (cVar1 != '\0') {
      b.fields.Enter = b.fields.Exit;
    }
    if (b.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      b.fields.Enter = b.fields.Exit;
    }
  }
  if (b.fields.Enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((b.fields.Enter)->fields).order;
  }
  iVar4 = System_Int32__CompareTo((int)&uStack_38 + 4,iVar4,(MethodInfo *)0x0);
  return iVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x3aca110

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$<Fade>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___Fade_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, float value, const MethodInfo* method);
// 0x3aca590

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass23_0__<Fade>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x3aca2c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, float value, const MethodInfo* method);
// 0x3aca5b0

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass26_0__<MotionOffsetTween>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_o offset;
  float fVar3;
  float fVar4;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar3 = UVar1.x;
    fVar4 = UVar1.y;
    offset.fields.y = value * (UVar2.y - fVar4) + fVar4;
    offset.fields.x = value * (UVar2.x - fVar3) + fVar3;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,offset,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x3aca5f0

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass26_0__<MotionOffsetTween>b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3ac7d50

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, float value, const MethodInfo* method);
// 0x3aca610

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass3_0__<MainMenuPanel>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,float value
               ,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  float fVar3;
  UnityEngine_Vector2_o offset;
  float fVar4;
  float fVar5;
  
  if (DAT_05701323 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701323 = '\x01';
  }
  __this_01 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_init_class();
  }
  fVar3 = powf(__this_01,1.0 - value,3.0,method);
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar4 = UVar1.x;
    fVar5 = UVar1.y;
    offset.fields.y = (1.0 - fVar3) * (UVar2.y - fVar5) + fVar5;
    offset.fields.x = (1.0 - fVar3) * (UVar2.x - fVar4) + fVar4;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,offset,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3aca6c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass3_0__<MainMenuPanel>b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x3ac7d60

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, float value, const MethodInfo* method);
// 0x3aca6e0

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass4_0__<MainMenuLogo>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,float value
               ,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_02;
  UnityEngine_Vector2_o offset;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_03;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_05701324 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701324 = '\x01';
  }
  __this_03 = TypeInfo_GisketchMotion;
  if (TypeInfo_GisketchMotion[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_init_class();
  }
  fVar3 = powf(__this_03,1.0 - value,3.0,method);
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar3 = 1.0 - fVar3;
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar4 = UVar1.x;
    fVar5 = UVar1.y;
    offset.fields.y = fVar3 * (UVar2.y - fVar5) + fVar5;
    offset.fields.x = fVar3 * (UVar2.x - fVar4) + fVar4;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,offset,(MethodInfo *)0x0);
    __this_01 = (__this->fields).group;
    if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar4 = (__this->fields).startAlpha;
      fVar5 = 1.0;
      if (fVar3 <= 1.0) {
        fVar5 = fVar3;
      }
      fVar5 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar5);
      method_00 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                (__this_01,((__this->fields).endAlpha - fVar4) * fVar5 + fVar4,(MethodInfo *)0x0);
      __this_02 = (__this->fields).blur;
      if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
        fVar3 = (__this->fields).startBlur;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  (__this_02,fVar5 * (0.0 - fVar3) + fVar3,method_00);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x3aca810

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass4_0__<MainMenuLogo>b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
            (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
  __this_01 = (__this->fields).blur;
  if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_01,0.0,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x3ac7f90

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, float value, const MethodInfo* method);
// 0x3aca850

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass5_0__<LogoImpact>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,float value
               ,MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Vector2_Fields UVar2;
  undefined4 uVar3;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o offset;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o value_00;
  float fStack_38;
  float fStack_34;
  
  fVar6 = value * 3.1415927;
  fVar4 = sinf(fVar6 * 18.0);
  fVar5 = cosf(fVar6 * 14.0);
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    fVar7 = 1.0 - value;
    UVar2 = (__this->fields).origin.fields;
    offset.fields.y = fVar5 * fVar7 * 4.5 + UVar2.y;
    offset.fields.x = fVar4 * fVar7 * 10.0 + UVar2.x;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,offset,(MethodInfo *)0x0);
    __this_01 = (__this->fields).rect;
    uVar1 = (__this->fields).scale.fields.x;
    uVar3 = (__this->fields).scale.fields.y;
    fVar4 = (__this->fields).scale.fields.z;
    fVar5 = sinf(fVar6 * 8.0);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      fVar5 = fVar7 * fVar5 * 0.025 + 1.0;
      value_00.fields.x = (float)uVar1 * fVar5;
      value_00.fields.y = (float)uVar3 * fVar5;
      value_00.fields.z = fVar4 * fVar5;
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x3aca960

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass5_0__<LogoImpact>b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).origin.fields,(MethodInfo *)0x0);
    __this_01 = (__this->fields).rect;
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)__this_01,
                 (UnityEngine_Vector3_o)(__this->fields).scale.fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x3ac8660

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass8_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, float value, const MethodInfo* method);
// 0x3aca9a0

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass8_0__<HorizontalSurfaceBlur>b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,float value
               ,MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (DAT_05701325 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    DAT_05701325 = '\x01';
  }
  __this_00 = (__this->fields).material;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),value,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x3acaa20

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass8_0__<HorizontalSurfaceBlur>b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (DAT_05701326 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    DAT_05701326 = '\x01';
  }
  __this_00 = (__this->fields).material;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__2
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__2 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x3acaa90

void Gisketch_Aottg2UI_Tweening_GisketchMotion_<>c__DisplayClass8_0__<HorizontalSurfaceBlur>b__2
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (DAT_05701327 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    DAT_05701327 = '\x01';
  }
  __this_00 = (__this->fields).material;
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayMainMenuPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel (UnityEngine_GameObject_o* go, bool enter, float duration, const MethodInfo* method);
// 0x3ac6430

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel
          (UnityEngine_GameObject_o *go,bool_conflict enter,float duration,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *rect;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_05701305 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701305 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pDVar2 = (DG_Tweening_Tween_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar1 != '\0') {
    if (go == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    rect = (UnityEngine_RectTransform_o *)
           UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
                       (rect,duration,enter & 0xff,0,in_RCX);
    method_00 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_01;
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,0,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween (UnityEngine_GameObject_o* go, System_String_o* preset, float duration, bool enter, const MethodInfo* method);
// 0x3ac6a30

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween
          (UnityEngine_GameObject_o *go,System_String_o *preset,float duration,bool_conflict enter,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  DG_Tweening_Tween_o *pDVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  UnityEngine_GameObject_o *go_00;
  UnityEngine_CanvasGroup_o *pUVar7;
  Il2CppObject *pIVar8;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar10;
  void **ppvVar11;
  char cVar12;
  float fVar13;
  undefined4 uVar14;
  UnityEngine_Vector2_Fields local_48;
  
  if (DAT_05701306 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&"mainmenubrushintro");
    il2cpp_init_method_metadata(&"mainmenulogoblades");
    il2cpp_init_method_metadata(&"mainmenutippanel");
    il2cpp_init_method_metadata(&"mainmenulogoimpact");
    il2cpp_init_method_metadata(&"brushsidepanelcontentintro");
    il2cpp_init_method_metadata(&"mainmenulogotext");
    il2cpp_init_method_metadata(&"mainmenupanel");
    il2cpp_init_method_metadata(&"mainmenufootericonintro");
    DAT_05701306 = '\x01';
  }
  if (preset != (System_String_o *)0x0) {
    bVar2 = System_String__Contains(preset,"mainmenupanel",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__Contains(preset,"mainmenulogotext",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__Contains(preset,"mainmenulogoblades",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__Contains(preset,"mainmenulogoimpact",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__Contains(preset,"mainmenufootericonintro",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              bVar2 = System_String__Contains(preset,"mainmenutippanel",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                bVar2 = System_String__Contains(preset,"brushsidepanelcontentintro",(MethodInfo *)0x0);
                if ((char)bVar2 != '\0') {
                  pMVar10 = extraout_RDX_03;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    il2cpp_init_class();
                    pMVar10 = extraout_RDX_04;
                  }
                  pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro
                                     (go,duration,enter & 0xff,pMVar10);
                  return pDVar4;
                }
                bVar2 = System_String__Contains(preset,"mainmenubrushintro",(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  return (DG_Tweening_Tween_o *)0x0;
                }
                pMVar10 = extraout_RDX_05;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar10 = extraout_RDX_06;
                }
                pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro
                                   (go,duration,enter & 0xff,pMVar10);
                return pDVar4;
              }
              if (go != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (go,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                pMVar10 = extraout_RDX_01;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar10 = extraout_RDX_02;
                }
                pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel
                                   (pUVar3,duration,enter & 0xff,pMVar10);
                return pDVar4;
              }
            }
            else if (go != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = (UnityEngine_RectTransform_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (go,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
              pMVar10 = extraout_RDX;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                il2cpp_init_class();
                pMVar10 = extraout_RDX_00;
              }
              pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro
                                 (pUVar3,duration,enter & 0xff,pMVar10);
              return pDVar4;
            }
          }
          else if (go != (UnityEngine_GameObject_o *)0x0) {
            pMVar10 = MethodInfo_RectTransform_GetComponent_RectTransform;
            pUVar3 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (go,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact(pUVar3,duration,pMVar10);
            return pDVar4;
          }
          goto LAB_03ac6de2;
        }
        if (go == (UnityEngine_GameObject_o *)0x0) goto LAB_03ac6de2;
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(go,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform)
        ;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar13 = -260.0;
      }
      else {
        if (go == (UnityEngine_GameObject_o *)0x0) goto LAB_03ac6de2;
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(go,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform)
        ;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar13 = 240.0;
      }
      local_48 = (UnityEngine_Vector2_Fields)((ulong)(uint)fVar13 << 0x20);
      if (DAT_05701308 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogo);
        il2cpp_init_method_metadata(&TypeInfo_DOTween);
        il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
        il2cpp_init_method_metadata(&TypeInfo_Object);
        il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
        il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
        il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
        il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
        il2cpp_init_method_metadata(&MethodInfo_Void__MainMenuLogo_b__0);
        il2cpp_init_method_metadata(&MethodInfo_Void__MainMenuLogo_b__1);
        il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
        DAT_05701308 = '\x01';
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      pIVar6 = (Il2CppClass *)
               Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(pUVar3,(MethodInfo *)0x0);
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar1 = pIVar5 + 1;
        pIVar5[1].klass = pIVar6;
        il2cpp_runtime_glue(pIVar1);
        pIVar6 = pIVar5[1].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pIVar6,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return (DG_Tweening_Tween_o *)0x0;
        }
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          pMVar10 = (MethodInfo *)0x0;
          go_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go_00,pMVar10);
          pIVar5[2].monitor = pUVar7;
          il2cpp_runtime_glue(&pIVar5[2].monitor,pUVar7);
          pIVar8 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar3,MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogo);
          ppvVar11 = &pIVar5[3].monitor;
          pIVar5[3].monitor = pIVar8;
          il2cpp_runtime_glue(ppvVar11);
          cVar12 = (char)enter;
          if (cVar12 != '\0') {
            if (pIVar1->klass == (Il2CppClass *)0x0) goto LAB_03ac71c7;
            Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                      ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar1->klass,
                       (UnityEngine_Vector2_o)local_48,(MethodInfo *)0x0);
            pUVar7 = pIVar5[2].monitor;
            if (pUVar7 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_03ac71c7;
            pMVar10 = (MethodInfo *)0x0;
            UnityEngine_CanvasGroup__set_alpha(pUVar7,0.0,(MethodInfo *)0x0);
            if (*ppvVar11 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
              Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                        (*ppvVar11,ABS(fVar13) * 0.18,pMVar10);
            }
          }
          if (pIVar1->klass != (Il2CppClass *)0x0) {
            pIVar5[1].monitor = (pIVar1->klass->_1).this_arg.data;
            if (cVar12 != '\0') {
              if (DAT_056fe093 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_056fe093 = '\x01';
              }
              local_48 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            }
            pIVar5[2].klass = (Il2CppClass *)local_48;
            if (pIVar5[2].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
              fVar13 = UnityEngine_CanvasGroup__get_alpha(pIVar5[2].monitor,(MethodInfo *)0x0);
              *(float *)&pIVar5[3].klass = fVar13;
              if (cVar12 == '\0') {
                uVar14 = 0;
              }
              else {
                uVar14 = 0x3f800000;
              }
              *(undefined4 *)((long)&pIVar5[3].klass + 4) = uVar14;
              x = pIVar5[3].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pMVar10 = (MethodInfo *)0x0;
              bVar2 = UnityEngine_Object__op_Inequality
                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              fVar13 = 0.0;
              if ((char)bVar2 != '\0') {
                if (*ppvVar11 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0)
                goto LAB_03ac71c7;
                fVar13 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                                   (*ppvVar11,pMVar10);
              }
              *(float *)&pIVar5[4].klass = fVar13;
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              onVirtualUpdate =
                   (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
              DG_Tweening_TweenCallback<float>___ctor();
              t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
              pDVar9 = DG_Tweening_TweenSettingsExtensions__Join
                                 (pDVar9,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
              action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              pIVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                                 ((Il2CppObject *)pDVar9,action,MethodInfo_Sequence_OnComplete_Sequence);
              pDVar4 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar5,1,MethodInfo_Sequence_SetUpdate_Sequence)
              ;
              return pDVar4;
            }
          }
        }
      }
LAB_03ac71c7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>(go,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
                         (pUVar3,duration,enter & 0xff,1,method);
      return pDVar4;
    }
  }
LAB_03ac6de2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel (UnityEngine_RectTransform_o* rect, float duration, bool enter, bool resetEnterStart, const MethodInfo* method);
// 0x3ac6530

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,
          bool_conflict resetEnterStart,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Vector2_o offset;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  float local_48;
  
  if (DAT_05701307 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__MainMenuPanel_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__MainMenuPanel_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    DAT_05701307 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar9 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
    pIVar4 = (Il2CppClass *)
             Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar3 + 1;
      pIVar3[1].klass = pIVar4;
      il2cpp_runtime_glue(pIVar6);
      pIVar4 = pIVar3[1].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      local_48 = UVar9.fields.m_Width;
      fVar7 = 1.0;
      if (1.0 <= local_48) {
        fVar7 = local_48;
      }
      fVar7 = fVar7 * 1.08;
      if (((char)enter != '\0') && ((char)resetEnterStart != '\0')) {
        pIVar4 = pIVar6->klass;
        if (DAT_05701371 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_05701371 = '\x01';
        }
        if (pIVar4 == (Il2CppClass *)0x0) goto LAB_03ac683d;
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
        offset.fields.x = fVar7 * (float)uVar1;
        offset.fields.y = fVar7 * (float)((ulong)uVar1 >> 0x20);
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                  ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar4,offset,
                   (MethodInfo *)0x0);
      }
      if (pIVar6->klass != (Il2CppClass *)0x0) {
        pIVar3[1].monitor = (pIVar6->klass->_1).this_arg.data;
        if ((char)enter == '\0') {
          if (DAT_05701371 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_05701371 = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
          fVar8 = fVar7 * (float)uVar1;
          fVar7 = fVar7 * (float)((ulong)uVar1 >> 0x20);
        }
        else {
          if (DAT_056fe093 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_056fe093 = '\x01';
          }
          fVar8 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar7 = (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
        }
        pIVar3[2].klass = (Il2CppClass *)CONCAT44(fVar7,fVar8);
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback<float>___ctor();
        t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                           ((Il2CppObject *)t,action,MethodInfo_Tweener_OnComplete_Tweener);
        pDVar5 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar3,1,MethodInfo_Tweener_SetUpdate_Tweener);
        return pDVar5;
      }
    }
  }
LAB_03ac683d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuLogo
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3ac6df0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,
          UnityEngine_Vector2_o offset,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *pUVar5;
  Il2CppObject *pIVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar8;
  void **ppvVar9;
  char cVar10;
  MethodInfo *pMVar11;
  float fVar12;
  undefined4 uVar13;
  UnityEngine_Vector2_Fields UStack_48;
  
  if (DAT_05701308 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogo);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Void__MainMenuLogo_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__MainMenuLogo_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    DAT_05701308 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pIVar4 = (Il2CppClass *)
           Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar3 + 1;
    pIVar3[1].klass = pIVar4;
    il2cpp_runtime_glue(pIVar1);
    pIVar4 = pIVar3[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      pMVar11 = (MethodInfo *)0x0;
      go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar11);
      pIVar3[2].monitor = pUVar5;
      il2cpp_runtime_glue(&pIVar3[2].monitor,pUVar5);
      pIVar6 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)rect,MethodInfo_GisketchLogoMotionBlur_GetComponent_GisketchLogo);
      ppvVar9 = &pIVar3[3].monitor;
      pIVar3[3].monitor = pIVar6;
      il2cpp_runtime_glue(ppvVar9);
      cVar10 = (char)enter;
      if (cVar10 != '\0') {
        if (pIVar1->klass == (Il2CppClass *)0x0) goto LAB_03ac71c7;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                  ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar1->klass,offset,
                   (MethodInfo *)0x0);
        pUVar5 = pIVar3[2].monitor;
        if (pUVar5 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_03ac71c7;
        pMVar11 = (MethodInfo *)0x0;
        UnityEngine_CanvasGroup__set_alpha(pUVar5,0.0,(MethodInfo *)0x0);
        if (*ppvVar9 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
          UStack_48.y = offset.fields.y;
          Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                    (*ppvVar9,ABS(UStack_48.y) * 0.18,pMVar11);
        }
      }
      if (pIVar1->klass != (Il2CppClass *)0x0) {
        pIVar3[1].monitor = (pIVar1->klass->_1).this_arg.data;
        UStack_48 = offset.fields;
        if (cVar10 != '\0') {
          if (DAT_056fe093 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_056fe093 = '\x01';
          }
          UStack_48 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
        }
        pIVar3[2].klass = (Il2CppClass *)UStack_48;
        if (pIVar3[2].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
          fVar12 = UnityEngine_CanvasGroup__get_alpha(pIVar3[2].monitor,(MethodInfo *)0x0);
          *(float *)&pIVar3[3].klass = fVar12;
          if (cVar10 == '\0') {
            uVar13 = 0;
          }
          else {
            uVar13 = 0x3f800000;
          }
          *(undefined4 *)((long)&pIVar3[3].klass + 4) = uVar13;
          x = pIVar3[3].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar11 = (MethodInfo *)0x0;
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          fVar12 = 0.0;
          if ((char)bVar2 != '\0') {
            if (*ppvVar9 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0)
            goto LAB_03ac71c7;
            fVar12 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(*ppvVar9,pMVar11);
          }
          *(float *)&pIVar3[4].klass = fVar12;
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback<float>___ctor();
          t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
          pDVar7 = DG_Tweening_TweenSettingsExtensions__Join
                             (pDVar7,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
          DG_Tweening_TweenCallback___ctor();
          pIVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                             ((Il2CppObject *)pDVar7,action,MethodInfo_Sequence_OnComplete_Sequence);
          pDVar8 = (DG_Tweening_Tween_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar3,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar8;
        }
      }
    }
  }
LAB_03ac71c7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$LogoImpact
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact (UnityEngine_RectTransform_o* rect, float duration, const MethodInfo* method);
// 0x3ac71d0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact
          (UnityEngine_RectTransform_o *rect,float duration,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  undefined8 *puVar4;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_Fields UVar11;
  
  if (DAT_05701309 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Void__LogoImpact_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__LogoImpact_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass5_0);
    DAT_05701309 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass5_0);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03ac74f9;
  pIVar2[2].klass = (Il2CppClass *)rect;
  il2cpp_runtime_glue(pIVar2 + 2);
  pIVar3 = pIVar2[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pIVar3 = (Il2CppClass *)
             Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
                       ((UnityEngine_RectTransform_o *)pIVar2[2].klass,(MethodInfo *)0x0);
    pIVar2[1].klass = pIVar3;
    il2cpp_runtime_glue(pIVar2 + 1);
    pIVar3 = pIVar2[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      pIVar3 = pIVar2[1].klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pIVar2[1].monitor = (pIVar3->_1).this_arg.data;
        if (pIVar2[2].klass != (Il2CppClass *)0x0) {
          UVar10 = UnityEngine_Transform__get_localScale
                             ((UnityEngine_Transform_o *)pIVar2[2].klass,(MethodInfo *)0x0);
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar9 = UVar10.fields.y - (float)((ulong)*puVar4 >> 0x20);
          fVar7 = UVar10.fields.z - *(float *)(puVar4 + 1);
          fVar8 = UVar10.fields.x - (float)*puVar4;
          if (9.9999994e-11 <= fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7) {
            pIVar3 = pIVar2[2].klass;
            if (pIVar3 == (Il2CppClass *)0x0) goto LAB_03ac74f9;
            UVar11 = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_localScale
                               ((UnityEngine_Transform_o *)pIVar3,(MethodInfo *)0x0);
          }
          else {
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
              puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            }
            UVar11 = *(UnityEngine_Vector3_Fields *)((long)puVar4 + 0xc);
          }
          *(UnityEngine_Vector3_Fields *)&pIVar2[2].monitor = UVar11;
          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
          DG_Tweening_TweenCallback<float>___ctor();
          t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
          pDVar5 = DG_Tweening_TweenSettingsExtensions__Join
                             (pDVar5,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
          DG_Tweening_TweenCallback___ctor();
          pIVar2 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                             ((Il2CppObject *)pDVar5,action,MethodInfo_Sequence_OnComplete_Sequence);
          pDVar6 = (DG_Tweening_Tween_o *)
                   DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar2,1,MethodInfo_Sequence_SetUpdate_Sequence);
          return pDVar6;
        }
      }
LAB_03ac74f9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro (UnityEngine_GameObject_o* go, float duration, bool enter, const MethodInfo* method);
// 0x3ac7b40

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro
          (UnityEngine_GameObject_o *go,float duration,bool_conflict enter,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Vector2_o offset;
  float fVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *__this;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_Sequence_o *pDVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Rect_o UVar5;
  
  if (DAT_0570130a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_Gisk);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_0570130a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_RectTransform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (go == (UnityEngine_GameObject_o *)0x0) goto LAB_03ac7d3c;
    __this = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (__this == (UnityEngine_RectTransform_o *)0x0) {
LAB_03ac7d3c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar5 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
  fVar2 = 64.0;
  if (64.0 <= UVar5.fields.m_Width) {
    fVar2 = UVar5.fields.m_Width;
  }
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  offset.fields.y = 0.0;
  offset.fields.x = -fVar2;
  t = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                (__this,duration,enter & 0xff,offset,method_00);
  if ((char)enter != '\0') {
    if (go == (UnityEngine_GameObject_o *)0x0) goto LAB_03ac7d3c;
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)
                UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_GisketchBrushButtonIntroReveal_GetComponent_Gisk);
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      t_00 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                       (__this_00,duration,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x03ac7ce2;
    }
  }
  t_00 = (DG_Tweening_Tween_o *)0x0;
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x03ac7ce2:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar4 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                     ((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t,(MethodInfo *)0x0);
  }
  if (t_00 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t_00,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushSidePanelContentIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro (UnityEngine_GameObject_o* go, float duration, bool enter, const MethodInfo* method);
// 0x3ac7920

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro
          (UnityEngine_GameObject_o *go,float duration,bool_conflict enter,MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  float fVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *__this;
  DG_Tweening_Tween_o *t;
  UnityEngine_CanvasGroup_o *group;
  DG_Tweening_Tween_o *t_00;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t_01;
  DG_Tweening_Sequence_o *pDVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  uint enter_00;
  MethodInfo *method_01;
  UnityEngine_Rect_o UVar5;
  
  if (DAT_0570130b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_0570130b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_RectTransform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (go == (UnityEngine_GameObject_o *)0x0) goto LAB_03ac7b2c;
    __this = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (__this != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
    fVar1 = 64.0;
    if (64.0 <= UVar5.fields.m_Width) {
      fVar1 = UVar5.fields.m_Width;
    }
    pMVar4 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar4 = extraout_RDX_00;
    }
    enter_00 = enter & 0xff;
    method_01 = (MethodInfo *)(ulong)enter_00;
    offset.fields.y = 0.0;
    offset.fields.x = fVar1;
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                  (__this,duration,enter_00,offset,pMVar4);
    group = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,method_01);
    t_00 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(group,duration,enter_00,method_00);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pMVar4 = MethodInfo_Image_GetComponent_Image;
      image = (UnityEngine_UI_Image_o *)
              UnityEngine_GameObject__GetComponent<object>(go,(MethodInfo_24F0F80 *)MethodInfo_Image_GetComponent_Image);
      t_01 = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur
                       (image,duration,52.0,pMVar4);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar3 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)pDVar3,1,MethodInfo_Sequence_SetUpdate_Sequence);
      if (t != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenSettingsExtensions__Join(pDVar3,t,(MethodInfo *)0x0);
      }
      if (t_00 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenSettingsExtensions__Join(pDVar3,t_00,(MethodInfo *)0x0);
      }
      if (t_01 == (DG_Tweening_Tween_o *)0x0) {
        return (DG_Tweening_Tween_o *)pDVar3;
      }
      DG_Tweening_TweenSettingsExtensions__Join(pDVar3,t_01,(MethodInfo *)0x0);
      return (DG_Tweening_Tween_o *)pDVar3;
    }
  }
LAB_03ac7b2c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HorizontalSurfaceBlur
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur (UnityEngine_UI_Image_o* image, float duration, float blurPixels, const MethodInfo* method);
// 0x3ac8390

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur
          (UnityEngine_UI_Image_o *image,float duration,float blurPixels,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  Il2CppObject *pIVar6;
  
  if (DAT_0570130c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_OnKill_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__HorizontalSurfaceBlur_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__HorizontalSurfaceBlur_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__HorizontalSurfaceBlur_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass8_0);
    DAT_0570130c = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass8_0);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = (Il2CppClass *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto LAB_03ac865b;
    pIVar3 = (Il2CppClass *)
             (*(image->klass->vtable)._32_get_material.methodPtr)
                       (image,(image->klass->vtable)._32_get_material.method);
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar6 = pIVar2 + 1;
    pIVar2[1].klass = pIVar3;
    il2cpp_runtime_glue(pIVar6);
    pIVar3 = pIVar2[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pIVar3 = pIVar6->klass;
    if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pIVar3 != (Il2CppClass *)0x0) {
      bVar1 = UnityEngine_Material__HasProperty
                        ((UnityEngine_Material_o *)pIVar3,
                         *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      pIVar3 = pIVar6->klass;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pIVar3 != (Il2CppClass *)0x0) {
        UnityEngine_Material__SetFloat
                  ((UnityEngine_Material_o *)pIVar3,
                   *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),blurPixels,(MethodInfo *)0x0)
        ;
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback<float>___ctor();
        t = DG_Tweening_DOVirtual__Float(blurPixels,0.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
        pDVar4 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar2 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                           ((Il2CppObject *)t,pDVar4,MethodInfo_Tweener_OnComplete_Tweener);
        pDVar4 = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        pIVar2 = DG_Tweening_TweenSettingsExtensions__OnKill<object>(pIVar2,pDVar4,MethodInfo_Tweener_OnKill_Tweener);
        pDVar5 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar2,1,MethodInfo_Tweener_SetUpdate_Tweener);
        return pDVar5;
      }
    }
  }
LAB_03ac865b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$FooterIconIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3ac7500

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  UnityEngine_Vector3_Fields endValue;
  bool_conflict bVar1;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar2;
  DG_Tweening_Sequence_o *pDVar3;
  DG_Tweening_Tween_o *pDVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  undefined8 local_28;
  
  if (DAT_0570130d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    DAT_0570130d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      puVar5 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar8 = UVar9.fields.y - (float)((ulong)*puVar5 >> 0x20);
      fVar6 = UVar9.fields.z - *(float *)(puVar5 + 1);
      fVar7 = UVar9.fields.x - (float)*puVar5;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
        UVar9 = UnityEngine_Transform__get_localScale
                          ((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
        fVar6 = UVar9.fields.z;
        fVar7 = UVar9.fields.x;
        fVar8 = UVar9.fields.y;
      }
      else {
        if (DAT_056fe077 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fe077 = '\x01';
          puVar5 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        }
        fVar7 = (float)*(undefined8 *)((long)puVar5 + 0xc);
        fVar8 = (float)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20);
        fVar6 = *(float *)((long)puVar5 + 0x14);
      }
      if ((char)enter == '\0') {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        endValue = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
        value.fields.y = fVar8;
        value.fields.x = fVar7;
        value.fields.z = fVar6;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)rect,value,(MethodInfo *)0x0);
        pDVar2 = DG_Tweening_ShortcutExtensions__DOScale
                           ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o)endValue,duration
                            ,(MethodInfo *)0x0);
        pDVar3 = (DG_Tweening_Sequence_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)pDVar2,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
        puVar5 = &MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve;
      }
      else {
        UVar9.fields.x = fVar7 * 1.35;
        UVar9.fields.y = fVar8 * 1.35;
        UVar9.fields.z = fVar6 * 1.35;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)rect,UVar9,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        endValue_00.fields.x = fVar7 * 0.88;
        endValue_00.fields.y = fVar8 * 0.88;
        endValue_00.fields.z = fVar6 * 0.88;
        pDVar2 = DG_Tweening_ShortcutExtensions__DOScale
                           ((UnityEngine_Transform_o *)rect,endValue_00,duration * 0.55,
                            (MethodInfo *)0x0);
        pDVar4 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)pDVar2,9,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__Append(pDVar3,pDVar4,(MethodInfo *)0x0);
        endValue_01.fields.z = fVar6;
        endValue_01.fields.x = fVar7;
        endValue_01.fields.y = fVar8;
        pDVar2 = DG_Tweening_ShortcutExtensions__DOScale
                           ((UnityEngine_Transform_o *)rect,endValue_01,duration * 0.45,
                            (MethodInfo *)0x0);
        pDVar4 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)pDVar2,0x1b,1.35,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__Append(pDVar3,pDVar4,(MethodInfo *)0x0);
        puVar5 = &MethodInfo_Sequence_SetUpdate_Sequence;
      }
      pDVar4 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)pDVar3,1,(MethodInfo_25B04E0 *)*puVar5);
      return pDVar4;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$TipPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3ac7840

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  bool_conflict bVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  
  if (DAT_0570130e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570130e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
    fVar3 = 64.0;
    if (64.0 <= UVar4.fields.m_Width) {
      fVar3 = UVar4.fields.m_Width;
    }
    if ((char)enter == '\0') {
      fVar3 = fVar3 * 1.5;
    }
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    offset.fields.y = 0.0;
    offset.fields.x = fVar3;
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                       (rect,duration,enter & 0xff,offset,method_00);
    return pDVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideNoFadeWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3ac7fa0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,
          UnityEngine_Vector2_o offset,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Vector2_Fields local_38;
  
  if (DAT_0570130f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__SlideNoFadeWithOffset_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SlideNoFadeWithOffset_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass11_0);
    DAT_0570130f = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass11_0);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pIVar3 = (Il2CppClass *)
           Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar5 = pIVar2 + 1;
    pIVar2[1].klass = pIVar3;
    il2cpp_runtime_glue(pIVar5);
    pIVar3 = pIVar2[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if ((char)enter != '\0') {
      if (pIVar5->klass == (Il2CppClass *)0x0) goto LAB_03ac8211;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                ((Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)pIVar5->klass,offset,
                 (MethodInfo *)0x0);
    }
    if (pIVar5->klass != (Il2CppClass *)0x0) {
      pIVar2[1].monitor = (pIVar5->klass->_1).this_arg.data;
      local_38 = offset.fields;
      if ((char)enter != '\0') {
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
        }
        local_38 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      }
      *(float *)&pIVar2[2].klass = local_38.x;
      *(float *)((long)&pIVar2[2].klass + 4) = local_38.y;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback<float>___ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
      pIVar2 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
      action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
      DG_Tweening_TweenCallback___ctor();
      pIVar2 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>(pIVar2,action,MethodInfo_Tweener_OnComplete_Tweener);
      pDVar4 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar2,1,MethodInfo_Tweener_SetUpdate_Tweener);
      return pDVar4;
    }
  }
LAB_03ac8211:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$OutCubic
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic (float value, const MethodInfo* method);
// 0x3ac8680

float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic(float value,MethodInfo *method)

{
  MethodInfo *in_RSI;
  float fVar1;
  
  fVar1 = powf((CustomLogic_CustomLogicMathBuiltin_o *)method,1.0 - value,3.0,in_RSI);
  return 1.0 - fVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewEnter
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3ac86b0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05701310 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701310 = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar1 != 0) {
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,1,in_RDX);
    return pDVar2;
  }
  il2cpp_init_class();
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,1,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewExit
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3ac8c30

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05701311 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701311 = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchMotion + 0xe4);
  }
  if (iVar1 != 0) {
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,0,in_RDX);
    return pDVar2;
  }
  il2cpp_init_class();
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,0,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetViewToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3ac8ca0

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest
               (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o GStack_50;
  
  if (DAT_05701312 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchMotionTarget_get_Item);
    DAT_05701312 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    __this = (view->fields)._MotionTargets_k__BackingField;
    if (__this == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
LAB_03ac8db0:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar11 = (__this->fields)._size;
    if ((iVar11 != 0) && (0 < iVar11)) {
      iVar11 = 0;
      do {
        System_Collections_Generic_List<GisketchMotionTarget>__get_Item
                  (&GStack_50,__this,iVar11,MethodInfo_GisketchMotionTarget_get_Item);
        uVar9 = GStack_50.fields._32_8_;
        fVar8 = GStack_50.fields.RestScale.fields.y;
        fVar7 = GStack_50.fields.RestScale.fields.x;
        uVar6 = GStack_50.fields.Exit._4_4_;
        uVar5 = GStack_50.fields.Exit._0_4_;
        uVar4 = GStack_50.fields.Enter._4_4_;
        uVar3 = GStack_50.fields.Enter._0_4_;
        uVar2 = GStack_50.fields.GameObject._4_4_;
        uVar1 = GStack_50.fields.GameObject._0_4_;
        method_00 = TypeInfo_GisketchMotion;
        if (*(int *)((long)&TypeInfo_GisketchMotion[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        uVar10 = GStack_50.fields._32_8_;
        target.fields.GameObject._4_4_ = uVar2;
        target.fields.GameObject._0_4_ = uVar1;
        target.fields.Enter._4_4_ = uVar4;
        target.fields.Enter._0_4_ = uVar3;
        target.fields.Exit._4_4_ = uVar6;
        target.fields.Exit._0_4_ = uVar5;
        target.fields.RestScale.fields.y = fVar8;
        target.fields.RestScale.fields.x = fVar7;
        GStack_50.fields.RestScale.fields.z = (float)uVar9;
        GStack_50.fields.RestAlpha = SUB84(uVar9,4);
        target.fields.RestScale.fields.z = GStack_50.fields.RestScale.fields.z;
        target.fields.RestAlpha = GStack_50.fields.RestAlpha;
        GStack_50.fields._32_8_ = uVar10;
        Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest(target,method_00);
        __this = (view->fields)._MotionTargets_k__BackingField;
        if (__this == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)
        goto LAB_03ac8db0;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (__this->fields)._size);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayNode
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, bool blocksInput, const MethodInfo* method);
// 0x3ac8f90

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,
          bool_conflict enter,bool_conflict blocksInput,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  bool_conflict bVar2;
  undefined4 in_register_0000000c;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  bVar2 = blocksInput;
  if (DAT_05701313 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701313 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                     (go,motion,enter & 0xff,(MethodInfo *)CONCAT44(in_register_0000000c,bVar2));
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                     (pDVar1,blocksInput & 0xff,method_00);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayTargets
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets (Gisketch_Aottg2UI_Building_GisketchView_o* view, bool enter, const MethodInfo* method);
// 0x3ac8720

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,bool_conflict enter,MethodInfo *method)

{
  char cVar1;
  char cVar2;
  UnityEngine_GameObject_o *root;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  bool_conflict bVar3;
  int32_t iVar4;
  Il2CppObject *__this_01;
  DG_Tweening_Sequence_o *pDVar5;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar6;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_Dictionary_object__int__o *__this_02;
  DG_Tweening_Tween_o *pDVar7;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  undefined8 in_stack_ffffffffffffff48;
  _union_247288 _Var12;
  UnityEngine_GameObject_o *local_98;
  undefined8 uStack_90;
  _union_247288 local_68 [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *local_48;
  
  if (DAT_05701314 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Comparison_GisketchMotionTarget);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GisketchMotionTarget_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Building);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchMotionTarget);
    il2cpp_init_method_metadata(&MethodInfo_Tween_SetDelay_Tween);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_init_method_metadata(&MethodInfo_Int32__PlayTargets_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass19_0);
    DAT_05701314 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass19_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    *(char *)&__this_01[1].klass = (char)enter;
    if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pSVar6 = (view->fields)._MotionTargets_k__BackingField;
    if (pSVar6 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
      if ((pSVar6->fields)._size == 0) {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return (DG_Tweening_Tween_o *)0x0;
      }
      root = (view->fields)._Root_k__BackingField;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar9 = 0;
      pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)pDVar5,1,MethodInfo_Sequence_SetUpdate_Sequence);
      pMVar8 = (MethodInfo *)(view->fields)._MotionTargets_k__BackingField;
      pSVar6 = (System_Collections_Generic_List_GisketchMotionTarget__o *)
               il2cpp_runtime_glue(TypeInfo_List_GisketchMotionTarget);
      System_Collections_Generic_List<GisketchMotionTarget>___ctor
                (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pMVar8,MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotion);
      if (*(char *)&__this_01[1].klass == '\0') {
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit(pSVar6,pMVar8);
        uVar9 = (undefined1)bVar3;
      }
      *(undefined1 *)((long)&__this_01[1].klass + 1) = uVar9;
      comparison = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_GisketchMotionTarget);
      pMVar8 = (MethodInfo *)0x0;
      System_Comparison<GisketchMotionTarget>___ctor();
      if (pSVar6 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        System_Collections_Generic_List<GisketchMotionTarget>__Sort(pSVar6,comparison,MethodInfo_Void_Sort);
        __this_02 = (System_Collections_Generic_Dictionary_object__int__o *)
                    il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
        System_Collections_Generic_Dictionary<object__int>___ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Int32);
        System_Collections_Generic_List<GisketchMotionTarget>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_68,pSVar6,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Building);
        local_98 = (UnityEngine_GameObject_o *)CONCAT44(local_68[2]._4_4_,local_68[2]._0_4_);
        uStack_90 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)
                    CONCAT44(uStack_4c,uStack_50);
        _Var12 = local_68[0];
        while (__this.fields._8_8_ = pDVar5,
              __this.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48,
              __this.fields._current = _Var12.genericMethod,
              bVar3 = System_Collections_Generic_List_Enumerator<GisketchMotionTarget>__MoveNext
                                (__this,(MethodInfo_317FE50 *)&stack0xffffffffffffff58),
              (char)bVar3 != '\0') {
          cVar1 = *(char *)&__this_01[1].klass;
          cVar2 = *(char *)((long)&__this_01[1].klass + 1);
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            il2cpp_init_class();
          }
          motion = uStack_90;
          if (cVar1 == '\0') {
            if (cVar2 != '\0') {
              motion = local_48;
            }
            if (local_48 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              motion = local_48;
            }
          }
          pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                             (local_98,motion,(uint)*(byte *)&__this_01[1].klass,pMVar8);
          if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
            method_00 = extraout_RDX;
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_00;
            }
            iVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex
                              ((System_Collections_Generic_Dictionary_string__int__o *)__this_02,
                               motion,method_00);
            if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              fVar10 = 0.0;
            }
            else {
              fVar10 = (motion->fields).stagger;
              fVar11 = 0.0;
              if (0.0 <= fVar10) {
                fVar11 = fVar10;
              }
              fVar10 = (float)iVar4 * fVar11 + (motion->fields).delay;
            }
            DG_Tweening_TweenSettingsExtensions__SetDelay<object>
                      ((Il2CppObject *)pDVar7,fVar10,MethodInfo_Tween_SetDelay_Tween);
            DG_Tweening_TweenSettingsExtensions__Join(pDVar5,pDVar7,(MethodInfo *)0x0);
          }
        }
        __this_00.fields._8_8_ = pDVar5;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
        __this_00.fields._current = _Var12.genericMethod;
        System_Collections_Generic_List_Enumerator<GisketchMotionTarget>__Dispose
                  (__this_00,(MethodInfo_317FE40 *)&stack0xffffffffffffff58);
        pMVar8 = extraout_RDX_01;
        if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar8 = extraout_RDX_02;
        }
        pDVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                           ((DG_Tweening_Tween_o *)pDVar5,1,pMVar8);
        return pDVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$CreateTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, const MethodInfo* method);
// 0x3ac9030

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,
          bool_conflict enter,MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  bool_conflict bVar1;
  char *pcVar2;
  System_String_o *pSVar3;
  DG_Tweening_Tween_o *pDVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_CanvasGroup_o *pUVar6;
  UnityEngine_Transform_o *target;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *pMVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float local_2c;
  
  if (DAT_05701315 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"slidedown");
    il2cpp_init_method_metadata(&"slideleftsmall");
    il2cpp_init_method_metadata(&"fade");
    il2cpp_init_method_metadata(&"sliderightsmall");
    il2cpp_init_method_metadata(&"balloon");
    il2cpp_init_method_metadata(&"slide");
    il2cpp_init_method_metadata(&"slideright");
    il2cpp_init_method_metadata(&"pop");
    il2cpp_init_method_metadata(&"slideleft");
    DAT_05701315 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if ((char)bVar1 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  bVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
    pcVar2 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
    if (*pcVar2 != '\0') goto LAB_03ac9159;
LAB_03ac91d9:
    local_2c = 0.01;
    pSVar3 = (motion->fields).preset;
  }
  else {
    pcVar2 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
    if (*pcVar2 == '\0') goto LAB_03ac91d9;
LAB_03ac9159:
    fVar9 = (motion->fields).duration;
    uVar8 = -(uint)(0.0 < fVar9);
    fVar9 = (float)(~uVar8 & 0x3e23d70a | (uint)fVar9 & uVar8);
    local_2c = 0.01;
    if (0.01 <= fVar9) {
      local_2c = fVar9;
    }
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
      pcVar2 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
    }
    local_2c = local_2c * *(float *)(pcVar2 + 4);
    pSVar3 = (motion->fields).preset;
  }
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar8 = enter & 0xff;
    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween
                       (go,pSVar3,local_2c,uVar8,method);
    if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
      return pDVar4;
    }
    if (pSVar3 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(pSVar3,"slideleftsmall",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__Contains(pSVar3,"sliderightsmall",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__Contains(pSVar3,"slideleft",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__Contains(pSVar3,"slideright",(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__Contains(pSVar3,"slidedown",(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                bVar1 = System_String__Contains(pSVar3,"slide",(MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  pMVar7 = "fade";
                  bVar1 = System_String__Contains
                                    (pSVar3,(System_String_o *)"fade",(MethodInfo *)0x0);
                  if ((char)bVar1 != '\0') {
                    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pUVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar7)
                    ;
                    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                                       (pUVar6,local_2c,uVar8,method_00);
                    return pDVar4;
                  }
                  bVar1 = System_String__Contains(pSVar3,"balloon",(MethodInfo *)0x0);
                  if ((char)bVar1 == '\0') {
                    System_String__Contains(pSVar3,"pop",(MethodInfo *)0x0);
                    if (go != (UnityEngine_GameObject_o *)0x0) {
                      pMVar7 = (MethodInfo *)0x0;
                      target = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pUVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
                                         (go,pMVar7);
                      pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop
                                         (target,pUVar6,local_2c,uVar8,method);
                      return pDVar4;
                    }
                  }
                  else if (go != (UnityEngine_GameObject_o *)0x0) {
                    pUVar5 = (UnityEngine_RectTransform_o *)
                             UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
                    pMVar7 = extraout_RDX_11;
                    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                      il2cpp_init_class();
                      pMVar7 = extraout_RDX_12;
                    }
                    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon
                                       (pUVar5,local_2c,uVar8,pMVar7);
                    return pDVar4;
                  }
                }
                else if (go != (UnityEngine_GameObject_o *)0x0) {
                  pUVar5 = (UnityEngine_RectTransform_o *)
                           UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
                  pMVar7 = extraout_RDX_09;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    il2cpp_init_class();
                    pMVar7 = extraout_RDX_10;
                  }
                  pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide
                                     (pUVar5,local_2c,uVar8,pMVar7);
                  return pDVar4;
                }
              }
              else if (go != (UnityEngine_GameObject_o *)0x0) {
                pUVar5 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
                pMVar7 = extraout_RDX_07;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar7 = extraout_RDX_08;
                }
                fVar9 = 0.0;
                fVar10 = 20.0;
                goto LAB_03ac93e9;
              }
            }
            else if (go != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = (UnityEngine_RectTransform_o *)
                       UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
              pMVar7 = extraout_RDX_05;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                il2cpp_init_class();
                pMVar7 = extraout_RDX_06;
              }
              fVar9 = -48.0;
              fVar10 = 0.0;
              goto LAB_03ac93e9;
            }
          }
          else if (go != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
            pMVar7 = extraout_RDX_03;
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar7 = extraout_RDX_04;
            }
            fVar9 = 48.0;
            fVar10 = 0.0;
            goto LAB_03ac93e9;
          }
        }
        else if (go != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
          pMVar7 = extraout_RDX_01;
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            il2cpp_init_class();
            pMVar7 = extraout_RDX_02;
          }
          fVar9 = -16.0;
          fVar10 = 0.0;
          goto LAB_03ac93e9;
        }
      }
      else if (go != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
        pMVar7 = extraout_RDX;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar7 = extraout_RDX_00;
        }
        fVar9 = 16.0;
        fVar10 = 0.0;
LAB_03ac93e9:
        offset.fields.y = fVar10;
        offset.fields.x = fVar9;
        pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
                           (pUVar5,local_2c,uVar8,offset,pMVar7);
        return pDVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Balloon
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3ac9a70

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  undefined8 *puVar3;
  DG_Tweening_Sequence_o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  DG_Tweening_Tween_o *pDVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  float local_38;
  float fStack_34;
  
  if (DAT_05701316 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_05701316 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar7);
    UVar11 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    puVar3 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = UVar11.fields.y - (float)((ulong)*puVar3 >> 0x20);
    fVar8 = UVar11.fields.z - *(float *)(puVar3 + 1);
    fVar9 = UVar11.fields.x - (float)*puVar3;
    if (9.9999994e-11 <= fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) {
      UVar11 = UnityEngine_Transform__get_localScale
                         ((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
      fVar8 = UVar11.fields.z;
      fVar9 = UVar11.fields.x;
      fVar10 = UVar11.fields.y;
      uVar1 = UVar11.fields._0_8_;
    }
    else {
      if (DAT_056fe077 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fe077 = '\x01';
        puVar3 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar1 = *(undefined8 *)((long)puVar3 + 0xc);
      fVar9 = (float)uVar1;
      fVar10 = (float)((ulong)uVar1 >> 0x20);
      fVar8 = *(float *)((long)puVar3 + 0x14);
    }
    if ((char)enter == '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_38 = (float)uVar1;
      fStack_34 = (float)((ulong)uVar1 >> 0x20);
      endValue.fields.x = local_38 * (float)0x3f666666;
      endValue.fields.y = fStack_34 * (float)0x3f666666;
      endValue.fields.z = fVar8 * 0.9;
      pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,endValue,duration,(MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)pDVar5,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar7 = extraout_RDX_00;
      }
      fVar8 = duration * 0.75;
      bVar2 = 0;
    }
    else {
      UVar11.fields.x = fVar9 * (float)0x3f570a3d;
      UVar11.fields.y = fVar10 * (float)0x3f570a3d;
      UVar11.fields.z = fVar8 * 0.84;
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)rect,UVar11,(MethodInfo *)0x0);
      if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_03ac9de6;
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.z = fVar8;
      endValue_00.fields.x = (float)(int)uVar1;
      endValue_00.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
      pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,endValue_00,duration,(MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)pDVar5,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar7 = extraout_RDX_02;
      }
      fVar8 = duration * 0.8;
      bVar2 = 1;
    }
    pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,fVar8,bVar2,pMVar7);
    pDVar4 = DG_Tweening_TweenSettingsExtensions__Join(pDVar4,pDVar6,(MethodInfo *)0x0);
    pDVar6 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                       ((Il2CppObject *)pDVar4,1,MethodInfo_Sequence_SetUpdate_Sequence);
    return pDVar6;
  }
LAB_03ac9de6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Pop
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop (UnityEngine_Transform_o* target, UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x3ac9df0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop
          (UnityEngine_Transform_o *target,UnityEngine_CanvasGroup_o *group,float duration,
          bool_conflict enter,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  DG_Tweening_Sequence_o *pDVar3;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  bool_conflict enter_00;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  float local_38;
  float fStack_34;
  
  if (DAT_05701317 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_05701317 = '\x01';
  }
  if (target != (UnityEngine_Transform_o *)0x0) {
    UVar9 = UnityEngine_Transform__get_localScale(target,(MethodInfo *)0x0);
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    puVar2 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = UVar9.fields.y - (float)((ulong)*puVar2 >> 0x20);
    fVar6 = UVar9.fields.z - *(float *)(puVar2 + 1);
    fVar7 = UVar9.fields.x - (float)*puVar2;
    if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
      UVar9 = UnityEngine_Transform__get_localScale(target,(MethodInfo *)0x0);
      fVar6 = UVar9.fields.z;
      fVar7 = UVar9.fields.x;
      fVar8 = UVar9.fields.y;
      uVar1 = UVar9.fields._0_8_;
    }
    else {
      if (DAT_056fe077 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fe077 = '\x01';
        puVar2 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar1 = *(undefined8 *)((long)puVar2 + 0xc);
      fVar7 = (float)uVar1;
      fVar8 = (float)((ulong)uVar1 >> 0x20);
      fVar6 = *(float *)((long)puVar2 + 0x14);
    }
    if ((char)enter == '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_38 = (float)uVar1;
      fStack_34 = (float)((ulong)uVar1 >> 0x20);
      endValue.fields.x = local_38 * 0.96;
      endValue.fields.y = fStack_34 * 0.96;
      endValue.fields.z = fVar6 * 0.96;
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale(target,endValue,duration,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)pDVar4,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      enter_00 = 0;
    }
    else {
      UVar9.fields.x = fVar7 * 0.86;
      UVar9.fields.y = fVar8 * 0.86;
      UVar9.fields.z = fVar6 * 0.86;
      UnityEngine_Transform__set_localScale(target,UVar9,(MethodInfo *)0x0);
      if (group == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_03aca0fd;
      UnityEngine_CanvasGroup__set_alpha(group,0.0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      endValue_00.fields.z = fVar6;
      endValue_00.fields.x = (float)(int)uVar1;
      endValue_00.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
      pDVar4 = DG_Tweening_ShortcutExtensions__DOScale
                         (target,endValue_00,duration,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)pDVar4,0x1b,1.12,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Ve);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_02;
      }
      enter_00 = 1;
    }
    pDVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                       (group,duration * 0.75,enter_00,method_00);
    pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar5,(MethodInfo *)0x0);
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                       ((Il2CppObject *)pDVar3,1,MethodInfo_Sequence_SetUpdate_Sequence);
    return pDVar5;
  }
LAB_03aca0fd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Fade
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade (UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x3ac8220

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
          (UnityEngine_CanvasGroup_o *group,float duration,bool_conflict enter,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar2;
  float fVar3;
  float to;
  
  if (DAT_05701318 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__Fade_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass23_0);
    DAT_05701318 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass23_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)group;
    il2cpp_runtime_glue(__this + 1);
    pIVar1 = __this[1].klass;
    if ((char)enter == '\0') {
      if (pIVar1 == (Il2CppClass *)0x0) goto LAB_03ac8381;
      fVar3 = UnityEngine_CanvasGroup__get_alpha
                        ((UnityEngine_CanvasGroup_o *)pIVar1,(MethodInfo *)0x0);
    }
    else {
      fVar3 = 0.0;
      if (pIVar1 == (Il2CppClass *)0x0) goto LAB_03ac8381;
    }
    UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)pIVar1,fVar3,(MethodInfo *)0x0);
    pIVar1 = __this[1].klass;
    if (pIVar1 != (Il2CppClass *)0x0) {
      fVar3 = UnityEngine_CanvasGroup__get_alpha
                        ((UnityEngine_CanvasGroup_o *)pIVar1,(MethodInfo *)0x0);
      if ((char)enter == '\0') {
        to = 0.0;
      }
      else {
        to = 1.0;
      }
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback<float>___ctor();
      t = DG_Tweening_DOVirtual__Float(fVar3,to,duration,onVirtualUpdate,(MethodInfo *)0x0);
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
      return pDVar2;
    }
  }
LAB_03ac8381:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Slide
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x3ac99d0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,MethodInfo *method)

{
  bool_conflict bVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05701319 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701319 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
                     (rect,duration,enter & 0xff,(UnityEngine_Vector2_o)0xc1a0000000000000,method_00
                     );
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3ac9790

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool_conflict enter,
          UnityEngine_Vector2_o offset,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Tween_o *pDVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields local_58;
  UnityEngine_Vector2_Fields local_48;
  
  if (DAT_0570131a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Sequence_SetUpdate_Sequence);
    DAT_0570131a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pMVar4 = (MethodInfo *)0x0;
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar4);
    __this_00 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if ((char)enter == '\0') {
      if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        local_48 = (__this_00->fields)._motionOffset.fields;
        local_58 = offset.fields;
        goto LAB_03ac991a;
      }
    }
    else if ((__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) &&
            (Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                       (__this_00,offset,(MethodInfo *)0x0),
            __this != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      local_48 = (__this_00->fields)._motionOffset.fields;
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      local_58 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
LAB_03ac991a:
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pMVar4 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar4 = extraout_RDX_00;
      }
      pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
                         (__this_00,(UnityEngine_Vector2_o)local_48,(UnityEngine_Vector2_o)local_58,
                          duration,(enter & 0xffU) + 8,pMVar4);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__Join(pDVar2,pDVar3,(MethodInfo *)0x0);
      pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
                         (__this,duration,enter & 0xffU,method_00);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__Join(pDVar2,pDVar3,(MethodInfo *)0x0);
      pDVar3 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                         ((Il2CppObject *)pDVar2,1,MethodInfo_Sequence_SetUpdate_Sequence);
      return pDVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOffsetTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* layoutOffset, UnityEngine_Vector2_o start, UnityEngine_Vector2_o target, float duration, int32_t ease, const MethodInfo* method);
// 0x3aca120

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *layoutOffset,
          UnityEngine_Vector2_o start,UnityEngine_Vector2_o target,float duration,int32_t ease,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar2;
  float local_38;
  float fStack_34;
  
  if (DAT_0570131b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__MotionOffsetTween_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__MotionOffsetTween_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass26_0);
    DAT_0570131b = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass26_0);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)layoutOffset;
    il2cpp_runtime_glue(pIVar1 + 1,layoutOffset);
    local_38 = start.fields.x;
    fStack_34 = start.fields.y;
    *(float *)&pIVar1[1].monitor = local_38;
    *(float *)((long)&pIVar1[1].monitor + 4) = fStack_34;
    *(float *)&pIVar1[2].klass = target.fields.x;
    *(float *)((long)&pIVar1[2].klass + 4) = target.fields.y;
    onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
    DG_Tweening_TweenCallback<float>___ctor();
    t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,onVirtualUpdate,(MethodInfo *)0x0);
    pIVar1 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                       ((Il2CppObject *)t,ease,MethodInfo_Tweener_SetEase_Tweener);
    action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
    DG_Tweening_TweenCallback___ctor();
    pIVar1 = DG_Tweening_TweenSettingsExtensions__OnComplete<object>(pIVar1,action,MethodInfo_Tweener_OnComplete_Tweener);
    pDVar2 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar1,1,MethodInfo_Tweener_SetUpdate_Tweener);
    return pDVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$EnsureCanvasGroup
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3ac7d70

UnityEngine_CanvasGroup_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup
          (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_CanvasGroup_o *pUVar2;
  
  if (DAT_0570131c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570131c = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar2 = (UnityEngine_CanvasGroup_o *)
           UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return pUVar2;
  }
  pUVar2 = (UnityEngine_CanvasGroup_o *)
           UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
  return pUVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetTargetToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, const MethodInfo* method);
// 0x3ac8dc0

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  if (DAT_0570131d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayout);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570131d = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (target.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>(target.fields.GameObject,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_03ac8f89;
      __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)x,MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayout);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      if (__this == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto LAB_03ac8f89;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                (__this,(UnityEngine_Vector2_o)
                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
    }
    __this_00 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_GameObject__GetComponent<object>(target.fields.GameObject,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_03ac8f89;
      UnityEngine_CanvasGroup__set_alpha(__this_00,target.fields.RestAlpha,(MethodInfo *)0x0);
    }
    __this_01 = UnityEngine_GameObject__get_transform(target.fields.GameObject,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale(__this_01,target.fields.RestScale,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03ac8f89:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Delay
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, int32_t index, const MethodInfo* method);
// 0x3ac9770

float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay
                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,int32_t index,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    fVar1 = (motion->fields).stagger;
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    return (float)index * fVar2 + (motion->fields).delay;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$NextGroupIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex (System_Collections_Generic_Dictionary_string__int__o* groupIndexes, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3ac96b0

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex
                  (System_Collections_Generic_Dictionary_string__int__o *groupIndexes,
                  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  System_String_o *key;
  uint in_EAX;
  bool_conflict bVar1;
  System_String_o **ppSVar2;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_0570131e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_0570131e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if ((motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty((motion->fields).group,(MethodInfo *)0x0),
     (char)bVar1 != '\0')) {
    ppSVar2 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
  }
  else {
    ppSVar2 = &(motion->fields).group;
  }
  if (groupIndexes != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    key = *ppSVar2;
    System_Collections_Generic_Dictionary<object__int>__TryGetValue
              ((System_Collections_Generic_Dictionary_object__int__o *)groupIndexes,
               (Il2CppObject *)key,(int32_t *)((long)&uStack_18 + 4),MethodInfo_Boolean_TryGetValue);
    System_Collections_Generic_Dictionary<object__int>__set_Item
              ((System_Collections_Generic_Dictionary_object__int__o *)groupIndexes,
               (Il2CppObject *)key,uStack_18._4_4_ + 1,MethodInfo_Void_set_Item);
    return uStack_18._4_4_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionFor
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, bool enter, bool explicitExitOnly, const MethodInfo* method);
// 0x3ac9690

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor
          (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,bool_conflict enter,
          bool_conflict explicitExitOnly,MethodInfo *method)

{
  if ((enter != 0) ||
     ((target.fields.Exit == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 &&
      ((char)explicitExitOnly == '\0')))) {
    target.fields.Exit = target.fields.Enter;
  }
  return target.fields.Exit;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasExplicitExit
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit (System_Collections_Generic_List_GisketchMotionTarget__o* targets, const MethodInfo* method);
// 0x3ac95a0

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit
          (System_Collections_Generic_List_GisketchMotionTarget__o *targets,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  bool_conflict bVar2;
  uint uVar3;
  ulong uVar4;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o GStack_58;
  
  if (DAT_0570131f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchMotionTarget_get_Item);
    DAT_0570131f = '\x01';
  }
  if (targets == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar4 = 0;
  if (0 < (targets->fields)._size) {
    do {
      System_Collections_Generic_List<GisketchMotionTarget>__get_Item
                (&GStack_58,targets,(int)uVar4,MethodInfo_GisketchMotionTarget_get_Item);
      pGVar1 = GStack_58.fields.Exit;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) &&
         (bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).preset,(MethodInfo *)0x0),
         (char)bVar2 == '\0')) {
        return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while ((int)uVar3 < (targets->fields)._size);
  }
  return 0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3aca2d0

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion
          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  uint uVar1;
  
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOrder
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOrder (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, bool enter, bool explicitExitOnly, const MethodInfo* method);
// 0x3aca2f0

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOrder
                  (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,bool_conflict enter,
                  bool_conflict explicitExitOnly,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_05701320 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701320 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)enter == '\0') {
    if ((char)explicitExitOnly != '\0') {
      target.fields.Enter = target.fields.Exit;
    }
    if (target.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      target.fields.Enter = target.fields.Exit;
    }
  }
  if (target.fields.Enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((target.fields.Enter)->fields).order;
  }
  return iVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor (const MethodInfo* method);
// 0x3aca380

void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor(MethodInfo *method)

{
  undefined1 *puVar1;
  
  if (DAT_05701321 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05701321 = '\x01';
  }
  puVar1 = *(undefined1 **)(TypeInfo_GisketchMotion + 0xb8);
  *puVar1 = 1;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  return;
}


