// Type: Gisketch.Aottg2UI.Building.GisketchScrollContentLayout
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollContentLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollContentLayout$$SyncScrollOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout__SyncScrollOffset (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o* __this, const MethodInfo* method);
// 0x181903980

void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout__SyncScrollOffset
               (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *__this,MethodInfo *method)

{
  float fVar1;
  char cVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Rect_o *pUVar5;
  float fVar6;
  Gilzoide_FlexUi_Yoga_YGNode_Fields local_res18;
  UnityEngine_Vector2_Fields local_res20;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843421af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_1843421af = '\x01';
  }
  local_res18._nodePtr = 0;
  __this_00 = Gilzoide_FlexUi_FlexLayout__get_RectTransform
                        ((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_anchorMin(__this_00,(MethodInfo *)0x0);
    cVar2 = il2cpp_runtime_helper_180562af0(UVar3.fields,0);
    if (cVar2 != '\0') {
      UVar3 = UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
      cVar2 = il2cpp_runtime_helper_180562af0(UVar3.fields,0);
      if (cVar2 != '\0') {
        UVar3 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
        UVar4 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_RectTransform__get_rect(local_58,__this_00,(MethodInfo *)0x0);
        fVar6 = (pUVar5->fields).m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar6 = UVar3.fields.x - fVar6 * UVar4.fields.x;
        if (0.01 <= ABS(fVar6 - (__this->fields)._styleLeft)) {
          (__this->fields)._styleLeft = fVar6;
          local_res18._nodePtr =
               (intptr_t)
               Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                         ((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
          Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_18806c0
                    ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res18,0,fVar6,(MethodInfo *)0x0);
        }
      }
    }
    local_res20 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransform__get_anchorMin(__this_00,(MethodInfo *)0x0);
    cVar2 = il2cpp_runtime_helper_180562af0();
    if (cVar2 != '\0') {
      local_res20 = (UnityEngine_Vector2_Fields)
                    UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
      cVar2 = il2cpp_runtime_helper_180562af0();
      if (cVar2 != '\0') {
        local_res20 = (UnityEngine_Vector2_Fields)
                      UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
        fVar1 = local_res20.y;
        local_res20 = (UnityEngine_Vector2_Fields)
                      UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_RectTransform__get_rect(local_58,__this_00,(MethodInfo *)0x0);
        fVar6 = (pUVar5->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar6 = -fVar1 - (1.0 - local_res20.y) * fVar6;
        if (0.01 <= ABS(fVar6 - (__this->fields)._styleTop)) {
          (__this->fields)._styleTop = fVar6;
          local_res18._nodePtr =
               (intptr_t)
               Gilzoide_FlexUi_FlexLayout__get_LayoutNode
                         ((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
          Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_18806c0
                    ((Gilzoide_FlexUi_Yoga_YGNode_o *)&local_res18,1,fVar6,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScrollContentLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout___ctor (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o* __this, const MethodInfo* method);
// 0x181903c10

void Gisketch_Aottg2UI_Building_GisketchScrollContentLayout___ctor
               (Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843421b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_FlexLayout);
    Il2CppMethodInitialized_1843421b0 = '\x01';
  }
  if ((TypeInfo_Gilzoide_FlexUi_FlexLayout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_FlexLayout);
  }
  Gilzoide_FlexUi_FlexLayout___ctor((Gilzoide_FlexUi_FlexLayout_o *)__this,(MethodInfo *)0x0);
  return;
}


