// Type: Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchButtonWidthMeasure.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$get_MinWidthFloor
// il2cpp: float Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_MinWidthFloor (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, const MethodInfo* method);
// 0x5343c30

float Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_MinWidthFloor
                (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this,MethodInfo *method)

{
  return (__this->fields)._MinWidthFloor_k__BackingField;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$set_MinWidthFloor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_MinWidthFloor (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float value, const MethodInfo* method);
// 0x5343c40

void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_MinWidthFloor
               (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._MinWidthFloor_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$get_HorizontalPadding
// il2cpp: float Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_HorizontalPadding (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, const MethodInfo* method);
// 0x5343c50

float Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__get_HorizontalPadding
                (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this,MethodInfo *method)

{
  return (__this->fields)._HorizontalPadding_k__BackingField;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$set_HorizontalPadding
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_HorizontalPadding (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float value, const MethodInfo* method);
// 0x5343c60

void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__set_HorizontalPadding
               (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._HorizontalPadding_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$Setup
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, float minWidthFloor, float horizontalPadding, const MethodInfo* method);
// 0x5343c70

void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup
               (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this,float minWidthFloor,
               float horizontalPadding,MethodInfo *method)

{
  undefined4 in_XMM0_Db;
  undefined4 in_XMM1_Db;
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = horizontalPadding;
  auVar1._0_4_ = minWidthFloor;
  auVar1._8_4_ = in_XMM0_Db;
  auVar1._12_4_ = in_XMM1_Db;
  auVar1 = maxps(ZEXT816(0),auVar1);
  (__this->fields)._MinWidthFloor_k__BackingField = (float)auVar1._0_4_;
  (__this->fields)._HorizontalPadding_k__BackingField = (float)auVar1._4_4_;
  return;
}


// Gisketch.Aottg2UI.State.GisketchButtonWidthMeasure$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure___ctor (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o* __this, const MethodInfo* method);
// 0x5343c80

void Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure___ctor
               (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


