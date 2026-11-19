// Type: Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateHierarchyTransition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x5e96b80

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass11_0$$<AddOuterCollapse>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___AddOuterCollapse_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o* __this, float scale, const MethodInfo* method);
// 0x5e96ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e96d2e: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___AddOuterCollapse_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o *__this,
               float scale,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector3_array *pUVar3;
  UnityEngine_Transform_o *__this_00;
  ulong uVar4;
  long lVar5;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  pUVar2 = (__this->fields).tile;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
label_05e96d9d:
    ThrowNullReferenceException();
  }
  value.fields.y = (__this->fields).tileScale.fields.y * scale;
  value.fields.x = (__this->fields).tileScale.fields.x;
  value.fields.z = (__this->fields).tileScale.fields.z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value,(MethodInfo *)0x0);
  if (0 < (__this->fields).childCount) {
    lVar5 = 0x28;
    uVar4 = 0;
    do {
      pUVar2 = (__this->fields).tile;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05e96d9d;
      __this_00 = UnityEngine_Transform__GetChild
                            ((UnityEngine_Transform_o *)pUVar2,(int32_t)uVar4,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).childScales;
      if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_05e96d9d;
      if ((uint)pUVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05e96d9d;
      uVar1 = *(undefined8 *)((long)pUVar3->m_Items + lVar5 + -0x28);
      value_00.fields.y = (float)((ulong)uVar1 >> 0x20) / scale;
      value_00.fields.x = (float)(int)uVar1;
      value_00.fields.z = *(float *)((long)pUVar3->m_Items + lVar5 + -0x20);
      UnityEngine_Transform__set_localScale(__this_00,value_00,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((long)uVar4 < (long)(__this->fields).childCount);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x5e96cc0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__0
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x5e96db0

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__0
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  float in_XMM1_Db;
  
  pUVar1 = (__this->fields).image;
  if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._22_get_color.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
  return in_XMM1_Db;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, float value, const MethodInfo* method);
// 0x5e96de0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Color_o UVar2;
  
  pUVar1 = (__this->fields).image;
  if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2.fields.a = value;
  UVar2.fields.b = 0.09;
  UVar2.fields.r = 0.09;
  UVar2.fields.g = 0.09;
  (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
            (pUVar1,UVar2,(pUVar1->klass->vtable)._23_set_color.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__2
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x5e96e20

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__2
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  float in_XMM1_Db;
  
  pUVar1 = (__this->fields).source;
  if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._22_get_color.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
  return in_XMM1_Db;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, float value, const MethodInfo* method);
// 0x5e96e50

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  UnityEngine_Color_o UVar5;
  float fStack_44;
  float fStack_38;
  
  pUVar1 = (__this->fields).source;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    UVar3 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    pUVar2 = (__this->fields).source;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      UVar4 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
      pUVar2 = (__this->fields).source;
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        UVar5 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                          (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
        fStack_38 = UVar3.fields.r;
        fStack_44 = UVar4.fields.g;
        UVar3.fields.a = value;
        UVar3.fields.b = UVar5.fields.b;
        UVar3.fields.g = fStack_44;
        UVar3.fields.r = fStack_38;
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (pUVar1,UVar3,(pUVar1->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5e96cd0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__0
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5e96f00

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__0
          (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)
          UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5e96f20

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
               UnityEngine_Vector3_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__2
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5e96f40

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__2
          (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)
          UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5e96f60

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
               UnityEngine_Vector3_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__4
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5e96f80

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__4
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
                MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).blur;
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x5e96fa0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
               float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  
  __this_00 = (__this->fields).blur;
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5e96fc0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_075488c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488c7 = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields).smear;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x5e94780

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___Play_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x5e97020

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___Play_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Transform_o *x;
  System_Action_o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  DG_Tweening_TweenCallback_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  UnityEngine_Vector3_Fields UVar5;
  
  if (Il2CppMethodInitialized_075488c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_3_Play_b__13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_3);
    Il2CppMethodInitialized_075488c8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_3
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o *)0x0) {
label_05e971ca:
    ThrowNullReferenceException();
  }
  (__this_00->fields).CS___8__locals1 = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).CS___8__locals1);
  pUVar1 = (__this->fields).selected;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    x = (__this->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar1 = (__this->fields).selected;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = (UnityEngine_Vector3_Fields)
                UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
        (__this_00->fields).exitPosition.fields = UVar5;
        pUVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreatePreservedTile
                           ((__this->fields).selected,(__this->fields).root,method_00);
        (__this_00->fields).preservedTile = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).preservedTile);
        pSVar2 = (__this->fields).completed;
        method_01 = extraout_RDX;
        if (pSVar2 != (System_Action_o *)0x0) {
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
          method_01 = extraout_RDX_00;
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__HideRebuiltTarget
                  ((__this->fields).root,(__this->fields).targetId,method_01);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_3_Play_b__13
                   ,(MethodInfo *)0x0);
        DG_Tweening_DOVirtual__DelayedCall(0.03,__this_01,true,(MethodInfo *)0x0);
        return;
      }
      goto label_05e971ca;
    }
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing = false;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x5e94e60

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__5
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x5e971e0

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__5
          (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).tile;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)
          UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5e97200

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this,
               UnityEngine_Vector3_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields).tile;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__1
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x5e97220

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__1
          (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).tile;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)
          UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5e97240

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this,
               UnityEngine_Vector3_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields).tile;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__3
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x5e97260

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__3
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, float value, const MethodInfo* method);
// 0x5e97280

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x5e94e70

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__7
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x5e972a0

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__7
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).label;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, const MethodInfo* method);
// 0x5e972c0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__8
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).label;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__9
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__9 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x5e972e0

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__9
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).shearVisual;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__10 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, const MethodInfo* method);
// 0x5e97300

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__10
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).shearVisual;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__11
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__11 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x5e97320

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__11
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
                MethodInfo *method)

{
  return (__this->fields).startBlur;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__12
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__12 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, const MethodInfo* method);
// 0x5e97330

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__12
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
               float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  
  __this_00 = (__this->fields).blur;
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_3$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o* __this, const MethodInfo* method);
// 0x5e971d0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_3$$<Play>b__13
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___Play_b__13 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o* __this, const MethodInfo* method);
// 0x5e97350

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___Play_b__13
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o *__this,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(__this->fields).CS___8__locals1;
  if (method_00 == (MethodInfo *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__ContinueIntoCompactButton
            ((UnityEngine_Transform_o *)method_00->name,(System_String_o *)method_00->return_type,
             (UnityEngine_Vector3_o)(__this->fields).exitPosition.fields,(__this->fields).preservedTile,
             method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5e96580

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__0
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5e97380

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__0
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, float value, const MethodInfo* method);
// 0x5e973a0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__2
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5e973c0

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__2
          (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).preservedRect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector3_Fields)
          UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5e973e0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               UnityEngine_Vector3_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields).preservedRect;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__4
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5e97400

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__4
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).preservedGroup;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, float value, const MethodInfo* method);
// 0x5e97420

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).preservedGroup;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, float value, const MethodInfo* method);
// 0x5e97440

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__8
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  
  __this_00 = (__this->fields).preservedBlur;
  if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5e97460

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_CanvasGroup_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075488c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488c9 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing = false;
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).preservedTile;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).preservedTile;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).group;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields).group;
    if (pUVar2 == (UnityEngine_CanvasGroup_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar2,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o* __this, const MethodInfo* method);
// 0x5e96740

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_1$$<ContinueIntoCompactButton>b__7
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ContinueIntoCompactButton_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o* __this, const MethodInfo* method);
// 0x5e97540

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ContinueIntoCompactButton_b__7
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o *__this,
                MethodInfo *method)

