// Type: Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSidePanelOutlineSkew.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, float bottomOffset, const MethodInfo* method);
// 0x3b87780

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,float bottomOffset,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIVertex_o value;
  char cVar1;
  UnityEngine_UI_Graphic_o *pUVar2;
  UnityEngine_UI_BaseMeshEffect_c *__this_00;
  int iVar3;
  UnityEngine_Color32_Fields __this_01;
  UnityEngine_Color32_Fields UVar4;
  long *__this_02;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_stack_fffffffffffffe5c;
  float local_1a0;
  UnityEngine_UIVertex_o local_110;
  float fStack_48;
  float fStack_44;
  
  (__this->fields)._bottomOffset = bottomOffset;
  __this_01.rgba = 0;
  __this_01.r = '\0';
  __this_01.g = '\0';
  __this_01.b = '\0';
  __this_01.a = '\0';
  pUVar2 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Graphic_o *)0x0) {
    vtableDispatch = (pUVar2->klass->vtable)._28_SetVerticesDirty.methodPtr;
    (*vtableDispatch)(pUVar2,(pUVar2->klass->vtable)._28_SetVerticesDirty.method,vtableDispatch)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UIVertex_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9e86 = '\x01';
  }
  __this_02 = (long *)__this;
  cVar1 = (**(code **)(*(long *)__this + 0x1c8))(__this,*(undefined8 *)(*(long *)__this + 0x1d0));
  if (cVar1 == '\0') {
    return;
  }
  fVar6 = (((UnityEngine_Vector4_o *)((long)__this + 0x30))->fields).x;
  if (g_data_057a68c8 == '\0') {
    __this_02 = &TypeInfo_Mathf;
    il2cpp_runtime_helper_023445d0();
    g_data_057a68c8 = '\x01';
  }
  fVar7 = ABS(fVar6);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar5 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
  fVar8 = fVar7 * 1e-06;
  if (fVar7 * 1e-06 <= fVar5) {
    fVar8 = fVar5;
  }
  if (ABS(0.0 - fVar6) < fVar8) {
    return;
  }
  UVar4 = *(UnityEngine_Color32_Fields *)((long)__this + 0x28);
  if (UVar4 != (UnityEngine_Color32_Fields)0x0) {
    *(int *)((long)UVar4 + 0x1c) = *(int *)((long)UVar4 + 0x1c) + 1;
    *(undefined4 *)((long)UVar4 + 0x18) = 0;
    if (__this_01 != (UnityEngine_Color32_Fields)0x0) {
      __this_02 = (long *)__this_01;
      UnityEngine_UI_VertexHelper__GetUIVertexStream
                ((UnityEngine_UI_VertexHelper_o *)__this_01,
                 (System_Collections_Generic_List_UIVertex__o *)UVar4,(MethodInfo *)0x0);
      UVar4 = *(UnityEngine_Color32_Fields *)((long)__this + 0x28);
      if (UVar4 != (UnityEngine_Color32_Fields)0x0) {
        if (*(int *)((long)UVar4 + 0x18) == 0) {
          return;
        }
        __this_02 = (long *)&local_110;
        System_Collections_Generic_List_UIVertex___get_Item
                  ((UnityEngine_UIVertex_o *)__this_02,(System_Collections_Generic_List_UIVertex__o *)UVar4,0,
                   MethodInfo_UIVertex_get_Item);
        UVar4 = *(UnityEngine_Color32_Fields *)((long)__this + 0x28);
        if (UVar4 != (UnityEngine_Color32_Fields)0x0) {
          iVar3 = 1;
          local_1a0 = local_110.fields.position.fields.y;
          fVar6 = local_110.fields.position.fields.y;
          do {
            if (*(int *)((long)UVar4 + 0x18) <= iVar3) {
              if (*(int *)((long)UVar4 + 0x18) < 1) goto label_03b87bfc;
              fVar7 = 1.0;
              if (1.0 <= fVar6 - local_1a0) {
                fVar7 = fVar6 - local_1a0;
              }
              iVar3 = 0;
              goto label_03b87a00;
            }
            __this_02 = (long *)&local_110;
            System_Collections_Generic_List_UIVertex___get_Item
                      (&local_110,(System_Collections_Generic_List_UIVertex__o *)UVar4,iVar3,MethodInfo_UIVertex_get_Item);
            if (local_110.fields.position.fields.y <= local_1a0) {
              local_1a0 = local_110.fields.position.fields.y;
            }
            if (fVar6 <= local_110.fields.position.fields.y) {
              fVar6 = local_110.fields.position.fields.y;
            }
            iVar3 = iVar3 + 1;
            UVar4 = *(UnityEngine_Color32_Fields *)((long)__this + 0x28);
          } while (UVar4 != (UnityEngine_Color32_Fields)0x0);
        }
      }
    }
  }
