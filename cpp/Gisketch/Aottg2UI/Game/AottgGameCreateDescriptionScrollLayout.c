// Type: Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateDescriptionScrollLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout__Start (Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o* __this, const MethodInfo* method);
// 0x1823d5d00

void Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout__Start
               (Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  System_Object_array *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_01;
  UnityEngine_RectOffset_o *__this_02;
  UnityEngine_UI_ContentSizeFitter_o *__this_03;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347e93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    Il2CppMethodInitialized_184347e93 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponentInParent_object__664f20
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (__this_00 = (pUVar1->fields).m_Content, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_FlexLayout);
    if (pSVar2 != (System_Object_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)pSVar2->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pSVar2->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Behaviour_o *)pSVar2->m_Items[(int)uVar4] == (UnityEngine_Behaviour_o *)0x0)
        goto label_1823d5fe9;
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pSVar2->m_Items[(int)uVar4],false,(MethodInfo *)0x0);
      }
      UnityEngine_RectTransform__set_anchorMin
                (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot
                (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_sizeDelta
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_anchoredPosition
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar3,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
        UnityEngine_RectOffset___ctor_2ed1030(__this_02,0x10,0x18,0x10,0x10,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_padding
                    ((UnityEngine_UI_LayoutGroup_o *)__this_01,__this_02,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,12.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_01,0,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            __this_03 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar3,(MethodInfo_6F4D60 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
            if (__this_03 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
              UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_03,0,(MethodInfo *)0x0);
              UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_03,2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1823d5fe9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


