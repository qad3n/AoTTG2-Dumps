// Type: Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDisabledSelectableOpacity.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b27320

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  UnityEngine_UI_Graphic_array *pUVar2;
  
  if (DAT_057015a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Selectable_GetComponent_Selectable);
    DAT_057015a2 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Selectable_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
  (__this->fields)._selectable = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._selectable,pUVar1);
  if (DAT_057015a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Graphic___GetComponentsInChildren_Graphic);
    DAT_057015a4 = '\x01';
  }
  pUVar2 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic___GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar2;
  il2cpp_runtime_glue(&(__this->fields)._graphics,pUVar2);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b27400

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *method_00;
  
  if (DAT_057015a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Graphic___GetComponentsInChildren_Graphic);
    DAT_057015a4 = '\x01';
  }
  method_00 = (UnityEngine_UI_Graphic_array *)
              UnityEngine_Component__GetComponentsInChildren<object>
                        ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic___GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = method_00;
  il2cpp_runtime_glue(&(__this->fields)._graphics);
  *(undefined1 *)&(__this->fields)._initialized = 0;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh
            (__this,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b27460

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,1.0,method);
  *(undefined1 *)&(__this->fields)._initialized = 0;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnTransformChildrenChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b27580

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *method_00;
  
  if (DAT_057015a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Graphic___GetComponentsInChildren_Graphic);
    DAT_057015a4 = '\x01';
  }
  method_00 = (UnityEngine_UI_Graphic_array *)
              UnityEngine_Component__GetComponentsInChildren<object>
                        ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic___GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = method_00;
  il2cpp_runtime_glue(&(__this->fields)._graphics);
  *(undefined1 *)&(__this->fields)._initialized = 0;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh
            (__this,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b275e0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b21920

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  bool_conflict bVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  bool bVar4;
  MethodInfo *method_00;
  float alpha;
  
  if (DAT_057015a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015a3 = '\x01';
  }
  pUVar3 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._selectable;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar3 = (UnityEngine_UI_Selectable_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
    (__this->fields)._selectable = pUVar3;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar3 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar4 = true;
  if ((char)bVar2 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar4 = (char)((*ppUVar1)->fields).m_Interactable != '\0';
  }
  if (((char)(__this->fields)._initialized != '\0') &&
     ((bool)*(char *)((long)&(__this->fields)._initialized + 1) == bVar4)) {
    return;
  }
  *(undefined1 *)&(__this->fields)._initialized = 1;
  *(bool *)((long)&(__this->fields)._initialized + 1) = bVar4;
  if (bVar4 == false) {
    alpha = 0.5;
  }
  else {
    alpha = 1.0;
  }
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,alpha,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$CacheGraphics
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b273b0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *pUVar1;
  
  if (DAT_057015a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Graphic___GetComponentsInChildren_Graphic);
    DAT_057015a4 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic___GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._graphics,pUVar1);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$ApplyAlpha
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, float alpha, const MethodInfo* method);
// 0x3b27480

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,float alpha,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Graphic_o *x;
  bool_conflict bVar2;
  UnityEngine_UI_Graphic_array *pUVar3;
  UnityEngine_CanvasRenderer_o *__this_00;
  ulong uVar4;
  
  if (DAT_057015a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015a5 = '\x01';
  }
  pUVar3 = (__this->fields)._graphics;
  if (pUVar3 != (UnityEngine_UI_Graphic_array *)0x0) {
    uVar4 = 0;
    uVar1 = (uint)pUVar3->max_length;
    if (0 < (int)uVar1) {
      do {
        if (uVar1 <= uVar4) {
LAB_03b2756e:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        x = pUVar3->m_Items[uVar4];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pUVar3 = (__this->fields)._graphics;
          if (pUVar3 == (UnityEngine_UI_Graphic_array *)0x0) goto LAB_03b27569;
          if ((uint)pUVar3->max_length <= uVar4) goto LAB_03b2756e;
          if ((pUVar3->m_Items[uVar4] == (UnityEngine_UI_Graphic_o *)0x0) ||
             (__this_00 = UnityEngine_UI_Graphic__get_canvasRenderer
                                    (pUVar3->m_Items[uVar4],(MethodInfo *)0x0),
             __this_00 == (UnityEngine_CanvasRenderer_o *)0x0)) goto LAB_03b27569;
          UnityEngine_CanvasRenderer__SetAlpha(__this_00,alpha,(MethodInfo *)0x0);
        }
        uVar4 = uVar4 + 1;
        pUVar3 = (__this->fields)._graphics;
        if (pUVar3 == (UnityEngine_UI_Graphic_array *)0x0) {
LAB_03b27569:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar1 = (uint)pUVar3->max_length;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b275f0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


