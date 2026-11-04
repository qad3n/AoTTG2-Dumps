// Type: Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSidePanelOutlineSkew.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, float bottomOffset, const MethodInfo* method);
// 0x181907790

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,float bottomOffset,
               MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *pUVar1;
  
  (__this->fields)._bottomOffset = bottomOffset;
  pUVar1 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Graphic_o *)0x0) {
    (*(pUVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._28_SetVerticesDirty.method);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x181907440
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190758b: nop dword ptr [rax + rax]
// asm:   0x1819075db: jmp 0x181907590
// asm:   0x181907710: jmp 0x18190777c

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__ModifyMesh
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,
               UnityEngine_UI_VertexHelper_o *vh,MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  char cVar3;
  System_Collections_Generic_List_UIVertex__o *pSVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_UIVertex_o local_1b8;
  UnityEngine_UIVertex_o local_148;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_88;
  float fStack_84;
  float fStack_74;
  float fStack_70;
  
  if (Il2CppMethodInitialized_1843421b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_set_Item);
    Il2CppMethodInitialized_1843421b7 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if ((!bVar2) || (cVar3 = il2cpp_runtime_helper_180562af0((__this->fields)._bottomOffset,0), cVar3 != '\0')) {
    return;
  }
  pSVar4 = (__this->fields)._vertices;
  if (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar4->fields)._size = 0;
    if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
      UnityEngine_UI_VertexHelper__GetUIVertexStream(vh,(__this->fields)._vertices,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._vertices;
      if (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        if ((pSVar4->fields)._size == 0) {
          return;
        }
        System_Collections_Generic_List_UIVertex___get_Item
                  (&local_148,pSVar4,0,
                   (MethodInfo_983930 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
        iVar5 = 1;
        pSVar4 = (__this->fields)._vertices;
        fVar7 = local_148.fields.position.fields.y;
        fVar8 = local_148.fields.position.fields.y;
        while (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
          if ((pSVar4->fields)._size <= iVar5) {
            fVar7 = fVar7 - fVar8;
            if (fVar7 < 1.0) {
              fVar7 = 1.0;
            }
            pSVar4 = (__this->fields)._vertices;
            iVar5 = 0;
            if (pSVar4 != (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_181907605;
            break;
          }
          pSVar4 = (__this->fields)._vertices;
          if (pSVar4 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
          System_Collections_Generic_List_UIVertex___get_Item
                    (&local_148,pSVar4,iVar5,
                     (MethodInfo_983930 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
          if (local_148.fields.position.fields.y <= fVar8) {
            fVar8 = local_148.fields.position.fields.y;
          }
          if (fVar7 <= local_148.fields.position.fields.y) {
            fVar7 = local_148.fields.position.fields.y;
          }
          iVar5 = iVar5 + 1;
          pSVar4 = (__this->fields)._vertices;
        }
      }
    }
  }
  goto label_18190777c;
  while( true ) {
    System_Collections_Generic_List_UIVertex___get_Item
              (&local_1b8,pSVar4,iVar5,
               (MethodInfo_983930 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
    local_148.fields.uv2.fields.y = local_1b8.fields.uv2.fields.y;
    local_148.fields.uv2.fields.z = local_1b8.fields.uv2.fields.z;
    fStack_d4 = local_1b8.fields.position.fields.y;
    fStack_d0 = local_1b8.fields.position.fields.z;
    fStack_cc = local_1b8.fields.normal.fields.x;
    local_148.fields.uv3.fields.z = local_1b8.fields.uv3.fields.z;
    local_148.fields.uv3.fields.w = local_1b8.fields.uv3.fields.w;
    local_88 = local_1b8.fields.uv2.fields.y;
    fStack_84 = local_1b8.fields.uv2.fields.z;
    fVar6 = (local_1b8.fields.position.fields.y - fVar8) / fVar7;
    fStack_74 = local_1b8.fields.uv3.fields.z;
    fStack_70 = local_1b8.fields.uv3.fields.w;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    pSVar4 = (__this->fields)._vertices;
    local_d8 = (1.0 - fVar6) * (__this->fields)._bottomOffset + local_1b8.fields.position.fields.x;
    if (pSVar4 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
    local_1b8.fields.position.fields.x = local_d8;
    local_148.fields.uv2.fields.y = local_1b8.fields.uv2.fields.y;
    local_148.fields.uv2.fields.z = local_1b8.fields.uv2.fields.z;
    local_148.fields.uv3.fields.z = local_1b8.fields.uv3.fields.z;
    local_148.fields.uv3.fields.w = local_1b8.fields.uv3.fields.w;
    System_Collections_Generic_List_UIVertex___set_Item
              (pSVar4,iVar5,&local_1b8,
               (MethodInfo_983A70 *)MethodInfo_System_Collections_Generic_List_UIVertex_set_Item);
    pSVar4 = (__this->fields)._vertices;
    iVar5 = iVar5 + 1;
    if (pSVar4 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
label_181907605:
    if ((pSVar4->fields)._size <= iVar5) {
      UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(vh,(__this->fields)._vertices,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (__this->fields)._vertices;
    if (pSVar4 == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
  }
label_18190777c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o* __this, const MethodInfo* method);
// 0x1819077d0

void Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew___ctor
               (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  
  if (Il2CppMethodInitialized_1843421b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_UIVertex);
    Il2CppMethodInitialized_1843421b8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIVertex);
  System_Collections_Generic_List_UIVertex____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
  (__this->fields)._vertices = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vertices,__this_00);
  UnityEngine_UI_BaseMeshEffect___ctor
            ((Photon_Voice_PUN_UtilityScripts_VoiceDebugScript_o *)__this,(MethodInfo *)0x0);
  return;
}


