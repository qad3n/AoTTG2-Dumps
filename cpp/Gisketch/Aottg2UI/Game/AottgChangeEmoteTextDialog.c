// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeEmoteTextDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x4517f40

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aedd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Change Emote Text");
    g_data_057aedd8 = '\x01';
  }
  return "Change Emote Text";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x4517f70

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aedd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/chat");
    g_data_057aedd9 = '\x01';
  }
  return "material-icons/chat";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x4517fa0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aedda == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aedda = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4518070

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  byte bVar1;
  uint index;
  long lVar2;
  Settings_ListSetting_T__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Il2CppObject *__this_01;
  Il2CppClass *method_00;
  System_String_o *pSVar5;
  
  if (g_data_057aeddb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEmoteEditSelection);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-change-emote-text-input");
    il2cpp_runtime_helper_023445d0(&"Text emote");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeddb = '\x01';
  }
  index = **(uint **)(TypeInfo_AottgEmoteEditSelection + 0xb8);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  method_00 = (Il2CppClass *)0x0;
  pSVar5 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    method_00 = "profile-change-emote-text-input";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (body,(System_String_o *)"profile-change-emote-text-input","Text emote",0,"inputField",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)(ulong)index;
    pSVar4 = Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue(index,(MethodInfo *)method_00);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).value = pSVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value,pSVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeddd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aeddd = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 == 0) {
    return;
  }
  __this_00 = *(Settings_ListSetting_T__o **)(lVar2 + 0x20);
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    method_00 = (Il2CppClass *)((ulong)pSVar5 & 0xffffffff);
    __this_01 = (Il2CppObject *)
                Settings_ListSetting_object___GetItemAt(__this_00,(int32_t)pSVar5,MethodInfo_BaseSetting_GetItemAt);
    if (__this_01 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      method_00 = TypeInfo_StringSetting;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
        return;
      }
      goto label_045182c1;
    }
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_045182c1:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aeddc == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"profile.emote.text.save");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    __this_01 = (Il2CppObject *)&"Save";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeddc = '\x01';
  }
  if (method_00 != (Il2CppClass *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)method_00,"Cancel","overlay.close",
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)method_00,"Save","profile.emote.text.save",
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x45182d0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (g_data_057aeddc == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"profile.emote.text.save");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    __this = (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *)&"Save";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeddc = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary(footer,"Save","profile.emote.text.save",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue (int32_t index, const MethodInfo* method);
// 0x45181f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue(int32_t index,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *__this;
  System_String_o *extraout_RAX;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Il2CppClass *pIVar4;
  
  pIVar4 = (Il2CppClass *)(ulong)(uint)index;
  if (g_data_057aeddd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aeddd = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  __this = *(Settings_ListSetting_T__o **)(lVar2 + 0x20);
  if (__this != (Settings_ListSetting_T__o *)0x0) {
    __this_00 = (Il2CppObject *)Settings_ListSetting_object___GetItemAt(__this,index,MethodInfo_BaseSetting_GetItemAt);
    method = (MethodInfo *)pIVar4;
    if (__this_00 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      method = (MethodInfo *)TypeInfo_StringSetting;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
        return __this_00[1].monitor;
      }
      goto label_045182c1;
    }
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_045182c1:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aeddc == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"profile.emote.text.save");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    __this_00 = (Il2CppObject *)&"Save";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeddc = '\x01';
  }
  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)method,"Cancel","overlay.close",
               (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
                       ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)method,"Save","profile.emote.text.save",
                        (MethodInfo *)0x0);
    return (System_String_o *)pGVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x4518360

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


