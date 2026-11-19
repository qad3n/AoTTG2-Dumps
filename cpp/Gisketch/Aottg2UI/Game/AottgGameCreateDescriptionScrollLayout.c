// Type: Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateDescriptionScrollLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout__Start (Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o* __this, const MethodInfo* method);
// 0x5896e10

void Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout__Start
               (Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  uint uVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_01;
  UnityEngine_RectOffset_o *__this_02;
  UnityEngine_UI_ContentSizeFitter_o *__this_03;
  uint uVar5;
  
  if (Il2CppMethodInitialized_07545249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    Il2CppMethodInitialized_07545249 = '\x01';
  }
  pUVar2 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (__this_00 = (pUVar2->fields).m_Content, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_FlexLayout);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar3->max_length;
      if (0 < (int)uVar1) {
        uVar5 = 0;
        do {
          if (uVar1 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Behaviour_o *)pSVar3->m_Items[(int)uVar5] == (UnityEngine_Behaviour_o *)0x0)
          goto label_058970c2;
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)pSVar3->m_Items[(int)uVar5],false,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar3->max_length;
        } while ((int)uVar5 < (int)uVar1);
      }
      UnityEngine_RectTransform__set_anchorMin
                (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07542885 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot
                (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      UnityEngine_RectTransform__set_sizeDelta
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      UnityEngine_RectTransform__set_anchoredPosition
                (__this_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar4,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
        UnityEngine_RectOffset___ctor_68cd0a0(__this_02,0x10,0x18,0x10,0x10,(MethodInfo *)0x0);
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
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            __this_03 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar4,(MethodInfo_353B6A0 *)
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
label_058970c2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateDescriptionScrollLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o* __this, const MethodInfo* method);
// 0x58970d0

void Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateDescriptionScrollLayout_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


