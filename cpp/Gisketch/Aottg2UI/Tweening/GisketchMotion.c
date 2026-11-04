// Type: Gisketch.Aottg2UI.Tweening.GisketchMotion
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotion.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, float value, const MethodInfo* method);
// 0x1818a2bd0

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__0(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, float value, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_o offset;
  
  fVar1 = (__this->fields).start.fields.x;
  fVar2 = (__this->fields).start.fields.y;
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    offset.fields.y = ((__this->fields).target.fields.y - fVar2) * value + fVar2;
    offset.fields.x = ((__this->fields).target.fields.x - fVar1) * value + fVar1;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x1818a2c30

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__1(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$<PlayTargets>b__0
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___PlayTargets_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o* __this, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o a, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o b, const MethodInfo* method);
// 0x1818a2c70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a2d38: mov rax, rdx
// asm:   0x1818a2d3b: jmp 0x1818a2d42
// asm:   0x1818a2da9: mov rax, rcx
// asm:   0x1818a2dac: jmp 0x1818a2db2

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___PlayTargets_b__0
                  (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *__this,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *a,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *b,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  int32_t iVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184341ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ee8 = '\x01';
  }
  bVar1 = (__this->fields).enter;
  bVar2 = (__this->fields).explicitExitOnly;
  local_res8[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  if (Il2CppMethodInitialized_184341ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ee6 = '\x01';
  }
  pGVar3 = (a->fields).Enter;
  pGVar4 = (a->fields).Exit;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pGVar6 = pGVar3;
  if ((((bVar1 == false) &&
       (pGVar6 = pGVar4, pGVar4 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) &&
      (pGVar6 = pGVar3, bVar2 != false)) ||
     (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
    local_res8[0] = 0;
  }
  else {
    local_res8[0] = (pGVar6->fields).order;
  }
  bVar1 = (__this->fields).enter;
  bVar2 = (__this->fields).explicitExitOnly;
  if (Il2CppMethodInitialized_184341ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ee6 = '\x01';
  }
  pGVar3 = (b->fields).Enter;
  pGVar4 = (b->fields).Exit;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pGVar6 = pGVar3;
  if ((((bVar1 == false) &&
       (pGVar6 = pGVar4, pGVar4 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) &&
      (pGVar6 = pGVar3, bVar2 != false)) ||
     (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = (pGVar6->fields).order;
  }
  iVar5 = System_Int32__CompareTo_1b28ec0(local_res8,iVar5,(MethodInfo *)0x0);
  return iVar5;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$<Fade>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___Fade_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, float value, const MethodInfo* method);
// 0x1818a3060

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___Fade_b__0(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, float value, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, float value, const MethodInfo* method);
// 0x1818a2bd0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,float value,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_o offset;
  
  fVar1 = (__this->fields).start.fields.x;
  fVar2 = (__this->fields).start.fields.y;
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    offset.fields.y = ((__this->fields).target.fields.y - fVar2) * value + fVar2;
    offset.fields.x = ((__this->fields).target.fields.x - fVar1) * value + fVar1;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x1818a2c30

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__1(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, float value, const MethodInfo* method);
// 0x1818a3080

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  float fVar1;
  
  if (Il2CppMethodInitialized_184341ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ee9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  fVar1 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - value,0x40400000);
  if ((__this->fields).layoutOffset != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    offset.fields.y =
         ((__this->fields).target.fields.y - (__this->fields).start.fields.y) * (1.0 - fVar1) +
         (__this->fields).start.fields.y;
    offset.fields.x =
         ((__this->fields).target.fields.x - (__this->fields).start.fields.x) * (1.0 - fVar1) +
         (__this->fields).start.fields.x;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              ((__this->fields).layoutOffset,offset,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x1818a2c30

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, float value, const MethodInfo* method);
// 0x1818a3240
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a330e: movaps xmm2, xmm7
// asm:   0x1818a3311: jmp 0x1818a331c

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,float value,
               MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_02;
  UnityEngine_Vector2_o offset;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184341eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341eea = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  fVar2 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - value,0x40400000);
  fVar3 = (__this->fields).start.fields.x;
  fVar1 = (__this->fields).start.fields.y;
  fVar2 = 1.0 - fVar2;
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    offset.fields.y = ((__this->fields).target.fields.y - fVar1) * fVar2 + fVar1;
    offset.fields.x = ((__this->fields).target.fields.x - fVar3) * fVar2 + fVar3;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    __this_01 = (__this->fields).group;
    if (fVar2 < 0.0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = fVar2;
      if (1.0 < fVar2) {
        fVar3 = 1.0;
      }
    }
    if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar1 = (__this->fields).startAlpha;
      UnityEngine_CanvasGroup__set_alpha
                (__this_01,((__this->fields).endAlpha - fVar1) * fVar3 + fVar1,(MethodInfo *)0x0);
      __this_02 = (__this->fields).blur;
      if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
        fVar3 = (__this->fields).startBlur;
        if (fVar2 < 0.0) {
          fVar2 = 0.0;
        }
        else if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                  (__this_02,(0.0 - fVar3) * fVar2 + fVar3,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x1818a33a0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_01;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
            (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
  __this_01 = (__this->fields).blur;
  if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_01,0.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, float value, const MethodInfo* method);
// 0x1818a3400

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,float value,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector2_o offset;
  float fVar3;
  float fVar4;
  undefined4 in_XMM1_Db;
  float fVar5;
  UnityEngine_Vector3_Fields local_48 [5];
  
  fVar5 = 1.0 - value;
  fVar3 = (float)il2cpp_runtime_helper_1804f5fc0(CONCAT44(in_XMM1_Db,value * 3.1415927 * 18.0));
  fVar4 = (float)il2cpp_runtime_helper_1804f54c0(CONCAT44(in_XMM1_Db,value * 3.1415927 * 14.0));
  if ((__this->fields).layoutOffset != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    offset.fields.y = fVar4 * fVar5 * 4.5 + (__this->fields).origin.fields.y;
    offset.fields.x = fVar3 * fVar5 * 10.0 + (__this->fields).origin.fields.x;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              ((__this->fields).layoutOffset,offset,(MethodInfo *)0x0);
    fVar3 = (float)il2cpp_runtime_helper_1804f5fc0(CONCAT44(in_XMM1_Db,value * 3.1415927 * 8.0));
    uVar1 = (__this->fields).scale.fields.x;
    uVar2 = (__this->fields).scale.fields.y;
    local_48[0].z = fVar3 * fVar5 * 0.025 + 1.0;
    local_48[0].x = (float)uVar1 * local_48[0].z;
    local_48[0].y = (float)uVar2 * local_48[0].z;
    if ((__this->fields).rect != (UnityEngine_RectTransform_o *)0x0) {
      local_48[0].z = local_48[0].z * (__this->fields).scale.fields.z;
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)(__this->fields).rect,(UnityEngine_Vector3_o *)local_48,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x1818a3530

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
              (__this_00,(UnityEngine_Vector2_o)(__this->fields).origin.fields,(MethodInfo *)0x0);
    __this_01 = (__this->fields).rect;
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      local_18.x = (__this->fields).scale.fields.x;
      local_18.y = (__this->fields).scale.fields.y;
      local_18.z = (__this->fields).scale.fields.z;
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___ctor(Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, float value, const MethodInfo* method);
// 0x1818a35c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_184341eeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_184341eeb = '\x01';
  }
  __this_00 = (__this->fields).material;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_2ee3980
              (__this_00,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,
               value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x1818a3640

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_184341eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_184341eec = '\x01';
  }
  __this_00 = (__this->fields).material;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_2ee3980
              (__this_00,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,0.0
               ,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__2
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__2 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x1818a36b0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__2
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_184341eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_184341eed = '\x01';
  }
  __this_00 = (__this->fields).material;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_2ee3980
              (__this_00,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,0.0
               ,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayMainMenuPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel (UnityEngine_GameObject_o* go, bool enter, float duration, const MethodInfo* method);
// 0x181889020

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel
          (UnityEngine_GameObject_o *go,bool enter,float duration,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *rect;
  DG_Tweening_Tween_o *pDVar2;
  
  if (Il2CppMethodInitialized_184341ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ecb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (go == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    rect = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
                       (rect,duration,enter,false,(MethodInfo *)0x0);
  }
  else {
    pDVar2 = (DG_Tweening_Tween_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,false,(MethodInfo *)0x0);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween (UnityEngine_GameObject_o* go, System_String_o* preset, float duration, bool enter, const MethodInfo* method);
// 0x181888800
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818889e7: xor r9d, r9d
// asm:   0x1818889ea: movzx r8d, sil
// asm:   0x1818889ee: movaps xmm1, xmm7
// asm:   0x1818889f1: mov rcx, rbx
// asm:   0x1818889f4: call 0x181886b60  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro()
// asm:   0x1818889f9: jmp 0x1818889b0
// asm:   0x181888af0: unpcklps xmm6, xmm8
// asm:   0x181888af4: xor eax, eax
// asm:   0x181888af6: movq r9, xmm6
// asm:   0x181888afb: mov qword ptr [rsp + 0x20], rax
// asm:   0x181888b00: movzx r8d, sil
// asm:   0x181888b04: movaps xmm1, xmm7
// asm:   0x181888b07: mov rcx, rbx
// asm:   0x181888b0a: call 0x181889e20  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset()
// asm:   0x181888b0f: jmp 0x1818889b0
// asm:   0x181888b14: xor eax, eax
// asm:   0x181888b16: jmp 0x1818889b0
// asm:   0x181888b4b: xor r9d, r9d
// asm:   0x181888b4e: movzx r8d, sil
// asm:   0x181888b52: movaps xmm1, xmm7
// asm:   0x181888b55: mov rcx, rbx
// asm:   0x181888b58: call 0x181887590  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro()
// asm:   0x181888b5d: jmp 0x1818889b0
// asm:   0x181888b92: xor r8d, r8d
// asm:   0x181888b95: movaps xmm1, xmm7
// asm:   0x181888b98: mov rcx, rbx
// asm:   0x181888b9b: call 0x181887d20  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact()
// asm:   0x181888ba0: jmp 0x1818889b0
// asm:   0x181888c04: unpcklps xmm6, xmm8
// asm:   0x181888c08: xor eax, eax
// asm:   0x181888c0a: movq r9, xmm6
// asm:   0x181888c0f: mov qword ptr [rsp + 0x20], rax
// asm:   0x181888c14: movzx r8d, sil
// asm:   0x181888c18: movaps xmm1, xmm7
// asm:   0x181888c1b: mov rcx, rbx
// asm:   0x181888c1e: call 0x181888070  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo()
// asm:   0x181888c23: jmp 0x1818889b0
// asm:   0x181888c54: xor eax, eax
// asm:   0x181888c56: mov r9b, 1
// asm:   0x181888c59: movzx r8d, sil
// asm:   0x181888c5d: mov qword ptr [rsp + 0x20], rax
// asm:   0x181888c62: movaps xmm1, xmm7
// asm:   0x181888c65: mov rcx, rbx
// asm:   0x181888c68: call 0x1818884f0  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel()
// asm:   0x181888c6d: jmp 0x1818889b0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween
          (UnityEngine_GameObject_o *go,System_String_o *preset,float duration,bool enter,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  DG_Tweening_Tween_o *pDVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Vector2_o offset;
  float fVar6;
  uint uVar7;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184341ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&"mainmenubrushintro");
    il2cpp_codegen_initialize_runtime_metadata(&"mainmenulogoblades");
    il2cpp_codegen_initialize_runtime_metadata(&"mainmenutippanel");
    il2cpp_codegen_initialize_runtime_metadata(&"mainmenulogoimpact");
    il2cpp_codegen_initialize_runtime_metadata(&"brushsidepanelcontentintro");
    il2cpp_codegen_initialize_runtime_metadata(&"mainmenulogotext");
    il2cpp_codegen_initialize_runtime_metadata(&"mainmenupanel");
    il2cpp_codegen_initialize_runtime_metadata(&"mainmenufootericonintro");
    Il2CppMethodInitialized_184341ecc = '\x01';
  }
  if (preset != (System_String_o *)0x0) {
    bVar2 = System_String__Contains(preset,"mainmenupanel",(MethodInfo *)0x0);
    if (bVar2) {
      if (go != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
                           (pUVar4,duration,enter,true,(MethodInfo *)0x0);
        return pDVar3;
      }
    }
    else {
      bVar2 = System_String__Contains(preset,"mainmenulogotext",(MethodInfo *)0x0);
      if (bVar2) {
        if (go != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (go,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          uVar7 = 0x43700000;
label_181888be9:
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
          }
          pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo
                             (pUVar4,duration,enter,(UnityEngine_Vector2_o)((ulonglong)uVar7 << 0x20),
                              (MethodInfo *)0x0);
          return pDVar3;
        }
      }
      else {
        bVar2 = System_String__Contains(preset,"mainmenulogoblades",(MethodInfo *)0x0);
        if (bVar2) {
          if (go != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__GetComponent_object_
                               (go,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            uVar7 = 0xc3820000;
            goto label_181888be9;
          }
        }
        else {
          bVar2 = System_String__Contains(preset,"mainmenulogoimpact",(MethodInfo *)0x0);
          if (bVar2) {
            if (go != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                 (go,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              }
              pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact
                                 (pUVar4,duration,(MethodInfo *)0x0);
              return pDVar3;
            }
          }
          else {
            bVar2 = System_String__Contains(preset,"mainmenufootericonintro",(MethodInfo *)0x0);
            if (bVar2) {
              if (go != (UnityEngine_GameObject_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                   (go,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                }
                pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro
                                   (pUVar4,duration,enter,(MethodInfo *)0x0);
                return pDVar3;
              }
            }
            else {
              bVar2 = System_String__Contains(preset,"mainmenutippanel",(MethodInfo *)0x0);
              if (!bVar2) {
                bVar2 = System_String__Contains(preset,"brushsidepanelcontentintro",(MethodInfo *)0x0);
                if (bVar2) {
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  }
                  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro
                                     (go,duration,enter,(MethodInfo *)0x0);
                  return pDVar3;
                }
                bVar2 = System_String__Contains(preset,"mainmenubrushintro",(MethodInfo *)0x0);
                if (!bVar2) {
                  return (DG_Tweening_Tween_o *)0x0;
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                }
                pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro
                                   (go,duration,enter,(MethodInfo *)0x0);
                return pDVar3;
              }
              if (go != (UnityEngine_GameObject_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                   (go,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                }
                if (Il2CppMethodInitialized_184341ed4 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
                  Il2CppMethodInitialized_184341ed4 = '\x01';
                }
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar2 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar2) {
                  return (DG_Tweening_Tween_o *)0x0;
                }
                if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                  pUVar5 = UnityEngine_RectTransform__get_rect(local_48,pUVar4,(MethodInfo *)0x0);
                  fVar1 = (pUVar5->fields).m_Width;
                  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                  }
                  fVar6 = 64.0;
                  if (64.0 <= fVar1) {
                    fVar6 = fVar1;
                  }
                  if (!enter) {
                    fVar6 = fVar6 * 1.5;
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  }
                  offset.fields.y = 0.0;
                  offset.fields.x = fVar6;
                  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                                     (pUVar4,duration,enter,offset,(MethodInfo *)0x0);
                  return pDVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel (UnityEngine_RectTransform_o* rect, float duration, bool enter, bool resetEnterStart, const MethodInfo* method);
// 0x1818884f0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,bool resetEnterStart,MethodInfo *method
          )

{
  float fVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *object;
  UnityEngine_Rect_o *pUVar3;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar4;
  undefined8 uVar5;
  DG_Tweening_TweenCallback_float__o *__this;
  DG_Tweening_Tweener_o *pDVar6;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Vector2_o offset;
  float fVar7;
  float fStackX_c;
  UnityEngine_Rect_o local_68 [4];
  
  if (Il2CppMethodInitialized_184341ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0);
    Il2CppMethodInitialized_184341ecd = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_RectTransform__get_rect(local_68,rect,(MethodInfo *)0x0);
    fVar1 = (pUVar3->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar7 = 1.0;
    if (1.0 <= fVar1) {
      fVar7 = fVar1;
    }
    pGVar4 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
    if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *)0x0) {
      (object->fields).layoutOffset = pGVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).layoutOffset,pGVar4);
      pGVar4 = (object->fields).layoutOffset;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return (DG_Tweening_Tween_o *)0x0;
      }
      fVar7 = fVar7 * 1.08;
      if (resetEnterStart && enter) {
        pGVar4 = (object->fields).layoutOffset;
        uVar5 = il2cpp_runtime_helper_181882d40(0);
        if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_1818887ec;
        fStackX_c = (float)((ulonglong)uVar5 >> 0x20);
        offset.fields.x = (float)uVar5 * fVar7;
        offset.fields.y = fStackX_c * fVar7;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar4,offset,(MethodInfo *)0x0);
      }
      pGVar4 = (object->fields).layoutOffset;
      if (pGVar4 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        fVar1 = (pGVar4->fields)._motionOffset.fields.x;
        (object->fields).start.fields.y = (pGVar4->fields)._motionOffset.fields.y;
        (object->fields).start.fields.x = fVar1;
        if (enter) {
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          fVar7 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
          fStackX_c = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
        }
        else {
          uVar5 = il2cpp_runtime_helper_181882d40(0);
          fStackX_c = (float)((ulonglong)uVar5 >> 0x20);
          fStackX_c = fStackX_c * fVar7;
          fVar7 = (float)uVar5 * fVar7;
        }
        (object->fields).target.fields.x = fVar7;
        (object->fields).target.fields.y = fStackX_c;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  ((DG_Tweening_Core_DOSetter_float__o *)__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__0,
                   (MethodInfo_E5A750 *)0x0);
        pDVar6 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this,(MethodInfo *)0x0);
        action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__1,
                   (MethodInfo *)0x0);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar6,action,
                            (MethodInfo_7C92E0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar6,true,
                            (MethodInfo_7CA3D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        return (DG_Tweening_Tween_o *)pDVar6;
      }
    }
  }
label_1818887ec:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuLogo
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x181888070
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181888322: movaps xmm0, xmm6
// asm:   0x181888325: jmp 0x18188832a

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  float fVar1;
  UnityEngine_Material_o *pUVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *object;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar4;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *pUVar5;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *__this;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  float fVar8;
  float fStack_44;
  
  fVar8 = offset.fields.x;
  if (Il2CppMethodInitialized_184341ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0);
    Il2CppMethodInitialized_184341ece = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pGVar4 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *)0x0) {
label_1818884e9:
    ThrowNullReferenceException();
  }
  (object->fields).layoutOffset = pGVar4;
  Il2CppCodeGenWriteBarrier(&(object->fields).layoutOffset,pGVar4);
  pGVar4 = (object->fields).layoutOffset;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) goto label_1818884e9;
  go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pUVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,(MethodInfo *)0x0);
  (object->fields).group = pUVar5;
  Il2CppCodeGenWriteBarrier(&(object->fields).group,pUVar5);
  pGVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)rect,
                      (MethodInfo_6651A0 *)
                      MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
  (object->fields).blur = pGVar6;
  Il2CppCodeGenWriteBarrier(&(object->fields).blur,pGVar6);
  fStack_44 = offset.fields.y;
  if (enter) {
    pGVar4 = (object->fields).layoutOffset;
    if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_1818884e9;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar4,offset,(MethodInfo *)0x0);
    pUVar5 = (object->fields).group;
    if (pUVar5 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818884e9;
    UnityEngine_CanvasGroup__set_alpha(pUVar5,0.0,(MethodInfo *)0x0);
    pGVar6 = (object->fields).blur;
    if (pGVar6 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (pGVar6,ABS(fStack_44) * 0.18,(MethodInfo *)0x0);
    }
  }
  pGVar4 = (object->fields).layoutOffset;
  if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_1818884e9;
  fVar1 = (pGVar4->fields)._motionOffset.fields.x;
  (object->fields).start.fields.y = (pGVar4->fields)._motionOffset.fields.y;
  (object->fields).start.fields.x = fVar1;
  if (enter) {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    fVar8 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    fStack_44 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  }
  (object->fields).target.fields.x = fVar8;
  (object->fields).target.fields.y = fStack_44;
  pUVar5 = (object->fields).group;
  if (pUVar5 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818884e9;
  fVar8 = UnityEngine_CanvasGroup__get_alpha(pUVar5,(MethodInfo *)0x0);
  (object->fields).startAlpha = fVar8;
  fVar8 = 1.0;
  if (!enter) {
    fVar8 = 0.0;
  }
  (object->fields).endAlpha = fVar8;
  pGVar6 = (object->fields).blur;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar6 = (object->fields).blur;
    if (pGVar6 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) goto label_1818884e9;
    if (Il2CppMethodInitialized_184341f00 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341f00 = '\x01';
    }
    pUVar2 = (pGVar6->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (pGVar6->fields)._material;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
      }
      if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_1818884e9;
      fVar8 = UnityEngine_Material__GetFloat_2ee2100
                        (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->static_fields->
                                BlurId,(MethodInfo *)0x0);
      goto label_181888401;
    }
  }
  fVar8 = 0.0;
label_181888401:
  (object->fields).startBlur = fVar8;
  if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
  }
  pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
  DG_Tweening_TweenCallback_float____ctor
            ((DG_Tweening_Core_DOSetter_float__o *)__this,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__0,
             (MethodInfo_E5A750 *)0x0);
  t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this,(MethodInfo *)0x0);
  pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
  action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
  DG_Tweening_TweenCallback___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__1,
             (MethodInfo *)0x0);
  pDVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                     ((Il2CppObject *)pDVar7,action,
                      (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence)
  ;
  pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar7,true,
                      (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
  return (DG_Tweening_Tween_o *)pDVar7;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$LogoImpact
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact (UnityEngine_RectTransform_o* rect, float duration, const MethodInfo* method);
// 0x181887d20

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact
          (UnityEngine_RectTransform_o *rect,float duration,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *object;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar4;
  UnityEngine_Vector3_o *pUVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_TweenCallback_float__o *__this;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_184341ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0);
    Il2CppMethodInitialized_184341ecf = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *)0x0) goto label_181888064;
  (object->fields).rect = rect;
  Il2CppCodeGenWriteBarrier(&(object->fields).rect,rect);
  pUVar1 = (object->fields).rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pGVar4 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For((object->fields).rect,(MethodInfo *)0x0);
    (object->fields).layoutOffset = pGVar4;
    Il2CppCodeGenWriteBarrier(&(object->fields).layoutOffset,pGVar4);
    pGVar4 = (object->fields).layoutOffset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar4 = (object->fields).layoutOffset;
      if (pGVar4 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        fVar9 = (pGVar4->fields)._motionOffset.fields.x;
        pUVar1 = (object->fields).rect;
        (object->fields).origin.fields.y = (pGVar4->fields)._motionOffset.fields.y;
        (object->fields).origin.fields.x = fVar9;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar5 = UnityEngine_Transform__get_localScale
                             (local_58,(UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
          fVar9 = (pUVar5->fields).x;
          fVar8 = (pUVar5->fields).y;
          fVar10 = (pUVar5->fields).z;
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar9 = fVar9 - (pUVar2->zeroVector).fields.x;
          fVar8 = fVar8 - (pUVar2->zeroVector).fields.y;
          fVar10 = fVar10 - (pUVar2->zeroVector).fields.z;
          if (9.9999994e-11 <= fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10) {
            pUVar1 = (object->fields).rect;
            if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_181888064;
            pUVar5 = UnityEngine_Transform__get_localScale
                               (local_58,(UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
            uVar7._0_4_ = (pUVar5->fields).x;
            uVar7._4_4_ = (pUVar5->fields).y;
            fVar9 = (pUVar5->fields).z;
          }
          else {
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar7._0_4_ = (pUVar2->oneVector).fields.x;
            uVar7._4_4_ = (pUVar2->oneVector).fields.y;
            fVar9 = (pUVar2->oneVector).fields.z;
          }
          (object->fields).scale.fields.x = (float)(int)uVar7;
          (object->fields).scale.fields.y = (float)(int)((ulonglong)uVar7 >> 0x20);
          (object->fields).scale.fields.z = fVar9;
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor
                    ((DG_Tweening_Core_DOSetter_float__o *)__this,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__0,
                     (MethodInfo_E5A750 *)0x0);
          t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this,(MethodInfo *)0x0);
          pDVar6 = DG_Tweening_TweenSettingsExtensions__Join
                             (pDVar6,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
          DG_Tweening_TweenCallback___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__1,
                     (MethodInfo *)0x0);
          pDVar6 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                             ((Il2CppObject *)pDVar6,action,
                              (MethodInfo_7C92E0 *)
                              MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
          pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                             ((Il2CppObject *)pDVar6,true,
                              (MethodInfo_7CA3D0 *)
                              MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
          return (DG_Tweening_Tween_o *)pDVar6;
        }
      }
label_181888064:
      ThrowNullReferenceException();
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro (UnityEngine_GameObject_o* go, float duration, bool enter, const MethodInfo* method);
// 0x181886900
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181886b22: mov rax, rdi
// asm:   0x181886b25: jmp 0x181886b29

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro
          (UnityEngine_GameObject_o *go,float duration,bool enter,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o offset;
  bool bVar2;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Rect_o *pUVar3;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_Sequence_o *pDVar4;
  float fVar5;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184341ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchBrushButtonIntroReveal);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184341ed0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_181886b4d;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    __this = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (__this == (UnityEngine_RectTransform_o *)0x0) {
label_181886b4d:
    ThrowNullReferenceException();
  }
  pUVar3 = UnityEngine_RectTransform__get_rect(local_48,__this,(MethodInfo *)0x0);
  fVar1 = (pUVar3->fields).m_Width;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar5 = 64.0;
  if (64.0 <= fVar1) {
    fVar5 = fVar1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  offset.fields.y = 0.0;
  offset.fields.x = -fVar5;
  t = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                (__this,duration,enter,offset,(MethodInfo *)0x0);
  if (enter) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_181886b4d;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (go,(MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_GisketchBrushButtonIntroReveal);
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      t_00 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                       (__this_00,duration,(MethodInfo *)0x0);
      goto label_181886acc;
    }
  }
  t_00 = (DG_Tweening_Tween_o *)0x0;
label_181886acc:
  if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
  }
  pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar4 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar4,true,
                      (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
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
// 0x181886b60

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro
          (UnityEngine_GameObject_o *go,float duration,bool enter,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Rect_o *pUVar3;
  DG_Tweening_Tween_o *t;
  UnityEngine_CanvasGroup_o *group;
  DG_Tweening_Tween_o *t_00;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t_01;
  DG_Tweening_Sequence_o *pDVar4;
  UnityEngine_Vector2_o offset;
  float fVar5;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184341ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184341ed1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_181886dd3;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    __this = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (__this != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_RectTransform__get_rect(local_48,__this,(MethodInfo *)0x0);
    fVar1 = (pUVar3->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar5 = 64.0;
    if (64.0 <= fVar1) {
      fVar5 = fVar1;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    offset.fields.y = 0.0;
    offset.fields.x = fVar5;
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                  (__this,duration,enter,offset,(MethodInfo *)0x0);
    group = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,(MethodInfo *)0x0);
    t_00 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(group,duration,enter,(MethodInfo *)0x0);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      image = UnityEngine_GameObject__GetComponent_object_
                        (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
      t_01 = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur
                       (image,duration,52.0,(MethodInfo *)0x0);
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar4,true,
                          (MethodInfo_7CA3D0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      if (t != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t,(MethodInfo *)0x0);
      }
      if (t_00 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t_00,(MethodInfo *)0x0);
      }
      if (t_01 == (DG_Tweening_Tween_o *)0x0) {
        return (DG_Tweening_Tween_o *)pDVar4;
      }
      DG_Tweening_TweenSettingsExtensions__Join(pDVar4,t_01,(MethodInfo *)0x0);
      return (DG_Tweening_Tween_o *)pDVar4;
    }
  }
label_181886dd3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HorizontalSurfaceBlur
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur (UnityEngine_UI_Image_o* image, float duration, float blurPixels, const MethodInfo* method);
// 0x181887a40

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur
          (UnityEngine_UI_Image_o *image,float duration,float blurPixels,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *object;
  UnityEngine_Material_o *pUVar2;
  DG_Tweening_TweenCallback_float__o *__this;
  DG_Tweening_Tweener_o *pDVar3;
  DG_Tweening_TweenCallback_o *pDVar4;
  
  if (Il2CppMethodInitialized_184341ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Tweener)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0);
    Il2CppMethodInitialized_184341ed2 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_181887d0c;
    pUVar2 = (*(image->klass->vtable)._32_get_material.methodPtr)
                       (image,(image->klass->vtable)._32_get_material.method);
  }
  else {
    pUVar2 = (UnityEngine_Material_o *)0x0;
  }
  if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *)0x0) {
    (object->fields).material = pUVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).material,pUVar2);
    pUVar2 = (object->fields).material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pUVar2 = (object->fields).material;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      bVar1 = UnityEngine_Material__HasProperty
                        (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                HorizontalBlurId,(MethodInfo *)0x0);
      if (!bVar1) {
        return (DG_Tweening_Tween_o *)0x0;
      }
      pUVar2 = (object->fields).material;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat_2ee3980
                  (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                          HorizontalBlurId,blurPixels,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  ((DG_Tweening_Core_DOSetter_float__o *)__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__0
                   ,(MethodInfo_E5A750 *)0x0);
        pDVar3 = DG_Tweening_DOVirtual__Float(blurPixels,0.0,duration,__this,(MethodInfo *)0x0);
        pDVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pDVar4,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__1
                   ,(MethodInfo *)0x0);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar3,pDVar4,
                            (MethodInfo_7C92E0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
        pDVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pDVar4,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__2
                   ,(MethodInfo *)0x0);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__OnKill_object_
                           ((Il2CppObject *)pDVar3,pDVar4,
                            (MethodInfo_7C9310 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Tweener
                           );
        pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar3,true,
                            (MethodInfo_7CA3D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        return (DG_Tweening_Tween_o *)pDVar3;
      }
    }
  }
label_181887d0c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$FooterIconIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x181887590

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar6;
  bool bVar7;
  UnityEngine_Vector3_o *pUVar8;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar10;
  DG_Tweening_Tween_o *pDVar11;
  MethodInfo *method_00;
  float fVar12;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_o local_68 [8];
  
  if (Il2CppMethodInitialized_184341ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_Vector3_Vector3_VectorOptions
              );
    Il2CppMethodInitialized_184341ed3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pDVar11 = (DG_Tweening_Tween_o *)0x0;
  }
  else {
    if (rect == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    fVar1 = (pUVar8->fields).x;
    fVar4 = (pUVar8->fields).y;
    fVar12 = (pUVar8->fields).z;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = fVar1 - (pUVar6->zeroVector).fields.x;
    fVar4 = fVar4 - (pUVar6->zeroVector).fields.y;
    fVar12 = fVar12 - (pUVar6->zeroVector).fields.z;
    if (9.9999994e-11 <= fVar4 * fVar4 + fVar1 * fVar1 + fVar12 * fVar12) {
      pUVar8 = UnityEngine_Transform__get_localScale
                         (local_68,(UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
      uVar2 = (pUVar8->fields).x;
      uVar5 = (pUVar8->fields).y;
      fVar12 = (pUVar8->fields).z;
      fVar1 = (float)uVar2;
      fVar4 = (float)uVar5;
    }
    else {
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar1 = (pUVar6->oneVector).fields.x;
      fVar4 = (pUVar6->oneVector).fields.y;
      fVar12 = (pUVar6->oneVector).fields.z;
    }
    local_78.y = fVar4;
    local_78.x = fVar1;
    if (enter) {
      local_78.z = fVar12 * 1.35;
      local_78.y = fVar4 * 1.35;
      local_78.x = fVar1 * 1.35;
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_78.z = fVar12 * 0.88;
      local_78.y = fVar4 * 0.88;
      local_78.x = fVar1 * 0.88;
      pDVar10 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_78,duration * 0.55,
                           (MethodInfo *)0x0);
      pDVar11 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                          ((Il2CppObject *)pDVar10,9,
                           (MethodInfo_7C9BC0 *)
                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                          );
      pDVar9 = DG_Tweening_TweenSettingsExtensions__Append(pDVar9,pDVar11,(MethodInfo *)0x0);
      local_78.y = fVar4;
      local_78.x = fVar1;
      local_78.z = fVar12;
      pDVar10 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_78,duration * 0.45,
                           (MethodInfo *)0x0);
      pDVar11 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object__7c9b50
                          ((Il2CppObject *)pDVar10,0x1b,1.35,
                           (MethodInfo_7C9B50 *)
                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
                          );
      pDVar9 = DG_Tweening_TweenSettingsExtensions__Append(pDVar9,pDVar11,(MethodInfo *)0x0);
      method_00 = MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence;
    }
    else {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar3._0_4_ = (pUVar6->zeroVector).fields.x;
      uVar3._4_4_ = (pUVar6->zeroVector).fields.y;
      fVar1 = (pUVar6->zeroVector).fields.z;
      local_78.z = fVar12;
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
      local_78._0_8_ = uVar3;
      local_78.z = fVar1;
      pDVar10 = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_78,duration,
                           (MethodInfo *)0x0);
      pDVar9 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar10,8,
                          (MethodInfo_7C9BC0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                         );
      method_00 = 
      MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_Vector3_Vector3_VectorOptions;
    }
    pDVar11 = (DG_Tweening_Tween_o *)
              DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                        ((Il2CppObject *)pDVar9,true,(MethodInfo_7CA3D0 *)method_00);
  }
  return pDVar11;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$TipPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x18188a590

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  UnityEngine_Rect_o *pUVar3;
  DG_Tweening_Tween_o *pDVar4;
  UnityEngine_Vector2_o offset;
  float fVar5;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184341ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341ed4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pDVar4 = (DG_Tweening_Tween_o *)0x0;
  }
  else {
    if (rect == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_RectTransform__get_rect(local_48,rect,(MethodInfo *)0x0);
    fVar1 = (pUVar3->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar5 = 64.0;
    if (64.0 <= fVar1) {
      fVar5 = fVar1;
    }
    if (!enter) {
      fVar5 = fVar5 * 1.5;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    offset.fields.y = 0.0;
    offset.fields.x = fVar5;
    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                       (rect,duration,enter,offset,(MethodInfo *)0x0);
  }
  return pDVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideNoFadeWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x181889e20

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *object;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar3;
  DG_Tweening_TweenCallback_float__o *__this;
  DG_Tweening_Tweener_o *pDVar4;
  DG_Tweening_TweenCallback_o *action;
  float fVar5;
  float fStack_34;
  
  fVar5 = offset.fields.x;
  if (Il2CppMethodInitialized_184341ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0);
    Il2CppMethodInitialized_184341ed5 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pGVar3 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *)0x0) {
    (object->fields).layoutOffset = pGVar3;
    Il2CppCodeGenWriteBarrier(&(object->fields).layoutOffset,pGVar3);
    pGVar3 = (object->fields).layoutOffset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (enter) {
      pGVar3 = (object->fields).layoutOffset;
      if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_18188a0a1;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar3,offset,(MethodInfo *)0x0);
    }
    pGVar3 = (object->fields).layoutOffset;
    if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      fVar1 = (pGVar3->fields)._motionOffset.fields.x;
      (object->fields).start.fields.y = (pGVar3->fields)._motionOffset.fields.y;
      (object->fields).start.fields.x = fVar1;
      if (enter) {
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        fVar5 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
        fStack_34 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
      }
      else {
        fStack_34 = offset.fields.y;
      }
      (object->fields).target.fields.x = fVar5;
      (object->fields).target.fields.y = fStack_34;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                ((DG_Tweening_Core_DOSetter_float__o *)__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__0
                 ,(MethodInfo_E5A750 *)0x0);
      pDVar4 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this,(MethodInfo *)0x0);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar4,9,
                          (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener)
      ;
      action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
      DG_Tweening_TweenCallback___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__1
                 ,(MethodInfo *)0x0);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                         ((Il2CppObject *)pDVar4,action,
                          (MethodInfo_7C92E0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
      pDVar4 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar4,true,
                          (MethodInfo_7CA3D0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      return (DG_Tweening_Tween_o *)pDVar4;
    }
  }
label_18188a0a1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$OutCubic
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic (float value, const MethodInfo* method);
// 0x181888fe0

float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic(float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - value,0x40400000);
  return 1.0 - fVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewEnter
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181889720

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  
  if (Il2CppMethodInitialized_184341ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ed6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,true,(MethodInfo *)0x0);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewExit
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181889770

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  
  if (Il2CppMethodInitialized_184341ed7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ed7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,false,(MethodInfo *)0x0);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetViewToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181889d00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181889df2: movaps xmm7, xmmword ptr [rsp + 0x60]
// asm:   0x181889df7: movaps xmm6, xmmword ptr [rsp + 0x70]
// asm:   0x181889dfc: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x181889e04: movaps xmm8, xmmword ptr [rsp + 0x50]

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest
               (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar1;
  int index;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o local_68 [2];
  
  if (Il2CppMethodInitialized_184341ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
    Il2CppMethodInitialized_184341ed8 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pSVar1 = (view->fields)._MotionTargets_k__BackingField;
    if (pSVar1 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
      if ((pSVar1->fields)._size == 0) {
        return;
      }
      index = 0;
      while (pSVar1 = (view->fields)._MotionTargets_k__BackingField,
            pSVar1 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        if ((pSVar1->fields)._size <= index) {
          return;
        }
        System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___get_Item
                  ((UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_o *)
                   local_68,(System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain__o
                             *)pSVar1,index,
                   (MethodInfo_94FEA0 *)
                   MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest(local_68,(MethodInfo *)0x0);
        index = index + 1;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayNode
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, bool blocksInput, const MethodInfo* method);
// 0x181889130

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,bool enter,
          bool blocksInput,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  
  if (Il2CppMethodInitialized_184341ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ed9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween(go,motion,enter,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar1,blocksInput,(MethodInfo *)0x0);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayTargets
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets (Gisketch_Aottg2UI_Building_GisketchView_o* view, bool enter, const MethodInfo* method);
// 0x1818891d0
// eh: try 0x181889591..0x18188968b -> pad 0x1833316f0 catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188946f: nop 
// asm:   0x1818895ef: mov rdi, rax
// asm:   0x1818895f2: jmp 0x1818895fb
// asm:   0x18188969c: mov rdx, qword ptr [rip + 0x27f70e5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_Dispose
// asm:   0x1818896a3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818896a8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818896ad: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1818896b2: test rcx, rcx
// asm:   0x1818896b5: jne 0x18188970f
// asm:   0x1818896b7: mov r13, qword ptr [rsp + 0x30]
// asm:   0x18188970f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833316f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833316f5: push rbp
// asm:   0x1833316f6: sub rsp, 0x20
// asm:   0x1833316fa: mov rbp, rdx
// asm:   0x1833316fd: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x183331704: mov rcx, qword ptr [rax]
// asm:   0x183331707: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333170b: movabs rax, 0
// asm:   0x183331715: add rsp, 0x20
// asm:   0x183331719: pop rbp
// asm:   0x18333171a: ret 

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,bool enter,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar2;
  UnityEngine_GameObject_o *root;
  UnityEngine_Rendering_VolumeProfile_o *pUVar3;
  UnityEngine_Rendering_Volume_o *pUVar4;
  UnityEngine_Rendering_Volume_o *pUVar5;
  bool bVar6;
  int32_t iVar7;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *object;
  DG_Tweening_Sequence_o *pDVar8;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this;
  System_Comparison_T__o *__this_00;
  System_Collections_Generic_Dictionary_string__int__o *groupIndexes;
  DG_Tweening_Tween_o *pDVar9;
  int index;
  UnityEngine_Rendering_Volume_o *motion;
  float fVar10;
  undefined1 local_c0 [8];
  uint64_t uStack_b8;
  UnityEngine_Rendering_VolumeProfile_o *local_b0;
  UnityEngine_Rendering_Volume_o *pUStack_a8;
  UnityEngine_Rendering_Volume_o *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_o local_88;
  undefined8 uStack_60;
  
  if (Il2CppMethodInitialized_184341eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_GisketchMotionTarget);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Sort);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor_40a4290);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchMotionTarget)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetDelay_Tween)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass19_0_PlayTargets_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass19_0);
    Il2CppMethodInitialized_184341eda = '\x01';
  }
  local_c0 = (undefined1  [8])0x0;
  uStack_b8 = 0;
  local_b0 = (UnityEngine_Rendering_VolumeProfile_o *)0x0;
  pUStack_a8 = (UnityEngine_Rendering_Volume_o *)0x0;
  local_a0 = (UnityEngine_Rendering_Volume_o *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass19_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *)0x0) {
    (object->fields).enter = enter;
    if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pSVar2 = (view->fields)._MotionTargets_k__BackingField;
      if (pSVar2 == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) goto label_181889709;
      if ((pSVar2->fields)._size != 0) {
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        if (bVar6) {
          if ((view->fields)._LayoutDirty_k__BackingField != false) {
            root = (view->fields)._Root_k__BackingField;
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,2,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(view,(MethodInfo *)0x0);
          }
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pDVar8 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                             ((Il2CppObject *)pDVar8,true,
                              (MethodInfo_7CA3D0 *)
                              MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
          pSVar2 = (view->fields)._MotionTargets_k__BackingField;
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchMotionTarget);
          System_Collections_Generic_List_GisketchMotionTarget____ctor_1877a40
                    (__this,(System_Collections_Generic_IEnumerable_T__o *)pSVar2,
                     (MethodInfo_1877A40 *)
                     MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor_40a4290);
          if ((object->fields).enter == false) {
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            if (Il2CppMethodInitialized_184341ee5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Count);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
              Il2CppMethodInitialized_184341ee5 = '\x01';
            }
            index = 0;
            if (__this == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) goto label_181889709;
            for (; index < (__this->fields)._size; index = index + 1) {
              System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___get_Item
                        (&local_88,
                         (System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain__o
                          *)__this,index,
                         (MethodInfo_94FEA0 *)
                         MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
              pUVar3 = local_88.fields.volumeProfile;
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              }
              if ((pUVar3 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) &&
                 (bVar6 = System_String__IsNullOrEmpty
                                    ((System_String_o *)(pUVar3->fields).m_CachedPtr,(MethodInfo *)0x0),
                 !bVar6)) {
                bVar6 = true;
                goto label_1818894cc;
              }
            }
          }
          bVar6 = false;
label_1818894cc:
          (object->fields).explicitExitOnly = bVar6;
          __this_00 = (System_Comparison_T__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Comparison_GisketchMotionTarget);
          System_Comparison_GisketchMotionTarget____ctor
                    (__this_00,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass19_0_PlayTargets_b__0
                     ,(MethodInfo_133FB60 *)0x0);
          if (__this != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
            System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___Sort_948c30
                      ((System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain__o
                        *)__this,__this_00,
                       (MethodInfo_948C30 *)
                       MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Sort);
            groupIndexes = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int
                                     );
            System_Collections_Generic_Dictionary_object__int____ctor
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)groupIndexes,
                       (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor)
            ;
            System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&local_88,
                       (System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain__o
                        *)__this,
                       (MethodInfo_942C10 *)
                       MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_GetEnumerator);
            local_c0 = (undefined1  [8])local_88.fields.nameAndTooltip.fields.name;
            uStack_b8 = (uint64_t)local_88.fields.nameAndTooltip.fields.tooltip;
            local_b0 = local_88.fields.volumeProfile;
            pUStack_a8 = (UnityEngine_Rendering_Volume_o *)local_88.fields.volumeComponent;
            local_a0 = local_88.fields.volume;
            uStack_98 = uStack_60;
            while (bVar6 = System_Collections_Generic_List_Enumerator_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                                      (MethodInfo_152A310 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_MoveNext
                                     ), pUVar5 = local_a0, pUVar4 = pUStack_a8, pUVar3 = local_b0, bVar6) {
              bVar6 = (object->fields).enter;
              bVar1 = (object->fields).explicitExitOnly;
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              }
              motion = pUVar4;
              if (((bVar6 == false) && (motion = pUVar5, pUVar5 == (UnityEngine_Rendering_Volume_o *)0x0)) &&
                 (motion = pUVar4, bVar1 != false)) {
                motion = (UnityEngine_Rendering_Volume_o *)0x0;
              }
              pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                                 ((UnityEngine_GameObject_o *)pUVar3,
                                  (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)motion,
                                  (object->fields).enter,(MethodInfo *)0x0);
              if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                }
                iVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex
                                  (groupIndexes,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)motion,
                                   (MethodInfo *)0x0);
                if (motion == (UnityEngine_Rendering_Volume_o *)0x0) {
                  fVar10 = 0.0;
                }
                else {
                  fVar10 = (motion->fields).blendDistance;
                  if (fVar10 < 0.0) {
                    fVar10 = 0.0;
                  }
                  fVar10 = (float)iVar7 * fVar10 + (motion->fields).priority;
                }
                DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                          ((Il2CppObject *)pDVar9,fVar10,
                           (MethodInfo_7C9AB0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetDelay_Tween)
                ;
                DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar9,(MethodInfo *)0x0);
              }
            }
            System_Collections_Generic_List_Enumerator_GisketchMotionTarget___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c0,
                       MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_Dispose);
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
            }
            pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                               ((DG_Tweening_Tween_o *)pDVar8,true,(MethodInfo *)0x0);
            return pDVar9;
          }
          goto label_181889709;
        }
      }
    }
    return (DG_Tweening_Tween_o *)0x0;
  }