label_03b87c2e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9e87 = '\x01';
  }
  __this_00 = (UnityEngine_UI_BaseMeshEffect_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
  System_Collections_Generic_List_UIVertex____ctor
            ((System_Collections_Generic_List_UIVertex__o *)__this_00,MethodInfo_List_1_UnityEngine_UIVertex);
  ((UnityEngine_UI_BaseMeshEffect_o *)((long)__this_02 + 0x28))->klass = __this_00;
  il2cpp_runtime_helper_022b4080((UnityEngine_UI_BaseMeshEffect_o *)((long)__this_02 + 0x28));
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this_02,(MethodInfo *)0x0);
  return;
label_03b87a00:
  System_Collections_Generic_List_UIVertex___get_Item
            (&local_110,(System_Collections_Generic_List_UIVertex__o *)UVar4,iVar3,MethodInfo_UIVertex_get_Item);
  __this_02 = *(long **)((long)__this + 0x28);
  fStack_48 = local_110.fields.uv3.fields.y;
  fStack_44 = local_110.fields.uv3.fields.z;
  if ((UnityEngine_Color32_Fields)__this_02 == (UnityEngine_Color32_Fields)0x0) goto label_03b87c2e;
  fVar8 = (local_110.fields.position.fields.y - local_1a0) / fVar7;
  fVar6 = 1.0;
  if (fVar8 <= 1.0) {
    fVar6 = fVar8;
  }
  local_110.fields.position.fields.x =
       local_110.fields.position.fields.x +
       (((UnityEngine_Vector4_o *)((long)__this + 0x30))->fields).x *
       (float)(~-(uint)(0.0 <= fVar8) & 0x3f800000 | (uint)(1.0 - fVar6) & -(uint)(0.0 <= fVar8));
  value.fields.uv2.fields.y = local_110.fields.uv2.fields.y;
  value.fields.uv2.fields.x = local_110.fields.uv2.fields.x;
  value.fields.uv1.fields.y = local_110.fields.uv1.fields.y;
  value.fields.uv1.fields.x = local_110.fields.uv1.fields.x;
  value.fields.uv1.fields.w = local_110.fields.uv1.fields.w;
  value.fields.uv1.fields.z = local_110.fields.uv1.fields.z;
  value.fields.position.fields.y = local_110.fields.position.fields.y;
  value.fields.position.fields.x = local_110.fields.position.fields.x;
  value.fields.normal.fields.x = local_110.fields.normal.fields.x;
  value.fields.position.fields.z = local_110.fields.position.fields.z;
  value.fields.normal.fields.z = local_110.fields.normal.fields.z;
  value.fields.normal.fields.y = local_110.fields.normal.fields.y;
  value.fields.tangent.fields.y = local_110.fields.tangent.fields.y;
  value.fields.tangent.fields.x = local_110.fields.tangent.fields.x;
  value.fields.tangent.fields.w = local_110.fields.tangent.fields.w;
  value.fields.tangent.fields.z = local_110.fields.tangent.fields.z;
  value.fields.color.fields.r = local_110.fields.color.fields.r;
  value.fields.color.fields.g = local_110.fields.color.fields.g;
  value.fields.color.fields.b = local_110.fields.color.fields.b;
  value.fields.color.fields.a = local_110.fields.color.fields.a;
  value.fields.color.fields.rgba = local_110.fields.color.fields.rgba;
  value.fields.uv0.fields.y = local_110.fields.uv0.fields.y;
  value.fields.uv0.fields.x = local_110.fields.uv0.fields.x;
  value.fields.uv0.fields.w = local_110.fields.uv0.fields.w;
  value.fields.uv0.fields.z = local_110.fields.uv0.fields.z;
  value.fields.uv2.fields.z = local_110.fields.uv2.fields.z;
  value.fields.uv2.fields.w = local_110.fields.uv2.fields.w;
  value.fields.uv3.fields.x = local_110.fields.uv3.fields.x;
  value.fields.uv3.fields.y = local_110.fields.uv3.fields.y;
  value.fields.uv3.fields.z = local_110.fields.uv3.fields.z;
  value.fields.uv3.fields.w = in_stack_fffffffffffffe5c;
  System_Collections_Generic_List_UIVertex___set_Item
            ((System_Collections_Generic_List_UIVertex__o *)__this_02,iVar3,value,MethodInfo_Void_set_Item);
  UVar4 = *(UnityEngine_Color32_Fields *)((long)__this + 0x28);
  if (UVar4 == (UnityEngine_Color32_Fields)0x0) goto label_03b87c2e;
  iVar3 = iVar3 + 1;
  if (*(int *)((long)UVar4 + 0x18) <= iVar3) {
label_03b87bfc:
    UnityEngine_UI_VertexHelper__Clear((UnityEngine_UI_VertexHelper_o *)__this_01,(MethodInfo *)0x0);
    UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
              ((UnityEngine_UI_VertexHelper_o *)__this_01,
               (System_Collections_Generic_List_UIVertex__o *)
               *(UnityEngine_Color32_Fields *)((long)__this + 0x28),(MethodInfo *)0x0);
    return;
  }
  goto label_03b87a00;
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x3b877b0

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,
               UnityEngine_UI_VertexHelper_o *vh,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  UnityEngine_UIVertex_o value;
  char cVar3;
  System_Collections_Generic_List_UIVertex__o *pSVar4;
  MethodInfo *extraout_RDX;
  int iVar5;
  long *__this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_stack_fffffffffffffe64;
  float fStack_198;
  UnityEngine_UIVertex_o UStack_108;
  float fStack_40;
  float fStack_3c;
  
  if (g_data_057a9e86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UIVertex_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9e86 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (long *)__this;
  cVar3 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                    (__this,(__this->klass->vtable)._9_IsActive.method,method);
  if (cVar3 == '\0') {
    return;
  }
  fVar7 = (__this->fields)._bottomOffset;
  if (g_data_057a68c8 == '\0') {
    __this_00 = &TypeInfo_Mathf;
    il2cpp_runtime_helper_023445d0();
    g_data_057a68c8 = '\x01';
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
  pSVar4 = (__this->fields)._vertices;
  if (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar4->fields)._size = 0;
    if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
      __this_00 = (long *)vh;
      UnityEngine_UI_VertexHelper__GetUIVertexStream(vh,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._vertices;
      if (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        if ((pSVar4->fields)._size == 0) {
          return;
        }
        __this_00 = (long *)&UStack_108;
        System_Collections_Generic_List_UIVertex___get_Item
                  ((UnityEngine_UIVertex_o *)__this_00,pSVar4,0,MethodInfo_UIVertex_get_Item);
        pSVar4 = (__this->fields)._vertices;
        if (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
          iVar5 = 1;
          fStack_198 = UStack_108.fields.position.fields.y;
          fVar7 = UStack_108.fields.position.fields.y;
          do {
            iVar2 = (pSVar4->fields)._size;
            if (iVar2 <= iVar5) {
              if (iVar2 < 1) goto label_03b87bfc;
              fVar8 = 1.0;
              if (1.0 <= fVar7 - fStack_198) {
                fVar8 = fVar7 - fStack_198;
              }
              iVar5 = 0;
              goto label_03b87a00;
            }
            __this_00 = (long *)&UStack_108;
            System_Collections_Generic_List_UIVertex___get_Item
                      ((UnityEngine_UIVertex_o *)&UStack_108,pSVar4,iVar5,MethodInfo_UIVertex_get_Item);
            if (UStack_108.fields.position.fields.y <= fStack_198) {
              fStack_198 = UStack_108.fields.position.fields.y;
            }
            if (fVar7 <= UStack_108.fields.position.fields.y) {
              fVar7 = UStack_108.fields.position.fields.y;
            }
            iVar5 = iVar5 + 1;
            pSVar4 = (__this->fields)._vertices;
          } while (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0);
        }
      }
    }
  }
label_03b87c2e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9e87 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_UIVertex__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
  System_Collections_Generic_List_UIVertex____ctor(pSVar4,MethodInfo_List_1_UnityEngine_UIVertex);
  (((UnityEngine_UI_VertexHelper_o *)__this_00)->fields).m_Uv1S =
       (System_Collections_Generic_List_Vector4__o *)pSVar4;
  il2cpp_runtime_helper_022b4080(&(((UnityEngine_UI_VertexHelper_o *)__this_00)->fields).m_Uv1S);
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this_00,(MethodInfo *)0x0);
  return;
