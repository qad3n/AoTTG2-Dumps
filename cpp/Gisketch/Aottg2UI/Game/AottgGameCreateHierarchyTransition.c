// Type: Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateHierarchyTransition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass11_0$$<AddOuterCollapse>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___AddOuterCollapse_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o* __this, float scale, const MethodInfo* method);
// 0x1823ce200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ce25a: nop word ptr [rax + rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0___AddOuterCollapse_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o *__this,
               float scale,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector3_array *pUVar2;
  UnityEngine_Transform_o *__this_00;
  uint index;
  UnityEngine_Vector3_o local_28 [2];
  
  pUVar1 = (__this->fields).tile;
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
label_1823ce2df:
    ThrowNullReferenceException();
  }
  local_28[0].fields.x = (__this->fields).tileScale.fields.x;
  local_28[0].fields.z = (__this->fields).tileScale.fields.z;
  local_28[0].fields.y = scale * (__this->fields).tileScale.fields.y;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar1,local_28,(MethodInfo *)0x0);
  index = 0;
  if (0 < (__this->fields).childCount) {
    do {
      pUVar1 = (__this->fields).tile;
      if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_1823ce2df;
      __this_00 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pUVar1,index,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).childScales;
      if (pUVar2 == (UnityEngine_Vector3_array *)0x0) goto label_1823ce2df;
      if ((uint)pUVar2->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1823ce2df;
      local_28[0].fields.x = pUVar2->m_Items[(int)index].fields.x;
      local_28[0].fields.z = pUVar2->m_Items[(int)index].fields.z;
      local_28[0].fields.y = pUVar2->m_Items[(int)index].fields.y / scale;
      UnityEngine_Transform__set_localScale(__this_00,local_28,(MethodInfo *)0x0);
      index = index + 1;
    } while ((int)index < (__this->fields).childCount);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__0
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x1823cf1d0

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__0
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar2;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o local_18;
  
  pUVar1 = (__this->fields).image;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar2 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                       (&local_18,pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    return *(float *)&(pUVar2->fields).field_0xc;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, float value, const MethodInfo* method);
// 0x1823cf210

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Color_o local_18;
  
  pUVar1 = (__this->fields).image;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    local_18.fields.r = 0.09;
    local_18.fields.g = 0.09;
    local_18.fields.b = 0.09;
    local_18.fields.a = value;
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,&local_18,(pUVar1->klass->vtable)._23_set_color.method);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__2
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x1823cf260

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__2
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar2;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o local_18;
  
  pUVar1 = (__this->fields).source;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar2 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                       (&local_18,pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    return *(float *)&(pUVar2->fields).field_0xc;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o* __this, float value, const MethodInfo* method);
// 0x1823cf2a0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0___StartBackgroundBlend_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *__this,
               float value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar5;
  UnityEngine_Color_o local_48 [4];
  
  pUVar3 = (__this->fields).source;
  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar5 = (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                       ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_48,pUVar3,
                        (pUVar3->klass->vtable)._22_get_color.method);
    pUVar4 = (__this->fields).source;
    if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
      fVar1 = *(float *)&(pUVar5->fields).m_Ptr;
      pUVar5 = (*(pUVar4->klass->vtable)._22_get_color.methodPtr)
                         ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_48,pUVar4,
                          (pUVar4->klass->vtable)._22_get_color.method);
      pUVar4 = (__this->fields).source;
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        fVar2 = *(float *)((longlong)&(pUVar5->fields).m_Ptr + 4);
        pUVar5 = (*(pUVar4->klass->vtable)._22_get_color.methodPtr)
                           ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_48,pUVar4,
                            (pUVar4->klass->vtable)._22_get_color.method);
        local_48[0].fields.b = (float)(pUVar5->fields).m_Count;
        local_48[0].fields.r = fVar1;
        local_48[0].fields.g = fVar2;
        local_48[0].fields.a = value;
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (pUVar3,local_48,(pUVar3->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__0
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x180560ff0

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__0(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x180561030

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__1(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, UnityEngine_Vector3_o value, MethodInfo* method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  __this_00 = (__this->fields).rect;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    local_18[0].x = (x->fields).x;
    local_18[0].y = (x->fields).y;
    local_18[0].z = (x->fields).z;
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__2
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x180561280

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__2(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_localScale(&local_18,__this_00,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x1805612c0

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__3(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, UnityEngine_Vector3_o value, MethodInfo* method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  __this_00 = (__this->fields).rect;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    local_18[0].x = (x->fields).x;
    local_18[0].y = (x->fields).y;
    local_18[0].z = (x->fields).z;
    UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__4
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x1823cf5c0

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__4
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
                MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).blur;
  if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    fVar1 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x1823cf5e0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
               float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  
  __this_00 = (__this->fields).blur;
  if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x1823cf600

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0___CreateShearVisual_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_184347d8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d8f = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields).smear;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_0$$<Play>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___Play_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x1823d3d50

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0___Play_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  System_Action_o *pSVar3;
  System_String_o *name;
  float fVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o *object;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_CanvasGroup_o *__this_00;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184347d90 == '\0') {
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
    Il2CppMethodInitialized_184347d90 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o *)0x0)
  goto label_1823d4022;
  (object->fields).CS___8__locals1 = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
  pUVar2 = (__this->fields).selected;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    pUVar9 = (__this->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pUVar2 = (__this->fields).selected;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__get_position
                           (&local_18,(UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
        fVar1 = (pUVar6->fields).z;
        fVar4 = (pUVar6->fields).y;
        (object->fields).exitPosition.fields.x = (pUVar6->fields).x;
        (object->fields).exitPosition.fields.y = fVar4;
        (object->fields).exitPosition.fields.z = fVar1;
        pUVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreatePreservedTile
                           ((__this->fields).selected,(__this->fields).root,(MethodInfo *)0x0);
        (object->fields).preservedTile = pUVar7;
        Il2CppCodeGenWriteBarrier(&(object->fields).preservedTile,pUVar7);
        pSVar3 = (__this->fields).completed;
        if (pSVar3 != (System_Action_o *)0x0) {
          (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
        }
        pUVar9 = (__this->fields).root;
        name = (__this->fields).targetId;
        if (Il2CppMethodInitialized_184347d85 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
          Il2CppMethodInitialized_184347d85 = '\x01';
        }
        pUVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
                           (pUVar9,name,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Transform_o *)0x0;
        if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
           ((UnityEngine_RectTransform_c *)pUVar8->klass == TypeInfo_UnityEngine_RectTransform)) {
          pUVar9 = pUVar8;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
label_1823d3fb8:
          callback = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
          DG_Tweening_TweenCallback___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)callback,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_3_Play_b__13
                     ,(MethodInfo *)0x0);
          DG_Tweening_DOVirtual__DelayedCall(0.03,callback,true,(MethodInfo *)0x0);
          return;
        }
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          __this_00 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar9,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
          if (!bVar5) {
            pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_1823d4022;
            __this_00 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar7,(MethodInfo_6F4D60 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
          }
          if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
            UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
            UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,false,(MethodInfo *)0x0);
            goto label_1823d3fb8;
          }
        }
      }
label_1823d4022:
      ThrowNullReferenceException();
    }
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing = false;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__5
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x180560ff0

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__5(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields).tile;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x180561030

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__6(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, UnityEngine_Vector3_o value, MethodInfo* method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  __this_00 = (__this->fields).tile;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    local_18[0].x = (x->fields).x;
    local_18[0].y = (x->fields).y;
    local_18[0].z = (x->fields).z;
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__1
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x180560ff0

UnityEngine_Vector3_o
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__1(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields).tile;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x180561030

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__2(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, UnityEngine_Vector3_o value, MethodInfo* method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  __this_00 = (__this->fields).tile;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    local_18[0].x = (x->fields).x;
    local_18[0].y = (x->fields).y;
    local_18[0].z = (x->fields).z;
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__3
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x1823d4030

float
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__3(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, float value, const MethodInfo* method);
// 0x181910650

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1___Play_b__4(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o* __this, float value, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__7
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x1823d4070

float
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__7(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).label;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, const MethodInfo* method);
// 0x1818a3060

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__8(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).label;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__9
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__9 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x1823d4030

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__9
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).shearVisual;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__10 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, const MethodInfo* method);
// 0x181910650

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__10(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).shearVisual;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__11
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__11 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, const MethodInfo* method);
// 0x180584280

float
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__11(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, MethodInfo* method)

