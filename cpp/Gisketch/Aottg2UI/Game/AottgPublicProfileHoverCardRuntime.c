// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverCardRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__Setup (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* owner, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__Setup(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* owner, MethodInfo* method)

{
  (__this->fields)._owner = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181e2bb10

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardEnter(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x181e2bb30

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__CardExit(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime___ctor(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


