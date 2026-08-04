// Type: Gisketch.Aottg2UI.Building.GisketchLayoutOffset
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchLayoutOffset.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$get_MotionOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b736d0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._motionOffset.fields;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$For
// il2cpp: Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b736e0

Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *extraout_RAX;
  
  if (g_data_057a9e14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayoutOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchLayoutOffset_AddComponent_GisketchLayoutOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e14 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar3 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)rect;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)rect,MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayoutOffset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return pGVar3;
    }
    __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    pGVar3 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)rect;
    if (__this != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this,MethodInfo_GisketchLayoutOffset_AddComponent_GisketchLayoutOffset);
      if (g_data_057a694c == '\0') {
        __this = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)&TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      pGVar3 = __this;
      if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        UVar1 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
        if (g_data_057a9e15 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
          g_data_057a9e15 = '\x01';
        }
        (__this_00->fields)._layoutOffset.fields = UVar1;
        pMVar4 = (MethodInfo *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        (__this_00->fields)._rect = (UnityEngine_RectTransform_o *)pMVar4;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._rect);
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this_00,pMVar4);
        return __this_00;
      }
    }
  }
  UVar1 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e15 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057a9e15 = '\x01';
  }
  (pGVar3->fields)._layoutOffset.fields = UVar1;
  pMVar4 = (MethodInfo *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pGVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
  (pGVar3->fields)._rect = (UnityEngine_RectTransform_o *)pMVar4;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields)._rect);
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(pGVar3,pMVar4);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3b73850

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (g_data_057a9e15 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057a9e15 = '\x01';
  }
  (__this->fields)._layoutOffset.fields = offset.fields;
  method_00 = (MethodInfo *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._rect = (UnityEngine_RectTransform_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rect);
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$SetMotionOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3b73a20

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  (__this->fields)._motionOffset.fields = offset.fields;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b73a30

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b738b0

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_00;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_o value;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (g_data_057a9e16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e16 = '\x01';
  }
  pUVar4 = (__this->fields)._rect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._rect;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this->fields)._rect = pUVar4;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar4 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UVar5 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(*ppUVar1,(MethodInfo *)0x0);
    if ((char)(__this->fields)._hasBase != '\0') {
      UVar2 = (__this->fields)._lastOffset.fields;
      fVar8 = UVar2.x;
      fVar7 = UVar2.y;
      UVar2 = (__this->fields)._basePosition.fields;
      fVar6 = UVar5.x;
      fVar9 = fVar6 - (UVar2.x + fVar8);
      fVar10 = UVar5.y - (UVar2.y + fVar7);
      if (fVar10 * fVar10 + fVar9 * fVar9 < 0.01) {
        UVar5.y = UVar5.y - fVar7;
        UVar5.x = fVar6 - fVar8;
      }
    }
    (__this->fields)._basePosition.fields = UVar5;
    pUVar4 = (__this->fields)._rect;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = (__this->fields)._layoutOffset.fields;
      UVar2 = (__this->fields)._motionOffset.fields;
      fVar6 = UVar2.x + UVar5.x;
      fVar8 = UVar2.y + UVar5.y;
      UVar2.y = fVar8;
      UVar2.x = fVar6;
      UVar5 = (__this->fields)._basePosition.fields;
      value.fields.x = UVar5.x + fVar6;
      value.fields.y = UVar5.y + fVar8;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
      (__this->fields)._lastOffset.fields = UVar2;
      *(undefined1 *)&(__this->fields)._hasBase = 1;
      return;
    }
  }
  __this_00 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
  UVar5 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  (__this_00->fields)._motionOffset.fields = UVar5;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this_00,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b73a40

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


