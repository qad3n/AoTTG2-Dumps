// Type: Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSidePanelOutlineSkew.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, float bottomOffset, const MethodInfo* method);
// 0x3b1b540

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,float bottomOffset
               ,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_UI_Graphic_o *pUVar1;
  
  (__this->fields)._bottomOffset = bottomOffset;
  pUVar1 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Graphic_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetVerticesDirty.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(pUVar1->klass->vtable)._28_SetVerticesDirty.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x3b1b570

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,
               UnityEngine_UI_VertexHelper_o *vh,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  UnityEngine_UIVertex_o value;
  char cVar3;
  MethodInfo *extraout_RDX;
  int iVar4;
  System_Collections_Generic_List_UIVertex__o *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_stack_fffffffffffffe64;
  float fStack_198;
  UnityEngine_UIVertex_o UStack_108;
  float fStack_40;
  float fStack_3c;
  
  if (DAT_05701557 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_UIVertex_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05701557 = '\x01';
    method = extraout_RDX;
  }
  cVar3 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                    (__this,(__this->klass->vtable)._9_IsActive.method,method);
  if (cVar3 == '\0') {
    return;
  }
  fVar7 = (__this->fields)._bottomOffset;
  if (DAT_056fdea3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mathf);
    DAT_056fdea3 = '\x01';
  }
  fVar8 = ABS(fVar7);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar6 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
  fVar9 = fVar8 * 1e-06;
  if (fVar8 * 1e-06 <= fVar6) {
    fVar9 = fVar6;
  }
  if (ABS(0.0 - fVar7) < fVar9) {
    return;
  }
  pSVar5 = (__this->fields)._vertices;
  if (pSVar5 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar5->fields)._size = 0;
    if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
      UnityEngine_UI_VertexHelper__GetUIVertexStream(vh,pSVar5,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._vertices;
      if (pSVar5 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        if ((pSVar5->fields)._size == 0) {
          return;
        }
        System_Collections_Generic_List<UIVertex>__get_Item(&UStack_108,pSVar5,0,MethodInfo_UIVertex_get_Item);
        pSVar5 = (__this->fields)._vertices;
        if (pSVar5 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
          iVar4 = 1;
          fStack_198 = UStack_108.fields.position.fields.y;
          fVar7 = UStack_108.fields.position.fields.y;
          do {
            iVar2 = (pSVar5->fields)._size;
            if (iVar2 <= iVar4) {
              if (iVar2 < 1) goto LAB_03b1b9bc;
              fVar8 = 1.0;
              if (1.0 <= fVar7 - fStack_198) {
                fVar8 = fVar7 - fStack_198;
              }
              iVar4 = 0;
              goto LAB_03b1b7c0;
            }
            System_Collections_Generic_List<UIVertex>__get_Item
                      (&UStack_108,pSVar5,iVar4,MethodInfo_UIVertex_get_Item);
            if (UStack_108.fields.position.fields.y <= fStack_198) {
              fStack_198 = UStack_108.fields.position.fields.y;
            }
            if (fVar7 <= UStack_108.fields.position.fields.y) {
              fVar7 = UStack_108.fields.position.fields.y;
            }
            iVar4 = iVar4 + 1;
            pSVar5 = (__this->fields)._vertices;
          } while (pSVar5 != (System_Collections_Generic_List_UIVertex__o *)0x0);
        }
      }
    }
  }
