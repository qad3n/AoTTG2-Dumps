// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgColorSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, Settings_ColorSetting_o* setting, const MethodInfo* method);
// 0x44607b0

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,
               Settings_ColorSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&__this->fields,setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, const MethodInfo* method);
// 0x44607e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  long lVar2;
  Settings_TypedSetting_T__o *__this_00;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  undefined4 extraout_var;
  Utility_Color255_o *pUVar5;
  System_String_o *extraout_RAX;
  Utility_Color255_c *pUVar6;
  undefined4 in_ECX;
  undefined8 extraout_RDX;
  undefined8 uVar7;
  Utility_Color255_o *pUVar8;
  void *in_R8;
  UnityEngine_Color_o UVar9;
  UnityEngine_Color_Fields local_50;
  float local_40;
  float fStack_3c;
  undefined8 uStack_38;
  UnityEngine_Color_Fields local_30;
  Utility_Color255_o *pUStack_18;
  
  pUVar8 = (Utility_Color255_o *)__this;
  if (g_data_057ae78a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pUVar8 = (Utility_Color255_o *)&"#";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae78a = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    method = (MethodInfo *)0x0;
    pUVar8 = pUVar5;
    Utility_Color255___ctor_4388b90(pUVar5,(MethodInfo *)0x0);
  }
  else {
    pUVar5 = (pSVar1->fields)._value;
  }
  if (pUVar5 != (Utility_Color255_o *)0x0) {
    UVar9 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar9,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pUStack_18 = pUVar5;
  if (g_data_057ae78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae78b = '\x01';
  }
  local_50.r = 0.0;
  local_50.g = 0.0;
  local_50.b = 0.0;
  local_50.a = 0.0;
  lVar2._0_4_ = (pUVar8->fields).R;
  lVar2._4_4_ = (pUVar8->fields).G;
  if (lVar2 != 0) {
    bVar3 = UnityEngine_ColorUtility__TryParseHtmlString
                      ((System_String_o *)method,(UnityEngine_Color_o *)&local_50,(MethodInfo *)0x0);
    pSVar4 = (System_String_o *)CONCAT44(extraout_var,bVar3);
    if ((char)bVar3 != '\0') {
      __this_00 = *(Settings_TypedSetting_T__o **)&pUVar8->fields;
      local_30.r = local_50.r;
      local_30.g = local_50.g;
      local_30.b = 0.0;
      local_30.a = 0.0;
      local_40 = local_50.b;
      fStack_3c = local_50.a;
      uStack_38 = 0;
      pUVar5 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      uVar7 = 0;
      UVar9.fields.b = local_40;
      UVar9.fields.a = fStack_3c;
      UVar9.fields.r = local_30.r;
      UVar9.fields.g = local_30.g;
      pUVar8 = pUVar5;
      Utility_Color255___ctor_4388bb0(pUVar5,UVar9,(MethodInfo *)0x0);
      if (__this_00 == (Settings_TypedSetting_T__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae78c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
          g_data_057ae78c = '\x01';
        }
        pUVar8[2].fields.A = 8;
        pUVar6 = (Utility_Color255_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
        pUVar8[3].klass = pUVar6;
        il2cpp_runtime_helper_022b4080(pUVar8 + 3);
        System_Object___ctor((Il2CppObject *)pUVar8,(MethodInfo *)0x0);
        (pUVar8->fields).R = (int)uVar7;
        (pUVar8->fields).G = (int)((ulong)uVar7 >> 0x20);
        il2cpp_runtime_helper_022b4080(&pUVar8->fields,uVar7);
        (pUVar8->fields).B = (int)extraout_RDX;
        (pUVar8->fields).A = (int)((ulong)extraout_RDX >> 0x20);
        il2cpp_runtime_helper_022b4080(&(pUVar8->fields).B,extraout_RDX);
        *(undefined4 *)&pUVar8[1].klass = in_ECX;
        pUVar8[1].monitor = in_R8;
        pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pUVar8[1].monitor,in_R8);
        return pSVar4;
      }
      Settings_TypedSetting_object___set_Value(__this_00,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Value);
      pSVar4 = extraout_RAX;
    }
  }
  return pSVar4;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4460880

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_ColorSetting_o *__this_00;
  bool_conflict bVar1;
  Utility_Color255_o *__this_01;
  Utility_Color255_c *pUVar2;
  undefined4 in_ECX;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  Utility_Color255_o *__this_02;
  void *in_R8;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields UStack_48;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  UnityEngine_Color_Fields UStack_28;
  
  if (g_data_057ae78b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae78b = '\x01';
  }
  UStack_48.r = 0.0;
  UStack_48.g = 0.0;
  UStack_48.b = 0.0;
  UStack_48.a = 0.0;
  if ((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) {
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&UStack_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = (__this->fields)._setting;
      UStack_28.r = UStack_48.r;
      UStack_28.g = UStack_48.g;
      UStack_28.b = 0.0;
      UStack_28.a = 0.0;
      fStack_38 = UStack_48.b;
      fStack_34 = UStack_48.a;
      uStack_30 = 0;
      __this_01 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      uVar3 = 0;
      color.fields.b = fStack_38;
      color.fields.a = fStack_34;
      color.fields.r = UStack_28.r;
      color.fields.g = UStack_28.g;
      __this_02 = __this_01;
      Utility_Color255___ctor_4388bb0(__this_01,color,(MethodInfo *)0x0);
      if (__this_00 == (Settings_ColorSetting_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae78c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingOption);
          g_data_057ae78c = '\x01';
        }
        __this_02[2].fields.A = 8;
        pUVar2 = (Utility_Color255_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingOption,0);
        __this_02[3].klass = pUVar2;
        il2cpp_runtime_helper_022b4080(__this_02 + 3);
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        (__this_02->fields).R = (int)uVar3;
        (__this_02->fields).G = (int)((ulong)uVar3 >> 0x20);
        il2cpp_runtime_helper_022b4080(&__this_02->fields,uVar3);
        (__this_02->fields).B = (int)extraout_RDX;
        (__this_02->fields).A = (int)((ulong)extraout_RDX >> 0x20);
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).B,extraout_RDX);
        *(undefined4 *)&__this_02[1].klass = in_ECX;
        __this_02[1].monitor = in_R8;
        il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,in_R8);
        return;
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)__this_01,MethodInfo_Void_set_Value);
    }
  }
  return;
}