{
  return (__this->fields).startBlur;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__12
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__12 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, const MethodInfo* method);
// 0x1823d4050

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2___Play_b__12(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o* __this, float value, MethodInfo* method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  
  __this_00 = (__this->fields).blur;
  if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_3$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_3$$<Play>b__13
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___Play_b__13 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o* __this, const MethodInfo* method);
// 0x1823d4090

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3___Play_b__13
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_3_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *pGVar1;
  UnityEngine_Vector3_Fields local_18 [2];
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *)0x0) {
    local_18[0].x = (__this->fields).exitPosition.fields.x;
    local_18[0].y = (__this->fields).exitPosition.fields.y;
    local_18[0].z = (__this->fields).exitPosition.fields.z;
    Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__ContinueIntoCompactButton
              ((pGVar1->fields).root,(pGVar1->fields).targetId,(UnityEngine_Vector3_o *)local_18,
               (__this->fields).preservedTile,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__0
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x1823d4070

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__0
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, float value, const MethodInfo* method);
// 0x1818a3060

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__1(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, float value, MethodInfo* method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__2
// il2cpp: UnityEngine_Vector3_o Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x1823d4960

UnityEngine_Vector3_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__2
          (UnityEngine_Vector3_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
          MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields).preservedRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position
                       (&local_18,(UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x1823d49a0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               UnityEngine_Vector3_o *value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  __this_00 = (__this->fields).preservedRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    local_18[0].x = (value->fields).x;
    local_18[0].y = (value->fields).y;
    local_18[0].z = (value->fields).z;
    UnityEngine_Transform__set_position
              ((UnityEngine_Transform_o *)__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__4
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x1823d49e0

float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__4
                (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
                MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).preservedGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, float value, const MethodInfo* method);
// 0x1823d4a00

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).preservedGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, float value, const MethodInfo* method);
// 0x1823d4050

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__8
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_00;
  
  __this_00 = (__this->fields).preservedBlur;
  if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x1823d4a20

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0___ContinueIntoCompactButton_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_CanvasGroup_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347d91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d91 = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
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
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_1$$<ContinueIntoCompactButton>b__7
// il2cpp: float Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ContinueIntoCompactButton_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o* __this, const MethodInfo* method);
// 0x1805606a0

float
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1___ContinueIntoCompactButton_b__7(Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o* __this, MethodInfo* method)

{
  return (__this->fields).startBlur;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$Play
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__Play (UnityEngine_GameObject_o* source, System_String_o* targetId, System_Action_o* completed, const MethodInfo* method);
// 0x1823c71c0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c7490: mov rbx, rbp
// asm:   0x1823c7547: jmp 0x1823c754c
// asm:   0x1823c7549: mov rdx, rbp
// asm:   0x1823c7709: movss xmm14, dword ptr [rip + 0x1079212]
// asm:   0x1823c7712: movss xmm15, dword ptr [rip + 0x1079205]
// asm:   0x1823c771b: movss xmm11, dword ptr [rip + 0xf91f0c]
// asm:   0x1823c7724: movss xmm13, dword ptr [rip + 0xf91eef]
// asm:   0x1823c772d: nop dword ptr [rax]
// asm:   0x1823c7e77: xor ebp, ebp

bool Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__Play
               (UnityEngine_GameObject_o *source,System_String_o *targetId,System_Action_o *completed,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  bool bVar7;
  int32_t iVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *object;
  UnityEngine_RectTransform_o *pUVar9;
  System_String_o *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Rect_o *pUVar12;
  DG_Tweening_Sequence_o *pDVar13;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *object_00;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_Transform_o *__this;
  UnityEngine_Object_o *__this_00;
  UnityEngine_CanvasGroup_o *pUVar16;
  UnityEngine_GameObject_o *__this_01;
  DG_Tweening_Core_DOGetter_Vector3__o *pDVar17;
  DG_Tweening_Core_DOSetter_Vector3__o *pDVar18;
  UnityEngine_Vector3_o *pUVar19;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar20;
  DG_Tweening_Tween_o *pDVar21;
  DG_Tweening_Core_DOGetter_float__o *pDVar22;
  DG_Tweening_Core_DOSetter_float__o *pDVar23;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar24;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *object_01;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar25;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_RectTransform_o *pUVar26;
  UnityEngine_RectTransform_o *pUVar27;
  int index;
  float fVar28;
  float rise;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_o local_f8;
  UnityEngine_Vector3_o local_e8;
  UnityEngine_Rect_o local_d8 [11];
  
  if (Il2CppMethodInitialized_184347d82 == '\0') {
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
    Il2CppMethodInitialized_184347d82 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_0_o *)0x0)
  goto label_1823c80d3;
  (object->fields).completed = completed;
  Il2CppCodeGenWriteBarrier(&(object->fields).completed,completed);
  (object->fields).targetId = targetId;
  Il2CppCodeGenWriteBarrier(&(object->fields).targetId,targetId);
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing == false) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar15 = (UnityEngine_RectTransform_o *)0x0;
    pUVar9 = pUVar15;
    if (bVar7) {
      if (source == (UnityEngine_GameObject_o *)0x0) goto label_1823c80d3;
      pUVar9 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_184347d83 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
      il2cpp_codegen_initialize_runtime_metadata(&"-tile");
      Il2CppMethodInitialized_184347d83 = '\x01';
    }
    while( true ) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pUVar27 = pUVar15;
      if (!bVar7) goto label_1823c754c;
      if ((pUVar9 == (UnityEngine_RectTransform_o *)0x0) ||
         (pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0),
         pSVar10 == (System_String_o *)0x0)) goto label_1823c80d3;
      bVar7 = System_String__EndsWith(pSVar10,"-tile",(MethodInfo *)0x0);
      if (bVar7) break;
      pUVar9 = (UnityEngine_RectTransform_o *)
               UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
    }
    if (pUVar9->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar27 = pUVar9;
    }
