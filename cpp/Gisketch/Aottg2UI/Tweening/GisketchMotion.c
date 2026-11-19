// Type: Gisketch.Aottg2UI.Tweening.GisketchMotion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotion.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x5328630

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, float value, const MethodInfo* method);
// 0x532a300

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_o offset;
  float fVar3;
  float fVar4;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (__this->fields).start.fields;
  UVar2 = (__this->fields).target.fields;
  fVar3 = UVar1.x;
  fVar4 = UVar1.y;
  offset.fields.y = value * (UVar2.y - fVar4) + fVar4;
  offset.fields.x = value * (UVar2.x - fVar3) + fVar3;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x532a340

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0___SlideNoFadeWithOffset_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
            (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x53294e0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$<PlayTargets>b__0
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___PlayTargets_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o* __this, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o a, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o b, const MethodInfo* method);
// 0x532a360
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532a3b6: cmp byte ptr [rip + 0x221846a], 0
// asm:   0x532a3bd: je 0x532a400
// asm:   0x532a426: xor ecx, ecx
// asm:   0x532a428: mov dword ptr [rsp + 4], ecx
// asm:   0x532a42c: mov rbx, qword ptr [rax + 8]
// asm:   0x532a430: mov rbp, qword ptr [rax + 0x10]
// asm:   0x532a434: movzx r15d, byte ptr [r12 + 0x10]
// asm:   0x532a43a: movzx r12d, byte ptr [r12 + 0x11]
// asm:   0x532a440: cmp byte ptr [rip + 0x22183e0], 0
// asm:   0x532a447: jne 0x532a45c

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0___PlayTargets_b__0
                  (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *__this,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o a,
                  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o b,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint32_t uVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_07542829 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07542829 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  if (Il2CppMethodInitialized_07542827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07542827 = '\x01';
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  bVar1 = (__this->fields).enter;
  bVar2 = (__this->fields).explicitExitOnly;
  if (Il2CppMethodInitialized_07542827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07542827 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pGVar5 = b.fields.Enter;
  if (bVar2 != false) {
    pGVar5 = b.fields.Exit;
  }
  if (b.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    pGVar5 = b.fields.Exit;
  }
  if (bVar1 != false) {
    pGVar5 = b.fields.Enter;
  }
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (pGVar5->fields).order;
  }
  iVar4 = System_Int32__CompareTo_54b7380(&iStack_34,iVar4,(MethodInfo *)0x0);
  return iVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x532a060

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$<Fade>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___Fade_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o* __this, float value, const MethodInfo* method);
// 0x532a4b0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0___Fade_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *obj;
  long lVar1;
  
  obj = (__this->fields).group;
  if (obj == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_075548af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull_CanvasGroup);
    Il2CppMethodInitialized_075548af = '\x01';
  }
  if (obj == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  lVar1 = (obj->fields).m_CachedPtr;
  if (lVar1 == 0) {
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException((Il2CppObject *)obj,(MethodInfo *)0x0);
  }
  if (g_data_075548c0 == (code *)0x0) {
    g_data_075548c0 = il2cpp_codegen_resolve_icall
                             ("UnityEngine.CanvasGroup::set_alpha_Injected(System.IntPtr,System.Single)");
  }
  (*g_data_075548c0)(value,lVar1);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x532a210

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, float value, const MethodInfo* method);
// 0x532a4d0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_o offset;
  float fVar3;
  float fVar4;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (__this->fields).start.fields;
  UVar2 = (__this->fields).target.fields;
  fVar3 = UVar1.x;
  fVar4 = UVar1.y;
  offset.fields.y = value * (UVar2.y - fVar4) + fVar4;
  offset.fields.x = value * (UVar2.x - fVar3) + fVar3;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x532a510

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0___MotionOffsetTween_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
            (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x5327d00

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, float value, const MethodInfo* method);
// 0x532a530

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_o offset;
  Gisketch_Aottg2UI_Tweening_GisketchMotion_c *__this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754282a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_0754282a = '\x01';
  }
  __this_01 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  fVar3 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this_01,1.0 - value,3.0,method);
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (__this->fields).start.fields;
  UVar2 = (__this->fields).target.fields;
  fVar4 = UVar1.x;
  fVar5 = UVar1.y;
  offset.fields.y = (1.0 - fVar3) * (UVar2.y - fVar5) + fVar5;
  offset.fields.x = (1.0 - fVar3) * (UVar2.x - fVar4) + fVar4;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x532a5e0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0___MainMenuPanel_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
            (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x5327d10

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, float value, const MethodInfo* method);
// 0x532a600

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_02;
  UnityEngine_Vector2_o offset;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Tweening_GisketchMotion_c *__this_03;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754282b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_0754282b = '\x01';
  }
  __this_03 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  fVar3 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this_03,1.0 - value,3.0,method);
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).target.fields;
    fVar3 = 1.0 - fVar3;
    fVar5 = UVar1.x;
    fVar4 = UVar1.y;
    offset.fields.y = fVar3 * (UVar2.y - fVar4) + fVar4;
    offset.fields.x = fVar3 * (UVar2.x - fVar5) + fVar5;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    __this_01 = (__this->fields).group;
    if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar5 = 1.0;
      if (fVar3 <= 1.0) {
        fVar5 = fVar3;
      }
      fVar5 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar5);
      fVar3 = (__this->fields).startAlpha;
      method_00 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_alpha
                (__this_01,((__this->fields).endAlpha - fVar3) * fVar5 + fVar3,(MethodInfo *)0x0);
      __this_02 = (__this->fields).blur;
      if (__this_02 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
        return;
      }
      fVar3 = (__this->fields).startBlur;
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                (__this_02,fVar5 * (0.0 - fVar3) + fVar3,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x532a730

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0___MainMenuLogo_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).layoutOffset;
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
            (__this_00,(UnityEngine_Vector2_o)(__this->fields).target.fields,(MethodInfo *)0x0);
  __this_01 = (__this->fields).blur;
  if (__this_01 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_01,0.0,method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5327f40

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, float value, const MethodInfo* method);
// 0x532a770

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,float value,
               MethodInfo *method)

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
    UVar2 = (__this->fields).origin.fields;
    fVar7 = 1.0 - value;
    offset.fields.y = fVar5 * fVar7 * 4.5 + UVar2.y;
    offset.fields.x = fVar4 * fVar7 * 10.0 + UVar2.x;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(__this_00,offset,(MethodInfo *)0x0);
    __this_01 = (__this->fields).rect;
    uVar1 = (__this->fields).scale.fields.x;
    uVar3 = (__this->fields).scale.fields.y;
    fVar4 = (__this->fields).scale.fields.z;
    fVar5 = sinf(fVar6 * 8.0);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      fVar5 = fVar7 * fVar5 * 0.025 + 1.0;
      value_00.fields.z = fVar4 * fVar5;
      value_00.fields.x = (float)uVar1 * fVar5;
      value_00.fields.y = (float)uVar3 * fVar5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x532a890

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0___LogoImpact_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this,MethodInfo *method)

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
                ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Vector3_o)(__this->fields).scale.fields,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x5328620

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, float value, const MethodInfo* method);
// 0x532a8d0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_0754282c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_0754282c = '\x01';
  }
  __this_00 = (__this->fields).material;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (__this_00 == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_00,
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,value
             ,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__1
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__1 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x532a950

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__1
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_0754282d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_0754282d = '\x01';
  }
  __this_00 = (__this->fields).material;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (__this_00 == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_00,
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,0.0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__2
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__2 (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x532a9c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0___HorizontalSurfaceBlur_b__2
               (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_0754282e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_0754282e = '\x01';
  }
  __this_00 = (__this->fields).material;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (__this_00 == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_00,
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,0.0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayMainMenuPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel (UnityEngine_GameObject_o* go, bool enter, float duration, const MethodInfo* method);
// 0x5326340

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel
          (UnityEngine_GameObject_o *go,bool enter,float duration,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *rect;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  
  if (Il2CppMethodInitialized_0754280c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754280c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pDVar2 = (DG_Tweening_Tween_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar1) {
    if (go == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    rect = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel(rect,duration,enter,false,in_RCX);
    method_00 = extraout_RDX_00;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
    method_00 = extraout_RDX_01;
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,false,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween (UnityEngine_GameObject_o* go, System_String_o* preset, float duration, bool enter, const MethodInfo* method);
// 0x5326960

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween
          (UnityEngine_GameObject_o *go,System_String_o *preset,float duration,bool enter,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  DG_Tweening_Tween_o *pDVar3;
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
  MethodInfo *pMVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_0754280d == '\0') {
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
    Il2CppMethodInitialized_0754280d = '\x01';
  }
  if (preset != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(preset,"mainmenupanel",(MethodInfo *)0x0);
    if (bVar1) {
      if (go != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel(pUVar2,duration,enter,true,method);
        return pDVar3;
      }
    }
    else {
      bVar1 = System_String__Contains(preset,"mainmenulogotext",(MethodInfo *)0x0);
      if (bVar1) {
        if (go != (UnityEngine_GameObject_o *)0x0) {
          pUVar2 = UnityEngine_GameObject__GetComponent_object_
                             (go,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          pMVar4 = extraout_RDX;
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            pMVar4 = extraout_RDX_00;
          }
          uVar5 = 0x43700000;
label_05326b29:
          pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo
                             (pUVar2,duration,enter,(UnityEngine_Vector2_o)((ulong)uVar5 << 0x20),pMVar4);
          return pDVar3;
        }
      }
      else {
        bVar1 = System_String__Contains(preset,"mainmenulogoblades",(MethodInfo *)0x0);
        if (bVar1) {
          if (go != (UnityEngine_GameObject_o *)0x0) {
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (go,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            pMVar4 = extraout_RDX_01;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              pMVar4 = extraout_RDX_02;
            }
            uVar5 = 0xc3820000;
            goto label_05326b29;
          }
        }
        else {
          bVar1 = System_String__Contains(preset,"mainmenulogoimpact",(MethodInfo *)0x0);
          if (bVar1) {
            if (go != (UnityEngine_GameObject_o *)0x0) {
              pMVar4 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
              pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                 (go,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              }
              pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact(pUVar2,duration,pMVar4);
              return pDVar3;
            }
          }
          else {
            bVar1 = System_String__Contains(preset,"mainmenufootericonintro",(MethodInfo *)0x0);
            if (bVar1) {
              if (go != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                   (go,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                pMVar4 = extraout_RDX_03;
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  pMVar4 = extraout_RDX_04;
                }
                pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro
                                   (pUVar2,duration,enter,pMVar4);
                return pDVar3;
              }
            }
            else {
              bVar1 = System_String__Contains(preset,"mainmenutippanel",(MethodInfo *)0x0);
              if (!bVar1) {
                bVar1 = System_String__Contains(preset,"brushsidepanelcontentintro",(MethodInfo *)0x0);
                if (bVar1) {
                  pMVar4 = extraout_RDX_07;
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                    pMVar4 = extraout_RDX_08;
                  }
                  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro
                                     (go,duration,enter,pMVar4);
                  return pDVar3;
                }
                bVar1 = System_String__Contains(preset,"mainmenubrushintro",(MethodInfo *)0x0);
                if (bVar1) {
                  pMVar4 = extraout_RDX_09;
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                    pMVar4 = extraout_RDX_10;
                  }
                  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro(go,duration,enter,pMVar4);
                  return pDVar3;
                }
                return (DG_Tweening_Tween_o *)0x0;
              }
              if (go != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                   (go,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                pMVar4 = extraout_RDX_05;
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  pMVar4 = extraout_RDX_06;
                }
                pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel(pUVar2,duration,enter,pMVar4);
                return pDVar3;
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
// 0x5326440

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,bool resetEnterStart,MethodInfo *method
          )

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar3;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar4;
  DG_Tweening_TweenCallback_o *__this_01;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_Fields *targetAddress;
  UnityEngine_Vector2_o offset;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  float local_48;
  
  if (Il2CppMethodInitialized_0754280e == '\0') {
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
    Il2CppMethodInitialized_0754280e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar7 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pGVar3 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass3_0_o *)0x0) {
      targetAddress = &__this->fields;
      (__this->fields).layoutOffset = pGVar3;
      Il2CppCodeGenWriteBarrier(&targetAddress->layoutOffset);
      pGVar3 = (__this->fields).layoutOffset;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return (DG_Tweening_Tween_o *)0x0;
      }
      local_48 = UVar7.fields.m_Width;
      fVar5 = 1.0;
      if (1.0 <= local_48) {
        fVar5 = local_48;
      }
      fVar5 = fVar5 * 1.08;
      if ((enter) && (resetEnterStart)) {
        pGVar3 = targetAddress->layoutOffset;
        if (Il2CppMethodInitialized_07542888 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542888 = '\x01';
        }
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_05326778;
        UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields;
        offset.fields.x = fVar5 * UVar1.x;
        offset.fields.y = fVar5 * UVar1.y;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar3,offset,(MethodInfo *)0x0);
      }
      if (targetAddress->layoutOffset != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        (__this->fields).start.fields = (targetAddress->layoutOffset->fields)._motionOffset.fields;
        if (enter) {
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
          fVar6 = UVar1.x;
          fVar5 = UVar1.y;
        }
        else {
          if (Il2CppMethodInitialized_07542888 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542888 = '\x01';
          }
          UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields;
          fVar6 = fVar5 * UVar1.x;
          fVar5 = fVar5 * UVar1.y;
        }
        UVar1.y = fVar5;
        UVar1.x = fVar6;
        (__this->fields).target.fields = UVar1;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__0,
                   (MethodInfo_4293C90 *)0x0);
        pDVar4 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_00,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__1,
                   (MethodInfo *)0x0);
        pDVar4 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar4,__this_01,
                            (MethodInfo_36AF8A0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
        pDVar4 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar4,true,
                            (MethodInfo_36B08F0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        return (DG_Tweening_Tween_o *)pDVar4;
      }
    }
  }
label_05326778:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuLogo
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x5326d20

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuLogo
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  UnityEngine_CanvasGroup_o **targetAddress;
  bool bVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar2;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *pUVar3;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar4;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *__this_01;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **targetAddress_00;
  MethodInfo *pMVar6;
  float fVar7;
  float fStack_44;
  
  if (Il2CppMethodInitialized_0754280f == '\0') {
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
    Il2CppMethodInitialized_0754280f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pGVar2 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass4_0_o *)0x0) {
    (__this->fields).layoutOffset = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layoutOffset);
    pGVar2 = (__this->fields).layoutOffset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      pUVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar6);
      targetAddress = &(__this->fields).group;
      (__this->fields).group = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pGVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)rect,
                          (MethodInfo_34B0830 *)
                          MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
      targetAddress_00 = &(__this->fields).blur;
      (__this->fields).blur = pGVar4;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      pGVar2 = (__this->fields).layoutOffset;
      if (enter) {
        if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_0532710a;
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar2,offset,(MethodInfo *)0x0);
        pUVar3 = *targetAddress;
        if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) goto label_0532710a;
        pMVar6 = (MethodInfo *)0x0;
        UnityEngine_CanvasGroup__set_alpha(pUVar3,0.0,(MethodInfo *)0x0);
        if (*targetAddress_00 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
          fStack_44 = offset.fields.y;
          Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
                    (*targetAddress_00,ABS(fStack_44) * 0.18,pMVar6);
        }
        pGVar2 = (__this->fields).layoutOffset;
        if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_0532710a;
        (__this->fields).start.fields = (pGVar2->fields)._motionOffset.fields;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        offset.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      }
      else {
        if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_0532710a;
        (__this->fields).start.fields = (pGVar2->fields)._motionOffset.fields;
      }
      (__this->fields).target.fields = offset.fields;
      pUVar3 = (__this->fields).group;
      if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
        fVar7 = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
        (__this->fields).startAlpha = fVar7;
        if (enter) {
          fVar7 = 1.0;
        }
        else {
          fVar7 = 0.0;
        }
        (__this->fields).endAlpha = fVar7;
        pGVar4 = (__this->fields).blur;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pMVar6 = (MethodInfo *)0x0;
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar7 = 0.0;
        if (bVar1) {
          if (*targetAddress_00 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0)
          goto label_0532710a;
          fVar7 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(*targetAddress_00,pMVar6);
        }
        (__this->fields).startBlur = fVar7;
        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
        }
        pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__0,
                   (MethodInfo_4293C90 *)0x0);
        t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_00,(MethodInfo *)0x0);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__Join(pDVar5,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__1,
                   (MethodInfo *)0x0);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar5,__this_01,
                            (MethodInfo_36AF8A0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
        pDVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar5,true,
                            (MethodInfo_36B08F0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
        return (DG_Tweening_Tween_o *)pDVar5;
      }
    }
  }