{
  return (__this->fields).startBlur;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$Play
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__Play (UnityEngine_GameObject_o* source, System_String_o* targetId, System_Action_o* completed, const MethodInfo* method);
// 0x5e93900
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e93edc: jmp 0x5e93eee
// asm:   0x5e93fe0: jmp 0x5e93feb

bool Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__Play
               (UnityEngine_GameObject_o *source,System_String_o *targetId,System_Action_o *completed,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_Fields *targetAddress;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **targetAddress_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  bool bVar7;
  int32_t iVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *__this;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  DG_Tweening_Sequence_o *pDVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this_03;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar14;
  UnityEngine_CanvasGroup_o *pUVar15;
  DG_Tweening_Core_DOGetter_Vector3__o *pDVar16;
  DG_Tweening_Core_DOSetter_Vector3__o *pDVar17;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar18;
  DG_Tweening_Tween_o *pDVar19;
  DG_Tweening_Core_DOGetter_float__o *pDVar20;
  DG_Tweening_Core_DOSetter_float__o *pDVar21;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar22;
  UnityEngine_GameObject_o *__this_04;
  DG_Tweening_TweenCallback_o *__this_05;
  UnityEngine_RectTransform_o *pUVar23;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar24;
  UnityEngine_CanvasGroup_o **ppUVar25;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_Fields *targetAddress_01;
  int index;
  float rise;
  float fVar26;
  UnityEngine_Rect_o UVar27;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o endValue_00;
  float fStack_84;
  
  if (Il2CppMethodInitialized_075488ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_0_Play_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2);
    il2cpp_codegen_initialize_runtime_metadata(&"-tile");
    il2cpp_codegen_initialize_runtime_metadata(&"-fade");
    Il2CppMethodInitialized_075488ba = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *)0x0) {
label_05e9476c:
    ThrowNullReferenceException();
  }
  (__this->fields).completed = completed;
  Il2CppCodeGenWriteBarrier(&(__this->fields).completed);
  (__this->fields).targetId = targetId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).targetId);
  bVar6 = true;
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing == false) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar9 = (UnityEngine_Transform_o *)0x0;
    pMVar24 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (source == (UnityEngine_GameObject_o *)0x0) goto label_05e9476c;
      pMVar24 = (MethodInfo *)0x0;
      pUVar9 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    }
    pUVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindTile(pUVar9,pMVar24);
    targetAddress = &__this->fields;
    (__this->fields).selected = pUVar10;
    Il2CppCodeGenWriteBarrier(&targetAddress->selected);
    pUVar10 = (__this->fields).selected;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = false;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      if (targetAddress->selected != (UnityEngine_RectTransform_o *)0x0) {
        pUVar9 = UnityEngine_Transform__get_parent
                           ((UnityEngine_Transform_o *)targetAddress->selected,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          return false;
        }
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing = true;
        if (targetAddress->selected != (UnityEngine_RectTransform_o *)0x0) {
          pUVar9 = UnityEngine_Transform__get_root
                             ((UnityEngine_Transform_o *)targetAddress->selected,(MethodInfo *)0x0);
          (__this->fields).root = pUVar9;
          Il2CppCodeGenWriteBarrier(&(__this->fields).root);
          pUVar10 = (__this->fields).selected;
          if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
            UVar27 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
            }
            pDVar11 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pMVar24 = (MethodInfo *)0x1;
            pDVar11 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                ((Il2CppObject *)pDVar11,true,
                                 (MethodInfo_36B08F0 *)
                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
            Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__StartBackgroundBlend
                      (targetAddress->selected,pMVar24);
            if ((targetAddress->selected != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar9 = UnityEngine_Transform__get_parent
                                   ((UnityEngine_Transform_o *)targetAddress->selected,(MethodInfo *)0x0),
               pUVar9 != (UnityEngine_Transform_o *)0x0)) {
              pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
              if (targetAddress->selected != (UnityEngine_RectTransform_o *)0x0) {
                pSVar13 = UnityEngine_Object__get_name
                                    ((UnityEngine_Object_o *)targetAddress->selected,(MethodInfo *)0x0);
                pSVar13 = System_String__Concat_52f0320(pSVar13,"-fade",(MethodInfo *)0x0);
                bVar6 = System_String__op_Equality(pSVar12,pSVar13,(MethodInfo *)0x0);
                if ((!bVar6) ||
                   (pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0),
                   pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                  iVar8 = UnityEngine_Transform__get_childCount(pUVar9,(MethodInfo *)0x0);
                  if (0 < iVar8) {
                    fStack_84 = UVar27.fields.m_Height;
                    rise = 84.0;
                    if (84.0 <= fStack_84 * 0.42) {
                      rise = fStack_84 * 0.42;
                    }
                    index = 0;
                    do {
                      __this_00 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1
                                            );
                      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
                      pUVar10 = (UnityEngine_RectTransform_o *)
                                UnityEngine_Transform__GetChild(pUVar9,index,(MethodInfo *)0x0);
                      if (__this_00 ==
                          (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *)
                          0x0) goto label_05e9476c;
                      if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) {
                        (__this_00->fields).tile = (UnityEngine_RectTransform_o *)0x0;
                      }
                      else {
                        pUVar23 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar10->klass == TypeInfo_UnityEngine_RectTransform) {
                          pUVar23 = pUVar10;
                        }
                        (__this_00->fields).tile = pUVar23;
                      }
                      targetAddress_01 = &__this_00->fields;
                      Il2CppCodeGenWriteBarrier(&targetAddress_01->tile);
                      pUVar10 = targetAddress_01->tile;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar6 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar6) {
                        if (targetAddress_01->tile == (UnityEngine_RectTransform_o *)0x0) goto label_05e9476c;
                        iVar8 = UnityEngine_Transform__get_childCount
                                          ((UnityEngine_Transform_o *)targetAddress_01->tile,(MethodInfo *)0x0
                                          );
                        if (iVar8 == 1) {
                          if (targetAddress_01->tile == (UnityEngine_RectTransform_o *)0x0) goto label_05e9476c;
                          pSVar12 = UnityEngine_Object__get_name
                                              ((UnityEngine_Object_o *)targetAddress_01->tile,
                                               (MethodInfo *)0x0);
                          if ((targetAddress_01->tile == (UnityEngine_RectTransform_o *)0x0) ||
                             (__this_01 = UnityEngine_Transform__GetChild
                                                    ((UnityEngine_Transform_o *)targetAddress_01->tile,0,
                                                     (MethodInfo *)0x0),
                             __this_01 == (UnityEngine_Transform_o *)0x0)) goto label_05e9476c;
                          pSVar13 = UnityEngine_Object__get_name
                                              ((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
                          pSVar13 = System_String__Concat_52f0320
                                              (pSVar13,"-fade",(MethodInfo *)0x0);
                          bVar6 = System_String__op_Equality(pSVar12,pSVar13,(MethodInfo *)0x0);
                          if (bVar6) {
                            if (targetAddress_01->tile == (UnityEngine_RectTransform_o *)0x0)
                            goto label_05e9476c;
                            pUVar10 = (UnityEngine_RectTransform_o *)
                                      UnityEngine_Transform__GetChild
                                                ((UnityEngine_Transform_o *)targetAddress_01->tile,0,
                                                 (MethodInfo *)0x0);
                            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) {
                              targetAddress_01->tile = (UnityEngine_RectTransform_o *)0x0;
                            }
                            else {
                              pUVar23 = (UnityEngine_RectTransform_o *)0x0;
                              if (pUVar10->klass == TypeInfo_UnityEngine_RectTransform) {
                                pUVar23 = pUVar10;
                              }
                              targetAddress_01->tile = pUVar23;
                            }
                            Il2CppCodeGenWriteBarrier(&targetAddress_01->tile);
                          }
                        }
                      }
                      pUVar10 = targetAddress_01->tile;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar6 = UnityEngine_Object__op_Equality
                                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (!bVar6) {
                        if (((targetAddress_01->tile == (UnityEngine_RectTransform_o *)0x0) ||
                            (__this_02 = (UnityEngine_Object_o *)
                                         UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)targetAddress_01->tile,
                                                    (MethodInfo *)0x0),
                            __this_02 == (UnityEngine_Object_o *)0x0)) ||
                           (pSVar12 = UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0),
                           pSVar12 == (System_String_o *)0x0)) goto label_05e9476c;
                        bVar6 = System_String__EndsWith(pSVar12,"-tile",(MethodInfo *)0x0);
                        if (bVar6) {
                          pUVar10 = targetAddress_01->tile;
                          pUVar23 = targetAddress->selected;
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar6 = UnityEngine_Object__op_Equality
                                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)pUVar23,
                                             (MethodInfo *)0x0);
                          if (bVar6) {
                            __this_03 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)
                                                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2
                                                  );
                            pMVar24 = (MethodInfo *)0x0;
                            System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
                            pMVar24 = (MethodInfo *)
                                      Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindLabelGroup
                                                (targetAddress_01->tile,pMVar24);
                            if (__this_03 ==
                                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o
                                 *)0x0) goto label_05e9476c;
                            (__this_03->fields).label = (UnityEngine_CanvasGroup_o *)pMVar24;
                            Il2CppCodeGenWriteBarrier(&(__this_03->fields).label);
                            pGVar14 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisualBlur
                                                (targetAddress_01->tile,pMVar24);
                            targetAddress_00 = &(__this_03->fields).blur;
                            (__this_03->fields).blur = pGVar14;
                            Il2CppCodeGenWriteBarrier(targetAddress_00);
                            pUVar15 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreateShearVisual
                                                (targetAddress_01->tile,rise,pDVar11,method_00);
                            ppUVar25 = &(__this_03->fields).shearVisual;
                            (__this_03->fields).shearVisual = pUVar15;
                            Il2CppCodeGenWriteBarrier(ppUVar25);
                            pGVar14 = (__this_03->fields).blur;
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            bVar6 = UnityEngine_Object__op_Inequality
                                              ((UnityEngine_Object_o *)pGVar14,(UnityEngine_Object_o *)0x0,
                                               (MethodInfo *)0x0);
                            fVar26 = 0.0;
                            if (bVar6) {
                              if (*targetAddress_00 ==
                                  (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0)
                              goto label_05e9476c;
                              fVar26 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                                                 (*targetAddress_00,(MethodInfo *)0x0);
                            }
                            (__this_03->fields).startBlur = fVar26;
                            pDVar16 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
                            DG_Tweening_Core_DOGetter_Vector3____ctor
                                      (pDVar16,(Il2CppObject *)__this_00,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__5
                                       ,(MethodInfo_494D500 *)0x0);
                            pDVar17 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
                            DG_Tweening_Core_DOSetter_Vector3____ctor
                                      (pDVar17,(Il2CppObject *)__this_00,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__6
                                       ,(MethodInfo_494E750 *)0x0);
                            pUVar10 = (__this_00->fields).tile;
                            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_05e9476c;
                            UVar28 = UnityEngine_Transform__get_position
                                               ((UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_0753e72c == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                              Il2CppMethodInitialized_0753e72c = '\x01';
                            }
                            pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
                            uVar1 = (pUVar5->upVector).fields.x;
                            uVar3 = (pUVar5->upVector).fields.y;
                            fVar26 = (pUVar5->upVector).fields.z;
                            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                            }
                            endValue_00.fields.x = UVar28.fields.x + (float)uVar1 * rise;
                            endValue_00.fields.y = UVar28.fields.y + (float)uVar3 * rise;
                            endValue_00.fields.z = UVar28.fields.z + fVar26 * rise;
                            pDVar18 = DG_Tweening_DOTween__To_3166ae0
                                                (pDVar16,pDVar17,endValue_00,0.1,(MethodInfo *)0x0);
                            pDVar19 = (DG_Tweening_Tween_o *)
                                      DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                ((Il2CppObject *)pDVar18,10,
                                                 (MethodInfo_36B0160 *)
                                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                                );
                            DG_Tweening_TweenSettingsExtensions__Join(pDVar11,pDVar19,(MethodInfo *)0x0);
                            Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__AddOuterCollapse
                                      (pDVar11,targetAddress_01->tile,method_01);
                            pUVar15 = (__this_03->fields).label;
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            bVar6 = UnityEngine_Object__op_Inequality
                                              ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,
                                               (MethodInfo *)0x0);
                            if (bVar6) {
                              pDVar20 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                              DG_Tweening_Core_DOGetter_float____ctor
                                        (pDVar20,(Il2CppObject *)__this_03,
                                         (intptr_t)
                                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__7
                                         ,(MethodInfo_494D0C0 *)0x0);
                              pDVar21 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                              DG_Tweening_Core_DOSetter_float____ctor
                                        (pDVar21,(Il2CppObject *)__this_03,
                                         (intptr_t)
                                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__8
                                         ,(MethodInfo_494E270 *)0x0);
                              if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween)
                                ;
                              }
                              pDVar22 = DG_Tweening_DOTween__To(pDVar20,pDVar21,0.0,0.025,(MethodInfo *)0x0);
                              pDVar19 = (DG_Tweening_Tween_o *)
                                        DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                  ((Il2CppObject *)pDVar22,6,
                                                   (MethodInfo_36B0160 *)
                                                   MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                                  );
                              DG_Tweening_TweenSettingsExtensions__Join(pDVar11,pDVar19,(MethodInfo *)0x0);
                            }
                            pUVar15 = *ppUVar25;
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            bVar6 = UnityEngine_Object__op_Inequality
                                              ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,
                                               (MethodInfo *)0x0);
                            if (bVar6) {
                              pDVar20 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                              DG_Tweening_Core_DOGetter_float____ctor
                                        (pDVar20,(Il2CppObject *)__this_03,
                                         (intptr_t)
                                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__9
                                         ,(MethodInfo_494D0C0 *)0x0);
                              pDVar21 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                              DG_Tweening_Core_DOSetter_float____ctor
                                        (pDVar21,(Il2CppObject *)__this_03,
                                         (intptr_t)
                                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__10
                                         ,(MethodInfo_494E270 *)0x0);
                              if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween)
                                ;
                              }
                              pDVar22 = DG_Tweening_DOTween__To(pDVar20,pDVar21,0.0,0.1,(MethodInfo *)0x0);
                              pDVar19 = (DG_Tweening_Tween_o *)
                                        DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                  ((Il2CppObject *)pDVar22,5,
                                                   (MethodInfo_36B0160 *)
                                                   MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                                  );
                              DG_Tweening_TweenSettingsExtensions__Join(pDVar11,pDVar19,(MethodInfo *)0x0);
                            }
                            pGVar14 = *targetAddress_00;
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            bVar6 = UnityEngine_Object__op_Inequality
                                              ((UnityEngine_Object_o *)pGVar14,(UnityEngine_Object_o *)0x0,
                                               (MethodInfo *)0x0);
                            if (!bVar6) goto label_05e93e60;
                            pDVar20 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                            DG_Tweening_Core_DOGetter_float____ctor
                                      (pDVar20,(Il2CppObject *)__this_03,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__11
                                       ,(MethodInfo_494D0C0 *)0x0);
                            pDVar21 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                            DG_Tweening_Core_DOSetter_float____ctor
                                      (pDVar21,(Il2CppObject *)__this_03,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__12
                                       ,(MethodInfo_494E270 *)0x0);
                            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                            }
                            pDVar22 = DG_Tweening_DOTween__To
                                                (pDVar20,pDVar21,rise * 0.42,0.1,(MethodInfo *)0x0);
                            pDVar19 = (DG_Tweening_Tween_o *)
                                      DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                ((Il2CppObject *)pDVar22,9,
                                                 (MethodInfo_36B0160 *)
                                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                                );
                          }
                          else {
                            if (targetAddress_01->tile == (UnityEngine_RectTransform_o *)0x0)
                            goto label_05e9476c;
                            pUVar15 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)targetAddress_01->tile,
                                                 (MethodInfo_34B0830 *)
                                                 MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
                            ppUVar25 = &(__this_00->fields).group;
                            (__this_00->fields).group = pUVar15;
                            Il2CppCodeGenWriteBarrier(ppUVar25);
                            pUVar15 = (__this_00->fields).group;
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            bVar6 = UnityEngine_Object__op_Implicit
                                              ((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
                            if (!bVar6) {
                              if ((targetAddress_01->tile == (UnityEngine_RectTransform_o *)0x0) ||
                                 (__this_04 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)targetAddress_01->tile,
                                                         (MethodInfo *)0x0),
                                 __this_04 == (UnityEngine_GameObject_o *)0x0)) goto label_05e9476c;
                              pUVar15 = UnityEngine_GameObject__AddComponent_object_
                                                  (__this_04,
                                                   (MethodInfo_353B6A0 *)
                                                   MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup)
                              ;
                              *ppUVar25 = pUVar15;
                              Il2CppCodeGenWriteBarrier(ppUVar25);
                            }
                            if (*ppUVar25 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05e9476c;
                            UnityEngine_CanvasGroup__set_blocksRaycasts(*ppUVar25,false,(MethodInfo *)0x0);
                            if (*ppUVar25 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05e9476c;
                            UnityEngine_CanvasGroup__set_interactable(*ppUVar25,false,(MethodInfo *)0x0);
                            pDVar16 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
                            DG_Tweening_Core_DOGetter_Vector3____ctor
                                      (pDVar16,(Il2CppObject *)__this_00,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__1
                                       ,(MethodInfo_494D500 *)0x0);
                            pDVar17 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
                            DG_Tweening_Core_DOSetter_Vector3____ctor
                                      (pDVar17,(Il2CppObject *)__this_00,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__2
                                       ,(MethodInfo_494E750 *)0x0);
                            pUVar10 = (__this_00->fields).tile;
                            if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_05e9476c;
                            UVar28 = UnityEngine_Transform__get_position
                                               ((UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_0753e72c == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                              Il2CppMethodInitialized_0753e72c = '\x01';
                            }
                            pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
                            uVar2 = (pUVar5->upVector).fields.x;
                            uVar4 = (pUVar5->upVector).fields.y;
                            fVar26 = (pUVar5->upVector).fields.z;
                            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                            }
                            endValue.fields.x = UVar28.fields.x + (float)uVar2 * rise;
                            endValue.fields.y = UVar28.fields.y + (float)uVar4 * rise;
                            endValue.fields.z = UVar28.fields.z + fVar26 * rise;
                            pDVar18 = DG_Tweening_DOTween__To_3166ae0
                                                (pDVar16,pDVar17,endValue,0.080000006,(MethodInfo *)0x0);
                            pDVar19 = (DG_Tweening_Tween_o *)
                                      DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                ((Il2CppObject *)pDVar18,8,
                                                 (MethodInfo_36B0160 *)
                                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                                );
                            DG_Tweening_TweenSettingsExtensions__Join(pDVar11,pDVar19,(MethodInfo *)0x0);
                            pDVar20 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                            DG_Tweening_Core_DOGetter_float____ctor
                                      (pDVar20,(Il2CppObject *)__this_00,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__3
                                       ,(MethodInfo_494D0C0 *)0x0);
                            pDVar21 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                            DG_Tweening_Core_DOSetter_float____ctor
                                      (pDVar21,(Il2CppObject *)__this_00,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__4
                                       ,(MethodInfo_494E270 *)0x0);
                            pDVar22 = DG_Tweening_DOTween__To
                                                (pDVar20,pDVar21,0.0,0.055000003,(MethodInfo *)0x0);
                            pDVar19 = (DG_Tweening_Tween_o *)
                                      DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                ((Il2CppObject *)pDVar22,6,
                                                 (MethodInfo_36B0160 *)
                                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                                );
                          }
                          DG_Tweening_TweenSettingsExtensions__Join(pDVar11,pDVar19,(MethodInfo *)0x0);
                        }
                      }
