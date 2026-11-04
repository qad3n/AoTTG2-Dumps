// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgPlaylistManagerDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$<BuildColumn>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x18231fab0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *id;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  
  if (Il2CppMethodInitialized_18434770f == '\0') {
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
    Il2CppMethodInitialized_18434770f = '\x01';
  }
  pSVar1 = (__this->fields).titleKey;
  pSVar2 = (__this->fields).title;
  id = System_String__Concat_1969e50((__this->fields).columnId,"-title",(MethodInfo *)0x0);
  if (column != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (column,pSVar1,pSVar2,"settingLabel",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "clear";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__1
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
    }
    pSVar2 = System_String__Concat_1969e50((__this->fields).columnId,"-scroll",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                    (System_String_o *)0x0,6.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,4.0,0.0,0.0,0.0,0.0,0.0,1.0
                    ,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__ScrollView
              (column,pSVar1,(System_Action_AottgUi__o *)__this_00,pSVar2,layout,contentLayout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass13_0$$<BuildColumn>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* list, const MethodInfo* method);
// 0x18231fe00

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0___BuildColumn_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *list,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSongList
            (list,(__this->fields).kind,(__this->fields).songs,(__this->fields).available,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog.<>c__DisplayClass14_1$$<BuildSongList>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___BuildSongList_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18231ffd0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1___BuildSongList_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *pGVar1;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *)0x0) {
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__ToggleSong
              (&local_28,(__this->fields).song,(pGVar1->fields).available,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x18230bcf0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347706 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Playlist Manager");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.PlaylistManager");
    Il2CppMethodInitialized_184347706 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("SettingsPopup.Sound.PlaylistManager","Playlist Manager",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_BodyScrollable(Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x18230bbf0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347707 = '\x01';
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
// 0x18230baf0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347708 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347708 = '\x01';
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
// 0x18230ab40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230ac4c: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar3;
  int index;
  
  if (Il2CppMethodInitialized_18434770a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Songs");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.AvailableSongs");
    il2cpp_codegen_initialize_runtime_metadata(&"available");
    Il2CppMethodInitialized_18434770a = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
            (body,"available","SettingsPopup.Sound.AvailableSongs","Songs",pSVar2,true,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434770b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Selected songs");
    il2cpp_codegen_initialize_runtime_metadata(&"selected");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.SelectedSongs");
    Il2CppMethodInitialized_18434770b = '\x01';
  }
  if (Il2CppMethodInitialized_1843476ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_1843476ff = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)0x0);
  __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
  index = 0;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    while( true ) {
      if ((__this_00->fields)._size <= index) {
        Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
                  (body,"selected","SettingsPopup.Sound.SelectedSongs","Selected songs",pSVar2,false,
                   (MethodInfo *)0x0);
        return;
      }
      pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) break;
      bVar1 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)pSVar3,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar1) {
        pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        il2cpp_runtime_helper_180012890(pSVar2,pSVar3,MethodInfo_System_Collections_Generic_List_string_Add);
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x18230af60

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347709 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    Il2CppMethodInitialized_184347709 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Close","Close","overlay.close",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildAvailableColumn
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildAvailableColumn (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x18230aac0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildAvailableColumn
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *songs;
  
  if (Il2CppMethodInitialized_18434770a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Songs");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.AvailableSongs");
    il2cpp_codegen_initialize_runtime_metadata(&"available");
    Il2CppMethodInitialized_18434770a = '\x01';
  }
  songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
            (body,"available","SettingsPopup.Sound.AvailableSongs","Songs",songs,true,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildSelectedColumn
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSelectedColumn (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x18230afe0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSelectedColumn
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *songs;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar2;
  int index;
  
  if (Il2CppMethodInitialized_18434770b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Selected songs");
    il2cpp_codegen_initialize_runtime_metadata(&"selected");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Sound.SelectedSongs");
    Il2CppMethodInitialized_18434770b = '\x01';
  }
  if (Il2CppMethodInitialized_1843476ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_1843476ff = '\x01';
  }
  songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AvailableSongs((MethodInfo *)0x0);
  __this = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
  index = 0;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    while( true ) {
      if ((__this->fields)._size <= index) {
        Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
                  (body,"selected","SettingsPopup.Sound.SelectedSongs","Selected songs",songs,false,
                   (MethodInfo *)0x0);
        return;
      }
      pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      if (songs == (System_Collections_Generic_List_string__o *)0x0) break;
      bVar1 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)songs,(Il2CppObject *)pSVar2,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar1) {
        pSVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        il2cpp_runtime_helper_180012890(songs,pSVar2,MethodInfo_System_Collections_Generic_List_string_Add);
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildColumn
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* kind, System_String_o* titleKey, System_String_o* title, System_Collections_Generic_List_string__o* songs, bool available, const MethodInfo* method);
// 0x18230acf0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildColumn
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *kind,System_String_o *titleKey,
               System_String_o *title,System_Collections_Generic_List_string__o *songs,bool available,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_18434770c == '\0') {
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
    Il2CppMethodInitialized_18434770c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass13_0_o *)0x0) {
    (object->fields).titleKey = titleKey;
    Il2CppCodeGenWriteBarrier(&(object->fields).titleKey,titleKey);
    (object->fields).title = title;
    Il2CppCodeGenWriteBarrier(&(object->fields).title,title);
    (object->fields).kind = kind;
    Il2CppCodeGenWriteBarrier(&(object->fields).kind,kind);
    (object->fields).songs = songs;
    Il2CppCodeGenWriteBarrier(&(object->fields).songs,songs);
    (object->fields).available = available;
    pSVar1 = System_String__Concat_1969e50("setting-playlist-manager-",(object->fields).kind,(MethodInfo *)0x0);
    (object->fields).columnId = pSVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).columnId,pSVar1);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass13_0_BuildColumn_b__0
               ,(MethodInfo *)0x0);
    pSVar1 = (object->fields).columnId;
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
                (body,"clear",(System_Action_AottgUi__o *)__this,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$BuildSongList
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSongList (Gisketch_Aottg2UI_Code_AottgUi_o* list, System_String_o* kind, System_Collections_Generic_List_string__o* songs, bool available, const MethodInfo* method);
// 0x18230b120
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18230b2d6: mov edi, r14d
// asm:   0x18230b2d9: mov ecx, r14d
// asm:   0x18230b2dc: nop dword ptr [rax]
// asm:   0x18230b3f8: movss xmm7, dword ptr [rip + 0x104da78]
// asm:   0x18230b400: mov ebx, r14d
// asm:   0x18230b403: movss xmm8, dword ptr [rip + 0x104e2c4]
// asm:   0x18230b40c: mov eax, r14d
// asm:   0x18230b40f: xorps xmm6, xmm6
// asm:   0x18230b4cc: nop dword ptr [rax]
// asm:   0x18230b4dc: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__BuildSongList
               (Gisketch_Aottg2UI_Code_AottgUi_o *list,System_String_o *kind,
               System_Collections_Generic_List_string__o *songs,bool available,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *pGVar1;
  uint32_t uVar2;
  bool bVar3;
  bool bVar4;
  uint16_t uVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o *object;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *id;
  DG_Tweening_Core_DOSetter_Color2__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_18434770d == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.sound.customPlaylist.selected.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_18434770d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o *)0x0) {
    (__this->fields).available = available;
    __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
    bVar4 = (__this->fields).available;
    if (Il2CppMethodInitialized_18434770e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
      Il2CppMethodInitialized_18434770e = '\x01';
    }
    iVar12 = 0;
    iVar9 = 0;
    iVar10 = iVar12;
    iVar11 = iVar12;
    if (songs != (System_Collections_Generic_List_string__o *)0x0) {
      for (; iVar9 = iVar10, iVar11 < (songs->fields)._size; iVar11 = iVar11 + 1) {
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          bVar3 = false;
        }
        else {
          pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)songs,iVar11,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
          ;
          bVar3 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                             (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        }
        if (bVar4 != false) {
          bVar3 = (bool)(bVar3 ^ 1);
        }
        iVar10 = (iVar9 + 1) - (uint)(bVar3 == false);
      }
    }
    pSVar6 = System_String__Concat_1969b70("setting-playlist-manager-",kind,"-empty",(MethodInfo *)0x0)
    ;
    if ((list != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
       (pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                           (list,"Common.None","None","stateMetaText",pSVar6,
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0),
       pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      (pGVar7->fields).active = iVar9 == 0;
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar8,(MethodInfo *)0x0);
      pSVar6 = "settings.sound.customPlaylist.selected.empty";
      if ((__this->fields).available != false) {
        pSVar6 = "settings.sound.customPlaylist.available.empty";
      }
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar8->fields).visible = pSVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible,pSVar6);
        (pGVar7->fields).bind = pGVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind,pGVar8);
        iVar10 = iVar12;
        if (songs != (System_Collections_Generic_List_string__o *)0x0) {
          for (; iVar10 < (songs->fields)._size; iVar10 = iVar10 + 1) {
            object = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1
                               );
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0)
            ;
            if (object == (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_1_o
                           *)0x0) goto label_18230b7b1;
            (object->fields).CS___8__locals1 = __this;
            Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
            pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)songs,iVar10,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            (object->fields).song = pSVar6;
            Il2CppCodeGenWriteBarrier(&(object->fields).song,pSVar6);
            pSVar6 = (object->fields).song;
            if (Il2CppMethodInitialized_184347703 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
              il2cpp_codegen_initialize_runtime_metadata(&"x8");
              Il2CppMethodInitialized_184347703 = '\x01';
            }
            local_res20[0] = 0x811c9dc5;
            if (pSVar6 == (System_String_o *)0x0) {
              pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
            iVar11 = iVar12;
            if (pSVar6 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            for (; uVar2 = local_res20[0], iVar11 < (pSVar6->fields)._stringLength; iVar11 = iVar11 + 1) {
              uVar5 = System_String__get_Chars(pSVar6,iVar11,(MethodInfo *)0x0);
              local_res20[0] = (uVar5 ^ uVar2) * 0x1000193;
            }
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            pSVar6 = System_UInt32__ToString_1b56840
                               (local_res20,"x8",(System_IFormatProvider_o *)provider,
                                (MethodInfo *)0x0);
            id = System_String__Concat_1969590
                           ("setting-playlist-manager-",kind,"-",pSVar6,(MethodInfo *)0x0);
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18230b7b1;
            bVar4 = System_Collections_Generic_List_object___Contains
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (Il2CppObject *)(object->fields).song,
                               (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains
                              );
            text = (object->fields).song;
            __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext)
            ;
            DG_Tweening_Core_DOSetter_Color2____ctor
                      (__this_01,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_c__DisplayClass14_1_BuildSongList_b
                       ,(MethodInfo_1387DC0 *)0x0);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                               (list,5,text,(System_Action_GisketchActionContext__o *)__this_01,id,
                                (System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0);
            if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_18230b7b1;
            (pGVar7->fields).clip = true;
            pGVar1 = (object->fields).CS___8__locals1;
            if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o
                           *)0x0) goto label_18230b7b1;
            if ((pGVar1->fields).available != false) {
              bVar4 = !bVar4;
            }
            (pGVar7->fields).active = bVar4;
            pGVar8 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar8,(MethodInfo *)0x0);
            pGVar1 = (object->fields).CS___8__locals1;
            if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___c__DisplayClass14_0_o
                           *)0x0) goto label_18230b7b1;
            if ((pGVar1->fields).available == false) {
              pSVar6 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistSelected
                                 (pSVar6,(MethodInfo *)0x0);
            }
            else {
              pSVar6 = Gisketch_Aottg2UI_Game_AottgSettingsStateKeys__CustomPlaylistAvailable
                                 (pSVar6,(MethodInfo *)0x0);
            }
            if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_18230b7b1;
            (pGVar8->fields).visible = pSVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible,pSVar6);
            (pGVar7->fields).bind = pGVar8;
            Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind,pGVar8);
            width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
            minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
            value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar7->fields).layout = value;
            Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout,value);
          }
        }
        return;
      }
    }
  }