label_03b87a00:
  System_Collections_Generic_List_UIVertex___get_Item(&UStack_108,pSVar4,iVar5,MethodInfo_UIVertex_get_Item);
  __this_00 = (long *)(__this->fields)._vertices;
  fStack_40 = UStack_108.fields.uv3.fields.y;
  fStack_3c = UStack_108.fields.uv3.fields.z;
  if ((UnityEngine_UI_VertexHelper_o *)__this_00 == (UnityEngine_UI_VertexHelper_o *)0x0) goto label_03b87c2e;
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
  System_Collections_Generic_List_UIVertex___set_Item
            ((System_Collections_Generic_List_UIVertex__o *)__this_00,iVar5,value,MethodInfo_Void_set_Item);
  pSVar4 = (__this->fields)._vertices;
  if (pSVar4 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_03b87c2e;
  iVar5 = iVar5 + 1;
  if ((pSVar4->fields)._size <= iVar5) {
label_03b87bfc:
    UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
    UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(vh,(__this->fields)._vertices,(MethodInfo *)0x0);
    return;
  }
  goto label_03b87a00;
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, const MethodInfo* method);
// 0x3b87c40

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  
  if (g_data_057a9e87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9e87 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
  System_Collections_Generic_List_UIVertex____ctor(__this_00,MethodInfo_List_1_UnityEngine_UIVertex);
  (__this->fields)._vertices = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._vertices);
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


