// Type: Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Rendering/GisketchCanvasSorting.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting$$AboveParent
// il2cpp: int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent (UnityEngine_Canvas_o* canvas, int32_t localOrder, const MethodInfo* method);
// 0x5354040

int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__AboveParent
                  (UnityEngine_Canvas_o *canvas,int32_t localOrder,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 in_register_00000034;
  
  iVar1 = Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__EffectiveSortingOrder
                    (canvas,(MethodInfo *)CONCAT44(in_register_00000034,localOrder));
  return iVar1 + localOrder;
}


// Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting$$EffectiveSortingOrder
// il2cpp: int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__EffectiveSortingOrder (UnityEngine_Canvas_o* canvas, const MethodInfo* method);
// 0x5354050

int32_t Gisketch_Aottg2UI_Rendering_GisketchCanvasSorting__EffectiveSortingOrder
                  (UnityEngine_Canvas_o *canvas,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  int32_t iVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_0754293b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInParent_Canvas)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754293b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)canvas,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return 0;
  }
  if (canvas != (UnityEngine_Canvas_o *)0x0) {
    pSVar4 = UnityEngine_Component__GetComponentsInParent_object_
                       ((UnityEngine_Component_o *)canvas,true,
                        (MethodInfo_34B1530 *)MethodInfo_UnityEngine_Component_GetComponentsInParent_Canvas);
    if (pSVar4 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar4->max_length) {
        uVar5 = pSVar4->max_length & 0xffffffff;
        uVar6 = 0;
        do {
          if (uVar5 <= uVar6) goto label_0535417e;
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if ((uint)pSVar4->max_length <= uVar6) {
label_0535417e:
              ThrowIndexOutOfRangeException();
            }
            if ((UnityEngine_Canvas_o *)pSVar4->m_Items[uVar6] == (UnityEngine_Canvas_o *)0x0)
            goto label_05354183;
            bVar2 = UnityEngine_Canvas__get_overrideSorting
                              ((UnityEngine_Canvas_o *)pSVar4->m_Items[uVar6],(MethodInfo *)0x0);
            if (bVar2) {
              if ((uint)pSVar4->max_length <= (uint)uVar6) goto label_0535417e;
              canvas = (UnityEngine_Canvas_o *)pSVar4->m_Items[uVar6];
              if (canvas == (UnityEngine_Canvas_o *)0x0) goto label_05354183;
              break;
            }
          }
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar4->max_length;
          uVar5 = (ulong)uVar1;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
      iVar3 = UnityEngine_Canvas__get_sortingOrder(canvas,(MethodInfo *)0x0);
      return iVar3;
    }
  }
label_05354183:
  ThrowNullReferenceException();
}