label_181889709:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$CreateTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, const MethodInfo* method);
// 0x181886de0
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188714a: xor r9d, r9d
// asm:   0x18188714d: movzx r8d, sil
// asm:   0x181887151: movaps xmm1, xmm6
// asm:   0x181887154: mov rcx, rbx
// asm:   0x181887157: call 0x181886510  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon()
// asm:   0x18188715c: jmp 0x1818870f3
// asm:   0x181887172: xor edx, edx
// asm:   0x181887174: mov rcx, rbx
// asm:   0x181887177: call 0x181887370  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup()
// asm:   0x18188717c: mov rcx, rax
// asm:   0x18188717f: xor r9d, r9d
// asm:   0x181887182: movzx r8d, sil
// asm:   0x181887186: movaps xmm1, xmm6
// asm:   0x181887189: call 0x181887420  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade()
// asm:   0x18188718e: jmp 0x1818870f3
// asm:   0x18188723a: mov rax, rbp
// asm:   0x18188723d: jmp 0x1818870f3
// asm:   0x18188730e: movzx r8d, sil
// asm:   0x181887312: mov qword ptr [rsp + 0x20], rbp
// asm:   0x181887317: movaps xmm1, xmm6
// asm:   0x18188731a: mov rcx, rbx
// asm:   0x18188731d: call 0x18188a0b0  ; Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset()
// asm:   0x181887322: jmp 0x1818870f3

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,bool enter,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  DG_Tweening_Tween_o *pDVar3;
  UnityEngine_Transform_o *target;
  UnityEngine_CanvasGroup_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector2_Fields offset;
  float fVar6;
  float fVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_184341edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"slidedown");
    il2cpp_codegen_initialize_runtime_metadata(&"slideleftsmall");
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderightsmall");
    il2cpp_codegen_initialize_runtime_metadata(&"balloon");
    il2cpp_codegen_initialize_runtime_metadata(&"slide");
    il2cpp_codegen_initialize_runtime_metadata(&"slideright");
    il2cpp_codegen_initialize_runtime_metadata(&"pop");
    il2cpp_codegen_initialize_runtime_metadata(&"slideleft");
    Il2CppMethodInitialized_184341edb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar1) || (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) ||
     (bVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0), bVar1)) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled == false) {
    fVar7 = 0.01;
  }
  else {
    if (0.0 < (motion->fields).duration) {
      fVar6 = (motion->fields).duration;
    }
    else {
      fVar6 = 0.16;
    }
    fVar7 = 0.01;
    if (0.01 <= fVar6) {
      fVar7 = fVar6;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    fVar7 = fVar7 * TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->DurationScale;
  }
  pSVar2 = (motion->fields).preset;
  if (pSVar2 == (System_String_o *)0x0) {
label_18188733c:
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween(go,pSVar2,fVar7,enter,(MethodInfo *)0x0);
  if (pDVar3 != (DG_Tweening_Tween_o *)0x0) {
    return pDVar3;
  }
  if (pSVar2 == (System_String_o *)0x0) goto label_18188733c;
  bVar1 = System_String__Contains(pSVar2,"slideleftsmall",(MethodInfo *)0x0);
  if (bVar1) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_18188733c;
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    uVar8 = 0x41800000;
  }
  else {
    bVar1 = System_String__Contains(pSVar2,"sliderightsmall",(MethodInfo *)0x0);
    if (bVar1) {
      if (go == (UnityEngine_GameObject_o *)0x0) goto label_18188733c;
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                         );
      uVar8 = 0xc1800000;
    }
    else {
      bVar1 = System_String__Contains(pSVar2,"slideleft",(MethodInfo *)0x0);
      if (bVar1) {
        if (go == (UnityEngine_GameObject_o *)0x0) goto label_18188733c;
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        uVar8 = 0x42400000;
      }
      else {
        bVar1 = System_String__Contains(pSVar2,"slideright",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__Contains(pSVar2,"slidedown",(MethodInfo *)0x0);
          if (bVar1) {
            if (go == (UnityEngine_GameObject_o *)0x0) goto label_18188733c;
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (go,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            uVar8 = 0x41a00000;
          }
          else {
            bVar1 = System_String__Contains(pSVar2,"slide",(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__Contains(pSVar2,"fade",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                }
                pUVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,(MethodInfo *)0x0);
                pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(pUVar4,fVar7,enter,(MethodInfo *)0x0)
                ;
                return pDVar3;
              }
              bVar1 = System_String__Contains(pSVar2,"balloon",(MethodInfo *)0x0);
              if (bVar1) {
                if (go != (UnityEngine_GameObject_o *)0x0) {
                  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                     (go,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  }
                  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon
                                     (pUVar5,fVar7,enter,(MethodInfo *)0x0);
                  return pDVar3;
                }
              }
              else {
                System_String__Contains(pSVar2,"pop",(MethodInfo *)0x0);
                if (go != (UnityEngine_GameObject_o *)0x0) {
                  target = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  }
                  pUVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,(MethodInfo *)0x0);
                  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop
                                     (target,pUVar4,fVar7,enter,(MethodInfo *)0x0);
                  return pDVar3;
                }
              }
              goto label_18188733c;
            }
            if (go == (UnityEngine_GameObject_o *)0x0) goto label_18188733c;
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (go,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            if (Il2CppMethodInitialized_184341edf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              Il2CppMethodInitialized_184341edf = '\x01';
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              return (DG_Tweening_Tween_o *)0x0;
            }
            uVar8 = 0xc1a00000;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
          }
          offset = (UnityEngine_Vector2_Fields)((ulonglong)uVar8 << 0x20);
          goto label_18188730e;
        }
        if (go == (UnityEngine_GameObject_o *)0x0) goto label_18188733c;
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        uVar8 = 0xc2400000;
      }
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  offset.y = 0.0;
  offset.x = (float)uVar8;
label_18188730e:
  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
                     (pUVar5,fVar7,enter,(UnityEngine_Vector2_o)offset,(MethodInfo *)0x0);
  return pDVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Balloon
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x181886510

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  UnityEngine_Vector3_o *pUVar7;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar9;
  DG_Tweening_Tween_o *pDVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_184341edc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184341edc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pDVar8 = (DG_Tweening_Sequence_o *)0x0;
  }
  else {
    if (rect == (UnityEngine_RectTransform_o *)0x0) {
label_1818868eb:
      ThrowNullReferenceException();
    }
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Vector3_o *)&local_68,(UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    fVar1 = (pUVar7->fields).x;
    fVar3 = (pUVar7->fields).y;
    fVar11 = (pUVar7->fields).z;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = fVar1 - (pUVar5->zeroVector).fields.x;
    fVar3 = fVar3 - (pUVar5->zeroVector).fields.y;
    fVar11 = fVar11 - (pUVar5->zeroVector).fields.z;
    if (9.9999994e-11 <= fVar3 * fVar3 + fVar1 * fVar1 + fVar11 * fVar11) {
      pUVar7 = UnityEngine_Transform__get_localScale
                         (local_58,(UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
      uVar2 = (pUVar7->fields).x;
      uVar4 = (pUVar7->fields).y;
      fVar11 = (pUVar7->fields).z;
      fVar1 = (float)uVar2;
      fVar3 = (float)uVar4;
    }
    else {
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar1 = (pUVar5->oneVector).fields.x;
      fVar3 = (pUVar5->oneVector).fields.y;
      fVar11 = (pUVar5->oneVector).fields.z;
    }
    local_68.y = fVar3;
    local_68.x = fVar1;
    if (enter) {
      local_68.z = fVar11 * 0.84;
      local_68.y = fVar3 * 0.84;
      local_68.x = fVar1 * 0.84;
      UnityEngine_Transform__set_localScale
                ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
      if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818868eb;
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_68.y = fVar3;
      local_68.x = fVar1;
      local_68.z = fVar11;
      pDVar9 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_68,duration,
                          (MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object__7c9b50
                          ((Il2CppObject *)pDVar9,0x1b,1.04,
                           (MethodInfo_7C9B50 *)
                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
                          );
      pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar10,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      fVar1 = duration * 0.8;
      bVar6 = true;
    }
    else {
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_68.z = fVar11 * 0.9;
      local_68.y = fVar3 * 0.9;
      local_68.x = fVar1 * 0.9;
      pDVar9 = DG_Tweening_ShortcutExtensions__DOScale
                         ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)&local_68,duration,
                          (MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                          ((Il2CppObject *)pDVar9,8,
                           (MethodInfo_7C9BC0 *)
                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                          );
      pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar10,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      fVar1 = duration * 0.75;
      bVar6 = false;
    }
    pDVar10 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,fVar1,bVar6,(MethodInfo *)0x0);
    pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar10,(MethodInfo *)0x0);
    pDVar8 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar8,true,
                        (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence
                       );
  }
  return (DG_Tweening_Tween_o *)pDVar8;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Pop
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop (UnityEngine_Transform_o* target, UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x1818897c0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop
          (UnityEngine_Transform_o *target,UnityEngine_CanvasGroup_o *group,float duration,bool enter,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar8;
  DG_Tweening_Tween_o *pDVar9;
  bool enter_00;
  float fVar10;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_184341edd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184341edd = '\x01';
  }
  if (target != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Vector3_o *)&local_68,target,(MethodInfo *)0x0);
    fVar1 = (pUVar6->fields).x;
    fVar3 = (pUVar6->fields).y;
    fVar10 = (pUVar6->fields).z;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = fVar1 - (pUVar5->zeroVector).fields.x;
    fVar3 = fVar3 - (pUVar5->zeroVector).fields.y;
    fVar10 = fVar10 - (pUVar5->zeroVector).fields.z;
    if (9.9999994e-11 <= fVar3 * fVar3 + fVar1 * fVar1 + fVar10 * fVar10) {
      pUVar6 = UnityEngine_Transform__get_localScale(local_58,target,(MethodInfo *)0x0);
      uVar2 = (pUVar6->fields).x;
      uVar4 = (pUVar6->fields).y;
      fVar10 = (pUVar6->fields).z;
      fVar1 = (float)uVar2;
      fVar3 = (float)uVar4;
    }
    else {
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar1 = (pUVar5->oneVector).fields.x;
      fVar3 = (pUVar5->oneVector).fields.y;
      fVar10 = (pUVar5->oneVector).fields.z;
    }
    local_68.y = fVar3;
    local_68.x = fVar1;
    if (enter) {
      local_68.z = fVar10 * 0.86;
      local_68.y = fVar3 * 0.86;
      local_68.x = fVar1 * 0.86;
      UnityEngine_Transform__set_localScale(target,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
      if (group == (UnityEngine_CanvasGroup_o *)0x0) goto label_181889b19;
      UnityEngine_CanvasGroup__set_alpha(group,0.0,(MethodInfo *)0x0);
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_68.y = fVar3;
      local_68.x = fVar1;
      local_68.z = fVar10;
      pDVar8 = DG_Tweening_ShortcutExtensions__DOScale
                         (target,(UnityEngine_Vector3_o *)&local_68,duration,(MethodInfo *)0x0);
      pDVar9 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object__7c9b50
                         ((Il2CppObject *)pDVar8,0x1b,1.12,
                          (MethodInfo_7C9B50 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_409d0f0
                         );
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      enter_00 = true;
    }
    else {
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      local_68.z = fVar10 * 0.96;
      local_68.y = fVar3 * 0.96;
      local_68.x = fVar1 * 0.96;
      pDVar8 = DG_Tweening_ShortcutExtensions__DOScale
                         (target,(UnityEngine_Vector3_o *)&local_68,duration,(MethodInfo *)0x0);
      pDVar9 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar8,8,
                          (MethodInfo_7C9BC0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                         );
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      enter_00 = false;
    }
    pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(group,duration * 0.75,enter_00,(MethodInfo *)0x0)
    ;
    pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
    pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar7,true,
                        (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence
                       );
    return (DG_Tweening_Tween_o *)pDVar7;
  }
label_181889b19:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Fade
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade (UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x181887420

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
          (UnityEngine_CanvasGroup_o *group,float duration,bool enter,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *pUVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *object;
  DG_Tweening_TweenCallback_float__o *__this;
  DG_Tweening_Tweener_o *pDVar2;
  float fVar3;
  float to;
  
  if (Il2CppMethodInitialized_184341ede == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0_Fade_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0);
    Il2CppMethodInitialized_184341ede = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *)0x0) {
    (object->fields).group = group;
    Il2CppCodeGenWriteBarrier(&(object->fields).group,group);
    pUVar1 = (object->fields).group;
    to = 0.0;
    if (enter) {
      if (pUVar1 == (UnityEngine_CanvasGroup_o *)0x0) goto label_18188758a;
      fVar3 = 0.0;
    }
    else {
      if (pUVar1 == (UnityEngine_CanvasGroup_o *)0x0) goto label_18188758a;
      fVar3 = UnityEngine_CanvasGroup__get_alpha(pUVar1,(MethodInfo *)0x0);
    }
    UnityEngine_CanvasGroup__set_alpha(pUVar1,fVar3,(MethodInfo *)0x0);
    pUVar1 = (object->fields).group;
    if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar3 = UnityEngine_CanvasGroup__get_alpha(pUVar1,(MethodInfo *)0x0);
      if (enter) {
        to = 1.0;
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                ((DG_Tweening_Core_DOSetter_float__o *)__this,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0_Fade_b__0,
                 (MethodInfo_E5A750 *)0x0);
      pDVar2 = DG_Tweening_DOVirtual__Float(fVar3,to,duration,__this,(MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar2,true,
                          (MethodInfo_7CA3D0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      return (DG_Tweening_Tween_o *)pDVar2;
    }
  }
label_18188758a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Slide
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x18188a4a0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Tween_o *pDVar2;
  
  if (Il2CppMethodInitialized_184341edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341edf = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
                       (rect,duration,enter,(UnityEngine_Vector2_o)0xc1a0000000000000,(MethodInfo *)0x0);
    return pDVar2;
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x18188a0b0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  DG_Tweening_Sequence_o *pDVar2;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *object;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar3;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *t;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_74;
  
  fVar4 = offset.fields.x;
  if (Il2CppMethodInitialized_184341ee0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184341ee0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,(MethodInfo *)0x0);
    __this_00 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      if (enter) {
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
        if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto label_18188a491;
        UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
        fVar5 = (__this_00->fields)._motionOffset.fields.x;
        fVar6 = (__this_00->fields)._motionOffset.fields.y;
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        fVar4 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
        fStack_74 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
      }
      else {
        fVar5 = (__this_00->fields)._motionOffset.fields.x;
        fVar6 = (__this_00->fields)._motionOffset.fields.y;
        fStack_74 = offset.fields.y;
      }
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      if (Il2CppMethodInitialized_184341ee1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0);
        Il2CppMethodInitialized_184341ee1 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *)0x0) {
        (object->fields).layoutOffset = __this_00;
        Il2CppCodeGenWriteBarrier(&(object->fields).layoutOffset,__this_00);
        (object->fields).start.fields.x = fVar5;
        (object->fields).start.fields.y = fVar6;
        (object->fields).target.fields.x = fVar4;
        (object->fields).target.fields.y = fStack_74;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  ((DG_Tweening_Core_DOSetter_float__o *)__this_01,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__0
                   ,(MethodInfo_E5A750 *)0x0);
        pDVar3 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_01,(MethodInfo *)0x0);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                           ((Il2CppObject *)pDVar3,enter | 8,
                            (MethodInfo_7C9BC0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
        action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__1
                   ,(MethodInfo *)0x0);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar3,action,
                            (MethodInfo_7C92E0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar3,true,
                            (MethodInfo_7CA3D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        pDVar2 = DG_Tweening_TweenSettingsExtensions__Join
                           (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,duration,enter,(MethodInfo *)0x0);
        pDVar2 = DG_Tweening_TweenSettingsExtensions__Join(pDVar2,t,(MethodInfo *)0x0);
        pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar2,true,
                            (MethodInfo_7CA3D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
        return (DG_Tweening_Tween_o *)pDVar2;
      }
    }
  }
label_18188a491:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOffsetTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* layoutOffset, UnityEngine_Vector2_o start, UnityEngine_Vector2_o target, float duration, int32_t ease, const MethodInfo* method);
// 0x181888ca0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *layoutOffset,UnityEngine_Vector2_o start,
          UnityEngine_Vector2_o target,float duration,int32_t ease,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *object;
  DG_Tweening_TweenCallback_float__o *__this;
  DG_Tweening_Tweener_o *pDVar1;
  DG_Tweening_TweenCallback_o *action;
  float fStack_44;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_184341ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0);
    Il2CppMethodInitialized_184341ee1 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *)0x0) {
    (object->fields).layoutOffset = layoutOffset;
    Il2CppCodeGenWriteBarrier(&(object->fields).layoutOffset,layoutOffset);
    fStack_44 = start.fields.y;
    (object->fields).start.fields.y = fStack_44;
    fStack_3c = target.fields.y;
    (object->fields).target.fields.y = fStack_3c;
    (object->fields).start.fields.x = start.fields.x;
    (object->fields).target.fields.x = target.fields.x;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
    DG_Tweening_TweenCallback_float____ctor
              ((DG_Tweening_Core_DOSetter_float__o *)__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__0
               ,(MethodInfo_E5A750 *)0x0);
    pDVar1 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this,(MethodInfo *)0x0);
    pDVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                       ((Il2CppObject *)pDVar1,ease,
                        (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
    DG_Tweening_TweenCallback___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__1
               ,(MethodInfo *)0x0);
    pDVar1 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                       ((Il2CppObject *)pDVar1,action,
                        (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener
                       );
    pDVar1 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar1,true,
                        (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener)
    ;
    return (DG_Tweening_Tween_o *)pDVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$EnsureCanvasGroup
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x181887370

UnityEngine_CanvasGroup_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *pUVar2;
  
  if (Il2CppMethodInitialized_184341ee2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ee2 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return pUVar2;
  }
  pUVar2 = UnityEngine_GameObject__AddComponent_object_
                     (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
  return pUVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetTargetToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, const MethodInfo* method);
// 0x181889b20

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *target,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_RectTransform_o *x_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_48 [5];
  
  if (Il2CppMethodInitialized_184341ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341ee3 = '\x01';
  }
  x = (UnityEngine_Object_o *)(target->fields).GameObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x_00 == (UnityEngine_RectTransform_o *)0x0) goto label_181889cf8;
      __this = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x_00,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
    }
    else {
      __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      if (__this == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_181889cf8;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                (__this,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    }
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)x,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto label_181889cf8;
      UnityEngine_CanvasGroup__set_alpha(__this_00,(target->fields).RestAlpha,(MethodInfo *)0x0);
    }
    __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      local_48[0].x = (target->fields).RestScale.fields.x;
      local_48[0].y = (target->fields).RestScale.fields.y;
      local_48[0].z = (float)*(undefined8 *)&(target->fields).RestScale.fields.z;
      UnityEngine_Transform__set_localScale(__this_01,(UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
      return;
    }
  }
label_181889cf8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Delay
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, int32_t index, const MethodInfo* method);
// 0x181887350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181887350: nop 