label_18230b7b1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$ToggleSong
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__ToggleSong (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* song, bool available, const MethodInfo* method);
// 0x18230b7c0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__ToggleSong
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *song,
               bool available,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *object;
  System_Collections_Generic_List_string__o *songs;
  System_Predicate_T__o *match;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (available) {
    if (Il2CppMethodInitialized_1843476fa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_1843476fa = '\x01';
    }
    if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) {
      bVar1 = System_String__IsNullOrEmpty(song,(MethodInfo *)0x0);
      if (!bVar1) {
        songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
        if (songs == (System_Collections_Generic_List_string__o *)0x0) goto label_18230b9fe;
        bVar1 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)songs,(Il2CppObject *)song,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (!bVar1) {
          il2cpp_runtime_helper_180012890(songs);
          goto label_18230b96e;
        }
      }
    }
  }
  else {
    if (Il2CppMethodInitialized_1843476fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAll)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
      Il2CppMethodInitialized_1843476fb = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object == (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions___c__DisplayClass5_0_o *)0x0)
    goto label_18230b9fe;
    (object->fields).song = song;
    Il2CppCodeGenWriteBarrier(&(object->fields).song,song);
    if (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings != (Settings_SoundSettings_o *)0x0) {
      bVar1 = System_String__IsNullOrEmpty((object->fields).song,(MethodInfo *)0x0);
      if (!bVar1) {
        songs = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__CurrentSongs((MethodInfo *)0x0);
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_c__DisplayClass5_0_RemoveSong_b__0
                   ,(MethodInfo_B61EB0 *)0x0);
        if (songs == (System_Collections_Generic_List_string__o *)0x0) goto label_18230b9fe;
        System_Collections_Generic_List_object___RemoveAll
                  ((System_Collections_Generic_List_object__o *)songs,match,
                   (MethodInfo_946210 *)MethodInfo_System_Collections_Generic_List_string_RemoveAll);
label_18230b96e:
        Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SetSongs(songs,(MethodInfo *)0x0);
      }
    }
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347705 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
label_18230b9fe:
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncCustomPlaylist(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__SyncPlaylistManager(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$VisibleCount
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__VisibleCount (System_Collections_Generic_List_string__o* songs, System_Collections_Generic_List_string__o* selected, bool available, const MethodInfo* method);
// 0x18230ba10

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog__VisibleCount
                  (System_Collections_Generic_List_string__o *songs,
                  System_Collections_Generic_List_string__o *selected,bool available,MethodInfo *method)

{
  bool bVar1;
  System_String_o *item;
  int iVar2;
  int index;
  
  if (Il2CppMethodInitialized_18434770e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_18434770e = '\x01';
  }
  if (songs != (System_Collections_Generic_List_string__o *)0x0) {
    iVar2 = 0;
    for (index = 0; index < (songs->fields)._size; index = index + 1) {
      if (selected == (System_Collections_Generic_List_string__o *)0x0) {
        bVar1 = false;
      }
      else {
        item = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)songs,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        bVar1 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)selected,(Il2CppObject *)item,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      }
      if (available) {
        bVar1 = (bool)(bVar1 ^ 1);
      }
      iVar2 = (iVar2 + 1) - (uint)(bVar1 == false);
    }
    return iVar2;
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistManagerDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistManagerDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


