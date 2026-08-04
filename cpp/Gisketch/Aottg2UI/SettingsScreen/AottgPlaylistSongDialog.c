// Type: Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgPlaylistSongDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x445fbb0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog.<>c__DisplayClass7_0$$<BuildBody>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0___BuildBody_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445fcf0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0___BuildBody_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_String_o *song;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  song = (__this->fields).captured;
  if (g_data_057ae77a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae77a = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong(song,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_00 = (__this_01->fields)._Theme_k__BackingField;
      if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o* __this, const MethodInfo* method);
// 0x445f4b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *__this,MethodInfo *method)

{
  if (g_data_057ae775 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Add Song");
    g_data_057ae775 = '\x01';
  }
  return "Add Song";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o* __this, const MethodInfo* method);
// 0x445f4e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae776 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae776 = '\x01';
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


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o* __this, const MethodInfo* method);
// 0x445f5b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae777 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057ae777 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x445f670

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  void *pvVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  System_Collections_Generic_List_string__o *__this_05;
  Il2CppObject *__this_06;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Il2CppClass *pIVar8;
  long *plVar9;
  Il2CppObject *pIVar10;
  char **ppcVar11;
  Il2CppClass *pIVar12;
  undefined1 auVar13 [12];
  undefined8 in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  Il2CppObject *in_stack_ffffffffffffff48;
  undefined4 uStack_6c;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_68;
  Il2CppType *pIStack_60;
  Il2CppClass *pIStack_58;
  undefined1 auStack_48 [16];
  Il2CppClass *pIStack_38;
  
  if (g_data_057ae778 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"setting-playlist-add-song-song-");
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *)&"X";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae778 = '\x01';
  }
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pIStack_58 = (Il2CppClass *)0x0;
  uStack_6c = 0;
  __this_05 = Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AllSongs((MethodInfo *)__this);
  if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
label_0445f96b:
    il2cpp_runtime_helper_022b2c90();
label_0445f970:
    pIVar12 = pIStack_58;
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
    System_Object___ctor((Il2CppObject *)pIVar8,(MethodInfo *)0x0);
    if (pIVar8 == (Il2CppClass *)0x0) {
label_0445f996:
      il2cpp_runtime_helper_022b2c90();
    }
    ppcVar11 = &(pIVar8->_1).name;
    (pIVar8->_1).name = (char *)pIVar12;
    il2cpp_runtime_helper_022b4080(ppcVar11,pIVar12);
    il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    plVar9 = (long *)*ppcVar11;
    if (plVar9 == (long *)0x0) {
label_0445f9e0:
      il2cpp_runtime_helper_022b2c90();
    }
    uStack_6c = (**(code **)(*plVar9 + 0x158))();
    pSVar5 = System_Int32__ToString_3cb43b0((int32_t)&uStack_6c,"X",(MethodInfo *)0x0);
    System_String__Concat_3ae5ba0("setting-playlist-add-song-song-",pSVar5,(MethodInfo *)0x0);
    auVar13 = il2cpp_runtime_helper_022b2c90();
    if (auVar13._8_4_ == 1) {
      plVar9 = (long *)__cxa_begin_catch(auVar13._0_8_);
      lVar3 = *plVar9;
      __cxa_end_catch();
      __this_03.fields._index = (int)in_stack_ffffffffffffff40;
      __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff40 >> 0x20);
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
      __this_03.fields._current = in_stack_ffffffffffffff48;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&pSStack_68)
      ;
      if (lVar3 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar3);
    }
    __this_04.fields._index = (int)in_stack_ffffffffffffff40;
    __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
    __this_04.fields._current = in_stack_ffffffffffffff48;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&pSStack_68);
    _Unwind_Resume(auVar13._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pIStack_58 = pIStack_38;
  pSStack_68 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIStack_60 = (Il2CppType *)auStack_48._8_8_;
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_01.fields._index = (int)in_stack_ffffffffffffff40;
    __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
    __this_01.fields._current = in_stack_ffffffffffffff48;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&pSStack_68);
    if ((char)bVar4 != '\0') goto label_0445f970;
  }
  else {
    pIVar12 = (Il2CppClass *)&"Column";
    while (__this_00.fields._index = (int)in_stack_ffffffffffffff40,
          __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff40 >> 0x20),
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38,
          __this_00.fields._current = in_stack_ffffffffffffff48,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&pSStack_68), pIVar8 = pIStack_58,
          (char)bVar4 != '\0') {
      __this_06 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
      System_Object___ctor(__this_06,(MethodInfo *)0x0);
      if (__this_06 == (Il2CppObject *)0x0) goto label_0445f996;
      pIVar10 = __this_06 + 1;
      __this_06[1].klass = pIVar8;
      il2cpp_runtime_helper_022b4080(pIVar10,pIVar8);
      pIVar8 = pIVar10->klass;
      action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      pIVar1 = pIVar10->klass;
      plVar9 = (long *)0x0;
      if (pIVar1 == (Il2CppClass *)0x0) goto label_0445f9e0;
      pvVar2 = (pIVar1->_1).image;
      uStack_6c = (**(code **)((long)pvVar2 + 0x158))(pIVar1,*(undefined8 *)((long)pvVar2 + 0x160));
      pSVar5 = System_Int32__ToString_3cb43b0((int32_t)&uStack_6c,"X",(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3ae5ba0("setting-playlist-add-song-song-",pSVar5,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         (body,4,(System_String_o *)pIVar8,action,pSVar5,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      in_stack_ffffffffffffff48 = (Il2CppObject *)0x0;
      in_stack_ffffffffffffff38 = 0;
      in_stack_ffffffffffffff40 = 0;
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0445f96b;
      }
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar7);
    }
  }
  __this_02.fields._index = (int)in_stack_ffffffffffffff40;
  __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff40 >> 0x20);
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
  __this_02.fields._current = in_stack_ffffffffffffff48;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&pSStack_68);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x445fbc0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Object_o *__this_02;
  UnityEngine_Object_o *in_stack_00000008;
  
  method_00 = (MethodInfo *)footer;
  if (g_data_057ae779 == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *)&"Cancel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae779 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae77a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae77a = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong((System_String_o *)__this,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = in_stack_00000008;
  bVar1 = UnityEngine_Object__op_Inequality(in_stack_00000008,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (in_stack_00000008 == (UnityEngine_Object_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_
                          ((UnityEngine_GameObject_o *)in_stack_00000008,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_00 = (__this_01->fields)._Theme_k__BackingField;
      if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog$$Select
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__Select (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* song, const MethodInfo* method);
// 0x445fc20

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog__Select
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *song,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (g_data_057ae77a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae77a = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions__AddSong(song,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (__this_00->fields)._Theme_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgPlaylistSongDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o* __this, const MethodInfo* method);
// 0x445fce0

void Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistSongDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