label_05e93e60:
                      index = index + 1;
                      iVar8 = UnityEngine_Transform__get_childCount(pUVar9,(MethodInfo *)0x0);
                    } while (index < iVar8);
                  }
                  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
                  DG_Tweening_TweenCallback___ctor
                            (__this_05,(Il2CppObject *)__this,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_0_Play_b__0
                             ,(MethodInfo *)0x0);
                  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                            ((Il2CppObject *)pDVar11,__this_05,
                             (MethodInfo_36AF8A0 *)
                             MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
                  return true;
                }
              }
            }
          }
        }
      }
      goto label_05e9476c;
    }
  }
  return bVar6;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindTile
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindTile (UnityEngine_Transform_o* source, const MethodInfo* method);
// 0x5e94790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e94833: jmp 0x5e94848

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindTile
          (UnityEngine_Transform_o *source,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  UnityEngine_RectTransform_o *pUVar2;
  
  if (Il2CppMethodInitialized_075488bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"-tile");
    Il2CppMethodInitialized_075488bb = '\x01';
  }
  while( true ) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) break;
    if (((UnityEngine_RectTransform_o *)source == (UnityEngine_RectTransform_o *)0x0) ||
       (__this = UnityEngine_Object__get_name((UnityEngine_Object_o *)source,(MethodInfo *)0x0),
       __this == (System_String_o *)0x0)) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__EndsWith(__this,"-tile",(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (UnityEngine_RectTransform_o *)0x0;
      if (((UnityEngine_RectTransform_o *)source)->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar2 = (UnityEngine_RectTransform_o *)source;
      }
      return pUVar2;
    }
    source = UnityEngine_Transform__get_parent(source,(MethodInfo *)0x0);
  }
  return (UnityEngine_RectTransform_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$ContinueIntoCompactButton
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__ContinueIntoCompactButton (UnityEngine_Transform_o* root, System_String_o* targetId, UnityEngine_Vector3_o startPosition, UnityEngine_GameObject_o* preservedTile, const MethodInfo* method);
// 0x5e95be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9656b: jmp 0x5e95e11

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__ContinueIntoCompactButton
               (UnityEngine_Transform_o *root,System_String_o *targetId,UnityEngine_Vector3_o startPosition,
               UnityEngine_GameObject_o *preservedTile,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_Fields *targetAddress_00;
  UnityEngine_CanvasGroup_o **targetAddress_01;
  UnityEngine_RectTransform_o **targetAddress_02;
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Vector2_o value;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_CanvasGroup_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  DG_Tweening_Sequence_o *pDVar6;
  DG_Tweening_Core_DOGetter_float__o *pDVar7;
  DG_Tweening_Core_DOSetter_float__o *pDVar8;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar9;
  DG_Tweening_Tween_o *pDVar10;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar11;
  DG_Tweening_Core_DOGetter_Vector3__o *__this_01;
  DG_Tweening_Core_DOSetter_Vector3__o *__this_02;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o *__this_03;
  DG_Tweening_TweenCallback_o *__this_04;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *pUVar12;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **targetAddress_03;
  float fVar13;
  UnityEngine_Rect_o UVar14;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Vector3_o endValue;
  float fStack_78;
  
  if (Il2CppMethodInitialized_075488bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9288
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9290
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9298
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92a0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92a8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1_ContinueIntoCompact
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1);
    Il2CppMethodInitialized_075488bc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *)0x0)
  goto label_05e96570;
  targetAddress = &(__this->fields).preservedTile;
  (__this->fields).preservedTile = preservedTile;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_RectTransform_o *)0x0;
  if (bVar3) {
    pUVar4 = (UnityEngine_RectTransform_o *)
             Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
                       (root,targetId,method_00);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar12 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar12 = pUVar4;
      }
      goto label_05e95dfe;
    }
    pUVar12 = (UnityEngine_RectTransform_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05e95dfe:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (UnityEngine_Object_o *)*targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (UnityEngine_Object_o *)*targetAddress;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing = false;
    return;
  }
  if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
    endValue = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar12,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar12,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    targetAddress_00 = &__this->fields;
    (__this->fields).group = pUVar5;
    Il2CppCodeGenWriteBarrier(&targetAddress_00->group);
    pUVar5 = (__this->fields).group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
    if (!bVar3) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05e96570;
      pUVar5 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
      targetAddress_00->group = pUVar5;
      Il2CppCodeGenWriteBarrier(&targetAddress_00->group);
    }
    if (targetAddress_00->group != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(targetAddress_00->group,0.0,(MethodInfo *)0x0);
      if (targetAddress_00->group != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts(targetAddress_00->group,false,(MethodInfo *)0x0);
        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
        }
        pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                           ((Il2CppObject *)pDVar6,true,
                            (MethodInfo_36B08F0 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
        pDVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
        DG_Tweening_Core_DOGetter_float____ctor
                  (pDVar7,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact
                   ,(MethodInfo_494D0C0 *)0x0);
        pDVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
        DG_Tweening_Core_DOSetter_float____ctor
                  (pDVar8,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9288
                   ,(MethodInfo_494E270 *)0x0);
        pDVar9 = DG_Tweening_DOTween__To(pDVar7,pDVar8,1.0,0.16,(MethodInfo *)0x0);
        pDVar10 = (DG_Tweening_Tween_o *)
                  DG_Tweening_TweenSettingsExtensions__SetEase_object_
                            ((Il2CppObject *)pDVar9,6,
                             (MethodInfo_36B0160 *)
                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                            );
        pDVar6 = DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar10,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Object_o *)(__this->fields).preservedTile;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pUVar5 = (UnityEngine_CanvasGroup_o *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05e96570;
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (*targetAddress,
                              (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup
                             );
        }
        targetAddress_01 = &(__this->fields).preservedGroup;
        (__this->fields).preservedGroup = pUVar5;
        Il2CppCodeGenWriteBarrier(targetAddress_01);
        pUVar2 = (UnityEngine_Object_o *)(__this->fields).preservedTile;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pUVar4 = (UnityEngine_RectTransform_o *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05e96570;
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (*targetAddress,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        }
        targetAddress_02 = &(__this->fields).preservedRect;
        (__this->fields).preservedRect = pUVar4;
        Il2CppCodeGenWriteBarrier(targetAddress_02);
        pUVar2 = (UnityEngine_Object_o *)(__this->fields).preservedTile;
        if (Il2CppMethodInitialized_075488bf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_075488bf = '\x01';
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pGVar11 = (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0;
        bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          if (pUVar2 == (UnityEngine_Object_o *)0x0) goto label_05e96570;
          pGVar11 = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                              ((UnityEngine_GameObject_o *)pUVar2,true,
                               (MethodInfo_353B9A0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur
                              );
        }
        targetAddress_03 = &(__this->fields).preservedBlur;
        (__this->fields).preservedBlur = pGVar11;
        Il2CppCodeGenWriteBarrier(targetAddress_03);
        pUVar4 = (__this->fields).preservedRect;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (*targetAddress_02 == (UnityEngine_RectTransform_o *)0x0) goto label_05e96570;
          UnityEngine_Transform__set_position
                    ((UnityEngine_Transform_o *)*targetAddress_02,startPosition,(MethodInfo *)0x0);
          pUVar4 = *targetAddress_02;
          UVar14 = UnityEngine_RectTransform__get_rect(pUVar12,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          UVar15 = UnityEngine_RectTransform__get_rect(pUVar12,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_05e96570;
          fStack_78 = UVar14.fields.m_Width;
          value.fields.y = UVar15.fields.m_Height;
          value.fields.x = fStack_78;
          UnityEngine_RectTransform__set_sizeDelta(pUVar4,value,(MethodInfo *)0x0);
          pUVar12 = *targetAddress_02;
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) goto label_05e96570;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)pUVar12,
                     (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
          DG_Tweening_Core_DOGetter_Vector3____ctor
                    (__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9290
                     ,(MethodInfo_494D500 *)0x0);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
          DG_Tweening_Core_DOSetter_Vector3____ctor
                    (__this_02,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9298
                     ,(MethodInfo_494E750 *)0x0);
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          t = DG_Tweening_DOTween__To_3166ae0(__this_01,__this_02,endValue,0.16,(MethodInfo *)0x0);
          pDVar10 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetEase_object_
                              ((Il2CppObject *)t,9,
                               (MethodInfo_36B0160 *)
                               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                              );
          DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar10,(MethodInfo *)0x0);
        }
        pUVar5 = *targetAddress_01;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pDVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
          DG_Tweening_Core_DOGetter_float____ctor
                    (pDVar7,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92a0
                     ,(MethodInfo_494D0C0 *)0x0);
          pDVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
          DG_Tweening_Core_DOSetter_float____ctor
                    (pDVar8,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92a8
                     ,(MethodInfo_494E270 *)0x0);
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          pDVar9 = DG_Tweening_DOTween__To(pDVar7,pDVar8,0.0,0.16,(MethodInfo *)0x0);
          pDVar10 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetEase_object_
                              ((Il2CppObject *)pDVar9,5,
                               (MethodInfo_36B0160 *)
                               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                              );
          DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar10,(MethodInfo *)0x0);
        }
        pGVar11 = *targetAddress_03;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1
                                );
          System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
          if ((*targetAddress_03 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) ||
             (fVar13 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                                 (*targetAddress_03,(MethodInfo *)0x0),
             __this_03 ==
             (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o *)0x0))
          goto label_05e96570;
          (__this_03->fields).startBlur = fVar13;
          pDVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
          DG_Tweening_Core_DOGetter_float____ctor
                    (pDVar7,(Il2CppObject *)__this_03,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1_ContinueIntoCompact
                     ,(MethodInfo_494D0C0 *)0x0);
          pDVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
          DG_Tweening_Core_DOSetter_float____ctor
                    (pDVar8,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92b8
                     ,(MethodInfo_494E270 *)0x0);
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          pDVar9 = DG_Tweening_DOTween__To(pDVar7,pDVar8,0.0,0.16,(MethodInfo *)0x0);
          pDVar10 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetEase_object_
                              ((Il2CppObject *)pDVar9,9,
                               (MethodInfo_36B0160 *)
                               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                              );
          DG_Tweening_TweenSettingsExtensions__Join(pDVar6,pDVar10,(MethodInfo *)0x0);
        }
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  (__this_04,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92b0
                   ,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                  ((Il2CppObject *)pDVar6,__this_04,
                   (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
        return;
      }
    }
  }
label_05e96570:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$HideRebuiltTarget
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__HideRebuiltTarget (UnityEngine_Transform_o* root, System_String_o* targetId, const MethodInfo* method);
// 0x5e96750
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9688d: jmp 0x5e967d5

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__HideRebuiltTarget
               (UnityEngine_Transform_o *root,System_String_o *targetId,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_CanvasGroup_o *__this;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  UnityEngine_Transform_o *x;
  
  if (Il2CppMethodInitialized_075488bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_075488bd = '\x01';
    method = extraout_RDX;
  }
  pUVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName(root,targetId,method);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
    x = (UnityEngine_Transform_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    x = (UnityEngine_Transform_o *)0x0;
    if ((UnityEngine_RectTransform_c *)pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
      x = pUVar3;
    }
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (x != (UnityEngine_Transform_o *)0x0) {
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)x,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (!bVar2) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05e96892;
      __this = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    }
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05e96892:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$CreatePreservedTile
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreatePreservedTile (UnityEngine_RectTransform_o* selected, UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x5e968a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e96b0a: xor ebx, ebx
// asm:   0x5e96b6d: jmp 0x5e96b19

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreatePreservedTile
          (UnityEngine_RectTransform_o *selected,UnityEngine_Transform_o *root,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  bool bVar3;
  UnityEngine_GameObject_o *original;
  UnityEngine_Object_o *__this;
  UnityEngine_Object_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_UI_LayoutElement_o *exists;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_075488be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8c8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"-handoff");
    Il2CppMethodInitialized_075488be = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)selected,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (UnityEngine_GameObject_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (UnityEngine_GameObject_o *)0x0;
  }
  if (selected == (UnityEngine_RectTransform_o *)0x0) goto label_05e96b6f;
  original = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selected,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (UnityEngine_Object_o *)
           UnityEngine_Object__Instantiate_object__35a4490
                     ((Il2CppObject *)original,root,true,
                      (MethodInfo_35A4490 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_71af8c8);
  pUVar4 = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selected,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Object_o *)0x0) goto label_05e96b6f;
  pSVar5 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_52f0320(pSVar5,"-handoff",(MethodInfo *)0x0);
  if (__this == (UnityEngine_Object_o *)0x0) goto label_05e96b6f;
  UnityEngine_Object__set_name(__this,pSVar5,(MethodInfo *)0x0);
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)__this,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
  if (!bVar3) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this,
                           (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
  }
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05e96b6f;
  UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,false,(MethodInfo *)0x0);
  UnityEngine_CanvasGroup__set_interactable(__this_00,false,(MethodInfo *)0x0);
  exists = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)__this,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (!bVar3) {
    exists = UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)__this,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if (exists == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05e96b6f;
  (*(exists->klass->vtable)._28_set_ignoreLayout.methodPtr)
            (exists,true,(exists->klass->vtable)._28_set_ignoreLayout.method);
  pUVar4 = (UnityEngine_Object_o *)
           UnityEngine_GameObject__GetComponent_6919850
                     ((UnityEngine_GameObject_o *)__this,"FlexLayout",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Object_o *)0x0) {
label_05e96b0c:
    x = (UnityEngine_Object_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
    if ((pUVar4->klass->_2).typeHierarchyDepth < bVar1) goto label_05e96b0c;
    x = (UnityEngine_Object_o *)0x0;
    if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)
    {
      x = pUVar4;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (UnityEngine_Object_o *)0x0) {
label_05e96b6f:
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,false,(MethodInfo *)0x0);
  }
  return (UnityEngine_GameObject_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindPreservedBlur
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindPreservedBlur (UnityEngine_GameObject_o* preservedTile, const MethodInfo* method);
// 0x5e966c0

Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindPreservedBlur
          (UnityEngine_GameObject_o *preservedTile,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar2;
  
  if (Il2CppMethodInitialized_075488bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488bf = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)preservedTile,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0;
  }
  if (preservedTile == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                     (preservedTile,true,
                      (MethodInfo_353B9A0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur);
  return pGVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindActiveByName
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x5e96590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9664b: nop dword ptr [rax + rax]

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  int index;
  
  if (Il2CppMethodInitialized_075488c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488c0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (parent == (UnityEngine_Transform_o *)0x0) {
label_05e966af:
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)parent,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_05e966af;
      bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
      if (bVar1) {
        return parent;
      }
    }
    index = 0;
    iVar2 = UnityEngine_Transform__get_childCount(parent,(MethodInfo *)0x0);
    if (0 < iVar2) {
      do {
        pUVar3 = UnityEngine_Transform__GetChild(parent,index,(MethodInfo *)0x0);
        pUVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
                           (pUVar3,name,method_00);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          return pUVar3;
        }
        index = index + 1;
        iVar2 = UnityEngine_Transform__get_childCount(parent,(MethodInfo *)0x0);
      } while (index < iVar2);
    }
  }
  return (UnityEngine_Transform_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$AddOuterCollapse
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__AddOuterCollapse (DG_Tweening_Sequence_o* sequence, UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x5e959e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e95aee: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__AddOuterCollapse
               (DG_Tweening_Sequence_o *sequence,UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  uint32_t length;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o *__this;
  UnityEngine_Vector3_array *pUVar2;
  UnityEngine_Transform_o *__this_00;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Vector3_array **targetAddress;
  UnityEngine_Vector3_Fields UVar6;
  UnityEngine_Vector3_o UVar7;
  
  if (Il2CppMethodInitialized_075488c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass11_0_AddOuterCollapse_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_075488c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o *)0x0) {
    (__this->fields).tile = tile;
    Il2CppCodeGenWriteBarrier(&(__this->fields).tile);
    pUVar1 = (__this->fields).tile;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
      (__this->fields).tileScale.fields = UVar6;
      pUVar1 = (__this->fields).tile;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        length = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
        (__this->fields).childCount = length;
        pUVar2 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,length);
        targetAddress = &(__this->fields).childScales;
        (__this->fields).childScales = pUVar2;
        Il2CppCodeGenWriteBarrier(targetAddress);
        if (0 < (__this->fields).childCount) {
          lVar5 = 0x28;
          uVar4 = 0;
          do {
            pUVar1 = (__this->fields).tile;
            if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_05e95bd5;
            pUVar2 = *targetAddress;
            __this_00 = UnityEngine_Transform__GetChild
                                  ((UnityEngine_Transform_o *)pUVar1,(int32_t)uVar4,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05e95bd5;
            UVar7 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
            if (pUVar2 == (UnityEngine_Vector3_array *)0x0) goto label_05e95bd5;
            if ((uint)pUVar2->max_length <= uVar4) {
              ThrowIndexOutOfRangeException();
            }
            *(long *)((long)pUVar2->m_Items + lVar5 + -0x28) = UVar7.fields._0_8_;
            *(float *)((long)pUVar2->m_Items + lVar5 + -0x20) = UVar7.fields.z;
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 0xc;
          } while ((long)uVar4 < (long)(__this->fields).childCount);
        }
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass11_0_AddOuterCollapse_b
                   ,(MethodInfo_4293C90 *)0x0);
        pDVar3 = DG_Tweening_DOVirtual__Float(1.0,0.14,0.075,__this_01,(MethodInfo *)0x0);
        pDVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                           ((Il2CppObject *)pDVar3,10,
                            (MethodInfo_36B0160 *)
                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
        DG_Tweening_TweenSettingsExtensions__Insert
                  (sequence,0.025,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05e95bd5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindLabelGroup
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindLabelGroup (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x5e94e80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e94eef: lea r13, [rip + 0x143bd82]  ; "-label"
// asm:   0x5e94ef6: nop word ptr cs:[rax + rax]
// asm:   0x5e94f53: jmp 0x5e94f90

UnityEngine_CanvasGroup_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindLabelGroup
          (UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *__this;
  System_String_o *__this_00;
  UnityEngine_CanvasGroup_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  int index;
  
  if (Il2CppMethodInitialized_075488c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    Il2CppMethodInitialized_075488c2 = '\x01';
  }
  if (tile == (UnityEngine_RectTransform_o *)0x0) {
label_05e94fc7:
    ThrowNullReferenceException();
  }
  index = 0;
  iVar2 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)tile,(MethodInfo *)0x0);
  if (0 < iVar2) {
    do {
      __this = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)tile,index,(MethodInfo *)0x0);
      if ((__this == (UnityEngine_Transform_o *)0x0) ||
         (__this_00 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0),
         __this_00 == (System_String_o *)0x0)) goto label_05e94fc7;
      bVar1 = System_String__EndsWith(__this_00,"-label",(MethodInfo *)0x0);
      if (bVar1) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
        if (bVar1) {
          return pUVar3;
        }
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__AddComponent_object_
                             (__this_01,
                              (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup
                             );
          return pUVar3;
        }
        goto label_05e94fc7;
      }
      index = index + 1;
      iVar2 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)tile,(MethodInfo *)0x0);
    } while (index < iVar2);
  }
  return (UnityEngine_CanvasGroup_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindVisualBlur
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisualBlur (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x5e94fd0

Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisualBlur
          (UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *image;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_075488c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488c3 = '\x01';
  }
  image = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual(tile,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_05e950a0;
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)image,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
    if (__this == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_05e950a0:
        ThrowNullReferenceException();
      }
      __this = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
      if (__this == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) goto label_05e950a0;
    }
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup(__this,image,(MethodInfo *)0x0);
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$StartBackgroundBlend
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__StartBackgroundBlend (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x5e94860

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__StartBackgroundBlend
               (UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  Il2CppType *handle;
  bool bVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this;
  UnityEngine_UI_Image_o *pUVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_DOGetter_float__o *pDVar8;
  DG_Tweening_Core_DOSetter_float__o *pDVar9;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar10;
  DG_Tweening_Tween_o *pDVar11;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar12;
  
  if (Il2CppMethodInitialized_075488c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91c8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Game Create Compact Background Blend");
    Il2CppMethodInitialized_075488c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0);
  method_00 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pUVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual(tile,method_00);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *)0x0) {
label_05e94e3c:
    ThrowNullReferenceException();
  }
  targetAddress = &(__this->fields).source;
  (__this->fields).source = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar3 = (__this->fields).source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05e94e3c;
  if (pSVar4 != (System_Type_o *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e94e46;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar4;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar4 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
label_05e94e46:
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar4;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,"Game Create Compact Background Blend",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    (pUVar6,(UnityEngine_Transform_o *)tile,false,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (*targetAddress != (UnityEngine_UI_Image_o *)0x0) {
            __this_01 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              iVar2 = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetSiblingIndex(pUVar6,iVar2 + 1,(MethodInfo *)0x0);
                __this_02 = UnityEngine_GameObject__GetComponent_object_
                                      (__this_00,
                                       (MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_0753ecc8 = '\x01';
                }
                if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (__this_02,
                             (UnityEngine_Vector2_o)
                             (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_07542885 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                    Il2CppMethodInitialized_07542885 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (__this_02,
                             (UnityEngine_Vector2_o)
                             (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0
                            );
                  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                    Il2CppMethodInitialized_0753ecc8 = '\x01';
                  }
                  UnityEngine_RectTransform__set_offsetMin
                            (__this_02,
                             (UnityEngine_Vector2_o)
                             (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                    Il2CppMethodInitialized_0753ecc8 = '\x01';
                  }
                  UnityEngine_RectTransform__set_offsetMax
                            (__this_02,
                             (UnityEngine_Vector2_o)
                             (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,
                                      (MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                  (__this->fields).image = pUVar3;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).image);
                  pUVar3 = (__this->fields).image;
                  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                    UVar12.fields.b = 0.09;
                    UVar12.fields.a = 0.0;
                    UVar12.fields.r = 0.09;
                    UVar12.fields.g = 0.09;
                    (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                              (pUVar3,UVar12,(pUVar3->klass->vtable)._23_set_color.method);
                    pUVar3 = (__this->fields).image;
                    if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                      (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
                      pUVar3 = *targetAddress;
                      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                        (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                                  (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
                        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                        }
                        pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                        pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                           ((Il2CppObject *)pDVar7,true,
                                            (MethodInfo_36B08F0 *)
                                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence)
                        ;
                        pDVar8 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                        DG_Tweening_Core_DOGetter_float____ctor
                                  (pDVar8,(Il2CppObject *)__this,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle
                                   ,(MethodInfo_494D0C0 *)0x0);
                        pDVar9 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                        DG_Tweening_Core_DOSetter_float____ctor
                                  (pDVar9,(Il2CppObject *)__this,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91c0
                                   ,(MethodInfo_494E270 *)0x0);
                        pDVar10 = DG_Tweening_DOTween__To(pDVar8,pDVar9,1.0,0.29,(MethodInfo *)0x0);
                        pDVar11 = (DG_Tweening_Tween_o *)
                                  DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                            ((Il2CppObject *)pDVar10,1,
                                             (MethodInfo_36B0160 *)
                                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                            );
                        pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar11,(MethodInfo *)0x0);
                        pDVar8 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                        DG_Tweening_Core_DOGetter_float____ctor
                                  (pDVar8,(Il2CppObject *)__this,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91c8
                                   ,(MethodInfo_494D0C0 *)0x0);
                        pDVar9 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                        DG_Tweening_Core_DOSetter_float____ctor
                                  (pDVar9,(Il2CppObject *)__this,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91d0
                                   ,(MethodInfo_494E270 *)0x0);
                        pDVar10 = DG_Tweening_DOTween__To(pDVar8,pDVar9,0.0,0.29,(MethodInfo *)0x0);
                        pDVar11 = (DG_Tweening_Tween_o *)
                                  DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                            ((Il2CppObject *)pDVar10,1,
                                             (MethodInfo_36B0160 *)
                                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                            );
                        DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar11,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_05e94e3c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$CreateShearVisual
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreateShearVisual (UnityEngine_RectTransform_o* tile, float rise, DG_Tweening_Sequence_o* sequence, const MethodInfo* method);
// 0x5e950b0

UnityEngine_CanvasGroup_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreateShearVisual
          (UnityEngine_RectTransform_o *tile,float rise,DG_Tweening_Sequence_o *sequence,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_Fields *targetAddress_00;
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Il2CppType *handle;
  bool bVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this;
  UnityEngine_UI_Image_o *__this_00;
  System_Type_array *components;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  UnityEngine_CanvasGroup_o *__this_03;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar10;
  DG_Tweening_Core_DOGetter_Vector3__o *pDVar11;
  DG_Tweening_Core_DOSetter_Vector3__o *pDVar12;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar13;
  DG_Tweening_Tween_o *pDVar14;
  DG_Tweening_Core_DOGetter_float__o *__this_04;
  DG_Tweening_Core_DOSetter_float__o *__this_05;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *__this_06;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o value;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o endValue;
  float local_68;
  float fStack_64;
  
  if (Il2CppMethodInitialized_075488c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91e0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91e8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b9200
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b9208
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Game Create Vertical Shear");
    Il2CppMethodInitialized_075488c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0);
  method_00 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual(tile,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return (UnityEngine_CanvasGroup_o *)0x0;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05e959c7:
    ThrowNullReferenceException();
  }
  if ((pSVar5 != (System_Type_o *)0x0) &&
     (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((components->obj).klass)->_1).element_class),
     pIVar6 == (Il2CppObject *)0x0)) {
label_05e959d1:
    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar5;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar5 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if ((pSVar5 != (System_Type_o *)0x0) &&
       (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((components->obj).klass)->_1).element_class)
       , pIVar6 == (Il2CppObject *)0x0)) goto label_05e959d1;
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar5;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar5 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasGroup,(MethodInfo *)0x0);
      if ((pSVar5 != (System_Type_o *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar5,(((components->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05e959d1;
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar5;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        pSVar5 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Canvas,(MethodInfo *)0x0);
        if ((pSVar5 != (System_Type_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar5,(((components->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) goto label_05e959d1;
        if ((components->max_length & 0xfffffffc) != 0) {
          components->m_Items[3] = pSVar5;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3);
          pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_691aa60(pUVar7,"Game Create Vertical Shear",components,(MethodInfo *)0x0);
          if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *)
                        0x0) {
            targetAddress = &(__this->fields).smear;
            (__this->fields).smear = pUVar7;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pUVar7 = (__this->fields).smear;
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar7,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              targetAddress_00 = &__this->fields;
              (__this->fields).rect = pUVar8;
              Il2CppCodeGenWriteBarrier(&targetAddress_00->rect);
              if (tile != (UnityEngine_RectTransform_o *)0x0) {
                pUVar8 = (__this->fields).rect;
                parent = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)tile,(MethodInfo *)0x0);
                if ((pUVar8 != (UnityEngine_RectTransform_o *)0x0) &&
                   (UnityEngine_Transform__SetParent_692d510
                              ((UnityEngine_Transform_o *)pUVar8,parent,true,(MethodInfo *)0x0),
                   __this_00 != (UnityEngine_UI_Image_o *)0x0)) {
                  pUVar8 = targetAddress_00->rect;
                  pUVar9 = UnityEngine_UI_Graphic__get_rectTransform
                                     ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
                  if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
                     (UVar17 = UnityEngine_Transform__get_position
                                         ((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0),
                     pUVar8 != (UnityEngine_RectTransform_o *)0x0)) {
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)pUVar8,UVar17,(MethodInfo *)0x0);
                    pUVar8 = targetAddress_00->rect;
                    pUVar9 = UnityEngine_UI_Graphic__get_rectTransform
                                       ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
                    if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
                       (value = UnityEngine_Transform__get_rotation
                                          ((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0),
                       pUVar8 != (UnityEngine_RectTransform_o *)0x0)) {
                      UnityEngine_Transform__set_rotation
                                ((UnityEngine_Transform_o *)pUVar8,value,(MethodInfo *)0x0);
                      pUVar8 = targetAddress_00->rect;
                      pUVar9 = UnityEngine_UI_Graphic__get_rectTransform
                                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                        UVar15 = UnityEngine_RectTransform__get_rect(pUVar9,(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                        }
                        if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (pUVar8,(UnityEngine_Vector2_o)UVar15.fields._8_8_,(MethodInfo *)0x0);
                          if (targetAddress_00->rect != (UnityEngine_RectTransform_o *)0x0) {
                            UVar17 = UnityEngine_Transform__get_localScale
                                               ((UnityEngine_Transform_o *)targetAddress_00->rect,
                                                (MethodInfo *)0x0);
                            if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                               (__this_01 = UnityEngine_GameObject__GetComponent_object_
                                                      (*targetAddress,
                                                       (MethodInfo_353B730 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image),
                               __this_01 != (UnityEngine_UI_Image_o *)0x0)) {
                              UnityEngine_UI_Image__set_sprite
                                        (__this_01,(__this_00->fields).m_Sprite,(MethodInfo *)0x0);
                              UnityEngine_UI_Image__set_type
                                        (__this_01,(__this_00->fields).m_Type,(MethodInfo *)0x0);
                              UnityEngine_UI_Image__set_preserveAspect
                                        (__this_01,(__this_00->fields).m_PreserveAspect,(MethodInfo *)0x0);
                              UVar16.fields.b = 1.0;
                              UVar16.fields.a = 0.9;
                              UVar16.fields.r = 1.0;
                              UVar16.fields.g = 1.0;
                              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                                        (__this_01,UVar16,(__this_01->klass->vtable)._23_set_color.method);
                              if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                                 (__this_02 = UnityEngine_GameObject__GetComponent_object_
                                                        (*targetAddress,
                                                         (MethodInfo_353B730 *)
                                                         MethodInfo_UnityEngine_GameObject_GetComponent_Canvas
                                                        ), __this_02 != (UnityEngine_Canvas_o *)0x0)) {
                                UnityEngine_Canvas__set_overrideSorting(__this_02,true,(MethodInfo *)0x0);
                                UnityEngine_Canvas__set_sortingOrder(__this_02,100,(MethodInfo *)0x0);
                                if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                                   (__this_03 = UnityEngine_GameObject__GetComponent_object_
                                                          (*targetAddress,
                                                           (MethodInfo_353B730 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup
                                                       ), __this_03 != (UnityEngine_CanvasGroup_o *)0x0)) {
                                  UnityEngine_CanvasGroup__set_blocksRaycasts
                                            (__this_03,false,(MethodInfo *)0x0);
                                  UnityEngine_CanvasGroup__set_interactable(__this_03,false,(MethodInfo *)0x0)
                                  ;
                                  if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                                    pGVar10 = UnityEngine_GameObject__AddComponent_object_
                                                        (*targetAddress,
                                                         (MethodInfo_353B6A0 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur
                                                       );
                                    (__this->fields).blur = pGVar10;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).blur);
                                    pGVar10 = (__this->fields).blur;
                                    if (pGVar10 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0)
                                    {
                                      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup
                                                (pGVar10,__this_01,(MethodInfo *)0x0);
                                      pDVar11 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
                                      DG_Tweening_Core_DOGetter_Vector3____ctor
                                                (pDVar11,(Il2CppObject *)__this,
                                                 (intptr_t)
                                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual
                                                 ,(MethodInfo_494D500 *)0x0);
                                      pDVar12 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
                                      DG_Tweening_Core_DOSetter_Vector3____ctor
                                                (pDVar12,(Il2CppObject *)__this,
                                                 (intptr_t)
                                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91e0
                                                 ,(MethodInfo_494E750 *)0x0);
                                      pUVar8 = (__this->fields).rect;
                                      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                        UVar18 = UnityEngine_Transform__get_position
                                                           ((UnityEngine_Transform_o *)pUVar8,
                                                            (MethodInfo *)0x0);
                                        if (Il2CppMethodInitialized_0753e72c == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_UnityEngine_Vector3);
                                          Il2CppMethodInitialized_0753e72c = '\x01';
                                        }
                                        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
                                        uVar1 = (pUVar3->upVector).fields.x;
                                        uVar2 = (pUVar3->upVector).fields.y;
                                        endValue.fields.x = UVar18.fields.x + rise * (float)uVar1 * 1.65;
                                        endValue.fields.y = UVar18.fields.y + rise * (float)uVar2 * 1.65;
                                        endValue.fields.z =
                                             UVar18.fields.z + (pUVar3->upVector).fields.z * rise * 1.65;
                                        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0
                                           ) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                                        }
                                        pDVar13 = DG_Tweening_DOTween__To_3166ae0
                                                            (pDVar11,pDVar12,endValue,0.1,(MethodInfo *)0x0);
                                        pDVar14 = (DG_Tweening_Tween_o *)
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                            ((Il2CppObject *)pDVar13,9,
                                                             (MethodInfo_36B0160 *)
                                                                                                                          
                                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                                       );
                                        DG_Tweening_TweenSettingsExtensions__Join
                                                  (sequence,pDVar14,(MethodInfo *)0x0);
                                        pDVar11 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
                                        DG_Tweening_Core_DOGetter_Vector3____ctor
                                                  (pDVar11,(Il2CppObject *)__this,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91e8
                                                   ,(MethodInfo_494D500 *)0x0);
                                        pDVar12 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
                                        DG_Tweening_Core_DOSetter_Vector3____ctor
                                                  (pDVar12,(Il2CppObject *)__this,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91f0
                                                   ,(MethodInfo_494E750 *)0x0);
                                        local_68 = UVar17.fields.x;
                                        fStack_64 = UVar17.fields.y;
                                        UVar17.fields.x = local_68 * 1.08;
                                        UVar17.fields.y = fStack_64 * 5.0;
                                        pDVar13 = DG_Tweening_DOTween__To_3166ae0
                                                            (pDVar11,pDVar12,UVar17,0.1,(MethodInfo *)0x0);
                                        pDVar14 = (DG_Tweening_Tween_o *)
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                            ((Il2CppObject *)pDVar13,9,
                                                             (MethodInfo_36B0160 *)
                                                                                                                          
                                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                                       );
                                        DG_Tweening_TweenSettingsExtensions__Join
                                                  (sequence,pDVar14,(MethodInfo *)0x0);
                                        __this_04 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_DG_Tweening_Core_DOGetter_float);
                                        DG_Tweening_Core_DOGetter_float____ctor
                                                  (__this_04,(Il2CppObject *)__this,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91f8
                                                   ,(MethodInfo_494D0C0 *)0x0);
                                        __this_05 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_DG_Tweening_Core_DOSetter_float);
                                        DG_Tweening_Core_DOSetter_float____ctor
                                                  (__this_05,(Il2CppObject *)__this,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b9200
                                                   ,(MethodInfo_494E270 *)0x0);
                                        t = DG_Tweening_DOTween__To
                                                      (__this_04,__this_05,rise * 0.5,0.1,(MethodInfo *)0x0);
                                        pDVar14 = (DG_Tweening_Tween_o *)
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                            ((Il2CppObject *)t,9,
                                                             (MethodInfo_36B0160 *)
                                                                                                                          
                                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                                       );
                                        DG_Tweening_TweenSettingsExtensions__Join
                                                  (sequence,pDVar14,(MethodInfo *)0x0);
                                        __this_06 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_DG_Tweening_TweenCallback);
                                        DG_Tweening_TweenCallback___ctor
                                                  (__this_06,(Il2CppObject *)__this,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b9208
                                                   ,(MethodInfo *)0x0);
                                        DG_Tweening_DOVirtual__DelayedCall
                                                  (0.1,__this_06,true,(MethodInfo *)0x0);
                                        return __this_03;
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
                  }
                }
              }
            }
          }
          goto label_05e959c7;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindVisual
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x5e96b90

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual
          (UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this;
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *pUVar4;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_075488c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"-background");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
    Il2CppMethodInitialized_075488c6 = '\x01';
  }
  if ((tile == (UnityEngine_RectTransform_o *)0x0) ||
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)tile,true,
                          (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image
                         ), pSVar3 == (System_Object_array *)0x0)) {
label_05e96cac:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar3->max_length;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      __this = (UnityEngine_UI_Image_o *)pSVar3->m_Items[(int)uVar6];
      if (((__this == (UnityEngine_UI_Image_o *)0x0) ||
          (pUVar4 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
          , pUVar4 == (UnityEngine_Object_o *)0x0)) ||
         (pSVar5 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0), pSVar5 == (System_String_o *)0x0))
      goto label_05e96cac;
      bVar1 = System_String__EndsWith(pSVar5,"-preview",(MethodInfo *)0x0);
      if (bVar1) {
        return __this;
      }
      pUVar4 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar4 == (UnityEngine_Object_o *)0x0) ||
         (pSVar5 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0), pSVar5 == (System_String_o *)0x0))
      goto label_05e96cac;
      bVar1 = System_String__EndsWith(pSVar5,"-background",(MethodInfo *)0x0);
      if (bVar1) {
        return __this;
      }
      uVar6 = uVar6 + 1;
      uVar2 = (uint)pSVar3->max_length;
    } while ((int)uVar6 < (int)uVar2);
  }
  return (UnityEngine_UI_Image_o *)0x0;
}