label_1823c754c:
    (object->fields).selected = pUVar27;
    Il2CppCodeGenWriteBarrier(&(object->fields).selected,pUVar27);
    pUVar9 = (object->fields).selected;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      pUVar9 = (object->fields).selected;
      if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
      pUVar11 = UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing = true;
        pUVar9 = (object->fields).selected;
        if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) {
label_1823c80d3:
          ThrowNullReferenceException();
        }
        pUVar11 = UnityEngine_Transform__GetRoot((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
        (object->fields).root = pUVar11;
        Il2CppCodeGenWriteBarrier(&(object->fields).root,pUVar11);
        pUVar9 = (object->fields).selected;
        if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
        pUVar12 = UnityEngine_RectTransform__get_rect(local_d8,pUVar9,(MethodInfo *)0x0);
        fVar28 = (pUVar12->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar28 = fVar28 * 0.42;
        rise = 84.0;
        if (84.0 <= fVar28) {
          rise = fVar28;
        }
        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
        }
        pDVar13 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pDVar13 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                            ((Il2CppObject *)pDVar13,true,
                             (MethodInfo_7CA3D0 *)
                             MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
        Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__StartBackgroundBlend
                  ((object->fields).selected,(MethodInfo *)0x0);
        pUVar9 = (object->fields).selected;
        if ((pUVar9 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar11 = UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_1823c80d3;
        pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
        pUVar9 = (object->fields).selected;
        if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
        pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_1969e50(pSVar14,"-fade",(MethodInfo *)0x0);
        bVar7 = System_String__op_Equality(pSVar10,pSVar14,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar11 = UnityEngine_Transform__GetParent(pUVar11,(MethodInfo *)0x0);
        }
        if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_1823c80d3;
        while( true ) {
          pUVar9 = (UnityEngine_RectTransform_o *)0x0;
          iVar8 = UnityEngine_Transform__get_childCount(pUVar11,(MethodInfo *)0x0);
          index = (int)pUVar15;
          if (iVar8 <= index) break;
          object_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1
                                );
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0
                    );
          pUVar15 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__GetChild(pUVar11,index,(MethodInfo *)0x0);
          if (object_00 ==
              (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_1_o *)0x0)
          goto label_1823c80d3;
          pUVar27 = pUVar9;
          if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) {
            (object_00->fields).tile = (UnityEngine_RectTransform_o *)0x0;
          }
          else {
            pUVar26 = pUVar9;
            if (pUVar15->klass == TypeInfo_UnityEngine_RectTransform) {
              pUVar26 = pUVar15;
            }
            (object_00->fields).tile = pUVar26;
            if (pUVar15->klass == TypeInfo_UnityEngine_RectTransform) {
              pUVar27 = pUVar15;
            }
          }
          Il2CppCodeGenWriteBarrier(&(object_00->fields).tile,pUVar27);
          pUVar15 = (object_00->fields).tile;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            pUVar15 = (object_00->fields).tile;
            if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
            iVar8 = UnityEngine_Transform__get_childCount
                              ((UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
            if (iVar8 == 1) {
              pUVar15 = (object_00->fields).tile;
              if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
              pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
              pUVar15 = (object_00->fields).tile;
              if ((pUVar15 == (UnityEngine_RectTransform_o *)0x0) ||
                 (__this = UnityEngine_Transform__GetChild
                                     ((UnityEngine_Transform_o *)pUVar15,0,(MethodInfo *)0x0),
                 __this == (UnityEngine_Transform_o *)0x0)) goto label_1823c80d3;
              pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
              pSVar14 = System_String__Concat_1969e50(pSVar14,"-fade",(MethodInfo *)0x0);
              bVar7 = System_String__op_Equality(pSVar10,pSVar14,(MethodInfo *)0x0);
              if (bVar7) {
                pUVar15 = (object_00->fields).tile;
                if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
                pUVar15 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Transform__GetChild
                                    ((UnityEngine_Transform_o *)pUVar15,0,(MethodInfo *)0x0);
                if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) {
                  (object_00->fields).tile = (UnityEngine_RectTransform_o *)0x0;
                }
                else {
                  pUVar27 = pUVar9;
                  if (pUVar15->klass == TypeInfo_UnityEngine_RectTransform) {
                    pUVar27 = pUVar15;
                  }
                  (object_00->fields).tile = pUVar27;
                  if (pUVar15->klass == TypeInfo_UnityEngine_RectTransform) {
                    pUVar9 = pUVar15;
                  }
                }
                Il2CppCodeGenWriteBarrier(&(object_00->fields).tile,pUVar9);
              }
            }
          }
          pUVar9 = (object_00->fields).tile;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar7) {
            pUVar9 = (object_00->fields).tile;
            if (((pUVar9 == (UnityEngine_RectTransform_o *)0x0) ||
                (__this_00 = (UnityEngine_Object_o *)
                             UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                __this_00 == (UnityEngine_Object_o *)0x0)) ||
               (pSVar10 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
               pSVar10 == (System_String_o *)0x0)) goto label_1823c80d3;
            bVar7 = System_String__EndsWith(pSVar10,"-tile",(MethodInfo *)0x0);
            if (bVar7) {
              pUVar9 = (object_00->fields).tile;
              pUVar15 = (object->fields).selected;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)pUVar15,
                                 (MethodInfo *)0x0);
              if (bVar7) {
                object_01 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2
                                      );
                System_Object___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_01,
                           (MethodInfo *)0x0);
                pUVar16 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindLabelGroup
                                    ((object_00->fields).tile,(MethodInfo *)0x0);
                if (object_01 ==
                    (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass4_2_o *)0x0)
                goto label_1823c80d3;
                (object_01->fields).label = pUVar16;
                Il2CppCodeGenWriteBarrier(&(object_01->fields).label,pUVar16);
                pGVar25 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisualBlur
                                    ((object_00->fields).tile,(MethodInfo *)0x0);
                (object_01->fields).blur = pGVar25;
                Il2CppCodeGenWriteBarrier(&(object_01->fields).blur,pGVar25);
                pUVar16 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreateShearVisual
                                    ((object_00->fields).tile,rise,pDVar13,(MethodInfo *)0x0);
                (object_01->fields).shearVisual = pUVar16;
                Il2CppCodeGenWriteBarrier(&(object_01->fields).shearVisual,pUVar16);
                pGVar25 = (object_01->fields).blur;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pGVar25,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar7) {
                  pGVar25 = (object_01->fields).blur;
                  if (pGVar25 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0)
                  goto label_1823c80d3;
                  fVar28 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                                     (pGVar25,(MethodInfo *)0x0);
                }
                else {
                  fVar28 = 0.0;
                }
                (object_01->fields).startBlur = fVar28;
                pDVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector3)
                ;
                DG_Tweening_Core_DOGetter_Vector3____ctor
                          (pDVar17,(Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__5
                           ,(MethodInfo_1387860 *)0x0);
                pDVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector3)
                ;
                UnityEngine_AdaptivePerformance_ThermalEventHandler___ctor
                          ((UnityEngine_AdaptivePerformance_ThermalEventHandler_o *)pDVar18,
                           (Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__6
                           ,(MethodInfo *)0x0);
                pUVar9 = (object_00->fields).tile;
                if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
                pUVar19 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)local_d8,(UnityEngine_Transform_o *)pUVar9,
                                     (MethodInfo *)0x0);
                fVar28 = (pUVar19->fields).x;
                fVar1 = (pUVar19->fields).y;
                fVar2 = (pUVar19->fields).z;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar3 = (pUVar6->upVector).fields.x;
                fVar4 = (pUVar6->upVector).fields.y;
                fVar5 = (pUVar6->upVector).fields.z;
                if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                }
                local_f8.fields.x = rise * fVar3 + fVar28;
                local_f8.fields.y = rise * fVar4 + fVar1;
                local_f8.fields.z = rise * fVar5 + fVar2;
                pDVar20 = DG_Tweening_DOTween__To_54b770(pDVar17,pDVar18,&local_f8,0.1,(MethodInfo *)0x0);
                pDVar21 = (DG_Tweening_Tween_o *)
                          DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                    ((Il2CppObject *)pDVar20,10,
                                     (MethodInfo_7C9BC0 *)
                                     MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                    );
                DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar21,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__AddOuterCollapse
                          (pDVar13,(object_00->fields).tile,(MethodInfo *)0x0);
                pUVar16 = (object_01->fields).label;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar7) {
                  pDVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float)
                  ;
                  DG_Tweening_Core_DOGetter_float____ctor
                            (pDVar22,(Il2CppObject *)object_01,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__7
                             ,(MethodInfo_13878F0 *)0x0);
                  pDVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float)
                  ;
                  DG_Tweening_Core_DOSetter_float____ctor
                            (pDVar23,(Il2CppObject *)object_01,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__8
                             ,(MethodInfo_E5A750 *)0x0);
                  if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                  }
                  pDVar24 = DG_Tweening_DOTween__To(pDVar22,pDVar23,0.0,0.025,(MethodInfo *)0x0);
                  pDVar21 = (DG_Tweening_Tween_o *)
                            DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                      ((Il2CppObject *)pDVar24,6,
                                       (MethodInfo_7C9BC0 *)
                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                      );
                  DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar21,(MethodInfo *)0x0);
                }
                pUVar16 = (object_01->fields).shearVisual;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar7) {
                  pDVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float)
                  ;
                  DG_Tweening_Core_DOGetter_float____ctor
                            (pDVar22,(Il2CppObject *)object_01,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__9
                             ,(MethodInfo_13878F0 *)0x0);
                  pDVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float)
                  ;
                  DG_Tweening_Core_DOSetter_float____ctor
                            (pDVar23,(Il2CppObject *)object_01,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__10
                             ,(MethodInfo_E5A750 *)0x0);
                  if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                  }
                  pDVar24 = DG_Tweening_DOTween__To(pDVar22,pDVar23,0.0,0.1,(MethodInfo *)0x0);
                  pDVar21 = (DG_Tweening_Tween_o *)
                            DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                      ((Il2CppObject *)pDVar24,5,
                                       (MethodInfo_7C9BC0 *)
                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                      );
                  DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar21,(MethodInfo *)0x0);
                }
                pGVar25 = (object_01->fields).blur;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pGVar25,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (!bVar7) goto label_1823c8007;
                pDVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                DG_Tweening_Core_DOGetter_float____ctor
                          (pDVar22,(Il2CppObject *)object_01,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__11
                           ,(MethodInfo_13878F0 *)0x0);
                pDVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                DG_Tweening_Core_DOSetter_float____ctor
                          (pDVar23,(Il2CppObject *)object_01,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__12
                           ,(MethodInfo_E5A750 *)0x0);
                if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                }
                pDVar24 = DG_Tweening_DOTween__To(pDVar22,pDVar23,rise * 0.42,0.1,(MethodInfo *)0x0);
                iVar8 = 9;
              }
              else {
                pUVar9 = (object_00->fields).tile;
                if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
                pUVar16 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar9,
                                     (MethodInfo_6651A0 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
                (object_00->fields).group = pUVar16;
                Il2CppCodeGenWriteBarrier(&(object_00->fields).group,pUVar16);
                pUVar16 = (object_00->fields).group;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar16,(MethodInfo *)0x0);
                if (!bVar7) {
                  pUVar9 = (object_00->fields).tile;
                  if ((pUVar9 == (UnityEngine_RectTransform_o *)0x0) ||
                     (__this_01 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                     __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_1823c80d3;
                  pUVar16 = UnityEngine_GameObject__AddComponent_object_
                                      (__this_01,
                                       (MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
                  (object_00->fields).group = pUVar16;
                  Il2CppCodeGenWriteBarrier(&(object_00->fields).group,pUVar16);
                }
                pUVar16 = (object_00->fields).group;
                if (pUVar16 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1823c80d3;
                UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar16,false,(MethodInfo *)0x0);
                pUVar16 = (object_00->fields).group;
                if (pUVar16 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1823c80d3;
                UnityEngine_CanvasGroup__set_interactable(pUVar16,false,(MethodInfo *)0x0);
                pDVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector3)
                ;
                DG_Tweening_Core_DOGetter_Vector3____ctor
                          (pDVar17,(Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__1
                           ,(MethodInfo_1387860 *)0x0);
                pDVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector3)
                ;
                UnityEngine_AdaptivePerformance_ThermalEventHandler___ctor
                          ((UnityEngine_AdaptivePerformance_ThermalEventHandler_o *)pDVar18,
                           (Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__2
                           ,(MethodInfo *)0x0);
                pUVar9 = (object_00->fields).tile;
                if (pUVar9 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c80d3;
                pUVar19 = UnityEngine_Transform__get_position
                                    (&local_e8,(UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
                fVar28 = (pUVar19->fields).x;
                fVar1 = (pUVar19->fields).y;
                fVar2 = (pUVar19->fields).z;
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar3 = (pUVar6->upVector).fields.x;
                fVar4 = (pUVar6->upVector).fields.y;
                fVar5 = (pUVar6->upVector).fields.z;
                if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                }
                local_108.fields.x = rise * fVar3 + fVar28;
                local_108.fields.y = rise * fVar4 + fVar1;
                local_108.fields.z = rise * fVar5 + fVar2;
                pDVar20 = DG_Tweening_DOTween__To_54b770
                                    (pDVar17,pDVar18,&local_108,0.080000006,(MethodInfo *)0x0);
                pDVar21 = (DG_Tweening_Tween_o *)
                          DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                    ((Il2CppObject *)pDVar20,8,
                                     (MethodInfo_7C9BC0 *)
                                     MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                    );
                DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar21,(MethodInfo *)0x0);
                pDVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                DG_Tweening_Core_DOGetter_float____ctor
                          (pDVar22,(Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__3
                           ,(MethodInfo_13878F0 *)0x0);
                pDVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                DG_Tweening_Core_DOSetter_float____ctor
                          (pDVar23,(Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__4
                           ,(MethodInfo_E5A750 *)0x0);
                pDVar24 = DG_Tweening_DOTween__To(pDVar22,pDVar23,0.0,0.055000003,(MethodInfo *)0x0);
                iVar8 = 6;
              }
              pDVar21 = (DG_Tweening_Tween_o *)
                        DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                  ((Il2CppObject *)pDVar24,iVar8,
                                   (MethodInfo_7C9BC0 *)
                                   MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                  );
              DG_Tweening_TweenSettingsExtensions__Join(pDVar13,pDVar21,(MethodInfo *)0x0);
            }
          }
label_1823c8007:
          pUVar15 = (UnityEngine_RectTransform_o *)(ulonglong)(index + 1);
        }
        action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_0_Play_b__0
                   ,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                  ((Il2CppObject *)pDVar13,action,
                   (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
        goto label_1823c8048;
      }
    }
    bVar7 = false;
  }
  else {
label_1823c8048:
    bVar7 = true;
  }
  return bVar7;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindTile
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindTile (UnityEngine_Transform_o* source, const MethodInfo* method);
// 0x1823c6d90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c6dcd: nop dword ptr [rax]

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindTile
          (UnityEngine_Transform_o *source,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  UnityEngine_RectTransform_o *pUVar2;
  
  if (Il2CppMethodInitialized_184347d83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"-tile");
    Il2CppMethodInitialized_184347d83 = '\x01';
  }
  while( true ) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return (UnityEngine_RectTransform_o *)0x0;
    }
    if ((UnityEngine_RectTransform_o *)source == (UnityEngine_RectTransform_o *)0x0) break;
    __this = UnityEngine_Object__get_name((UnityEngine_Object_o *)source,(MethodInfo *)0x0);
    if (__this == (System_String_o *)0x0) break;
    bVar1 = System_String__EndsWith(__this,"-tile",(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (UnityEngine_RectTransform_o *)0x0;
      if (((UnityEngine_RectTransform_o *)source)->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar2 = (UnityEngine_RectTransform_o *)source;
      }
      return pUVar2;
    }
    source = UnityEngine_Transform__GetParent(source,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$ContinueIntoCompactButton
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__ContinueIntoCompactButton (UnityEngine_Transform_o* root, System_String_o* targetId, UnityEngine_Vector3_o startPosition, UnityEngine_GameObject_o* preservedTile, const MethodInfo* method);
// 0x1823c5450
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c567d: jmp 0x1823c5682
// asm:   0x1823c5da3: mov rax, qword ptr [rip + 0x1cfd76e]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition
// asm:   0x1823c5daa: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x1823c5db1: mov byte ptr [rcx], 0
// asm:   0x1823c5db4: jmp 0x1823c5d21

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__ContinueIntoCompactButton
               (UnityEngine_Transform_o *root,System_String_o *targetId,UnityEngine_Vector3_o *startPosition,
               UnityEngine_GameObject_o *preservedTile,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Vector2_o value;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *object;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_CanvasGroup_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  DG_Tweening_Sequence_o *pDVar10;
  DG_Tweening_Core_DOGetter_float__o *pDVar11;
  DG_Tweening_Core_DOSetter_float__o *pDVar12;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar13;
  DG_Tweening_Tween_o *pDVar14;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar15;
  UnityEngine_Rect_o *pUVar16;
  DG_Tweening_Core_DOGetter_Vector3__o *__this;
  DG_Tweening_Core_DOSetter_Vector3__o *setter;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o *object_00;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_RectTransform_o *pUVar17;
  float fVar18;
  UnityEngine_Rect_Fields local_58 [4];
  
  if (Il2CppMethodInitialized_184347d84 == '\0') {
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
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cb50
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cc30
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cd10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cdf0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408ced0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cfb0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408d090
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1_ContinueIntoCompact
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1);
    Il2CppMethodInitialized_184347d84 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_0_o *)0x0) {
    (object->fields).preservedTile = preservedTile;
    Il2CppCodeGenWriteBarrier(&(object->fields).preservedTile,preservedTile);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar6 = (UnityEngine_RectTransform_o *)
               Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
                         (root,targetId,(MethodInfo *)0x0);
      pUVar17 = (UnityEngine_RectTransform_o *)0x0;
      if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
         (pUVar6->klass == TypeInfo_UnityEngine_RectTransform)) {
        pUVar17 = pUVar6;
      }
    }
    else {
      pUVar17 = (UnityEngine_RectTransform_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (UnityEngine_Object_o *)(object->fields).preservedTile;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar3 = (UnityEngine_Object_o *)(object->fields).preservedTile;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition->static_fields->_playing = false;
      return;
    }
    if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)local_58,(UnityEngine_Transform_o *)pUVar17,
                          (MethodInfo *)0x0);
      uVar2._0_4_ = (pUVar7->fields).x;
      uVar2._4_4_ = (pUVar7->fields).y;
      fVar18 = (pUVar7->fields).z;
      pUVar8 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar17,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
      (object->fields).group = pUVar8;
      Il2CppCodeGenWriteBarrier(&(object->fields).group,pUVar8);
      pUVar8 = (object->fields).group;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0);
      if (!bVar5) {
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1823c5db9;
        pUVar8 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar9,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
        (object->fields).group = pUVar8;
        Il2CppCodeGenWriteBarrier(&(object->fields).group,pUVar8);
      }
      pUVar8 = (object->fields).group;
      if (pUVar8 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(pUVar8,0.0,(MethodInfo *)0x0);
        pUVar8 = (object->fields).group;
        if (pUVar8 != (UnityEngine_CanvasGroup_o *)0x0) {
          UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar8,false,(MethodInfo *)0x0);
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          pDVar10 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pDVar10 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                              ((Il2CppObject *)pDVar10,true,
                               (MethodInfo_7CA3D0 *)
                               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
          pDVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
          DG_Tweening_Core_DOGetter_float____ctor
                    (pDVar11,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact
                     ,(MethodInfo_13878F0 *)0x0);
          pDVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
          DG_Tweening_Core_DOSetter_float____ctor
                    (pDVar12,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cb50
                     ,(MethodInfo_E5A750 *)0x0);
          pDVar13 = DG_Tweening_DOTween__To(pDVar11,pDVar12,1.0,0.16,(MethodInfo *)0x0);
          pDVar14 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetEase_object_
                              ((Il2CppObject *)pDVar13,6,
                               (MethodInfo_7C9BC0 *)
                               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                              );
          pDVar10 = DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar14,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Object_o *)(object->fields).preservedTile;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pUVar9 = (object->fields).preservedTile;
            if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1823c5db9;
            pUVar8 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar9,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
          }
          else {
            pUVar8 = (UnityEngine_CanvasGroup_o *)0x0;
          }
          (object->fields).preservedGroup = pUVar8;
          Il2CppCodeGenWriteBarrier(&(object->fields).preservedGroup,pUVar8);
          pUVar3 = (UnityEngine_Object_o *)(object->fields).preservedTile;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pUVar9 = (object->fields).preservedTile;
            if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1823c5db9;
            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar9,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          }
          else {
            pUVar6 = (UnityEngine_RectTransform_o *)0x0;
          }
          (object->fields).preservedRect = pUVar6;
          Il2CppCodeGenWriteBarrier(&(object->fields).preservedRect,pUVar6);
          pUVar3 = (UnityEngine_Object_o *)(object->fields).preservedTile;
          if (Il2CppMethodInitialized_184347d87 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_184347d87 = '\x01';
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pGVar15 = (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0;
          }
          else {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_1823c5db9;
            pGVar15 = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                                ((UnityEngine_GameObject_o *)pUVar3,true,
                                 (MethodInfo_6F5110 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur
                                );
          }
          (object->fields).preservedBlur = pGVar15;
          Il2CppCodeGenWriteBarrier(&(object->fields).preservedBlur,pGVar15);
          pUVar6 = (object->fields).preservedRect;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pUVar6 = (object->fields).preservedRect;
            if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c5db9;
            local_58[0].m_XMin = (startPosition->fields).x;
            local_58[0].m_YMin = (startPosition->fields).y;
            local_58[0].m_Width = (startPosition->fields).z;
            UnityEngine_Transform__set_position
                      ((UnityEngine_Transform_o *)pUVar6,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
            pUVar6 = (object->fields).preservedRect;
            pUVar16 = UnityEngine_RectTransform__get_rect
                                ((UnityEngine_Rect_o *)local_58,pUVar17,(MethodInfo *)0x0);
            fVar1 = (pUVar16->fields).m_Width;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            pUVar16 = UnityEngine_RectTransform__get_rect
                                ((UnityEngine_Rect_o *)local_58,pUVar17,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c5db9;
            value.fields.y = (pUVar16->fields).m_Height;
            value.fields.x = fVar1;
            UnityEngine_RectTransform__set_sizeDelta(pUVar6,value,(MethodInfo *)0x0);
            pUVar17 = (object->fields).preservedRect;
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            if (pUVar17 == (UnityEngine_RectTransform_o *)0x0) goto label_1823c5db9;
            pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_58[0].m_XMin = (pUVar4->oneVector).fields.x;
            local_58[0].m_YMin = (pUVar4->oneVector).fields.y;
            local_58[0].m_Width = (pUVar4->oneVector).fields.z;
            UnityEngine_Transform__set_localScale
                      ((UnityEngine_Transform_o *)pUVar17,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0)
            ;
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
            DG_Tweening_Core_DOGetter_Vector3____ctor
                      (__this,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cc30
                       ,(MethodInfo_1387860 *)0x0);
            setter = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
            DG_Tweening_Core_DOSetter_Vector3____ctor
                      ((UnityEngine_AdaptivePerformance_ThermalEventHandler_o *)setter,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cd10
                       ,(MethodInfo *)0x0);
            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
            }
            local_58[0]._0_8_ = uVar2;
            local_58[0].m_Width = fVar18;
            t = DG_Tweening_DOTween__To_54b770
                          (__this,setter,(UnityEngine_Vector3_o *)local_58,0.16,(MethodInfo *)0x0);
            pDVar14 = (DG_Tweening_Tween_o *)
                      DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                ((Il2CppObject *)t,9,
                                 (MethodInfo_7C9BC0 *)
                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                );
            DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar14,(MethodInfo *)0x0);
          }
          pUVar8 = (object->fields).preservedGroup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pDVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
            DG_Tweening_Core_DOGetter_float____ctor
                      (pDVar11,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cdf0
                       ,(MethodInfo_13878F0 *)0x0);
            pDVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
            DG_Tweening_Core_DOSetter_float____ctor
                      (pDVar12,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408ced0
                       ,(MethodInfo_E5A750 *)0x0);
            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
            }
            pDVar13 = DG_Tweening_DOTween__To(pDVar11,pDVar12,0.0,0.16,(MethodInfo *)0x0);
            pDVar14 = (DG_Tweening_Tween_o *)
                      DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                ((Il2CppObject *)pDVar13,5,
                                 (MethodInfo_7C9BC0 *)
                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                );
            DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar14,(MethodInfo *)0x0);
          }
          pGVar15 = (object->fields).preservedBlur;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            object_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1
                                  );
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,
                       (MethodInfo *)0x0);
            pGVar15 = (object->fields).preservedBlur;
            if ((pGVar15 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) ||
               (fVar18 = Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur(pGVar15,(MethodInfo *)0x0)
               , object_00 ==
                 (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass6_1_o *)0x0))
            goto label_1823c5db9;
            (object_00->fields).startBlur = fVar18;
            pDVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
            DG_Tweening_Core_DOGetter_float____ctor
                      (pDVar11,(Il2CppObject *)object_00,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1_ContinueIntoCompact
                       ,(MethodInfo_13878F0 *)0x0);
            pDVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
            DG_Tweening_Core_DOSetter_float____ctor
                      (pDVar12,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408d090
                       ,(MethodInfo_E5A750 *)0x0);
            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
            }
            pDVar13 = DG_Tweening_DOTween__To(pDVar11,pDVar12,0.0,0.16,(MethodInfo *)0x0);
            pDVar14 = (DG_Tweening_Tween_o *)
                      DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                ((Il2CppObject *)pDVar13,9,
                                 (MethodInfo_7C9BC0 *)
                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                );
            DG_Tweening_TweenSettingsExtensions__Join(pDVar10,pDVar14,(MethodInfo *)0x0);
          }
          action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
          DG_Tweening_TweenCallback___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_408cfb0
                     ,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                    ((Il2CppObject *)pDVar10,action,
                     (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
          return;
        }
      }
    }
  }
