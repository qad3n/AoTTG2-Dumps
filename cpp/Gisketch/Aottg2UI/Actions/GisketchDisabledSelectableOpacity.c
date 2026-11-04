// Type: Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDisabledSelectableOpacity.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, float disabledAlpha, const MethodInfo* method);
// 0x1818fe020

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,float disabledAlpha,
               MethodInfo *method)

{
  if (disabledAlpha < 0.0) {
    disabledAlpha = 0.0;
  }
  else if (1.0 < disabledAlpha) {
    disabledAlpha = 1.0;
  }
  (__this->fields)._disabledAlpha = disabledAlpha;
  (__this->fields)._initialized = false;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fdd90

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *value;
  UnityEngine_UI_Graphic_array *value_00;
  
  if (Il2CppMethodInitialized_184342210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    Il2CppMethodInitialized_184342210 = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Selectable);
  (__this->fields)._selectable = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectable,value);
  if (Il2CppMethodInitialized_184342212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_184342212 = '\x01';
  }
  value_00 = (UnityEngine_UI_Graphic_array *)
             UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic)
  ;
  (__this->fields)._graphics = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics,value_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fdeb0

void
Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable(Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, MethodInfo* method)

{
  UnityEngine_UI_Graphic_array *value;
  
  if (Il2CppMethodInitialized_184342212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_184342212 = '\x01';
  }
  value = (UnityEngine_UI_Graphic_array *)
          UnityEngine_Component__GetComponentsInChildren_object_
                    ((UnityEngine_Component_o *)__this,true,
                     (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics,value);
  (__this->fields)._initialized = false;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fde80

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,1.0,(MethodInfo *)0x0);
  (__this->fields)._initialized = false;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnTransformChildrenChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fdeb0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *value;
  
  if (Il2CppMethodInitialized_184342212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_184342212 = '\x01';
  }
  value = (UnityEngine_UI_Graphic_array *)
          UnityEngine_Component__GetComponentsInChildren_object_
                    ((UnityEngine_Component_o *)__this,true,
                     (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics,value);
  (__this->fields)._initialized = false;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fde70

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fdf10

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  float alpha;
  
  if (Il2CppMethodInitialized_184342211 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342211 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Selectable);
    (__this->fields)._selectable = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._selectable,pUVar3);
  }
  pUVar3 = (__this->fields)._selectable;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    cVar2 = '\x01';
  }
  else {
    pUVar3 = (__this->fields)._selectable;
    if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar2 = (pUVar3->fields).m_Interactable;
  }
  if (((__this->fields)._initialized == false) || ((__this->fields)._lastInteractable != (cVar2 != '\0'))) {
    (__this->fields)._initialized = true;
    (__this->fields)._lastInteractable = cVar2 != '\0';
    if (cVar2 == '\0') {
      alpha = (__this->fields)._disabledAlpha;
    }
    else {
      alpha = 1.0;
    }
    Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,alpha,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$CacheGraphics
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fde20

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *value;
  
  if (Il2CppMethodInitialized_184342212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
    Il2CppMethodInitialized_184342212 = '\x01';
  }
  value = (UnityEngine_UI_Graphic_array *)
          UnityEngine_Component__GetComponentsInChildren_object_
                    ((UnityEngine_Component_o *)__this,true,
                     (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._graphics,value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$ApplyAlpha
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, float alpha, const MethodInfo* method);
// 0x1818fdb80
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fdd59: jmp 0x1818fdbf3
// asm:   0x1818fdd5e: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x1818fdd63: mov rdi, qword ptr [rsp + 0x50]
// asm:   0x1818fdd68: mov rsi, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,float alpha,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_UI_Selectable_o *pUVar2;
  UnityEngine_Object_o *y;
  bool bVar3;
  UnityEngine_UI_Graphic_array *pUVar4;
  UnityEngine_CanvasGroup_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_CanvasRenderer_o *__this_03;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184342213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Toggle);
    Il2CppMethodInitialized_184342213 = '\x01';
  }
  if ((__this->fields)._graphics == (UnityEngine_UI_Graphic_array *)0x0) {
    return;
  }
  pUVar4 = (__this->fields)._graphics;
  uVar5 = 0;
  do {
    if ((int)pUVar4->max_length <= (int)uVar5) {
      return;
    }
    pUVar4 = (__this->fields)._graphics;
    if (pUVar4 == (UnityEngine_UI_Graphic_array *)0x0) goto label_1818fdd78;
    if ((uint)pUVar4->max_length <= uVar5) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = pUVar4->m_Items[(int)uVar5];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar2 = (__this->fields)._selectable;
      if (pUVar2 != (UnityEngine_UI_Selectable_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_UI_Toggle->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
           ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_UI_Toggle)) {
          y = (*(uint64_t *)((char *)pUVar2 + 0x108));
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)__this_00,y,(MethodInfo *)0x0);
          if (bVar3) {
            if (__this_00 != (UnityEngine_UI_Graphic_o *)0x0) {
              __this_01 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_00,
                                     (MethodInfo_6651A0 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar3) {
                __this_02 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_1818fdd78;
                __this_01 = UnityEngine_GameObject__AddComponent_object_
                                      (__this_02,
                                       (MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
              }
              if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
                UnityEngine_CanvasGroup__set_alpha(__this_01,alpha,(MethodInfo *)0x0);
                goto label_1818fdd4c;
              }
            }
            goto label_1818fdd78;
          }
        }
      }
      if ((__this_00 == (UnityEngine_UI_Graphic_o *)0x0) ||
         (__this_03 = UnityEngine_UI_Graphic__get_canvasRenderer(__this_00,(MethodInfo *)0x0),
         __this_03 == (UnityEngine_CanvasRenderer_o *)0x0)) goto label_1818fdd78;
      UnityEngine_CanvasRenderer__SetAlpha(__this_03,alpha,(MethodInfo *)0x0);
    }
label_1818fdd4c:
    pUVar4 = (__this->fields)._graphics;
    uVar5 = uVar5 + 1;
    if (pUVar4 == (UnityEngine_UI_Graphic_array *)0x0) {
label_1818fdd78:
      ThrowNullReferenceException();
    }
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x1818fe050

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  (__this->fields)._disabledAlpha = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


