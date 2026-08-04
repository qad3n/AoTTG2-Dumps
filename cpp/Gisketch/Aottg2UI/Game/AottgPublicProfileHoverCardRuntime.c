// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverCardRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__Setup (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o* owner, const MethodInfo* method);
// 0x452f9d0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *owner,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x452f9e0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  UnityEngine_Coroutine_o *routine;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
    *(undefined1 *)((long)&(__this_00->fields)._anchorHover + 1) = 1;
    ppUVar1 = &(__this_00->fields)._pendingClose;
    routine = (__this_00->fields)._pendingClose;
    if (routine != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
    }
    *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1,0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x452fa20

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *__this_00;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0) {
    *(undefined1 *)((long)&(__this_00->fields)._anchorHover + 1) = 0;
    Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime__EndOrDelay(__this_00,(MethodInfo *)eventData);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverCardRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o* __this, const MethodInfo* method);
// 0x452fa40

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverCardRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