label_1823c5db9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$HideRebuiltTarget
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__HideRebuiltTarget (UnityEngine_Transform_o* root, System_String_o* targetId, const MethodInfo* method);
// 0x1823c7090

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__HideRebuiltTarget
               (UnityEngine_Transform_o *root,System_String_o *targetId,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *x;
  
  if (Il2CppMethodInitialized_184347d85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_184347d85 = '\x01';
  }
  pUVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
                     (root,targetId,(MethodInfo *)0x0);
  x = (UnityEngine_Transform_o *)0x0;
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     ((UnityEngine_RectTransform_c *)pUVar2->klass == TypeInfo_UnityEngine_RectTransform)) {
    x = pUVar2;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (x != (UnityEngine_Transform_o *)0x0) {
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)x,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1823c71b6;
      __this = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    }
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this,false,(MethodInfo *)0x0);
      return;
    }
  }
label_1823c71b6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$CreatePreservedTile
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreatePreservedTile (UnityEngine_RectTransform_o* selected, UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x1823c5dc0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreatePreservedTile
          (UnityEngine_RectTransform_o *selected,UnityEngine_Transform_o *root,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_GameObject_o *original;
  UnityEngine_Object_o *__this;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_UI_LayoutElement_o *exists;
  UnityEngine_Object_o *pUVar5;
  
  if (Il2CppMethodInitialized_184347d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9aa0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"-handoff");
    Il2CppMethodInitialized_184347d86 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)selected,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (selected != (UnityEngine_RectTransform_o *)0x0) {
        original = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)selected,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        __this = (UnityEngine_Object_o *)
                 UnityEngine_Object__Instantiate_object__746cb0
                           ((Il2CppObject *)original,root,true,
                            (MethodInfo_746CB0 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject_40a9aa0)
        ;
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selected,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Object_o *)0x0) {
          pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat_1969e50(pSVar4,"-handoff",(MethodInfo *)0x0);
          if (__this != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_name(__this,pSVar4,(MethodInfo *)0x0);
            __this_00 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)__this,
                                   (MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
            bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            if (!bVar2) {
              __this_00 = UnityEngine_GameObject__AddComponent_object_
                                    ((UnityEngine_GameObject_o *)__this,
                                     (MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
            }
            if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
              UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,false,(MethodInfo *)0x0);
              UnityEngine_CanvasGroup__set_interactable(__this_00,false,(MethodInfo *)0x0);
              exists = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)__this,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
              if (!bVar2) {
                exists = UnityEngine_GameObject__AddComponent_object_
                                   ((UnityEngine_GameObject_o *)__this,
                                    (MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
              }
              if (exists != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(exists->klass->vtable)._28_set_ignoreLayout.methodPtr)
                          (exists,true,(exists->klass->vtable)._28_set_ignoreLayout.method);
                pUVar5 = (UnityEngine_Object_o *)
                         UnityEngine_GameObject__GetComponent_2f19dc0
                                   ((UnityEngine_GameObject_o *)__this,"FlexLayout",(MethodInfo *)0x0
                                   );
                pUVar3 = (UnityEngine_Object_o *)0x0;
                if (pUVar5 != (UnityEngine_Object_o *)0x0) {
                  bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
                  if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
                     (bVar2 = true,
                     (pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                     (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)) {
                    bVar2 = false;
                  }
                  if (bVar2) {
                    pUVar3 = pUVar5;
                  }
                }
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar2 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar2) {
                  if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_1823c6094;
                  UnityEngine_Behaviour__set_enabled
                            ((UnityEngine_Behaviour_o *)pUVar3,false,(MethodInfo *)0x0);
                }
                return (UnityEngine_GameObject_o *)__this;
              }
            }
          }
        }
      }
