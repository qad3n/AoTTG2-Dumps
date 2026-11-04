// Type: Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchButtonWidthMeasure.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$get_MinWidthFloor
// il2cpp: float Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_MinWidthFloor (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, const MethodInfo* method);
// 0x180584280

float
Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_MinWidthFloor(Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, MethodInfo* method)

{
  return (__this->fields)._MinWidthFloor_k__BackingField;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$set_MinWidthFloor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_MinWidthFloor (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float value, const MethodInfo* method);
// 0x1805842a0

void
Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_MinWidthFloor(Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float value, MethodInfo* method)

{
  (__this->fields)._MinWidthFloor_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$get_HorizontalPadding
// il2cpp: float Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_HorizontalPadding (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, const MethodInfo* method);
// 0x1818a4260

float
Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_HorizontalPadding(Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, MethodInfo* method)

{
  return (__this->fields)._HorizontalPadding_k__BackingField;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$set_HorizontalPadding
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_HorizontalPadding (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float value, const MethodInfo* method);
// 0x1818a4270

void
Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_HorizontalPadding(Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float value, MethodInfo* method)

{
  (__this->fields)._HorizontalPadding_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$Setup
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float minWidthFloor, float horizontalPadding, const MethodInfo* method);
// 0x1818a4240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a4240: nop 

void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup
               (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this,float minWidthFloor,
               float horizontalPadding,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= minWidthFloor) {
    fVar1 = minWidthFloor;
  }
  (__this->fields)._MinWidthFloor_k__BackingField = fVar1;
  fVar1 = 0.0;
  if (0.0 <= horizontalPadding) {
    fVar1 = horizontalPadding;
  }
  (__this->fields)._HorizontalPadding_k__BackingField = fVar1;
  return;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure___ctor (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure___ctor(Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


