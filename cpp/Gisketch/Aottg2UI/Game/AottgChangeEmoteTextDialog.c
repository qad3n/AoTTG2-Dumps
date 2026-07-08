// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeEmoteTextDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x41e6f40

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f00 == '\0') {
    il2cpp_init_method_metadata(&"Change Emote Text");
    DAT_05704f00 = '\x01';
  }
  return "Change Emote Text";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x41e6f70

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f01 == '\0') {
    il2cpp_init_method_metadata(&"material-icons/chat");
    DAT_05704f01 = '\x01';
  }
  return "material-icons/chat";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x41e6fa0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704f02 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704f02 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41e7070

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (DAT_05704f03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEmoteEditSelection);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-change-emote-text-input");
    il2cpp_init_method_metadata(&"Text emote");
    il2cpp_init_method_metadata();
    DAT_05704f03 = '\x01';
  }
  index = **(int32_t **)(TypeInfo_AottgEmoteEditSelection + 0xb8);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    method_00 = "profile-change-emote-text-input";
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (body,(System_String_o *)"profile-change-emote-text-input","Text emote",0,"inputField",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue(index,method_00);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).value = pSVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).value,pSVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x41e72d0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (DAT_05704f04 == '\0') {
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"profile.emote.text.save");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704f04 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              (footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
              (footer,"Save","profile.emote.text.save",(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue (int32_t index, const MethodInfo* method);
// 0x41e71f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue(int32_t index,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *__this;
  Settings_BaseSetting_o *pSVar3;
  
  if (DAT_05704f05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704f05 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 != 0) {
    __this = *(Settings_ListSetting_T__o **)(lVar2 + 0x20);
    if (__this != (Settings_ListSetting_T__o *)0x0) {
      pSVar3 = Settings_ListSetting<object>__GetItemAt(__this,index,MethodInfo_BaseSetting_GetItemAt);
      if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar3->klass->_2).naturalAligment) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          return pSVar3[1].monitor;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x41e7360

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


