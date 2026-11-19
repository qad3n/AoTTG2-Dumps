// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgPlaylistManagerDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x5dc4f50

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$<BuildColumn>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5dc5600

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  
  if (Il2CppMethodInitialized_075481b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-scroll");
    il2cpp_codegen_initialize_runtime_metadata(&"settingLabel");
    Il2CppMethodInitialized_075481b4 = '\x01';
  }
  pSVar1 = (__this->fields).titleKey;
  pSVar2 = System_String__Concat_52f0320((__this->fields).columnId,"-title",(MethodInfo *)0x0);
  if (column != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (column,pSVar1,"settingLabel",pSVar2,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
      pSVar1 = "clear";
      __this_00 = (__this->fields).__9__1;
      if (__this_00 == (System_Action_AottgUi__o *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__1
                   ,(MethodInfo_4A81BE0 *)0x0);
        (__this->fields).__9__1 = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
      }
      pSVar2 = System_String__Concat_52f0320
                         ((__this->fields).columnId,"-scroll",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,4.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                (column,pSVar1,__this_00,pSVar2,pGVar4,contentLayout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$<BuildColumn>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* list, const MethodInfo* method);
// 0x5dc5930

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *list,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSongList
            (list,(__this->fields).kind,(__this->fields).songs,(__this->fields).available,in_R8);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x5dc54e0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o* __this, const MethodInfo* method);
// 0x5dc55c0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_1$$<BuildSongList>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___BuildSongList_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc5950

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___BuildSongList_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *pGVar1;
  MethodInfo *method_00;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)(__this->fields).song;
  if ((pGVar1->fields).available == false) {
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong_5cc3e80
              ((System_String_o *)method_00,method);
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange(context,method_00);
    return;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong_5cc3cd0((System_String_o *)method_00,method);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange(context,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x5dc4970

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.PlaylistManager");
    Il2CppMethodInitialized_075481ab = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("SettingsPopup.Sound.PlaylistManager",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x5dc49d0

bool Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x5dc49e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075481ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075481ac = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(860.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x5dc4aa0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075481ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075481ad = '\x01';
  }
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5dc4b60

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_String_o **ppSVar2;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075481af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.AvailableSongs");
    ppSVar2 = &"available";
    il2cpp_codegen_initialize_runtime_metadata(&"available");
    Il2CppMethodInitialized_075481af = '\x01';
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *)ppSVar2;
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)__this);
  ppSVar2 = (System_String_o **)body;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
            (body,"available","SettingsPopup.Sound.AvailableSongs",pSVar1,true,in_R9);
  if (Il2CppMethodInitialized_075481b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"selected");
    ppSVar2 = &"SettingsPopup.Sound.SelectedSongs";
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.SelectedSongs");
    Il2CppMethodInitialized_075481b0 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__PlaylistManagerSongs((MethodInfo *)ppSVar2);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
            (body,"selected","SettingsPopup.Sound.SelectedSongs",pSVar1,false,in_R9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5dc4cd0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075481ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    Il2CppMethodInitialized_075481ae = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Close","overlay.close",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildAvailableColumn
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildAvailableColumn (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5dc4c10

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildAvailableColumn
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *songs;
  System_String_o **method_00;
  MethodInfo *in_R9;
  
  method_00 = (System_String_o **)body;
  if (Il2CppMethodInitialized_075481af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.AvailableSongs");
    method_00 = &"available";
    il2cpp_codegen_initialize_runtime_metadata(&"available");
    Il2CppMethodInitialized_075481af = '\x01';
  }
  songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
            (body,"available","SettingsPopup.Sound.AvailableSongs",songs,true,in_R9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildSelectedColumn
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSelectedColumn (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5dc4c70

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSelectedColumn
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *songs;
  System_String_o **method_00;
  MethodInfo *in_R9;
  
  method_00 = (System_String_o **)body;
  if (Il2CppMethodInitialized_075481b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"selected");
    method_00 = &"SettingsPopup.Sound.SelectedSongs";
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.SelectedSongs");
    Il2CppMethodInitialized_075481b0 = '\x01';
  }
  songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__PlaylistManagerSongs((MethodInfo *)method_00)
  ;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
            (body,"selected","SettingsPopup.Sound.SelectedSongs",songs,false,in_R9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildColumn
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* kind, System_String_o* titleKey, System_Collections_Generic_List_string__o* songs, bool available, const MethodInfo* method);
// 0x5dc4d30

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *kind,System_String_o *titleKey,
               System_Collections_Generic_List_string__o *songs,bool available,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *__this;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075481b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-playlist-manager-");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075481b1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *)0x0) {
    (__this->fields).titleKey = titleKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).titleKey);
    (__this->fields).kind = kind;
    Il2CppCodeGenWriteBarrier(&(__this->fields).kind);
    (__this->fields).songs = songs;
    Il2CppCodeGenWriteBarrier(&(__this->fields).songs);
    (__this->fields).available = available;
    pSVar1 = System_String__Concat_52f0320("setting-playlist-manager-",(__this->fields).kind,(MethodInfo *)0x0);
    (__this->fields).columnId = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).columnId);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    pSVar1 = (__this->fields).columnId;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"clear",__this_00,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildSongList
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSongList (Gisketch_Aottg2UI_Code_AottgUi_o* list, System_String_o* kind, System_Collections_Generic_List_string__o* songs, bool available, const MethodInfo* method);
// 0x5dc4f60
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc519f: nop 
// asm:   0x5dc5320: jmp 0x5dc5468
// asm:   0x5dc542f: jmp 0x5dc5435

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSongList
               (Gisketch_Aottg2UI_Code_AottgUi_o *list,System_String_o *kind,
               System_Collections_Generic_List_string__o *songs,bool available,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o **targetAddress;
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *__this;
  System_Collections_Generic_List_string__o *selected;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar6;
  System_String_o **ppSVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o *pGVar8;
  MethodInfo *pMVar9;
  System_String_o *str3;
  System_String_o *id;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  undefined7 in_register_00000009;
  MethodInfo *method_00;
  
  pMVar9 = (MethodInfo *)CONCAT71(in_register_00000009,available);
  if (Il2CppMethodInitialized_075481b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1_BuildSongList_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist.available.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-playlist-manager-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist.selected.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_075481b2 = '\x01';
  }
  __this = (MethodInfo *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_0
                     );
  method_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (MethodInfo *)0x0) {
    ((Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_Fields *)
    &__this->invoker_method)->available = available;
    selected = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs(method_00);
    iVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__VisibleCount
                      (songs,selected,
                       ((Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_Fields
                         *)&__this->invoker_method)->available,pMVar9);
    pSVar4 = System_String__Concat_5301f10("setting-playlist-manager-",kind,"-empty",(MethodInfo *)0x0)
    ;
    if ((list != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
       (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                           (list,"Common.None","stateMetaText",pSVar4,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
       pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      (pGVar5->fields).active = iVar3 == 0;
      pGVar6 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        if (((Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_Fields *)
            &__this->invoker_method)->available == false) {
          ppSVar7 = &"settings.sound.customPlaylist.selected.empty";
        }
        else {
          ppSVar7 = &"settings.sound.customPlaylist.available.empty";
        }
        (pGVar6->fields).visible = *ppSVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).visible);
        (pGVar5->fields).bind = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
        if (songs != (System_Collections_Generic_List_string__o *)0x0) {
          iVar1 = (songs->fields)._size;
          if (selected == (System_Collections_Generic_List_string__o *)0x0) {
            if (0 < iVar1) {
              pGVar8 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1
                                 );
              System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
              if (pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o
                             *)0x0) {
                (pGVar8->fields).CS___8__locals1 =
                     (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *)
                     __this;
                Il2CppCodeGenWriteBarrier(&(pGVar8->fields).CS___8__locals1);
                pMVar9 = (MethodInfo *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)songs,0,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_string_get_Item);
                (pGVar8->fields).song = (System_String_o *)pMVar9;
                Il2CppCodeGenWriteBarrier(&(pGVar8->fields).song);
                pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId
                                   ((pGVar8->fields).song,pMVar9);
                System_String__Concat_5302810
                          ("setting-playlist-manager-",kind,"-",pSVar4,(MethodInfo *)0x0);
                ThrowNullReferenceException();
              }
              goto label_05dc5468;
            }
          }
          else if (0 < iVar1) {
            iVar3 = 0;
            do {
              pGVar8 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1
                                 );
              System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
              if (pGVar8 == (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o
                             *)0x0) goto label_05dc5468;
              targetAddress = &(pGVar8->fields).CS___8__locals1;
              (pGVar8->fields).CS___8__locals1 =
                   (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *)
                   __this;
              Il2CppCodeGenWriteBarrier(targetAddress);
              pMVar9 = (MethodInfo *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)songs,iVar3,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_string_get_Item);
              (pGVar8->fields).song = (System_String_o *)pMVar9;
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).song);
              str3 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SongStateId
                               ((pGVar8->fields).song,pMVar9);
              id = System_String__Concat_5302810
                             ("setting-playlist-manager-",kind,"-",str3,(MethodInfo *)0x0);
              bVar2 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)selected,
                                 (Il2CppObject *)(pGVar8->fields).song,
                                 (MethodInfo_395D6D0 *)
                                 MethodInfo_System_Collections_Generic_List_string_Contains);
              pSVar4 = (pGVar8->fields).song;
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
              System_Action_GisketchActionContext____ctor
                        (__this_00,(Il2CppObject *)pGVar8,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1_BuildSongList_b
                         ,(MethodInfo_4A803E0 *)0x0);
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                                 (list,5,pSVar4,__this_00,id,(System_String_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                  (System_String_o *)0x0,(MethodInfo *)0x0);
              if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05dc5468;
              (pGVar5->fields).clip = true;
              if (*targetAddress ==
                  (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *)0x0)
              goto label_05dc5468;
              (pGVar5->fields).active = (((*targetAddress)->fields).available != false) != bVar2;
              pGVar6 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
              Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
              if (*targetAddress ==
                  (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *)0x0)
              goto label_05dc5468;
              if (((*targetAddress)->fields).available == false) {
                pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistSelected
                                   (str3,(MethodInfo *)0x0);
              }
              else {
                pSVar4 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistAvailable
                                   (str3,(MethodInfo *)0x0);
              }
              if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05dc5468;
              (pGVar6->fields).visible = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).visible);
              (pGVar5->fields).bind = pGVar6;
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
              width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                  ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                   (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                   0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              (pGVar5->fields).layout = pGVar10;
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
              iVar3 = iVar3 + 1;
            } while (iVar3 < (songs->fields)._size);
          }
        }
        return;
      }
    }
  }