label_0532710a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$LogoImpact
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact (UnityEngine_RectTransform_o* rect, float duration, const MethodInfo* method);
// 0x5327110

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__LogoImpact
          (UnityEngine_RectTransform_o *rect,float duration,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  UnityEngine_RectTransform_o *pUVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *__this_01;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  
  if (Il2CppMethodInitialized_07542810 == '\0') {
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
    Il2CppMethodInitialized_07542810 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass5_0_o *)0x0) goto label_0532742b;
  targetAddress = &(__this->fields).rect;
  (__this->fields).rect = rect;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar5 = (__this->fields).rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pGVar7 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For((__this->fields).rect,(MethodInfo *)0x0);
    (__this->fields).layoutOffset = pGVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layoutOffset);
    pGVar7 = (__this->fields).layoutOffset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      pGVar7 = (__this->fields).layoutOffset;
      if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        (__this->fields).origin.fields = (pGVar7->fields)._motionOffset.fields;
        pUVar5 = (__this->fields).rect;
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UVar11 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar1 = (pUVar8->zeroVector).fields.x;
          uVar3 = (pUVar8->zeroVector).fields.y;
          fVar10 = UVar11.fields.y - (float)uVar3;
          fVar2 = UVar11.fields.z - (pUVar8->zeroVector).fields.z;
          fVar4 = UVar11.fields.x - (float)uVar1;
          if (9.9999994e-11 <= fVar10 * fVar10 + fVar4 * fVar4 + fVar2 * fVar2) {
            pUVar5 = *targetAddress;
            if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto label_0532742b;
            UVar11 = UnityEngine_Transform__get_localScale
                               ((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
            fVar10 = UVar11.fields.z;
            fVar2 = UVar11.fields.x;
            fVar4 = UVar11.fields.y;
          }
          else {
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
              pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
            }
            fVar2 = (pUVar8->oneVector).fields.x;
            fVar4 = (pUVar8->oneVector).fields.y;
            fVar10 = (pUVar8->oneVector).fields.z;
          }
          (__this->fields).scale.fields.x = fVar2;
          (__this->fields).scale.fields.y = fVar4;
          (__this->fields).scale.fields.z = fVar10;
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
          DG_Tweening_TweenCallback_float____ctor
                    (__this_00,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__0,
                     (MethodInfo_4293C90 *)0x0);
          t = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_00,(MethodInfo *)0x0);
          pDVar9 = DG_Tweening_TweenSettingsExtensions__Join
                             (pDVar9,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
          DG_Tweening_TweenCallback___ctor
                    (__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__1,
                     (MethodInfo *)0x0);
          pDVar9 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                             ((Il2CppObject *)pDVar9,__this_01,
                              (MethodInfo_36AF8A0 *)
                              MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
          pDVar9 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                             ((Il2CppObject *)pDVar9,true,
                              (MethodInfo_36B08F0 *)
                              MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
          return (DG_Tweening_Tween_o *)pDVar9;
        }
      }
label_0532742b:
      ThrowNullReferenceException();
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro (UnityEngine_GameObject_o* go, float duration, bool enter, const MethodInfo* method);
// 0x5327ad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5327c8b: jmp 0x5327ca2

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushIntro
          (UnityEngine_GameObject_o *go,float duration,bool enter,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Vector2_o offset;
  bool bVar2;
  UnityEngine_RectTransform_o *__this;
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_00;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_Sequence_o *pDVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if (Il2CppMethodInitialized_07542811 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchBrushButtonIntroReveal);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_07542811 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (UnityEngine_RectTransform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_05327cfa;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
    ;
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
label_05327cfa:
    ThrowNullReferenceException();
  }
  UVar5 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    method_00 = extraout_RDX_00;
  }
  fVar4 = 64.0;
  if (64.0 <= UVar5.fields.m_Width) {
    fVar4 = UVar5.fields.m_Width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    method_00 = extraout_RDX_01;
  }
  offset.fields.y = 0.0;
  offset.fields.x = -fVar4;
  t = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset(__this,duration,enter,offset,method_00)
  ;
  if (enter) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_05327cfa;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (go,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_GisketchBrushButtonIntroReveal);
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0) {
      t_00 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Play
                       (__this_00,duration,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05327ca0;
    }
  }
  t_00 = (DG_Tweening_Tween_o *)0x0;
  uVar1 = (TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor;
joined_r0x05327ca0:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
  }
  pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar3,true,
                      (MethodInfo_36B08F0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence)
  ;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar3,t,(MethodInfo *)0x0);
  }
  if (t_00 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenSettingsExtensions__Join(pDVar3,t_00,(MethodInfo *)0x0);
  }
  return (DG_Tweening_Tween_o *)pDVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushSidePanelContentIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro (UnityEngine_GameObject_o* go, float duration, bool enter, const MethodInfo* method);
