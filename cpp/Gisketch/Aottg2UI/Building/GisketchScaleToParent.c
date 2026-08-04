// Type: Gisketch.Aottg2UI.Building.GisketchScaleToParent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScaleToParent.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, UnityEngine_RectTransform_o* content, float referenceWidth, float referenceHeight, const MethodInfo* method);
// 0x3b73a50

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,
               UnityEngine_RectTransform_o *content,float referenceWidth,float referenceHeight,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  float fVar2;
  
  if (g_data_057a9e17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057a9e17 = '\x01';
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._root = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._root,pUVar1);
  (__this->fields)._content = content;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._content);
  fVar2 = 1.0;
  if (1.0 <= referenceWidth) {
    fVar2 = referenceWidth;
  }
  (__this->fields)._referenceWidth = fVar2;
  fVar2 = 1.0;
  if (1.0 <= referenceHeight) {
    fVar2 = referenceHeight;
  }
  (__this->fields)._referenceHeight = fVar2;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,(MethodInfo *)content);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b73d00

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  UnityEngine_Vector2_o value_00;
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  undefined8 in_RAX;
  UnityEngine_RectTransform_o *unaff_RBX;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *unaff_R12;
  UnityEngine_RectTransform_o **unaff_R14;
  UnityEngine_RectTransform_o *unaff_R15;
  float fVar3;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Rect_o UVar4;
  
  do {
    __this_00 = __this;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(UnityEngine_RectTransform_o ***)((long)register0x00000020 + -0x10) = unaff_R14;
    *(Gisketch_Aottg2UI_Building_GisketchScaleToParent_o **)((long)register0x00000020 + -0x18) = unaff_R12;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
    if (g_data_057a9e18 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b00;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b0c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e18 = '\x01';
    }
    pUVar2 = (__this_00->fields)._root;
    unaff_R15 = (UnityEngine_RectTransform_o *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b30;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = &(__this_00->fields)._root;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b41;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b57;
      pUVar2 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
      (__this_00->fields)._root = pUVar2;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b67;
      il2cpp_runtime_helper_022b4080(unaff_R14);
    }
    pUVar2 = *unaff_R14;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b7b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b87;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    unaff_RBX = (__this_00->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73ba1;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73bad;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    pUVar2 = (__this_00->fields)._content;
    __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73bd9;
      UnityEngine_RectTransform__set_anchorMin
                (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
      pUVar2 = (__this_00->fields)._content;
      __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73bf5;
        UnityEngine_RectTransform__set_anchorMax
                  (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)(__this_00->fields)._content;
        if (__this != (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c11;
          UnityEngine_RectTransform__set_pivot
                    ((UnityEngine_RectTransform_o *)__this,(UnityEngine_Vector2_o)0x3f80000000000000,
                     (MethodInfo *)0x0);
          unaff_R15 = (__this_00->fields)._content;
          if (g_data_057a694c == '\0') {
            __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)&TypeInfo_Vector2;
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c2b;
            il2cpp_runtime_helper_023445d0();
            g_data_057a694c = '\x01';
          }
          if (unaff_R15 != (UnityEngine_RectTransform_o *)0x0) {
            value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c5a;
            UnityEngine_RectTransform__set_anchoredPosition
                      (unaff_R15,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
            pUVar2 = (__this_00->fields)._content;
            __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              value_00.fields.x = (__this_00->fields)._referenceWidth;
              value_00.fields.y = (__this_00->fields)._referenceHeight;
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c76;
              UnityEngine_RectTransform__set_sizeDelta(pUVar2,value_00,(MethodInfo *)0x0);
              pUVar2 = (__this_00->fields)._root;
              __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
              if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c87;
                UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                if (UVar4.fields.m_Height <= 0.0) {
                  fVar3 = 1.0;
                  pUVar2 = (__this_00->fields)._content;
                  __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) goto label_03b73cce;
                }
                else {
                  pUVar2 = *unaff_R14;
                  __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73ca2;
                    UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                    fVar3 = UVar4.fields.m_Height / (__this_00->fields)._referenceHeight;
                    pUVar2 = (__this_00->fields)._content;
                    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
label_03b73cce:
                      value_01.fields.y = fVar3;
                      value_01.fields.x = fVar3;
                      value_01.fields.z = 1.0;
                      UnityEngine_Transform__set_localScale
                                ((UnityEngine_Transform_o *)pUVar2,value_01,(MethodInfo *)0x0);
                      return;
                    }
                    __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73cf1;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    unaff_R12 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b73d10

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b73ae0

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  UnityEngine_Vector2_o value_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *unaff_RBX;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *unaff_R12;
  UnityEngine_RectTransform_o **unaff_R14;
  UnityEngine_RectTransform_o *unaff_R15;
  float fVar3;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Rect_o UVar4;
  
  do {
    __this_00 = __this;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(UnityEngine_RectTransform_o ***)((long)register0x00000020 + -0x10) = unaff_R14;
    *(Gisketch_Aottg2UI_Building_GisketchScaleToParent_o **)((long)register0x00000020 + -0x18) = unaff_R12;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
    if (g_data_057a9e18 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b00;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b0c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e18 = '\x01';
    }
    pUVar2 = (__this_00->fields)._root;
    unaff_R15 = (UnityEngine_RectTransform_o *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b30;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = &(__this_00->fields)._root;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b41;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b57;
      pUVar2 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
      (__this_00->fields)._root = pUVar2;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b67;
      il2cpp_runtime_helper_022b4080(unaff_R14);
    }
    pUVar2 = *unaff_R14;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b7b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73b87;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    unaff_RBX = (__this_00->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73ba1;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73bad;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    pUVar2 = (__this_00->fields)._content;
    __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73bd9;
      UnityEngine_RectTransform__set_anchorMin
                (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
      pUVar2 = (__this_00->fields)._content;
      __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73bf5;
        UnityEngine_RectTransform__set_anchorMax
                  (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)(__this_00->fields)._content;
        if (__this != (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c11;
          UnityEngine_RectTransform__set_pivot
                    ((UnityEngine_RectTransform_o *)__this,(UnityEngine_Vector2_o)0x3f80000000000000,
                     (MethodInfo *)0x0);
          unaff_R15 = (__this_00->fields)._content;
          if (g_data_057a694c == '\0') {
            __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)&TypeInfo_Vector2;
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c2b;
            il2cpp_runtime_helper_023445d0();
            g_data_057a694c = '\x01';
          }
          if (unaff_R15 != (UnityEngine_RectTransform_o *)0x0) {
            value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c5a;
            UnityEngine_RectTransform__set_anchoredPosition
                      (unaff_R15,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
            pUVar2 = (__this_00->fields)._content;
            __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              value_00.fields.x = (__this_00->fields)._referenceWidth;
              value_00.fields.y = (__this_00->fields)._referenceHeight;
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c76;
              UnityEngine_RectTransform__set_sizeDelta(pUVar2,value_00,(MethodInfo *)0x0);
              pUVar2 = (__this_00->fields)._root;
              __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
              if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73c87;
                UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                if (UVar4.fields.m_Height <= 0.0) {
                  fVar3 = 1.0;
                  pUVar2 = (__this_00->fields)._content;
                  __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) goto label_03b73cce;
                }
                else {
                  pUVar2 = *unaff_R14;
                  __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73ca2;
                    UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                    fVar3 = UVar4.fields.m_Height / (__this_00->fields)._referenceHeight;
                    pUVar2 = (__this_00->fields)._content;
                    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
label_03b73cce:
                      value_01.fields.y = fVar3;
                      value_01.fields.x = fVar3;
                      value_01.fields.z = 1.0;
                      UnityEngine_Transform__set_localScale
                                ((UnityEngine_Transform_o *)pUVar2,value_01,(MethodInfo *)0x0);
                      return;
                    }
                    __this = (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b73cf1;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    unaff_R12 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b73d20

void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  (__this->fields)._referenceWidth = 1920.0;
  (__this->fields)._referenceHeight = 1080.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