label_05dc5468:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$ToggleSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__ToggleSong (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* song, bool available, const MethodInfo* method);
// 0x5dc55d0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__ToggleSong
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *song,bool available
               ,MethodInfo *method)

{
  undefined3 in_register_00000031;
  uint in_register_00000034;
  
  if (CONCAT31(in_register_00000031,available) == 0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__RemoveSong_5cc3e80
              (song,(MethodInfo *)((ulong)in_register_00000034 << 0x20));
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange(context,(MethodInfo *)song);
    return;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong_5cc3cd0
            (song,(MethodInfo *)CONCAT44(in_register_00000034,CONCAT31(in_register_00000031,available)));
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncAfterChange(context,(MethodInfo *)song);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$VisibleCount
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__VisibleCount (System_Collections_Generic_List_string__o* songs, System_Collections_Generic_List_string__o* selected, bool available, const MethodInfo* method);
// 0x5dc54f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc5594: jmp 0x5dc55a8

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__VisibleCount
                  (System_Collections_Generic_List_string__o *songs,
                  System_Collections_Generic_List_string__o *selected,bool available,MethodInfo *method)

{
  bool bVar1;
  System_String_o *item;
  int iVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_075481b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_075481b3 = '\x01';
  }
  iVar2 = 0;
  if (songs != (System_Collections_Generic_List_string__o *)0x0) {
    iVar3 = (songs->fields)._size;
    if (selected == (System_Collections_Generic_List_string__o *)0x0) {
      iVar2 = 0;
      if (available) {
        iVar2 = iVar3;
      }
      if (iVar3 < 1) {
        iVar2 = 0;
      }
    }
    else if (0 < iVar3) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        item = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)songs,iVar3,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        bVar1 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)selected,(Il2CppObject *)item,
                           (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        iVar2 = iVar2 + (uint)(bVar1 != available);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (songs->fields)._size);
    }
  }
  return iVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x5dc55f0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


