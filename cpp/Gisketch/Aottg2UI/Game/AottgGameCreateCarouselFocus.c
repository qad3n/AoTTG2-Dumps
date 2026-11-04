// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCarouselFocus.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o* __this, Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* carousel, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus__Setup(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o* __this, Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o* carousel, MethodInfo* method)

{
  (__this->fields)._carousel = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._carousel,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus__OnSelect (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823be670

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus__OnSelect
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this_00;
  UnityEngine_RectTransform_o *target;
  
  if (Il2CppMethodInitialized_184347d60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_184347d60 = '\x01';
  }
  __this_00 = (__this->fields)._carousel;
  target = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Reveal(__this_00,target,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselFocus$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselFocus_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


