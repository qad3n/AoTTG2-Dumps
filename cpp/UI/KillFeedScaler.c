// Type: UI.KillFeedScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KillFeedScaler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/KillFeedScaler.cs
// --------------------------------

// UI.KillFeedScaler$$ApplyScale
// il2cpp: void UI_KillFeedScaler__ApplyScale (UI_KillFeedScaler_o* __this, const MethodInfo* method);
// 0x438e3d0

void UI_KillFeedScaler__ApplyScale(UI_KillFeedScaler_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  UI_KillFeedScaler_o *__this_01;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  
  if (g_data_057ae28d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ae28d = '\x01';
  }
  __this_01 = __this;
  UI_IgnoreScaler__ApplyScale((UI_IgnoreScaler_o *)__this,method);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x80), lVar1 != 0)) {
    fVar2 = *(float *)(lVar1 + 0x14);
    __this_01 = __this;
    __this_00 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
      fVar2 = fVar2 * UVar3.fields.x;
      (__this->fields).Scale = fVar2;
      UVar3.fields.y = fVar2;
      UVar3.fields.x = fVar2;
      UVar3.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(__this_00,UVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_01->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.KillFeedScaler$$.ctor
// il2cpp: void UI_KillFeedScaler___ctor (UI_KillFeedScaler_o* __this, const MethodInfo* method);
// 0x438e4a0

void UI_KillFeedScaler___ctor(UI_KillFeedScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


