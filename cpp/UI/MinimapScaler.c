// Type: UI.MinimapScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MinimapScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/MinimapScaler.cs
// --------------------------------

// UI.MinimapScaler$$ApplyScale
// il2cpp: void UI_MinimapScaler__ApplyScale (UI_MinimapScaler_o* __this, const MethodInfo* method);
// 0x438e4b0

void UI_MinimapScaler__ApplyScale(UI_MinimapScaler_o *__this,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UI_MinimapScaler_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ae28e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ae28e = '\x01';
  }
  __this_01 = __this;
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,method);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x68), lVar2 != 0)) {
    fVar1 = *(float *)(lVar2 + 0x14);
    __this_00 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_01 = __this;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
      value.fields.x = UVar3.fields.x * fVar1;
      value.fields.y = UVar3.fields.y * fVar1;
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


// UI.MinimapScaler$$.ctor
// il2cpp: void UI_MinimapScaler___ctor (UI_MinimapScaler_o* __this, const MethodInfo* method);
// 0x438e570

void UI_MinimapScaler___ctor(UI_MinimapScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