label_1823c6094:
      ThrowNullReferenceException();
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindPreservedBlur
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindPreservedBlur (UnityEngine_GameObject_o* preservedTile, const MethodInfo* method);
// 0x1823c6d10

Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindPreservedBlur
          (UnityEngine_GameObject_o *preservedTile,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347d87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d87 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)preservedTile,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (preservedTile != (UnityEngine_GameObject_o *)0x0) {
      pGVar2 = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                         (preservedTile,true,
                          (MethodInfo_6F5110 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInChildren_GisketchLogoMotionBlur);
      return pGVar2;
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindActiveByName
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x1823c6a90
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c6b36: mov rax, rdi
// asm:   0x1823c6b39: jmp 0x1823c6b9f
// asm:   0x1823c6b3f: nop 
// asm:   0x1823c6b98: mov rax, rsi
// asm:   0x1823c6b9b: jmp 0x1823c6b9f

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar3;
  int index;
  
  if (Il2CppMethodInitialized_184347d88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d88 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (parent == (UnityEngine_Transform_o *)0x0) {
label_1823c6bb4:
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)parent,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_1823c6bb4;
      bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
      if (bVar1) {
        return parent;
      }
    }
    for (index = 0; iVar2 = UnityEngine_Transform__get_childCount(parent,(MethodInfo *)0x0), index < iVar2;
        index = index + 1) {
      pUVar3 = UnityEngine_Transform__GetChild(parent,index,(MethodInfo *)0x0);
      pUVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindActiveByName
                         (pUVar3,name,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return pUVar3;
      }
    }
  }
  return (UnityEngine_Transform_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$AddOuterCollapse
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__AddOuterCollapse (DG_Tweening_Sequence_o* sequence, UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x1823c5240

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__AddOuterCollapse
               (DG_Tweening_Sequence_o *sequence,UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  float fVar3;
  uint32_t length;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o *object;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_array *pUVar5;
  UnityEngine_Transform_o *__this;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar6;
  uint index;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184347d89 == '\0') {
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
    Il2CppMethodInitialized_184347d89 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass11_0_o *)0x0) {
    (object->fields).tile = tile;
    Il2CppCodeGenWriteBarrier(&(object->fields).tile,tile);
    pUVar2 = (object->fields).tile;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__get_localScale
                         (&local_18,(UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
      fVar1 = (pUVar4->fields).z;
      fVar3 = (pUVar4->fields).y;
      (object->fields).tileScale.fields.x = (pUVar4->fields).x;
      (object->fields).tileScale.fields.y = fVar3;
      (object->fields).tileScale.fields.z = fVar1;
      pUVar2 = (object->fields).tile;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        length = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
        (object->fields).childCount = length;
        pUVar5 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,length);
        (object->fields).childScales = pUVar5;
        Il2CppCodeGenWriteBarrier(&(object->fields).childScales,pUVar5);
        index = 0;
        while( true ) {
          if ((object->fields).childCount <= (int)index) {
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor
                      ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass11_0_AddOuterCollapse_b
                       ,(MethodInfo_E5A750 *)0x0);
            pDVar6 = DG_Tweening_DOVirtual__Float(1.0,0.14,0.075,__this_00,(MethodInfo *)0x0);
            pDVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                               ((Il2CppObject *)pDVar6,10,
                                (MethodInfo_7C9BC0 *)
                                MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
            DG_Tweening_TweenSettingsExtensions__Insert
                      (sequence,0.025,(DG_Tweening_Tween_o *)pDVar6,(MethodInfo *)0x0);
            return;
          }
          pUVar2 = (object->fields).tile;
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) break;
          pUVar5 = (object->fields).childScales;
          __this = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pUVar2,index,(MethodInfo *)0x0);
          if (__this == (UnityEngine_Transform_o *)0x0) break;
          pUVar4 = UnityEngine_Transform__get_localScale(&local_18,__this,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Vector3_array *)0x0) break;
          if ((uint)pUVar5->max_length <= index) {
            ThrowIndexOutOfRangeException();
          }
          fVar3 = (pUVar4->fields).y;
          fVar1 = (pUVar4->fields).z;
          pUVar5->m_Items[(int)index].fields.x = (pUVar4->fields).x;
          pUVar5->m_Items[(int)index].fields.y = fVar3;
          pUVar5->m_Items[(int)index].fields.z = fVar1;
          index = index + 1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindLabelGroup
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindLabelGroup (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x1823c6bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c6c1f: nop 

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
  
  if (Il2CppMethodInitialized_184347d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    Il2CppMethodInitialized_184347d8a = '\x01';
  }
  index = 0;
  if (tile != (UnityEngine_RectTransform_o *)0x0) {
    while( true ) {
      iVar2 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)tile,(MethodInfo *)0x0);
      if (iVar2 <= index) {
        return (UnityEngine_CanvasGroup_o *)0x0;
      }
      __this = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)tile,index,(MethodInfo *)0x0);
      if (__this == (UnityEngine_Transform_o *)0x0) goto label_1823c6d01;
      __this_00 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (System_String_o *)0x0) goto label_1823c6d01;
      bVar1 = System_String__EndsWith(__this_00,"-label",(MethodInfo *)0x0);
      if (bVar1) break;
      index = index + 1;
    }
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return pUVar3;
    }
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (__this_01,
                          (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
      return pUVar3;
    }
  }
