// Type: Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Rendering/GisketchCanvasSorting.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting$$AboveParent
// il2cpp: int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent (UnityEngine_Canvas_o* canvas, int32_t localOrder, const MethodInfo* method);
// 0x1818a4280

int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent
                  (UnityEngine_Canvas_o *canvas,int32_t localOrder,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  int32_t iVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184341fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInParent_Canvas)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fbf = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (canvas != (UnityEngine_Canvas_o *)0x0) {
      pSVar3 = UnityEngine_Component__GetComponentsInParent_object_
                         ((UnityEngine_Component_o *)canvas,true,
                          (MethodInfo_6655F0 *)MethodInfo_UnityEngine_Component_GetComponentsInParent_Canvas);
      if (pSVar3 != (System_Object_array *)0x0) {
        for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
          if ((uint)pSVar3->max_length <= uVar4) goto label_1818a43c9;
          x = (UnityEngine_Object_o *)pSVar3->m_Items[(int)uVar4];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if ((uint)pSVar3->max_length <= uVar4) {
label_1818a43c9:
              ThrowIndexOutOfRangeException();
            }
            if ((UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar4] == (UnityEngine_Canvas_o *)0x0)
            goto label_1818a43cf;
            bVar1 = UnityEngine_Canvas__get_overrideSorting
                              ((UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar4],(MethodInfo *)0x0);
            if (bVar1) {
              if ((uint)pSVar3->max_length <= uVar4) goto label_1818a43c9;
              if ((UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar4] == (UnityEngine_Canvas_o *)0x0)
              goto label_1818a43cf;
              iVar2 = UnityEngine_Canvas__get_sortingOrder
                                ((UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar4],(MethodInfo *)0x0);
              goto label_1818a43aa;
            }
          }
        }
        iVar2 = UnityEngine_Canvas__get_sortingOrder(canvas,(MethodInfo *)0x0);
        goto label_1818a43aa;
      }
    }
label_1818a43cf:
    ThrowNullReferenceException();
  }
  iVar2 = 0;
label_1818a43aa:
  return iVar2 + localOrder;
}


// Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting$$EffectiveSortingOrder
// il2cpp: int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__EffectiveSortingOrder (UnityEngine_Canvas_o* canvas, const MethodInfo* method);
// 0x1818a43e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a44e9: xor edx, edx
// asm:   0x1818a4504: xor edx, edx
// asm:   0x1818a4506: mov rcx, rbp
// asm:   0x1818a4509: jmp 0x1818a44eb

int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__EffectiveSortingOrder
                  (UnityEngine_Canvas_o *canvas,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  int32_t iVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184341fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInParent_Canvas)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fbf = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return 0;
  }
  if ((canvas == (UnityEngine_Canvas_o *)0x0) ||
     (pSVar3 = UnityEngine_Component__GetComponentsInParent_object_
                         ((UnityEngine_Component_o *)canvas,true,
                          (MethodInfo_6655F0 *)MethodInfo_UnityEngine_Component_GetComponentsInParent_Canvas),
     pSVar3 == (System_Object_array *)0x0)) {
label_1818a4519:
    ThrowNullReferenceException();
  }
  uVar4 = 0;
  do {
    if ((int)pSVar3->max_length <= (int)uVar4) {
label_1818a44eb:
      iVar2 = UnityEngine_Canvas__get_sortingOrder(canvas,(MethodInfo *)0x0);
      return iVar2;
    }
    if ((uint)pSVar3->max_length <= uVar4) goto label_1818a4513;
    x = (UnityEngine_Object_o *)pSVar3->m_Items[(int)uVar4];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((uint)pSVar3->max_length <= uVar4) {
label_1818a4513:
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar4] == (UnityEngine_Canvas_o *)0x0)
      goto label_1818a4519;
      bVar1 = UnityEngine_Canvas__get_overrideSorting
                        ((UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar4],(MethodInfo *)0x0);
      if (bVar1) {
        if ((uint)pSVar3->max_length <= uVar4) goto label_1818a4513;
        canvas = (UnityEngine_Canvas_o *)pSVar3->m_Items[(int)uVar4];
        if (canvas == (UnityEngine_Canvas_o *)0x0) goto label_1818a4519;
        goto label_1818a44eb;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


