// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapHover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateMapHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__Awake (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, const MethodInfo* method);
// 0x1823c9b90

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__Awake
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Shadow_o *pUVar1;
  UnityEngine_UI_Outline_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347d9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Outline);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_Outline_40b23a8);
    Il2CppMethodInitialized_184347d9c = '\x01';
  }
  pUVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Outline);
  if (pUVar2 == (UnityEngine_UI_Outline_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1823c9c87;
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Outline_40b23a8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *)0x0) {
    (__this->fields)._outline = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._outline,pUVar2);
    pUVar1 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
    if (pUVar1 != (UnityEngine_UI_Shadow_o *)0x0) {
      local_18.r = 1.0;
      local_18.g = 1.0;
      local_18.b = 1.0;
      local_18.a = 0.9;
      UnityEngine_UI_Shadow__set_effectColor(pUVar1,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
      if (pUVar1 != (UnityEngine_UI_Shadow_o *)0x0) {
        UnityEngine_UI_Shadow__set_effectDistance
                  (pUVar1,(UnityEngine_Vector2_o)0xc000000040000000,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
        if (pUVar1 != (UnityEngine_UI_Shadow_o *)0x0) {
          UnityEngine_UI_Shadow__set_useGraphicAlpha(pUVar1,false,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._outline;
          if (pUVar2 != (UnityEngine_UI_Outline_o *)0x0) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1823c9c87:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823c9ca0

void
Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerEnter(Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered(__this,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerExit (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823c9c90

void
Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnPointerExit(Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered(__this,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnSelect (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823c9ca0

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnSelect
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered(__this,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnDeselect (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823c9c90

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered(__this,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$SetHovered
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, bool hovered, const MethodInfo* method);
// 0x1823c9cb0

void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__SetHovered
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o *__this,bool hovered,MethodInfo *method)

{
  UnityEngine_UI_Outline_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347d9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d9d = '\x01';
  }
  pUVar1 = (__this->fields)._outline;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._outline;
    if (pUVar1 == (UnityEngine_UI_Outline_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,hovered,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapHover___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateMapHover___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateMapHover_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


