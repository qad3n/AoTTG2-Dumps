// Type: Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDisabledSelectableOpacity.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, float disabledAlpha, const MethodInfo* method);
// 0x539e910

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,float disabledAlpha,
               MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (disabledAlpha <= 1.0) {
    fVar1 = disabledAlpha;
  }
  (__this->fields)._disabledTint.fields.r = 1.0;
  (__this->fields)._disabledTint.fields.g = 1.0;
  (__this->fields)._disabledTint.fields.b = 1.0;
  (__this->fields)._disabledTint.fields.a = (float)(-(uint)(0.0 <= disabledAlpha) & (uint)fVar1);
  (__this->fields)._initialized = false;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, UnityEngine_Color_o disabledTint, const MethodInfo* method);
// 0x539e950

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup_529e950
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               UnityEngine_Color_o disabledTint,MethodInfo *method)

{
  (__this->fields)._disabledTint.fields = disabledTint.fields;
  (__this->fields)._initialized = false;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x539e960

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  UnityEngine_UI_Graphic_array *pUVar2;
  
  if (Il2CppMethodInitialized_07542b8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    Il2CppMethodInitialized_07542b8f = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Selectable);
  (__this->fields)._selectable = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectable);
  if (Il2CppMethodInitialized_07542b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_07542b91 = '\x01';
  }
  pUVar2 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x539ea40

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *method_00;
  
  if (Il2CppMethodInitialized_07542b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_07542b91 = '\x01';
  }
  method_00 = (UnityEngine_UI_Graphic_array *)
              UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)__this,true,
                         (MethodInfo_34B1260 *)
                         MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics);
  (__this->fields)._initialized = false;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x539eaa0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o tint;
  
  tint.fields.b = 1.0;
  tint.fields.a = 1.0;
  tint.fields.r = 1.0;
  tint.fields.g = 1.0;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyTint(__this,tint,method);
  (__this->fields)._initialized = false;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnTransformChildrenChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x539ece0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *method_00;
  
  if (Il2CppMethodInitialized_07542b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_07542b91 = '\x01';
  }
  method_00 = (UnityEngine_UI_Graphic_array *)
              UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)__this,true,
                         (MethodInfo_34B1260 *)
                         MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics);
  (__this->fields)._initialized = false;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x539ed40

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x5398510

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **targetAddress;
  bool bVar1;
  UnityEngine_UI_Selectable_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_Color_o tint;
  
  if (Il2CppMethodInitialized_07542b90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b90 = '\x01';
  }
  pUVar2 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._selectable;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    (__this->fields)._selectable = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar2 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar3 = true;
  if (!bVar1) {
    if (*targetAddress == (UnityEngine_UI_Selectable_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = ((*targetAddress)->fields).m_Interactable != false;
  }
  if (((__this->fields)._initialized != false) && ((__this->fields)._lastInteractable == bVar3)) {
    return;
  }
  (__this->fields)._initialized = true;
  (__this->fields)._lastInteractable = bVar3;
  if (bVar3 == false) {
    uVar4._0_4_ = (__this->fields)._disabledTint.fields.r;
    uVar4._4_4_ = (__this->fields)._disabledTint.fields.g;
    uVar5._0_4_ = (__this->fields)._disabledTint.fields.b;
    uVar5._4_4_ = (__this->fields)._disabledTint.fields.a;
  }
  else {
    uVar4 = 0x3f8000003f800000;
    uVar5 = uVar4;
  }
  tint.fields.b = (float)(int)uVar5;
  tint.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
  tint.fields.r = (float)(int)uVar4;
  tint.fields.g = (float)(int)((ulong)uVar4 >> 0x20);
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyTint(__this,tint,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$CacheGraphics
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x539e9f0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *pUVar1;
  
  if (Il2CppMethodInitialized_07542b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_07542b91 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$ApplyTint
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyTint (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, UnityEngine_Color_o tint, const MethodInfo* method);
// 0x539eac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539ec8a: jmp 0x539eccb

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyTint
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,UnityEngine_Color_o tint
               ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_Object_o *y;
  bool bVar4;
  UnityEngine_UI_Graphic_array *pUVar5;
  UnityEngine_CanvasGroup_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_CanvasRenderer_o *__this_03;
  ulong uVar6;
  float fStack_64;
  
  if (Il2CppMethodInitialized_07542b92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Toggle);
    Il2CppMethodInitialized_07542b92 = '\x01';
  }
  pUVar5 = (__this->fields)._graphics;
  if (pUVar5 == (UnityEngine_UI_Graphic_array *)0x0) {
    return;
  }
  fStack_64 = tint.fields.a;
  uVar6 = 0;
  do {
    uVar2 = (uint)pUVar5->max_length;
    if ((long)(int)uVar2 <= (long)uVar6) {
      return;
    }
    if (uVar2 <= uVar6) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = pUVar5->m_Items[uVar6];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pUVar3 = (__this->fields)._selectable;
      if (pUVar3 != (UnityEngine_UI_Selectable_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_UI_Toggle->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
           ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_UI_Toggle)) {
          y = (*(uint64_t *)((char *)pUVar3 + 0x108));
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)__this_00,y,(MethodInfo *)0x0);
          if (bVar4) {
            if (__this_00 != (UnityEngine_UI_Graphic_o *)0x0) {
              __this_01 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_00,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar4) {
                __this_02 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_0539eccb;
                __this_01 = UnityEngine_GameObject__AddComponent_object_
                                      (__this_02,
                                       (MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
              }
              if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
                UnityEngine_CanvasGroup__set_alpha(__this_01,fStack_64,(MethodInfo *)0x0);
                goto label_0539eb80;
              }
            }
            goto label_0539eccb;
          }
        }
      }
      if ((__this_00 == (UnityEngine_UI_Graphic_o *)0x0) ||
         (__this_03 = UnityEngine_UI_Graphic__get_canvasRenderer(__this_00,(MethodInfo *)0x0),
         __this_03 == (UnityEngine_CanvasRenderer_o *)0x0)) goto label_0539eccb;
      UnityEngine_CanvasRenderer__SetColor(__this_03,tint,(MethodInfo *)0x0);
    }
label_0539eb80:
    uVar6 = uVar6 + 1;
    pUVar5 = (__this->fields)._graphics;
    if (pUVar5 == (UnityEngine_UI_Graphic_array *)0x0) {
label_0539eccb:
      ThrowNullReferenceException();
    }
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x539ed50

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  (__this->fields)._disabledTint.fields.r = 1.0;
  (__this->fields)._disabledTint.fields.g = 1.0;
  (__this->fields)._disabledTint.fields.b = 1.0;
  (__this->fields)._disabledTint.fields.a = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