label_1823c6d01:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindVisualBlur
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisualBlur (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x1823c6e60

Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisualBlur
          (UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *image;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d8b = '\x01';
  }
  image = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual(tile,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0;
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)image,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
    if (__this != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
label_1823c6f17:
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup(__this,image,(MethodInfo *)0x0);
      return __this;
    }
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) goto label_1823c6f17;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$StartBackgroundBlend
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__StartBackgroundBlend (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x1823c80e0

void Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__StartBackgroundBlend
               (UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *object;
  UnityEngine_UI_Image_o *pUVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_DOGetter_float__o *pDVar8;
  DG_Tweening_Core_DOSetter_float__o *pDVar9;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar10;
  DG_Tweening_Tween_o *pDVar11;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347d8c == '\0') {
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
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_408b570
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_408b650
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_408b730
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Game Create Compact Background Blend");
    Il2CppMethodInitialized_184347d8c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  pUVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual(tile,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass14_0_o *)0x0) {
    (object->fields).source = pUVar3;
    Il2CppCodeGenWriteBarrier(&(object->fields).source,pUVar3);
    pUVar3 = (object->fields).source;
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
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if ((pSVar4 != (System_Type_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar4;
        Il2CppCodeGenWriteBarrier(components->m_Items,pSVar4);
        pSVar4 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Type_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar4,(((components->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar4;
          Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar4);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(__this,"Game Create Compact Background Blend",components,(MethodInfo *)0x0);
          if ((__this != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar6 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_2f5a7e0
                      (pUVar6,(UnityEngine_Transform_o *)tile,false,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            pUVar3 = (object->fields).source;
            if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
               ((__this_00 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
                __this_00 != (UnityEngine_Transform_o *)0x0 &&
                (iVar2 = UnityEngine_Transform__GetSiblingIndex(__this_00,(MethodInfo *)0x0),
                pUVar6 != (UnityEngine_Transform_o *)0x0)))) {
              UnityEngine_Transform__SetSiblingIndex(pUVar6,iVar2 + 1,(MethodInfo *)0x0);
              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                    (__this,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                if (Il2CppMethodInitialized_184341f36 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_184341f36 = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMin
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMax
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                   (__this,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                (object->fields).image = pUVar3;
                Il2CppCodeGenWriteBarrier(&(object->fields).image,pUVar3);
                pUVar3 = (object->fields).image;
                if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                  local_18.r = 0.09;
                  local_18.g = 0.09;
                  local_18.b = 0.09;
                  local_18.a = 0.0;
                  (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                            (pUVar3,(UnityEngine_Color_o *)&local_18,
                             (pUVar3->klass->vtable)._23_set_color.method);
                  pUVar3 = (object->fields).image;
                  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
                    pUVar3 = (object->fields).source;
                    if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                      (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                                ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_18,
                                 pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
                      if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                      }
                      pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                         ((Il2CppObject *)pDVar7,true,
                                          (MethodInfo_7CA3D0 *)
                                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
                      pDVar8 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                      DG_Tweening_Core_DOGetter_float____ctor
                                (pDVar8,(Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle
                                 ,(MethodInfo_13878F0 *)0x0);
                      pDVar9 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                      DG_Tweening_Core_DOSetter_float____ctor
                                (pDVar9,(Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_408b570
                                 ,(MethodInfo_E5A750 *)0x0);
                      pDVar10 = DG_Tweening_DOTween__To(pDVar8,pDVar9,1.0,0.29,(MethodInfo *)0x0);
                      pDVar11 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                          ((Il2CppObject *)pDVar10,1,
                                           (MethodInfo_7C9BC0 *)
                                           MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                          );
                      pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar11,(MethodInfo *)0x0);
                      pDVar8 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                      DG_Tweening_Core_DOGetter_float____ctor
                                (pDVar8,(Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_408b650
                                 ,(MethodInfo_13878F0 *)0x0);
                      pDVar9 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                      DG_Tweening_Core_DOSetter_float____ctor
                                (pDVar9,(Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_408b730
                                 ,(MethodInfo_E5A750 *)0x0);
                      pDVar10 = DG_Tweening_DOTween__To(pDVar8,pDVar9,0.0,0.29,(MethodInfo *)0x0);
                      pDVar11 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                          ((Il2CppObject *)pDVar10,1,
                                           (MethodInfo_7C9BC0 *)
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
          goto label_1823c86a6;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_1823c86a6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$CreateShearVisual
// il2cpp: UnityEngine_CanvasGroup_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreateShearVisual (UnityEngine_RectTransform_o* tile, float rise, DG_Tweening_Sequence_o* sequence, const MethodInfo* method);
// 0x1823c60a0

UnityEngine_CanvasGroup_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__CreateShearVisual
          (UnityEngine_RectTransform_o *tile,float rise,DG_Tweening_Sequence_o *sequence,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar11;
  Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *object;
  UnityEngine_UI_Image_o *__this;
  System_Type_array *components;
  System_Type_o *pSVar12;
  Il2CppObject *pIVar13;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Quaternion_o *pUVar18;
  UnityEngine_Rect_o *pUVar19;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar20;
  DG_Tweening_Core_DOGetter_Vector3__o *pDVar21;
  DG_Tweening_Core_DOSetter_Vector3__o *pDVar22;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar23;
  DG_Tweening_Tween_o *pDVar24;
  DG_Tweening_Core_DOGetter_float__o *__this_03;
  DG_Tweening_Core_DOSetter_float__o *__this_04;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Rect_Fields local_a8 [9];
  
  if (Il2CppMethodInitialized_184347d8d == '\0') {
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
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408b8f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408b9d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bab0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bb90
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bc70
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bd50
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Game Create Vertical Shear");
    Il2CppMethodInitialized_184347d8d = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  __this = Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual(tile,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar11) {
    return (UnityEngine_CanvasGroup_o *)0x0;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar12 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1823c6a7b:
    ThrowNullReferenceException();
  }
  if ((pSVar12 != (System_Type_o *)0x0) &&
     (pIVar13 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar12,(((components->obj).klass)->_1).element_class)
     , pIVar13 == (Il2CppObject *)0x0)) {
    pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar12;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar12);
    pSVar12 = System_Type__GetTypeFromHandle
                        ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if ((pSVar12 != (System_Type_o *)0x0) &&
       (pIVar13 = il2cpp_vm_Object_IsInst
                            ((Il2CppObject *)pSVar12,(((components->obj).klass)->_1).element_class),
       pIVar13 == (Il2CppObject *)0x0)) {
      pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar12;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar12);
      pSVar12 = System_Type__GetTypeFromHandle
                          ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasGroup,(MethodInfo *)0x0);
      if ((pSVar12 != (System_Type_o *)0x0) &&
         (pIVar13 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)pSVar12,(((components->obj).klass)->_1).element_class),
         pIVar13 == (Il2CppObject *)0x0)) {
        pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar12;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar12);
        pSVar12 = System_Type__GetTypeFromHandle
                            ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_Canvas,(MethodInfo *)0x0);
        if ((pSVar12 != (System_Type_o *)0x0) &&
           (pIVar13 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pSVar12,(((components->obj).klass)->_1).element_class),
           pIVar13 == (Il2CppObject *)0x0)) {
          pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
        }
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar12;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar12);
          pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(pUVar14,"Game Create Vertical Shear",components,(MethodInfo *)0x0);
          if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition___c__DisplayClass15_0_o *)
                        0x0) {
            (object->fields).smear = pUVar14;
            Il2CppCodeGenWriteBarrier(&(object->fields).smear,pUVar14);
            pUVar14 = (object->fields).smear;
            if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
              pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar14,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              (object->fields).rect = pUVar15;
              Il2CppCodeGenWriteBarrier(&(object->fields).rect,pUVar15);
              if (tile != (UnityEngine_RectTransform_o *)0x0) {
                pUVar15 = (object->fields).rect;
                parent = UnityEngine_Transform__GetRoot((UnityEngine_Transform_o *)tile,(MethodInfo *)0x0);
                if ((pUVar15 != (UnityEngine_RectTransform_o *)0x0) &&
                   (UnityEngine_Transform__SetParent_2f5a7e0
                              ((UnityEngine_Transform_o *)pUVar15,parent,true,(MethodInfo *)0x0),
                   __this != (UnityEngine_UI_Image_o *)0x0)) {
                  pUVar15 = (object->fields).rect;
                  pUVar16 = UnityEngine_UI_Graphic__get_rectTransform
                                      ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                  if ((pUVar16 != (UnityEngine_RectTransform_o *)0x0) &&
                     (pUVar17 = UnityEngine_Transform__get_position
                                          ((UnityEngine_Vector3_o *)local_a8,
                                           (UnityEngine_Transform_o *)pUVar16,(MethodInfo *)0x0),
                     pUVar15 != (UnityEngine_RectTransform_o *)0x0)) {
                    local_b8.x = (pUVar17->fields).x;
                    local_b8.y = (pUVar17->fields).y;
                    local_b8.z = (pUVar17->fields).z;
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)pUVar15,(UnityEngine_Vector3_o *)&local_b8,
                               (MethodInfo *)0x0);
                    pUVar15 = (object->fields).rect;
                    pUVar16 = UnityEngine_UI_Graphic__get_rectTransform
                                        ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                    if ((pUVar16 != (UnityEngine_RectTransform_o *)0x0) &&
                       (pUVar18 = UnityEngine_Transform__get_rotation
                                            ((UnityEngine_Quaternion_o *)local_a8,
                                             (UnityEngine_Transform_o *)pUVar16,(MethodInfo *)0x0),
                       pUVar15 != (UnityEngine_RectTransform_o *)0x0)) {
                      local_a8[0].m_XMin = (pUVar18->fields).x;
                      local_a8[0].m_YMin = (pUVar18->fields).y;
                      local_a8[0].m_Width = (pUVar18->fields).z;
                      local_a8[0].m_Height = (pUVar18->fields).w;
                      UnityEngine_Transform__set_rotation
                                ((UnityEngine_Transform_o *)pUVar15,(UnityEngine_Quaternion_o *)local_a8,
                                 (MethodInfo *)0x0);
                      pUVar15 = (object->fields).rect;
                      pUVar16 = UnityEngine_UI_Graphic__get_rectTransform
                                          ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                      if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
                        pUVar19 = UnityEngine_RectTransform__get_rect
                                            ((UnityEngine_Rect_o *)local_a8,pUVar16,(MethodInfo *)0x0);
                        value.fields.x = (pUVar19->fields).m_Width;
                        value.fields.y = (pUVar19->fields).m_Height;
                        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                        }
                        if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta(pUVar15,value,(MethodInfo *)0x0);
                          pUVar15 = (object->fields).rect;
                          if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                            pUVar17 = UnityEngine_Transform__get_localScale
                                                ((UnityEngine_Vector3_o *)local_a8,
                                                 (UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
                            pUVar14 = (object->fields).smear;
                            if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                              fVar1 = (pUVar17->fields).x;
                              fVar2 = (pUVar17->fields).y;
                              fVar3 = (pUVar17->fields).z;
                              __this_00 = UnityEngine_GameObject__GetComponent_object_
                                                    (pUVar14,(MethodInfo_6F5650 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                                UnityEngine_UI_Image__set_sprite
                                          (__this_00,(__this->fields).m_Sprite,(MethodInfo *)0x0);
                                UnityEngine_UI_Image__set_type
                                          (__this_00,(__this->fields).m_Type,(MethodInfo *)0x0);
                                UnityEngine_UI_Image__set_preserveAspect
                                          (__this_00,(__this->fields).m_PreserveAspect,(MethodInfo *)0x0);
                                local_a8[0].m_XMin = 1.0;
                                local_a8[0].m_YMin = 1.0;
                                local_a8[0].m_Width = 1.0;
                                local_a8[0].m_Height = 0.9;
                                (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                                          (__this_00,(UnityEngine_Color_o *)local_a8,
                                           (__this_00->klass->vtable)._23_set_color.method);
                                pUVar14 = (object->fields).smear;
                                if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
                                   (__this_01 = UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar14,(MethodInfo_6F5650 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Canvas),
                                   __this_01 != (UnityEngine_Canvas_o *)0x0)) {
                                  UnityEngine_Canvas__set_overrideSorting(__this_01,true,(MethodInfo *)0x0);
                                  UnityEngine_Canvas__set_sortingOrder(__this_01,100,(MethodInfo *)0x0);
                                  pUVar14 = (object->fields).smear;
                                  if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
                                     (__this_02 = UnityEngine_GameObject__GetComponent_object_
                                                            (pUVar14,(MethodInfo_6F5650 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup
                                                       ), __this_02 != (UnityEngine_CanvasGroup_o *)0x0)) {
                                    UnityEngine_CanvasGroup__set_blocksRaycasts
                                              (__this_02,false,(MethodInfo *)0x0);
                                    UnityEngine_CanvasGroup__set_interactable
                                              (__this_02,false,(MethodInfo *)0x0);
                                    pUVar14 = (object->fields).smear;
                                    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                                      pGVar20 = UnityEngine_GameObject__AddComponent_object_
                                                          (pUVar14,(MethodInfo_6F4D60 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur
                                                       );
                                      (object->fields).blur = pGVar20;
                                      Il2CppCodeGenWriteBarrier(&(object->fields).blur,pGVar20);
                                      pGVar20 = (object->fields).blur;
                                      if (pGVar20 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0
                                         ) {
                                        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup
                                                  (pGVar20,__this_00,(MethodInfo *)0x0);
                                        pDVar21 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
                                        DG_Tweening_Core_DOGetter_Vector3____ctor
                                                  (pDVar21,(Il2CppObject *)object,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual
                                                   ,(MethodInfo_1387860 *)0x0);
                                        pDVar22 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
                                        DG_Tweening_Core_DOSetter_Vector3____ctor
                                                  ((UnityEngine_AdaptivePerformance_ThermalEventHandler_o *)
                                                   pDVar22,(Il2CppObject *)object,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408b8f0
                                                   ,(MethodInfo *)0x0);
                                        pUVar15 = (object->fields).rect;
                                        if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                          pUVar17 = UnityEngine_Transform__get_position
                                                              ((UnityEngine_Vector3_o *)local_a8,
                                                               (UnityEngine_Transform_o *)pUVar15,
                                                               (MethodInfo *)0x0);
                                          uVar6 = (pUVar17->fields).x;
                                          uVar8 = (pUVar17->fields).y;
                                          fVar4 = (pUVar17->fields).z;
                                          if (Il2CppMethodInitialized_18433de5c == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&TypeInfo_UnityEngine_Vector3);
                                            Il2CppMethodInitialized_18433de5c = '\x01';
                                          }
                                          pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                                          fVar5 = (pUVar10->upVector).fields.z;
                                          uVar7 = (pUVar10->upVector).fields.x;
                                          uVar9 = (pUVar10->upVector).fields.y;
                                          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor ==
                                              0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                                          }
                                          local_b8.y = (float)uVar9 * rise * 1.65 + (float)uVar8;
                                          local_b8.x = (float)uVar7 * rise * 1.65 + (float)uVar6;
                                          local_b8.z = rise * fVar5 * 1.65 + fVar4;
                                          pDVar23 = DG_Tweening_DOTween__To_54b770
                                                              (pDVar21,pDVar22,
                                                               (UnityEngine_Vector3_o *)&local_b8,0.1,
                                                               (MethodInfo *)0x0);
                                          pDVar24 = (DG_Tweening_Tween_o *)
                                                    DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                              ((Il2CppObject *)pDVar23,9,
                                                               (MethodInfo_7C9BC0 *)
                                                                                                                              
                                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                                       );
                                          DG_Tweening_TweenSettingsExtensions__Join
                                                    (sequence,pDVar24,(MethodInfo *)0x0);
                                          pDVar21 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_DG_Tweening_Core_DOGetter_Vector3);
                                          DG_Tweening_Core_DOGetter_Vector3____ctor
                                                    (pDVar21,(Il2CppObject *)object,
                                                     (intptr_t)
                                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408b9d0
                                                     ,(MethodInfo_1387860 *)0x0);
                                          pDVar22 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_DG_Tweening_Core_DOSetter_Vector3);
                                          DG_Tweening_Core_DOSetter_Vector3____ctor
                                                    ((UnityEngine_AdaptivePerformance_ThermalEventHandler_o *)
                                                     pDVar22,(Il2CppObject *)object,
                                                     (intptr_t)
                                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bab0
                                                     ,(MethodInfo *)0x0);
                                          local_b8.y = fVar2 * 5.0;
                                          local_b8.x = fVar1 * 1.08;
                                          local_b8.z = fVar3;
                                          pDVar23 = DG_Tweening_DOTween__To_54b770
                                                              (pDVar21,pDVar22,
                                                               (UnityEngine_Vector3_o *)&local_b8,0.1,
                                                               (MethodInfo *)0x0);
                                          pDVar24 = (DG_Tweening_Tween_o *)
                                                    DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                              ((Il2CppObject *)pDVar23,9,
                                                               (MethodInfo_7C9BC0 *)
                                                                                                                              
                                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                                       );
                                          DG_Tweening_TweenSettingsExtensions__Join
                                                    (sequence,pDVar24,(MethodInfo *)0x0);
                                          __this_03 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_DG_Tweening_Core_DOGetter_float);
                                          DG_Tweening_Core_DOGetter_float____ctor
                                                    (__this_03,(Il2CppObject *)object,
                                                     (intptr_t)
                                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bb90
                                                     ,(MethodInfo_13878F0 *)0x0);
                                          __this_04 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_DG_Tweening_Core_DOSetter_float);
                                          DG_Tweening_Core_DOSetter_float____ctor
                                                    (__this_04,(Il2CppObject *)object,
                                                     (intptr_t)
                                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bc70
                                                     ,(MethodInfo_E5A750 *)0x0);
                                          t = DG_Tweening_DOTween__To
                                                        (__this_03,__this_04,rise * 0.5,0.1,(MethodInfo *)0x0)
                                          ;
                                          pDVar24 = (DG_Tweening_Tween_o *)
                                                    DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                              ((Il2CppObject *)t,9,
                                                               (MethodInfo_7C9BC0 *)
                                                                                                                              
                                                       MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                                       );
                                          DG_Tweening_TweenSettingsExtensions__Join
                                                    (sequence,pDVar24,(MethodInfo *)0x0);
                                          callback = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_DG_Tweening_TweenCallback);
                                          DG_Tweening_TweenCallback___ctor
                                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)callback
                                                     ,(Il2CppObject *)object,
                                                     (intptr_t)
                                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_408bd50
                                                     ,(MethodInfo *)0x0);
                                          DG_Tweening_DOVirtual__DelayedCall
                                                    (0.1,callback,true,(MethodInfo *)0x0);
                                          return __this_02;
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
          }
          goto label_1823c6a7b;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindVisual
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual (UnityEngine_RectTransform_o* tile, const MethodInfo* method);
// 0x1823c6f50

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition__FindVisual
          (UnityEngine_RectTransform_o *tile,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184347d8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"-background");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
    Il2CppMethodInitialized_184347d8e = '\x01';
  }
  if ((tile != (UnityEngine_RectTransform_o *)0x0) &&
     (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)tile,true,
                          (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image)
     , pSVar2 != (System_Object_array *)0x0)) {
    uVar5 = 0;
    while( true ) {
      if ((int)pSVar2->max_length <= (int)uVar5) {
        return (UnityEngine_UI_Image_o *)0x0;
      }
      if ((uint)pSVar2->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this = (UnityEngine_UI_Image_o *)pSVar2->m_Items[(int)uVar5];
      if (((__this == (UnityEngine_UI_Image_o *)0x0) ||
          (pUVar3 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
          , pUVar3 == (UnityEngine_Object_o *)0x0)) ||
         (pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0), pSVar4 == (System_String_o *)0x0))
      break;
      bVar1 = System_String__EndsWith(pSVar4,"-preview",(MethodInfo *)0x0);
      if (bVar1) {
        return __this;
      }
      pUVar3 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 == (UnityEngine_Object_o *)0x0) ||
         (pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0), pSVar4 == (System_String_o *)0x0))
      break;
      bVar1 = System_String__EndsWith(pSVar4,"-background",(MethodInfo *)0x0);
      if (bVar1) {
        return __this;
      }
      uVar5 = uVar5 + 1;
    }
  }
  ThrowNullReferenceException();
}


