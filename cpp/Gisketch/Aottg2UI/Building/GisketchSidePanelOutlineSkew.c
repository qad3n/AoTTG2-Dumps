// Type: Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSidePanelOutlineSkew.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, float bottomOffset, const MethodInfo* method);
// 0x5391a60

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,float bottomOffset,
               MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *pUVar1;
  
  (__this->fields)._bottomOffset = bottomOffset;
  pUVar1 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_UI_Graphic_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
            (pUVar1,(pUVar1->klass->vtable)._28_SetVerticesDirty.method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x5391a90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5391c8d: jmp 0x5391e5c
// asm:   0x5391ccd: nop dword ptr [rax]

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,
               UnityEngine_UI_VertexHelper_o *vh,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_UIVertex_o value;
  bool bVar2;
  int index;
  int32_t index_00;
  System_Collections_Generic_List_UIVertex__o *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_138;
  UnityEngine_UIVertex_o UStack_a0;
  
  if (Il2CppMethodInitialized_07542b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_set_Item);
    Il2CppMethodInitialized_07542b36 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (bVar2) {
    fVar5 = (__this->fields)._bottomOffset;
    if (Il2CppMethodInitialized_0753e7b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_0753e7b4 = '\x01';
    }
    fVar7 = ABS(fVar5);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar4 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
    fVar6 = fVar7 * 1e-06;
    if (fVar7 * 1e-06 <= fVar4) {
      fVar6 = fVar4;
    }
    if (fVar6 <= ABS(0.0 - fVar5)) {
      pSVar3 = (__this->fields)._vertices;
      if (pSVar3 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar3->fields)._size = 0;
        if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
          UnityEngine_UI_VertexHelper__GetUIVertexStream(vh,pSVar3,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._vertices;
          if (pSVar3 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
            if ((pSVar3->fields)._size == 0) {
              return;
            }
            System_Collections_Generic_List_UIVertex___get_Item
                      (&UStack_a0,pSVar3,0,
                       (MethodInfo_39DE620 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
            pSVar3 = (__this->fields)._vertices;
            if (pSVar3 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
              index = 1;
              fStack_138 = UStack_a0.fields.position.fields.y;
              fVar5 = UStack_a0.fields.position.fields.y;
              do {
                if ((pSVar3->fields)._size <= index) {
                  fVar7 = 1.0;
                  if (1.0 <= fVar5 - fStack_138) {
                    fVar7 = fVar5 - fStack_138;
                  }
                  index_00 = 0;
                  goto label_05391cd0;
                }
                System_Collections_Generic_List_UIVertex___get_Item
                          (&UStack_a0,pSVar3,index,
                           (MethodInfo_39DE620 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item)
                ;
                if (UStack_a0.fields.position.fields.y <= fStack_138) {
                  fStack_138 = UStack_a0.fields.position.fields.y;
                }
                if (fVar5 <= UStack_a0.fields.position.fields.y) {
                  fVar5 = UStack_a0.fields.position.fields.y;
                }
                index = index + 1;
                pSVar3 = (__this->fields)._vertices;
              } while (pSVar3 != (System_Collections_Generic_List_UIVertex__o *)0x0);
            }
          }
        }
      }
      goto label_05391e5c;
    }
  }
  return;
  while( true ) {
    fVar6 = (UStack_a0.fields.position.fields.y - fStack_138) / fVar7;
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    UStack_a0.fields.position.fields.x =
         UStack_a0.fields.position.fields.x +
         (float)(~-(uint)(0.0 <= fVar6) & 0x3f800000 | (uint)(1.0 - fVar5) & -(uint)(0.0 <= fVar6)) *
         (__this->fields)._bottomOffset;
    value.fields.uv2.fields.z = UStack_a0.fields.uv2.fields.z;
    value.fields.uv2.fields.y = UStack_a0.fields.uv2.fields.y;
    value.fields.uv1.fields.z = UStack_a0.fields.uv1.fields.z;
    value.fields.uv1.fields.y = UStack_a0.fields.uv1.fields.y;
    value.fields.uv2.fields.x = UStack_a0.fields.uv2.fields.x;
    value.fields.uv1.fields.w = UStack_a0.fields.uv1.fields.w;
    value.fields.position.fields.y = UStack_a0.fields.position.fields.y;
    value.fields.position.fields.x = UStack_a0.fields.position.fields.x;
    value.fields.normal.fields.x = UStack_a0.fields.normal.fields.x;
    value.fields.position.fields.z = UStack_a0.fields.position.fields.z;
    value.fields.normal.fields.z = UStack_a0.fields.normal.fields.z;
    value.fields.normal.fields.y = UStack_a0.fields.normal.fields.y;
    value.fields.tangent.fields.y = UStack_a0.fields.tangent.fields.y;
    value.fields.tangent.fields.x = UStack_a0.fields.tangent.fields.x;
    value.fields.tangent.fields.w = UStack_a0.fields.tangent.fields.w;
    value.fields.tangent.fields.z = UStack_a0.fields.tangent.fields.z;
    value.fields.uv0.fields.x = UStack_a0.fields.uv0.fields.x;
    value.fields.color.fields._overlap_0 = UStack_a0.fields.color.fields._overlap_0;
    value.fields.uv0.fields.z = UStack_a0.fields.uv0.fields.z;
    value.fields.uv0.fields.y = UStack_a0.fields.uv0.fields.y;
    value.fields.uv1.fields.x = UStack_a0.fields.uv1.fields.x;
    value.fields.uv0.fields.w = UStack_a0.fields.uv0.fields.w;
    value.fields.uv2.fields.w = UStack_a0.fields.uv2.fields.w;
    value.fields.uv3.fields.x = UStack_a0.fields.uv3.fields.x;
    value.fields.uv3.fields.y = UStack_a0.fields.uv3.fields.y;
    value.fields.uv3.fields.z = UStack_a0.fields.uv3.fields.z;
    value.fields.uv3.fields.w = UStack_a0.fields.uv3.fields.w;
    System_Collections_Generic_List_UIVertex___set_Item
              (pSVar3,index_00,value,
               (MethodInfo_39DE6A0 *)MethodInfo_System_Collections_Generic_List_UIVertex_set_Item);
    index_00 = index_00 + 1;
    pSVar3 = (__this->fields)._vertices;
    if (pSVar3 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
label_05391cd0:
    if ((pSVar3->fields)._size <= index_00) {
      UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(vh,(__this->fields)._vertices,(MethodInfo *)0x0);
      return;
    }
    System_Collections_Generic_List_UIVertex___get_Item
              (&UStack_a0,pSVar3,index_00,
               (MethodInfo_39DE620 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
    pSVar3 = (__this->fields)._vertices;
    if (pSVar3 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
  }
label_05391e5c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, const MethodInfo* method);
// 0x5391ea0

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  
  if (Il2CppMethodInitialized_07542b37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_UIVertex);
    Il2CppMethodInitialized_07542b37 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIVertex);
  System_Collections_Generic_List_UIVertex____ctor
            (__this_00,(MethodInfo_39DE010 *)MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
  (__this->fields)._vertices = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vertices);
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


