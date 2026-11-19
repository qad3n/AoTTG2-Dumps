// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapHover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateMapHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__Awake (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, const MethodInfo* method);
// 0x5e98a60

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__Awake
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Outline_o **targetAddress;
  UnityEngine_UI_Shadow_o *__this_00;
  UnityEngine_UI_Outline_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_075488d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Outline);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_Outline_71aa970);
    Il2CppMethodInitialized_075488d4 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Outline);
  if (pUVar1 == (UnityEngine_UI_Outline_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05e98b1f;
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this_01,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Outline_71aa970);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *)0x0) {
    targetAddress = &(__this->fields)._outline;
    (__this->fields)._outline = pUVar1;
    Il2CppCodeGenWriteBarrier(targetAddress);
    __this_00 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
    if (__this_00 != (UnityEngine_UI_Shadow_o *)0x0) {
      UnityEngine_UI_Shadow__set_effectDistance
                (__this_00,(UnityEngine_Vector2_o)0xc000000040000000,(MethodInfo *)0x0);
      if ((UnityEngine_UI_Shadow_o *)*targetAddress != (UnityEngine_UI_Shadow_o *)0x0) {
        UnityEngine_UI_Shadow__set_useGraphicAlpha
                  ((UnityEngine_UI_Shadow_o *)*targetAddress,false,(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_UI_Outline_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)*targetAddress,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05e98b1f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e98b30

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Shadow_o *__this_00;
  UnityEngine_UI_Outline_o *__this_01;
  UnityEngine_Color_o value;
  
  __this_00 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
  value = Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OutlineColor
                    ((UnityEngine_Component_o *)__this,(MethodInfo *)eventData);
  if (__this_00 != (UnityEngine_UI_Shadow_o *)0x0) {
    UnityEngine_UI_Shadow__set_effectColor(__this_00,value,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._outline;
    if (__this_01 != (UnityEngine_UI_Outline_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerExit (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e98bc0

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Outline_o *__this_00;
  
  __this_00 = (__this->fields)._outline;
  if (__this_00 == (UnityEngine_UI_Outline_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnSelect (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e98be0

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnSelect
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Shadow_o *__this_00;
  UnityEngine_UI_Outline_o *__this_01;
  UnityEngine_Color_o value;
  
  __this_00 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
  value = Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OutlineColor
                    ((UnityEngine_Component_o *)__this,(MethodInfo *)eventData);
  if (__this_00 != (UnityEngine_UI_Shadow_o *)0x0) {
    UnityEngine_UI_Shadow__set_effectColor(__this_00,value,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._outline;
    if (__this_01 != (UnityEngine_UI_Outline_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnDeselect (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e98c20

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Outline_o *__this_00;
  
  __this_00 = (__this->fields)._outline;
  if (__this_00 == (UnityEngine_UI_Outline_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$SetHovered
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, bool hovered, const MethodInfo* method);
// 0x5e98b70

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,bool hovered,MethodInfo *method)

{
  UnityEngine_UI_Shadow_o *__this_00;
  UnityEngine_UI_Outline_o *__this_01;
  undefined7 in_register_00000031;
  UnityEngine_Color_o value;
  
  if ((int)(MethodInfo *)CONCAT71(in_register_00000031,hovered) != 0) {
    __this_00 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
    value = Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OutlineColor
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)CONCAT71(in_register_00000031,hovered))
    ;
    if (__this_00 == (UnityEngine_UI_Shadow_o *)0x0) goto label_05e98bb0;
    UnityEngine_UI_Shadow__set_effectColor(__this_00,value,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._outline;
  if (__this_01 != (UnityEngine_UI_Outline_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,hovered,(MethodInfo *)0x0);
    return;
  }
label_05e98bb0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OutlineColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OutlineColor (UnityEngine_Component_o* component, const MethodInfo* method);
// 0x5e92fe0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OutlineColor
          (UnityEngine_Component_o *component,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  UnityEngine_Color_o UVar5;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_075488d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"negative");
    Il2CppMethodInitialized_075488d5 = '\x01';
  }
  if (component == (UnityEngine_Component_o *)0x0) {
label_05e930b4:
    ThrowNullReferenceException();
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                (component,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  auVar2._8_8_ = 0x3f8000003f800000;
  auVar2._0_8_ = 0x3f8000003f800000;
  auVar1 = auVar2._0_12_;
  if (bVar4) {
    if (x == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e930b4;
    __this = (x->fields)._Theme_k__BackingField;
    if (__this == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      auVar3._8_8_ = 0x3f8000003f800000;
      auVar3._0_8_ = 0x3f8000003f800000;
      auVar1 = auVar3._0_12_;
    }
    else {
      UVar5.fields.b = 1.0;
      UVar5.fields.a = 1.0;
      UVar5.fields.r = 1.0;
      UVar5.fields.g = 1.0;
      UVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (__this,"negative",UVar5,(MethodInfo *)0x0);
      auVar1 = UVar5.fields._0_12_;
    }
  }
  UVar6.fields._0_8_ = auVar1._0_8_;
  UVar6.fields.a = 0.9;
  UVar6.fields.b = (float)auVar1._8_4_;
  return (UnityEngine_Color_o)UVar6.fields;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, const MethodInfo* method);
// 0x5e98c40

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