float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay
                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,int32_t index,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    fVar1 = (motion->fields).stagger;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    fVar2 = fVar2 * (float)index + (motion->fields).delay;
  }
  return fVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$NextGroupIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex (System_Collections_Generic_Dictionary_string__int__o* groupIndexes, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x181888f20

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex
                  (System_Collections_Generic_Dictionary_string__int__o *groupIndexes,
                  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  System_String_o *key;
  bool bVar1;
  System_String_o **ppSVar2;
  UnityEngine_UIElements_TextureId_o local_res10 [6];
  
  if (Il2CppMethodInitialized_184341ee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    Il2CppMethodInitialized_184341ee4 = '\x01';
  }
  local_res10[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((motion->fields).group,(MethodInfo *)0x0);
    if (!bVar1) {
      ppSVar2 = &(motion->fields).group;
      goto label_181888f88;
    }
  }
  ppSVar2 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
label_181888f88:
  if (groupIndexes != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    key = *ppSVar2;
    System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)groupIndexes,(Il2CppObject *)key,
               local_res10,
               (MethodInfo_1461BD0 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    System_Collections_Generic_Dictionary_object__int___set_Item
              ((System_Collections_Generic_Dictionary_object__int__o *)groupIndexes,(Il2CppObject *)key,
               (int)local_res10[0].fields.m_Index + 1,
               (MethodInfo_147A820 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    return (int32_t)local_res10[0].fields.m_Index;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionFor
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, bool enter, bool explicitExitOnly, const MethodInfo* method);
// 0x181888c80

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor
          (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *target,bool enter,bool explicitExitOnly,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (!enter) {
    pGVar1 = (target->fields).Exit;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      return pGVar1;
    }
    if (explicitExitOnly) {
      return (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
    }
  }
  return (target->fields).Enter;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasExplicitExit
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit (System_Collections_Generic_List_GisketchMotionTarget__o* targets, const MethodInfo* method);
// 0x181887940
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188798a: mov qword ptr [rsp + 0x60], rdi
// asm:   0x18188798f: nop 

bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit
               (System_Collections_Generic_List_GisketchMotionTarget__o *targets,MethodInfo *method)

{
  UnityEngine_Rendering_VolumeProfile_o *pUVar1;
  bool bVar2;
  int index;
  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_o local_38;
  
  if (Il2CppMethodInitialized_184341ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
    Il2CppMethodInitialized_184341ee5 = '\x01';
  }
  index = 0;
  if (targets == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
    ThrowNullReferenceException();
  }
  while( true ) {
    if ((targets->fields)._size <= index) {
      return false;
    }
    System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___get_Item
              (&local_38,
               (System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain__o
                *)targets,index,
               (MethodInfo_94FEA0 *)MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
    pUVar1 = local_38.fields.volumeProfile;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    if ((pUVar1 != (UnityEngine_Rendering_VolumeProfile_o *)0x0) &&
       (bVar2 = System_String__IsNullOrEmpty
                          ((System_String_o *)(pUVar1->fields).m_CachedPtr,(MethodInfo *)0x0), !bVar2)) break;
    index = index + 1;
  }
  return true;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x181887a10

bool
Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, MethodInfo* method)

{
  bool bVar1;
  
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOrder
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOrder (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, bool enter, bool explicitExitOnly, const MethodInfo* method);
// 0x181888e70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181888ee4: mov rax, rcx
// asm:   0x181888ee7: jmp 0x181888eee

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOrder
                  (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *target,bool enter,bool explicitExitOnly,
                  MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184341ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ee6 = '\x01';
  }
  pGVar1 = (target->fields).Enter;
  pGVar2 = (target->fields).Exit;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pGVar4 = pGVar1;
  if ((((!enter) && (pGVar4 = pGVar2, pGVar2 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) &&
      (pGVar4 = pGVar1, explicitExitOnly)) ||
     (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (pGVar4->fields).order;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor (const MethodInfo* method);
// 0x18188a6c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184341ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184341ee7 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled = true;
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->DurationScale = 1.0;
  return;
}