LAB_03b1b9ee:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03b1b7c0:
  System_Collections_Generic_List<UIVertex>__get_Item(&UStack_108,pSVar5,iVar4,MethodInfo_UIVertex_get_Item);
  pSVar5 = (__this->fields)._vertices;
  fStack_40 = UStack_108.fields.uv3.fields.y;
  fStack_3c = UStack_108.fields.uv3.fields.z;
  if (pSVar5 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto LAB_03b1b9ee;
  fVar9 = (UStack_108.fields.position.fields.y - fStack_198) / fVar8;
  fVar7 = 1.0;
  if (fVar9 <= 1.0) {
    fVar7 = fVar9;
  }
  UStack_108.fields.position.fields.x =
       UStack_108.fields.position.fields.x +
       (__this->fields)._bottomOffset *
       (float)(~-(uint)(0.0 <= fVar9) & 0x3f800000 | (uint)(1.0 - fVar7) & -(uint)(0.0 <= fVar9));
  value.fields.uv2.fields.y = UStack_108.fields.uv2.fields.y;
  value.fields.uv2.fields.x = UStack_108.fields.uv2.fields.x;
  value.fields.uv1.fields.y = UStack_108.fields.uv1.fields.y;
  value.fields.uv1.fields.x = UStack_108.fields.uv1.fields.x;
  value.fields.uv1.fields.w = UStack_108.fields.uv1.fields.w;
  value.fields.uv1.fields.z = UStack_108.fields.uv1.fields.z;
  value.fields.position.fields.y = UStack_108.fields.position.fields.y;
  value.fields.position.fields.x = UStack_108.fields.position.fields.x;
  value.fields.normal.fields.x = UStack_108.fields.normal.fields.x;
  value.fields.position.fields.z = UStack_108.fields.position.fields.z;
  value.fields.normal.fields.z = UStack_108.fields.normal.fields.z;
  value.fields.normal.fields.y = UStack_108.fields.normal.fields.y;
  value.fields.tangent.fields.y = UStack_108.fields.tangent.fields.y;
  value.fields.tangent.fields.x = UStack_108.fields.tangent.fields.x;
  value.fields.tangent.fields.w = UStack_108.fields.tangent.fields.w;
  value.fields.tangent.fields.z = UStack_108.fields.tangent.fields.z;
  value.fields.color.fields.r = UStack_108.fields.color.fields.r;
  value.fields.color.fields.g = UStack_108.fields.color.fields.g;
  value.fields.color.fields.b = UStack_108.fields.color.fields.b;
  value.fields.color.fields.a = UStack_108.fields.color.fields.a;
  value.fields.color.fields.rgba = UStack_108.fields.color.fields.rgba;
  value.fields.uv0.fields.y = UStack_108.fields.uv0.fields.y;
  value.fields.uv0.fields.x = UStack_108.fields.uv0.fields.x;
  value.fields.uv0.fields.w = UStack_108.fields.uv0.fields.w;
  value.fields.uv0.fields.z = UStack_108.fields.uv0.fields.z;
  value.fields.uv2.fields.z = UStack_108.fields.uv2.fields.z;
  value.fields.uv2.fields.w = UStack_108.fields.uv2.fields.w;
  value.fields.uv3.fields.x = UStack_108.fields.uv3.fields.x;
  value.fields.uv3.fields.y = UStack_108.fields.uv3.fields.y;
  value.fields.uv3.fields.z = UStack_108.fields.uv3.fields.z;
  value.fields.uv3.fields.w = in_stack_fffffffffffffe64;
  System_Collections_Generic_List<UIVertex>__set_Item(pSVar5,iVar4,value,MethodInfo_Void_set_Item);
  pSVar5 = (__this->fields)._vertices;
  if (pSVar5 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto LAB_03b1b9ee;
  iVar4 = iVar4 + 1;
  if ((pSVar5->fields)._size <= iVar4) {
LAB_03b1b9bc:
    UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
    UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
              (vh,(__this->fields)._vertices,(MethodInfo *)0x0);
    return;
  }
  goto LAB_03b1b7c0;
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, const MethodInfo* method);
// 0x3b1ba00

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,MethodInfo *method
               )

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  
  if (DAT_05701558 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_init_method_metadata(&TypeInfo_List_UIVertex);
    DAT_05701558 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)il2cpp_runtime_glue(TypeInfo_List_UIVertex);
  System_Collections_Generic_List<UIVertex>___ctor(__this_00,MethodInfo_List_1_UnityEngine_UIVertex);
  (__this->fields)._vertices = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._vertices);
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