// 0x5327890

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__BrushSidePanelContentIntro
          (UnityEngine_GameObject_o *go,float duration,bool enter,MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  bool bVar1;
  UnityEngine_RectTransform_o *__this;
  DG_Tweening_Tween_o *t;
  UnityEngine_CanvasGroup_o *group;
  DG_Tweening_Tween_o *t_00;
  UnityEngine_UI_Image_o *image;
  DG_Tweening_Tween_o *t_01;
  DG_Tweening_Sequence_o *pDVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if (Il2CppMethodInitialized_07542812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_07542812 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (UnityEngine_RectTransform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_05327aca;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
    ;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (__this != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
    pMVar3 = extraout_RDX;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      pMVar3 = extraout_RDX_00;
    }
    fVar4 = 64.0;
    if (64.0 <= UVar5.fields.m_Width) {
      fVar4 = UVar5.fields.m_Width;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      pMVar3 = extraout_RDX_01;
    }
    method_01 = (MethodInfo *)(ulong)enter;
    offset.fields.y = 0.0;
    offset.fields.x = fVar4;
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset(__this,duration,enter,offset,pMVar3);
    group = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,method_01);
    t_00 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(group,duration,enter,method_00);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pMVar3 = MethodInfo_UnityEngine_GameObject_GetComponent_Image;
      image = UnityEngine_GameObject__GetComponent_object_
                        (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
      t_01 = Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur(image,duration,52.0,pMVar3);
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar2,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      if (t != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenSettingsExtensions__Join(pDVar2,t,(MethodInfo *)0x0);
      }
      if (t_00 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenSettingsExtensions__Join(pDVar2,t_00,(MethodInfo *)0x0);
      }
      if (t_01 == (DG_Tweening_Tween_o *)0x0) {
        return (DG_Tweening_Tween_o *)pDVar2;
      }
      DG_Tweening_TweenSettingsExtensions__Join(pDVar2,t_01,(MethodInfo *)0x0);
      return (DG_Tweening_Tween_o *)pDVar2;
    }
  }
label_05327aca:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HorizontalSurfaceBlur
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur (UnityEngine_UI_Image_o* image, float duration, float blurPixels, const MethodInfo* method);
// 0x5328350

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__HorizontalSurfaceBlur
          (UnityEngine_UI_Image_o *image,float duration,float blurPixels,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *__this;
  UnityEngine_Material_o *pUVar2;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar3;
  DG_Tweening_TweenCallback_o *pDVar4;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_Fields *targetAddress;
  
  if (Il2CppMethodInitialized_07542813 == '\0') {
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
    Il2CppMethodInitialized_07542813 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Material_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_0532861b;
    pUVar2 = (*(image->klass->vtable)._32_get_material.methodPtr)
                       (image,(image->klass->vtable)._32_get_material.method);
  }
  if (__this != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass8_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).material = pUVar2;
    Il2CppCodeGenWriteBarrier(&targetAddress->material);
    pUVar2 = (__this->fields).material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pUVar2 = targetAddress->material;
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
      pUVar2 = targetAddress->material;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetFloat_68e0ad0
                  (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                          HorizontalBlurId,blurPixels,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__0
                   ,(MethodInfo_4293C90 *)0x0);
        pDVar3 = DG_Tweening_DOVirtual__Float(blurPixels,0.0,duration,__this_00,(MethodInfo *)0x0);
        pDVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (pDVar4,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__1
                   ,(MethodInfo *)0x0);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar3,pDVar4,
                            (MethodInfo_36AF8A0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
        pDVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (pDVar4,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__2
                   ,(MethodInfo *)0x0);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__OnKill_object_
                           ((Il2CppObject *)pDVar3,pDVar4,
                            (MethodInfo_36AF8D0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Tweener);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar3,true,
                            (MethodInfo_36B08F0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
        return (DG_Tweening_Tween_o *)pDVar3;
      }
    }
  }
label_0532861b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$FooterIconIntro
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x5327430

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__FooterIconIntro
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  UnityEngine_Vector3_Fields endValue;
  bool bVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar7;
  DG_Tweening_Sequence_o *pDVar8;
  MethodInfo **ppMVar9;
  DG_Tweening_Tween_o *pDVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o endValue_00;
  UnityEngine_Vector3_o endValue_01;
  undefined8 uStack_28;
  
  if (Il2CppMethodInitialized_07542814 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
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
    Il2CppMethodInitialized_07542814 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar6->zeroVector).fields.x;
  uVar3 = (pUVar6->zeroVector).fields.y;
  fVar11 = UVar12.fields.y - (float)uVar3;
  fVar2 = UVar12.fields.z - (pUVar6->zeroVector).fields.z;
  fVar4 = UVar12.fields.x - (float)uVar1;
  if (9.9999994e-11 <= fVar11 * fVar11 + fVar4 * fVar4 + fVar2 * fVar2) {
    UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    fVar11 = UVar12.fields.z;
    fVar2 = UVar12.fields.x;
    fVar4 = UVar12.fields.y;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    fVar2 = (pUVar6->oneVector).fields.x;
    fVar4 = (pUVar6->oneVector).fields.y;
    fVar11 = (pUVar6->oneVector).fields.z;
  }
  if (enter) {
    UVar12.fields.x = fVar2 * 1.35;
    UVar12.fields.y = fVar4 * 1.35;
    UVar12.fields.z = fVar11 * 1.35;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,UVar12,(MethodInfo *)0x0);
    if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
    }
    pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    endValue_00.fields.x = fVar2 * 0.88;
    endValue_00.fields.y = fVar4 * 0.88;
    endValue_00.fields.z = fVar11 * 0.88;
    pDVar7 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)rect,endValue_00,duration * 0.55,(MethodInfo *)0x0);
    pDVar10 = (DG_Tweening_Tween_o *)
              DG_Tweening_TweenSettingsExtensions__SetEase_object_
                        ((Il2CppObject *)pDVar7,9,
                         (MethodInfo_36B0160 *)
                         MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                        );
    pDVar8 = DG_Tweening_TweenSettingsExtensions__Append(pDVar8,pDVar10,(MethodInfo *)0x0);
    endValue_01.fields.z = fVar11;
    endValue_01.fields.x = fVar2;
    endValue_01.fields.y = fVar4;
    pDVar7 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)rect,endValue_01,duration * 0.45,(MethodInfo *)0x0);
    pDVar10 = (DG_Tweening_Tween_o *)
              DG_Tweening_TweenSettingsExtensions__SetEase_object__36b0200
                        ((Il2CppObject *)pDVar7,0x1b,1.35,
                         (MethodInfo_36B0200 *)
                         MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
                        );
    pDVar8 = DG_Tweening_TweenSettingsExtensions__Append(pDVar8,pDVar10,(MethodInfo *)0x0);
    ppMVar9 = &MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    endValue = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
    value.fields.y = fVar4;
    value.fields.x = fVar2;
    value.fields.z = fVar11;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,value,(MethodInfo *)0x0);
    pDVar7 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o)endValue,duration,
                        (MethodInfo *)0x0);
    pDVar8 = (DG_Tweening_Sequence_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object_
                       ((Il2CppObject *)pDVar7,8,
                        (MethodInfo_36B0160 *)
                        MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                       );
    ppMVar9 = &
              MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_Vector3_Vector3_VectorOptions
    ;
  }
  pDVar10 = (DG_Tweening_Tween_o *)
            DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                      ((Il2CppObject *)pDVar8,true,(MethodInfo_36B08F0 *)*ppMVar9);
  return pDVar10;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$TipPanel
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x5327770
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5327818: test bpl, bpl
// asm:   0x532781b: jne 0x5327825
// asm:   0x5327881: test bpl, bpl
// asm:   0x5327886: jmp 0x5327825

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__TipPanel
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  bool bVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if (Il2CppMethodInitialized_07542815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542815 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar5 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar4 = UVar5.fields.m_Width;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    method_00 = extraout_RDX_01;
    fVar3 = 64.0;
    if (64.0 <= fVar4) {
      fVar3 = fVar4;
    }
  }
  else {
    method_00 = extraout_RDX;
    fVar3 = 64.0;
    if (64.0 <= fVar4) {
      fVar3 = fVar4;
    }
  }
  if (!enter) {
    fVar3 = fVar3 * 1.5;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    method_00 = extraout_RDX_00;
  }
  offset.fields.y = 0.0;
  offset.fields.x = fVar3;
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
                     (rect,duration,enter,offset,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideNoFadeWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x5327f50

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideNoFadeWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar2;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar3;
  DG_Tweening_TweenCallback_o *__this_01;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_Fields *targetAddress;
  
  if (Il2CppMethodInitialized_07542816 == '\0') {
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
    Il2CppMethodInitialized_07542816 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  pGVar2 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass11_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).layoutOffset = pGVar2;
    Il2CppCodeGenWriteBarrier(&targetAddress->layoutOffset);
    pGVar2 = (__this->fields).layoutOffset;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pGVar2 = targetAddress->layoutOffset;
    if (enter) {
      if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset(pGVar2,offset,(MethodInfo *)0x0);
        if (targetAddress->layoutOffset != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
          (__this->fields).start.fields = (targetAddress->layoutOffset->fields)._motionOffset.fields;
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          offset.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
          goto label_0532810c;
        }
      }
    }
    else if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      (__this->fields).start.fields = (pGVar2->fields)._motionOffset.fields;
