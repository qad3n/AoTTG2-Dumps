// Type: UI.IgnoreScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IgnoreScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/IgnoreScaler.cs
// --------------------------------

// UI.IgnoreScaler$$ApplyScale
// il2cpp: void UI_IgnoreScaler__ApplyScale (UI_IgnoreScaler_o* __this, const MethodInfo* method);
// 0x438e140

void UI_IgnoreScaler__ApplyScale(UI_IgnoreScaler_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  UI_IgnoreScaler_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_01 = __this;
  if (g_data_057ae28c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_01 = (UI_IgnoreScaler_o *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae28c = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    value.fields.x = 1.0 / *(float *)(lVar1 + 0x14);
    __this_01 = __this;
    __this_00 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this->fields).Scale = value.fields.x;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      value.fields.y = value.fields.x;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_01->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.IgnoreScaler$$.ctor
// il2cpp: void UI_IgnoreScaler___ctor (UI_IgnoreScaler_o* __this, const MethodInfo* method);
// 0x438e200

void UI_IgnoreScaler___ctor(UI_IgnoreScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