label_0532810c:
      (__this->fields).target.fields = offset.fields;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__0
                 ,(MethodInfo_4293C90 *)0x0);
      pDVar3 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_00,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar3,9,
                          (MethodInfo_36B0160 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener
                         );
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
      DG_Tweening_TweenCallback___ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__1
                 ,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                         ((Il2CppObject *)pDVar3,__this_01,
                          (MethodInfo_36AF8A0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar3,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      return (DG_Tweening_Tween_o *)pDVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$OutCubic
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic (float value, const MethodInfo* method);
// 0x5328640

float Gisketch_Aottg2UI_Tweening_GisketchMotion__OutCubic(float value,MethodInfo *method)

{
  MethodInfo *in_RSI;
  float fVar1;
  
  fVar1 = powf((CustomLogic_CustomLogicMathBuiltin_o *)method,1.0 - value,3.0,in_RSI);
  return 1.0 - fVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewEnter
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5328670

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint32_t uVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07542817 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,true,method_00);
    return pDVar2;
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,true,in_RDX);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewExit
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5328bc0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint32_t uVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07542818 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,false,method_00);
    return pDVar2;
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets(view,false,in_RDX);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetViewToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest (Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5328c30

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest
               (Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target;
  int index;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this;
  Gisketch_Aottg2UI_Tweening_GisketchMotion_c *method_00;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o local_50;
  
  if (Il2CppMethodInitialized_07542819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
    Il2CppMethodInitialized_07542819 = '\x01';
  }
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    return;
  }
  __this = (view->fields)._MotionTargets_k__BackingField;
  if (__this != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
    if ((__this->fields)._size == 0) {
      return;
    }
    index = 0;
    do {
      if ((__this->fields)._size <= index) {
        return;
      }
      System_Collections_Generic_List_GisketchMotionTarget___get_Item
                (&local_50,__this,index,
                 (MethodInfo_39028C0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
      method_00 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      target.fields.Enter = local_50.fields.Enter;
      target.fields.GameObject = local_50.fields.GameObject;
      target.fields.Exit = local_50.fields.Exit;
      target.fields.RestScale.fields.x = local_50.fields.RestScale.fields.x;
      target.fields.RestScale.fields.y = local_50.fields.RestScale.fields.y;
      target.fields.RestScale.fields.z = local_50.fields.RestScale.fields.z;
      target.fields.RestAlpha = local_50.fields.RestAlpha;
      Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest(target,(MethodInfo *)method_00);
      index = index + 1;
      __this = (view->fields)._MotionTargets_k__BackingField;
    } while (__this != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayNode
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, bool blocksInput, const MethodInfo* method);
// 0x5328ee0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,bool enter,
          bool blocksInput,MethodInfo *method)

{
  DG_Tweening_Tween_o *pDVar1;
  undefined3 in_register_00000009;
  undefined4 uVar2;
  undefined4 in_register_0000000c;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  uVar2 = CONCAT31(in_register_00000009,blocksInput);
  if (Il2CppMethodInitialized_0754281a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_0754281a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
                     (go,motion,enter,(MethodInfo *)CONCAT44(in_register_0000000c,uVar2));
  method_00 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
    method_00 = extraout_RDX_00;
  }
  pDVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar1,blocksInput,method_00);
  return pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayTargets
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets (Gisketch_Aottg2UI_Building_GisketchView_o* view, bool enter, const MethodInfo* method);
// 0x53286e0
// eh: try 0x5328a0a..0x5328af3 -> pad 0x5328b5f (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5328b77..0x5328b7c -> pad 0x5328ba1 cleanup
// eh: try 0x5328ba4..0x5328bae -> pad 0x5328bb6 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5328b53: jmp 0x5328b5f
// asm:   0x5328b55: jmp 0x5328b5f
// asm:   0x5328b57: jmp 0x5328b5f
// asm:   0x5328b59: jmp 0x5328b5f
// asm:   0x5328b5b: jmp 0x5328b5f
// asm:   0x5328b5d: jmp 0x5328b5f
// asm:   0x5328b5f: mov rbx, rax
// asm:   0x5328b62: cmp edx, 1
// asm:   0x5328b65: jne 0x5328ba4
// asm:   0x5328b67: mov rdi, rbx
// asm:   0x5328b6a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5328b6f: mov rbx, qword ptr [rax]
// asm:   0x5328b72: mov qword ptr [rsp + 0x50], rbx
// asm:   0x5328b77: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5328b7c: lea rax, [rip + 0x1f6520d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_Dispose
// asm:   0x5328b83: mov rsi, qword ptr [rax]
// asm:   0x5328b86: lea rdi, [rsp + 0x10]
// asm:   0x5328b8b: call 0x4d379a0  ; System_Collections_Generic_List_Enumerator_GisketchMotionTarget___Dispose()
// asm:   0x5328b90: test rbx, rbx
// asm:   0x5328b93: je 0x5328b10
// asm:   0x5328b99: mov rdi, rbx
// asm:   0x5328b9c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5328ba1: mov rbx, rax
// asm:   0x5328ba4: lea rdi, [rsp + 0x50]
// asm:   0x5328ba9: call 0x2d4a140  ; il2cpp_runtime_helper_02d4a140()
// asm:   0x5328bae: mov rdi, rbx
// asm:   0x5328bb1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5328bb6: mov rdi, rax
// asm:   0x5328bb9: call 0x2ab61e0  ; __clang_call_terminate()

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayTargets
          (Gisketch_Aottg2UI_Building_GisketchView_o *view,bool enter,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  bool bVar5;
  bool enter_00;
  int32_t iVar6;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *__this;
  DG_Tweening_Sequence_o *pDVar7;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar8;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  DG_Tweening_Tween_o *pDVar9;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion;
  float fVar11;
  float fVar12;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_0754281b == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor_7194848);
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
    Il2CppMethodInitialized_0754281b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass19_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass19_0_o *)0x0) {
    (__this->fields).enter = enter;
    if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return (DG_Tweening_Tween_o *)0x0;
    }
    pSVar8 = (view->fields)._MotionTargets_k__BackingField;
    if (pSVar8 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
      if ((pSVar8->fields)._size == 0) {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (!bVar5) {
        return (DG_Tweening_Tween_o *)0x0;
      }
      if ((view->fields)._LayoutDirty_k__BackingField != false) {
        pUVar2 = (view->fields)._Root_k__BackingField;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar2,2,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(view,(MethodInfo *)0x0);
      }
      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      bVar5 = false;
      pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar7,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      pMVar10 = (MethodInfo *)(view->fields)._MotionTargets_k__BackingField;
      pSVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchMotionTarget);
      System_Collections_Generic_List_GisketchMotionTarget____ctor_3902410
                (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pMVar10,
                 (MethodInfo_3902410 *)
                 MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor_7194848);
      if ((__this->fields).enter == false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        bVar5 = Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit(pSVar8,pMVar10);
      }
      (__this->fields).explicitExitOnly = bVar5;
      comparison = (System_Comparison_T__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_GisketchMotionTarget);
      pMVar10 = (MethodInfo *)0x0;
      System_Comparison_GisketchMotionTarget____ctor
                ((System_Comparison_GisketchMotionTarget__o *)comparison,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass19_0_PlayTargets_b__0,
                 (MethodInfo_48E14B0 *)0x0);
      if (pSVar8 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        System_Collections_Generic_List_GisketchMotionTarget___Sort_39054d0
                  (pSVar8,comparison,
                   (MethodInfo_39054D0 *)MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Sort)
        ;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
        System_Collections_Generic_Dictionary_object__int____ctor
                  ((System_Collections_Generic_Dictionary_object__int__o *)__this_00,
                   (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
        System_Collections_Generic_List_GisketchMotionTarget___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_68,pSVar8,
                   (MethodInfo_3903E20 *)
                   MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_GetEnumerator);
        local_78 = local_38;
        local_88 = local_48;
        uStack_80 = uStack_40;
        local_a8.fields._current._0_4_ = local_58;
        local_a8.fields._current._4_4_ = uStack_54;
        uStack_90 = uStack_50;
        uStack_8c = uStack_4c;
        local_a8.fields._list = (System_Collections_Generic_List_T__o *)local_68._0_8_;
        local_a8.fields._index = local_68._8_4_;
        local_a8.fields._version = local_68._12_4_;
        local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_68._8_8_ = &local_a8;
        while (bVar5 = System_Collections_Generic_List_Enumerator_GisketchMotionTarget___MoveNext
                                 (&local_a8,
                                  (MethodInfo_4C379B0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_MoveNext
                                 ), pGVar4 = local_88, bVar5) {
          pUVar2 = (UnityEngine_GameObject_o *)
                   CONCAT44(local_a8.fields._current._4_4_,local_a8.fields._current._0_4_);
          pGVar3 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)CONCAT44(uStack_8c,uStack_90);
          bVar5 = (__this->fields).enter;
          bVar1 = (__this->fields).explicitExitOnly;
          enter_00 = bVar5;
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            enter_00 = (__this->fields).enter;
          }
          motion = pGVar3;
          if (bVar1 != false) {
            motion = pGVar4;
          }
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
            motion = pGVar4;
          }
          if (bVar5 != false) {
            motion = pGVar3;
          }
          pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween(pUVar2,motion,enter_00,pMVar10);
          if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
            method_00 = extraout_RDX;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              method_00 = extraout_RDX_00;
            }
            iVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex(__this_00,motion,method_00);
            if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = (motion->fields).stagger;
              fVar12 = 0.0;
              if (0.0 <= fVar11) {
                fVar12 = fVar11;
              }
              fVar11 = (float)iVar6 * fVar12 + (motion->fields).delay;
            }
            DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                      ((Il2CppObject *)pDVar9,fVar11,
                       (MethodInfo_36AFF70 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetDelay_Tween);
            DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator_GisketchMotionTarget___Dispose
                  (&local_a8,
                   (MethodInfo_4C379A0 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_GisketchMotionTarget_Dispose);
        pMVar10 = extraout_RDX_01;
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
          pMVar10 = extraout_RDX_02;
        }
        pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                           ((DG_Tweening_Tween_o *)pDVar7,true,pMVar10);
        return pDVar9;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$CreateTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, bool enter, const MethodInfo* method);
// 0x5328f80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532910f: jmp 0x53294cf

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__CreateTween
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,bool enter,
          MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  bool bVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotion_StaticFields *pGVar2;
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
  
  if (Il2CppMethodInitialized_0754281c == '\0') {
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
    Il2CppMethodInitialized_0754281c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  bVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields;
    if (pGVar2->Enabled != false) goto label_053290a9;
label_05329129:
    local_2c = 0.01;
    pSVar3 = (motion->fields).preset;
  }
  else {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields;
    if (pGVar2->Enabled == false) goto label_05329129;
label_053290a9:
    fVar10 = (motion->fields).duration;
    uVar8 = -(uint)(0.0 < fVar10);
    fVar10 = (float)(~uVar8 & 0x3e23d70a | (uint)fVar10 & uVar8);
    local_2c = 0.01;
    if (0.01 <= fVar10) {
      local_2c = fVar10;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields;
    }
    local_2c = local_2c * pGVar2->DurationScale;
    pSVar3 = (motion->fields).preset;
  }
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MainMenuTween(go,pSVar3,local_2c,enter,method);
    if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
      return pDVar4;
    }
    if (pSVar3 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(pSVar3,"slideleftsmall",(MethodInfo *)0x0);
      if (bVar1) {
        if (go != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (go,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          pMVar7 = extraout_RDX;
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            pMVar7 = extraout_RDX_00;
          }
          fVar10 = 16.0;
          fVar9 = 0.0;
label_05329339:
          offset.fields.y = fVar9;
          offset.fields.x = fVar10;
          pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
                             (pUVar5,local_2c,enter,offset,pMVar7);
          return pDVar4;
        }
      }
      else {
        bVar1 = System_String__Contains(pSVar3,"sliderightsmall",(MethodInfo *)0x0);
        if (bVar1) {
          if (go != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (go,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            pMVar7 = extraout_RDX_01;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
              pMVar7 = extraout_RDX_02;
            }
            fVar10 = -16.0;
            fVar9 = 0.0;
            goto label_05329339;
          }
        }
        else {
          bVar1 = System_String__Contains(pSVar3,"slideleft",(MethodInfo *)0x0);
          if (bVar1) {
            if (go != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                 (go,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              pMVar7 = extraout_RDX_03;
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                pMVar7 = extraout_RDX_04;
              }
              fVar10 = 48.0;
              fVar9 = 0.0;
              goto label_05329339;
            }
          }
          else {
            bVar1 = System_String__Contains(pSVar3,"slideright",(MethodInfo *)0x0);
            if (bVar1) {
              if (go != (UnityEngine_GameObject_o *)0x0) {
                pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                   (go,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                pMVar7 = extraout_RDX_05;
                if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                  pMVar7 = extraout_RDX_06;
                }
                fVar10 = -48.0;
                fVar9 = 0.0;
                goto label_05329339;
              }
            }
            else {
              bVar1 = System_String__Contains(pSVar3,"slidedown",(MethodInfo *)0x0);
              if (bVar1) {
                if (go != (UnityEngine_GameObject_o *)0x0) {
                  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                     (go,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  pMVar7 = extraout_RDX_07;
                  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0
                     ) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                    pMVar7 = extraout_RDX_08;
                  }
                  fVar10 = 0.0;
                  fVar9 = 20.0;
                  goto label_05329339;
                }
              }
              else {
                bVar1 = System_String__Contains(pSVar3,"slide",(MethodInfo *)0x0);
                if (bVar1) {
                  if (go != (UnityEngine_GameObject_o *)0x0) {
                    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                       (go,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    pMVar7 = extraout_RDX_09;
                    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor ==
                        0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                      pMVar7 = extraout_RDX_10;
                    }
                    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide(pUVar5,local_2c,enter,pMVar7);
                    return pDVar4;
                  }
                }
                else {
                  pMVar7 = (MethodInfo *)"fade";
                  bVar1 = System_String__Contains(pSVar3,"fade",(MethodInfo *)0x0);
                  if (bVar1) {
                    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor ==
                        0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                    }
                    pUVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar7);
                    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(pUVar6,local_2c,enter,method_00);
                    return pDVar4;
                  }
                  bVar1 = System_String__Contains(pSVar3,"balloon",(MethodInfo *)0x0);
                  if (bVar1) {
                    if (go != (UnityEngine_GameObject_o *)0x0) {
                      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                         (go,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                      pMVar7 = extraout_RDX_11;
                      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor
                          == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                        pMVar7 = extraout_RDX_12;
                      }
                      pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon
                                         (pUVar5,local_2c,enter,pMVar7);
                      return pDVar4;
                    }
                  }
                  else {
                    System_String__Contains(pSVar3,"pop",(MethodInfo *)0x0);
                    if (go != (UnityEngine_GameObject_o *)0x0) {
                      pMVar7 = (MethodInfo *)0x0;
                      target = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor
                          == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
                      }
                      pUVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar7);
                      pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop
                                         (target,pUVar6,local_2c,enter,method);
                      return pDVar4;
                    }
                  }
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


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Balloon
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x53299e0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Balloon
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 uVar4;
  bool bVar5;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  UnityEngine_Vector3_StaticFields *pUVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar8;
  DG_Tweening_Tween_o *pDVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754281d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_0754281d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
label_05329d45:
    ThrowNullReferenceException();
  }
  pMVar10 = (MethodInfo *)0x0;
  go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar10);
  UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar6->zeroVector).fields.x;
  uVar3 = (pUVar6->zeroVector).fields.y;
  fVar11 = UVar12.fields.y - (float)uVar3;
  uVar2._0_4_ = UVar12.fields.z - (pUVar6->zeroVector).fields.z;
  uVar2._4_4_ = UVar12.fields.x - (float)uVar1;
  if (9.9999994e-11 <= fVar11 * fVar11 + uVar2._4_4_ * uVar2._4_4_ + (float)uVar2 * (float)uVar2) {
    UVar12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    fVar11 = UVar12.fields.z;
    uVar2._0_4_ = UVar12.fields.x;
    uVar2._4_4_ = UVar12.fields.y;
    uVar4 = UVar12.fields._0_8_;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    uVar2._0_4_ = (pUVar6->oneVector).fields.x;
    uVar2._4_4_ = (pUVar6->oneVector).fields.y;
    fVar11 = (pUVar6->oneVector).fields.z;
    uVar4 = uVar2;
  }
  if (enter) {
    UVar12.fields.x = (float)uVar2 * (float)0x3f570a3d;
    UVar12.fields.y = uVar2._4_4_ * (float)0x3f570a3d;
    UVar12.fields.z = fVar11 * 0.84;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,UVar12,(MethodInfo *)0x0);
    if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto label_05329d45;
    UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
    if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
    }
    pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    endValue_00.fields.z = fVar11;
    endValue_00.fields.x = (float)(int)uVar4;
    endValue_00.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
    pDVar8 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)rect,endValue_00,duration,(MethodInfo *)0x0);
    pDVar9 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object__36b0200
                       ((Il2CppObject *)pDVar8,0x1b,1.04,
                        (MethodInfo_36B0200 *)
                        MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
                       );
    pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      pMVar10 = extraout_RDX_02;
    }
    fVar11 = duration * 0.8;
    bVar5 = true;
  }
  else {
    if ((((Il2CppClass *)TypeInfo_DG_Tweening_DOTween)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
    }
    pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    local_38 = (float)uVar4;
    fStack_34 = (float)((ulong)uVar4 >> 0x20);
    endValue.fields.x = local_38 * (float)0x3f666666;
    endValue.fields.y = fStack_34 * (float)0x3f666666;
    endValue.fields.z = fVar11 * 0.9;
    pDVar8 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)rect,endValue,duration,(MethodInfo *)0x0);
    pDVar9 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object_
                       ((Il2CppObject *)pDVar8,8,
                        (MethodInfo_36B0160 *)
                        MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                       );
    pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      pMVar10 = extraout_RDX_00;
    }
    fVar11 = duration * 0.75;
    bVar5 = false;
  }
  pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,fVar11,bVar5,pMVar10);
  pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
  pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar7,true,
                      (MethodInfo_36B08F0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence)
  ;
  return (DG_Tweening_Tween_o *)pDVar7;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Pop
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop (UnityEngine_Transform_o* target, UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x5329d50

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Pop
          (UnityEngine_Transform_o *target,UnityEngine_CanvasGroup_o *group,float duration,bool enter,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar7;
  DG_Tweening_Tween_o *pDVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  bool enter_00;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o endValue_00;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754281e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_0754281e = '\x01';
  }
  if (target == (UnityEngine_Transform_o *)0x0) {
label_0532a04c:
    ThrowNullReferenceException();
  }
  UVar10 = UnityEngine_Transform__get_localScale(target,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar3 = (pUVar5->zeroVector).fields.y;
  fVar9 = UVar10.fields.y - (float)uVar3;
  uVar2._0_4_ = UVar10.fields.z - (pUVar5->zeroVector).fields.z;
  uVar2._4_4_ = UVar10.fields.x - (float)uVar1;
  if (9.9999994e-11 <= fVar9 * fVar9 + uVar2._4_4_ * uVar2._4_4_ + (float)uVar2 * (float)uVar2) {
    UVar10 = UnityEngine_Transform__get_localScale(target,(MethodInfo *)0x0);
    fVar9 = UVar10.fields.z;
    uVar2._0_4_ = UVar10.fields.x;
    uVar2._4_4_ = UVar10.fields.y;
    uVar4 = UVar10.fields._0_8_;
  }
  else {
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    uVar2._0_4_ = (pUVar5->oneVector).fields.x;
    uVar2._4_4_ = (pUVar5->oneVector).fields.y;
    fVar9 = (pUVar5->oneVector).fields.z;
    uVar4 = uVar2;
  }
  if (enter) {
    UVar10.fields.x = (float)uVar2 * 0.86;
    UVar10.fields.y = uVar2._4_4_ * 0.86;
    UVar10.fields.z = fVar9 * 0.86;
    UnityEngine_Transform__set_localScale(target,UVar10,(MethodInfo *)0x0);
    if (group == (UnityEngine_CanvasGroup_o *)0x0) goto label_0532a04c;
    UnityEngine_CanvasGroup__set_alpha(group,0.0,(MethodInfo *)0x0);
    if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
    }
    pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    endValue_00.fields.z = fVar9;
    endValue_00.fields.x = (float)(int)uVar4;
    endValue_00.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
    pDVar7 = DG_Tweening_ShortcutExtensions__DOScale(target,endValue_00,duration,(MethodInfo *)0x0);
    pDVar8 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object__36b0200
                       ((Il2CppObject *)pDVar7,0x1b,1.12,
                        (MethodInfo_36B0200 *)
                        MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions_71b4648
                       );
    pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar8,(MethodInfo *)0x0);
    method_00 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      method_00 = extraout_RDX_02;
    }
    enter_00 = true;
  }
  else {
    if ((((Il2CppClass *)TypeInfo_DG_Tweening_DOTween)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
    }
    pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    fStack_38 = (float)uVar4;
    fStack_34 = (float)((ulong)uVar4 >> 0x20);
    endValue.fields.x = fStack_38 * 0.96;
    endValue.fields.y = fStack_34 * 0.96;
    endValue.fields.z = fVar9 * 0.96;
    pDVar7 = DG_Tweening_ShortcutExtensions__DOScale(target,endValue,duration,(MethodInfo *)0x0);
    pDVar8 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase_object_
                       ((Il2CppObject *)pDVar7,8,
                        (MethodInfo_36B0160 *)
                        MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                       );
    pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar8,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      method_00 = extraout_RDX_00;
    }
    enter_00 = false;
  }
  pDVar8 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(group,duration * 0.75,enter_00,method_00);
  pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar8,(MethodInfo *)0x0);
  pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar6,true,
                      (MethodInfo_36B08F0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence)
  ;
  return (DG_Tweening_Tween_o *)pDVar6;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Fade
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade (UnityEngine_CanvasGroup_o* group, float duration, bool enter, const MethodInfo* method);
// 0x53281e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5328286: jmp 0x5328341

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade
          (UnityEngine_CanvasGroup_o *group,float duration,bool enter,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *pUVar1;
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *__this;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar2;
  float fVar3;
  float to;
  
  if (Il2CppMethodInitialized_0754281f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0_Fade_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0);
    Il2CppMethodInitialized_0754281f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass23_0_o *)0x0) {
    (__this->fields).group = group;
    Il2CppCodeGenWriteBarrier(&(__this->fields).group);
    pUVar1 = (__this->fields).group;
    if (enter) {
      fVar3 = 0.0;
      if (pUVar1 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05328341;
    }
    else {
      if (pUVar1 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05328341;
      fVar3 = UnityEngine_CanvasGroup__get_alpha(pUVar1,(MethodInfo *)0x0);
    }
    UnityEngine_CanvasGroup__set_alpha(pUVar1,fVar3,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).group;
    if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar3 = UnityEngine_CanvasGroup__get_alpha(pUVar1,(MethodInfo *)0x0);
      if (enter) {
        to = 1.0;
      }
      else {
        to = 0.0;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0_Fade_b__0,
                 (MethodInfo_4293C90 *)0x0);
      pDVar2 = DG_Tweening_DOVirtual__Float(fVar3,to,duration,__this_00,(MethodInfo *)0x0);
      pDVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar2,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      return (DG_Tweening_Tween_o *)pDVar2;
    }
  }
label_05328341:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Slide
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide (UnityEngine_RectTransform_o* rect, float duration, bool enter, const MethodInfo* method);
// 0x5329940

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__Slide
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542820 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  method_00 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    method_00 = extraout_RDX_00;
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
                     (rect,duration,enter,(UnityEngine_Vector2_o)0xc1a0000000000000,method_00);
  return pDVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideWithOffset
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset (UnityEngine_RectTransform_o* rect, float duration, bool enter, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x53296e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5329872: jmp 0x53298a0

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__SlideWithOffset
          (UnityEngine_RectTransform_o *rect,float duration,bool enter,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields start;
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *go;
  UnityEngine_CanvasGroup_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  DG_Tweening_Sequence_o *pDVar3;
  DG_Tweening_Tween_o *pDVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  int32_t ease;
  
  if (Il2CppMethodInitialized_07542821 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_07542821 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (rect == (UnityEngine_RectTransform_o *)0x0) goto label_05329930;
    pMVar5 = (MethodInfo *)0x0;
    go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    __this = Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(go,pMVar5);
    __this_00 = Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(rect,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (enter) {
        if ((__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) ||
           (Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                      (__this_00,offset,(MethodInfo *)0x0), __this == (UnityEngine_CanvasGroup_o *)0x0)) {
label_05329930:
          ThrowNullReferenceException();
        }
        UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
        start = (__this_00->fields)._motionOffset.fields;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        offset.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        ease = 9;
        uVar1 = (TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_05329930;
        start = (__this_00->fields)._motionOffset.fields;
        ease = 8;
        uVar1 = (TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pMVar5 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
        pMVar5 = extraout_RDX_00;
      }
      pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
                         (__this_00,(UnityEngine_Vector2_o)start,offset,duration,ease,pMVar5);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar4,(MethodInfo *)0x0);
      pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__Fade(__this,duration,enter,method_00);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__Join(pDVar3,pDVar4,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar3,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
      return (DG_Tweening_Tween_o *)pDVar3;
    }
  }
  return (DG_Tweening_Tween_o *)0x0;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOffsetTween
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* layoutOffset, UnityEngine_Vector2_o start, UnityEngine_Vector2_o target, float duration, int32_t ease, const MethodInfo* method);
// 0x532a070

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOffsetTween
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *layoutOffset,UnityEngine_Vector2_o start,
          UnityEngine_Vector2_o target,float duration,int32_t ease,MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *__this;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar1;
  DG_Tweening_TweenCallback_o *__this_01;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542822 == '\0') {
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
    Il2CppMethodInitialized_07542822 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Tweening_GisketchMotion___c__DisplayClass26_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).layoutOffset = layoutOffset;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layoutOffset);
  local_38 = start.fields.x;
  fStack_34 = start.fields.y;
  (__this->fields).start.fields.x = local_38;
  (__this->fields).start.fields.y = fStack_34;
  (__this->fields).target.fields.x = target.fields.x;
  (__this->fields).target.fields.y = target.fields.y;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
  DG_Tweening_TweenCallback_float____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__0,
             (MethodInfo_4293C90 *)0x0);
  pDVar1 = DG_Tweening_DOVirtual__Float(0.0,1.0,duration,__this_00,(MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                     ((Il2CppObject *)pDVar1,ease,
                      (MethodInfo_36B0160 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
  DG_Tweening_TweenCallback___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__1,
             (MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                     ((Il2CppObject *)pDVar1,__this_01,
                      (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener)
  ;
  pDVar1 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar1,true,
                      (MethodInfo_36B08F0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
  return (DG_Tweening_Tween_o *)pDVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$EnsureCanvasGroup
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5327d20

UnityEngine_CanvasGroup_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__EnsureCanvasGroup(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *pUVar2;
  
  if (Il2CppMethodInitialized_07542823 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542823 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return pUVar2;
  }
  pUVar2 = UnityEngine_GameObject__AddComponent_object_
                     (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
  return pUVar2;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetTargetToRest
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, const MethodInfo* method);
// 0x5328d10

void Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetTargetToRest
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *x;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  if (Il2CppMethodInitialized_07542824 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542824 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (target.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (target.fields.GameObject,
                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_RectTransform_o *)0x0) goto label_05328ed9;
      __this = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x,
                          (MethodInfo_34B0830 *)
                          MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      if (__this == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) goto label_05328ed9;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
                (__this,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    }
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (target.fields.GameObject,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05328ed9;
      UnityEngine_CanvasGroup__set_alpha(__this_00,target.fields.RestAlpha,(MethodInfo *)0x0);
    }
    __this_01 = UnityEngine_GameObject__get_transform(target.fields.GameObject,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale(__this_01,target.fields.RestScale,(MethodInfo *)0x0);
      return;
    }
  }
label_05328ed9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$Delay
// il2cpp: float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, int32_t index, const MethodInfo* method);
// 0x53296c0

float Gisketch_Aottg2UI_Tweening_GisketchMotion__Delay
                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,int32_t index,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return 0.0;
  }
  fVar1 = (motion->fields).stagger;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  return (float)index * fVar2 + (motion->fields).delay;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$NextGroupIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex (System_Collections_Generic_Dictionary_string__int__o* groupIndexes, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x5329600

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__NextGroupIndex
                  (System_Collections_Generic_Dictionary_string__int__o *groupIndexes,
                  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  System_String_o *key;
  bool bVar1;
  uint in_EAX;
  System_String_o **ppSVar2;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07542825 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    Il2CppMethodInitialized_07542825 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if ((motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty((motion->fields).group,(MethodInfo *)0x0), bVar1)) {
    ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    ppSVar2 = &(motion->fields).group;
  }
  if (groupIndexes == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    ThrowNullReferenceException();
  }
  key = *ppSVar2;
  System_Collections_Generic_Dictionary_object__int___TryGetValue
            ((System_Collections_Generic_Dictionary_object__int__o *)groupIndexes,(Il2CppObject *)key,
             (int32_t *)((long)&uStack_18 + 4),
             (MethodInfo_4A9F630 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_TryGetValue);
  System_Collections_Generic_Dictionary_object__int___set_Item
            ((System_Collections_Generic_Dictionary_object__int__o *)groupIndexes,(Il2CppObject *)key,
             uStack_18._4_4_ + 1,
             (MethodInfo_4A9D760 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
  return uStack_18._4_4_;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionFor
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, bool enter, bool explicitExitOnly, const MethodInfo* method);
// 0x53295e0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionFor
          (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,bool enter,bool explicitExitOnly,
          MethodInfo *method)

{
  undefined3 in_register_00000039;
  
  if ((CONCAT31(in_register_00000039,enter) != 0) ||
     ((target.fields.Exit == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 && (!explicitExitOnly)))
     ) {
    target.fields.Exit = target.fields.Enter;
  }
  return target.fields.Exit;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasExplicitExit
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit (System_Collections_Generic_List_GisketchMotionTarget__o* targets, const MethodInfo* method);
// 0x53294f0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5329547: lea r12, [rip + 0x1f6b33a]  ; MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item
// asm:   0x532954e: mov r15, rsp
// asm:   0x5329551: lea r13, [rip + 0x1f4f288]  ; TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion
// asm:   0x5329558: jmp 0x5329568
// asm:   0x532958b: test rbp, rbp
// asm:   0x532958e: jne 0x53295aa
// asm:   0x5329590: jmp 0x5329560

bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasExplicitExit
               (System_Collections_Generic_List_GisketchMotionTarget__o *targets,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  bool bVar2;
  int index;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o GStack_58;
  
  if (Il2CppMethodInitialized_07542826 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
    Il2CppMethodInitialized_07542826 = '\x01';
  }
  if (targets == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
    ThrowNullReferenceException();
  }
  index = 0;
  if (0 < (targets->fields)._size) {
    do {
      System_Collections_Generic_List_GisketchMotionTarget___get_Item
                (&GStack_58,targets,index,
                 (MethodInfo_39028C0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_get_Item);
      pGVar1 = GStack_58.fields.Exit;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) &&
         (bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).preset,(MethodInfo *)0x0), !bVar2)) {
        index = 1;
        goto label_053295bf;
      }
      index = index + 1;
    } while (index < (targets->fields)._size);
    index = 0;
  }
label_053295bf:
  return SUB41(index,0);
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x532a220

bool Gisketch_Aottg2UI_Tweening_GisketchMotion__HasMotion
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

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
// 0x532a240

int32_t Gisketch_Aottg2UI_Tweening_GisketchMotion__MotionOrder
                  (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,bool enter,bool explicitExitOnly,
                  MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07542827 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pGVar2 = target.fields.Enter;
  if (explicitExitOnly) {
    pGVar2 = target.fields.Exit;
  }
  if (target.fields.Exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    pGVar2 = target.fields.Exit;
  }
  if (enter) {
    pGVar2 = target.fields.Enter;
  }
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (pGVar2->fields).order;
  }
  return iVar1;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotion$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor (const MethodInfo* method);
// 0x532a2c0

void Gisketch_Aottg2UI_Tweening_GisketchMotion___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Tweening_GisketchMotion_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07542828 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07542828 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields;
  pGVar1->Enabled = true;
  pGVar1->DurationScale = 1.0;
  return;
}


