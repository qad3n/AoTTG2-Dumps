// Type: Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEditProfileDetailsDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c___cctor (const MethodInfo* method);
// 0x4521fa0

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aee2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee2d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_o* __this, const MethodInfo* method);
// 0x4522010

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c$$<LocalBioImport>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c___LocalBioImport_b__10_0 (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4522020

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c___LocalBioImport_b__10_0
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_c *placeholder;
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  bool_conflict bVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  System_String_o *detail;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *value;
  long *plVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_04;
  System_String_o **ppSVar8;
  undefined1 auVar9 [12];
  undefined1 in_stack_fffffffffffffed8 [15];
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_f0;
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_o *pGStack_d0;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_c8;
  UnityEngine_Object_o *in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 uStack_74;
  undefined4 in_stack_ffffffffffffff98;
  undefined4 uStack_64;
  
  __this_04 = row;
  if (g_data_057aee2e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Use local Bio");
    il2cpp_runtime_helper_023445d0(&"profile.importLocalBio");
    ppSVar8 = &"profile-details-import-local-bio";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee2e = '\x01';
    __this = (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_o *)ppSVar8;
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (row,1,"Use local Bio","profile.importLocalBio","profile-details-import-local-bio",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee2f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"textArea");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"No bio yet.");
    g_data_057aee2f = '\x01';
  }
  if (__this_04 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_04,(System_String_o *)__this[1].klass,"accountInputLabel",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pSVar5 = __this[1].monitor;
    placeholder = __this[2].klass;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff70 = (UnityEngine_Object_o *)0x0;
    in_stack_ffffffffffffff98 = 0;
    in_stack_ffffffffffffff88 = 0;
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__TextArea
                       (__this_04,pSVar5,(System_String_o *)placeholder,"textArea",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,0x200,(MethodInfo *)0x0);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar5,"No bio yet.",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar5 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
    }
    else {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    __this = (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c_o *)0x0;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).value = pSVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).value);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-image");
    g_data_057aee33 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = CONCAT44(uStack_74,in_stack_ffffffffffffff88);
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgProfileDialogSelection + 0xb8));
  pSVar5 = "profile-preview-avatar-image";
  pGStack_d0 = __this;
  pGStack_c8 = __this_04;
  if (g_data_057aee35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_Find_Image);
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"found=");
    il2cpp_runtime_helper_023445d0(&"ProfileDialogUi.UpdatePreviewImage");
    g_data_057aee35 = '\x01';
  }
  uVar10 = 0;
  detail = System_String__Concat_3af7150
                     (pSVar5," sprite=",(System_String_o *)CONCAT44(uStack_64,in_stack_ffffffffffffff98),
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_f0,"ProfileDialogUi.UpdatePreviewImage",detail,(MethodInfo *)0x0);
  uVar11 = local_f0.fields._area._0_4_;
  uVar12 = local_f0.fields._area._4_4_;
  uVar13 = local_f0.fields._detail._0_4_;
  bVar2 = local_f0.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar11 = local_f0.fields._area._0_4_;
    uVar12 = local_f0.fields._area._4_4_;
    uVar13 = local_f0.fields._detail._0_4_;
    bVar2 = local_f0.fields._detail._4_4_;
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    (in_stack_ffffffffffffff70,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar6 = (UnityEngine_Transform_o *)0x0;
label_0452242d:
    __this_03 = (UnityEngine_UI_Image_o *)
                Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_(pUVar6,pSVar5,MethodInfo_Image_Find_Image);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar10 = (undefined1)bVar3;
    if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = System_Boolean__ToString((bool_conflict)&stack0xfffffffffffffee7,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3ae5ba0("found=",pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar5,(MethodInfo *)0x0);
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load
                        ((System_String_o *)CONCAT44(uStack_64,in_stack_ffffffffffffff98),(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_UI_Image_o *)0x0) goto label_04522529;
      UnityEngine_UI_Image__set_sprite(__this_03,value,(MethodInfo *)0x0);
    }
    __this_00.fields._detail._7_1_ = uVar10;
    __this_00.fields._0_15_ = in_stack_fffffffffffffed8;
    __this_00.fields._startMs._0_4_ = uVar11;
    __this_00.fields._startMs._4_4_ = uVar12;
    __this_00.fields._enabled = uVar13;
    __this_00.fields._hotLoop = bVar2;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xfffffffffffffee8);
    return;
  }
  if (in_stack_ffffffffffffff70 == (UnityEngine_Object_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar6 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)in_stack_ffffffffffffff70,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0);
      goto label_0452242d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04522529:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar1 = *plVar7;
    __cxa_end_catch();
    __this_01.fields._detail._7_1_ = uVar10;
    __this_01.fields._0_15_ = in_stack_fffffffffffffed8;
    __this_01.fields._startMs._0_4_ = uVar11;
    __this_01.fields._startMs._4_4_ = uVar12;
    __this_01.fields._enabled = uVar13;
    __this_01.fields._hotLoop = bVar2;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xfffffffffffffee8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._detail._7_1_ = uVar10;
  __this_02.fields._0_15_ = in_stack_fffffffffffffed8;
  __this_02.fields._startMs._0_4_ = uVar11;
  __this_02.fields._startMs._4_4_ = uVar12;
  __this_02.fields._enabled = uVar13;
  __this_02.fields._hotLoop = bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xfffffffffffffee8);
  _Unwind_Resume(auVar9._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x4521f80

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog.<>c__DisplayClass11_0$$<LabeledTextArea>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0___LabeledTextArea_b__0 (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x45220b0

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0___LabeledTextArea_b__0
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  bool_conflict bVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *value;
  long *plVar8;
  undefined1 auVar9 [12];
  undefined1 in_stack_ffffffffffffff00 [15];
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_c8;
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0_o *pGStack_a8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_a0;
  UnityEngine_Object_o *in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 uStack_4c;
  undefined4 in_stack_ffffffffffffffc0;
  undefined4 uStack_3c;
  
  if (g_data_057aee2f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"textArea");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"No bio yet.");
    g_data_057aee2f = '\x01';
  }
  if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (field,(__this->fields).label,"accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar5 = (__this->fields).id;
    pSVar6 = (__this->fields).placeholder;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff98 = (UnityEngine_Object_o *)0x0;
    in_stack_ffffffffffffffc0 = 0;
    in_stack_ffffffffffffffb0 = 0;
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__TextArea
                       (field,pSVar5,pSVar6,"textArea",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,0x200,(MethodInfo *)0x0);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar5,"No bio yet.",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar5 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
    }
    else {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    __this = (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___c__DisplayClass11_0_o *)0x0;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).value = pSVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).value);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-image");
    g_data_057aee33 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = CONCAT44(uStack_4c,in_stack_ffffffffffffffb0);
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgProfileDialogSelection + 0xb8));
  pSVar5 = "profile-preview-avatar-image";
  pGStack_a8 = __this;
  pGStack_a0 = field;
  if (g_data_057aee35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_Find_Image);
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"found=");
    il2cpp_runtime_helper_023445d0(&"ProfileDialogUi.UpdatePreviewImage");
    g_data_057aee35 = '\x01';
  }
  uVar10 = 0;
  pSVar6 = System_String__Concat_3af7150
                     (pSVar5," sprite=",(System_String_o *)CONCAT44(uStack_3c,in_stack_ffffffffffffffc0),
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&GStack_c8,"ProfileDialogUi.UpdatePreviewImage",pSVar6,(MethodInfo *)0x0);
  uVar11 = GStack_c8.fields._area._0_4_;
  uVar12 = GStack_c8.fields._area._4_4_;
  uVar13 = GStack_c8.fields._detail._0_4_;
  bVar2 = GStack_c8.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar11 = GStack_c8.fields._area._0_4_;
    uVar12 = GStack_c8.fields._area._4_4_;
    uVar13 = GStack_c8.fields._detail._0_4_;
    bVar2 = GStack_c8.fields._detail._4_4_;
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    (in_stack_ffffffffffffff98,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar7 = (UnityEngine_Transform_o *)0x0;
label_0452242d:
    __this_03 = (UnityEngine_UI_Image_o *)
                Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_(pUVar7,pSVar5,MethodInfo_Image_Find_Image);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar10 = (undefined1)bVar3;
    if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff0f,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3ae5ba0("found=",pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar5,(MethodInfo *)0x0);
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load
                        ((System_String_o *)CONCAT44(uStack_3c,in_stack_ffffffffffffffc0),(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_UI_Image_o *)0x0) goto label_04522529;
      UnityEngine_UI_Image__set_sprite(__this_03,value,(MethodInfo *)0x0);
    }
    __this_00.fields._detail._7_1_ = uVar10;
    __this_00.fields._0_15_ = in_stack_ffffffffffffff00;
    __this_00.fields._startMs._0_4_ = uVar11;
    __this_00.fields._startMs._4_4_ = uVar12;
    __this_00.fields._enabled = uVar13;
    __this_00.fields._hotLoop = bVar2;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff10);
    return;
  }
  if (in_stack_ffffffffffffff98 == (UnityEngine_Object_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar7 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)in_stack_ffffffffffffff98,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
      goto label_0452242d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04522529:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar1 = *plVar8;
    __cxa_end_catch();
    __this_01.fields._detail._7_1_ = uVar10;
    __this_01.fields._0_15_ = in_stack_ffffffffffffff00;
    __this_01.fields._startMs._0_4_ = uVar11;
    __this_01.fields._startMs._4_4_ = uVar12;
    __this_01.fields._enabled = uVar13;
    __this_01.fields._hotLoop = bVar2;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff10);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._detail._7_1_ = uVar10;
  __this_02.fields._0_15_ = in_stack_ffffffffffffff00;
  __this_02.fields._startMs._0_4_ = uVar11;
  __this_02.fields._startMs._4_4_ = uVar12;
  __this_02.fields._enabled = uVar13;
  __this_02.fields._hotLoop = bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff10);
  _Unwind_Resume(auVar9._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_Title (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x4521400

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aee25 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Edit Profile Details");
    g_data_057aee25 = '\x01';
  }
  return "Edit Profile Details";
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x4521430

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aee26 == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    g_data_057aee26 = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x4521460

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aee27 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee27 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(720.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4521530

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  undefined1 uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_03;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff98 [15];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_30;
  
  if (g_data_057aee28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileSocialLinksEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"loggedIn=");
    il2cpp_runtime_helper_023445d0(&"Bio");
    il2cpp_runtime_helper_023445d0(&"profile-details-bio");
    il2cpp_runtime_helper_023445d0(&"Dialog.EditProfileDetails.BuildBody");
    il2cpp_runtime_helper_023445d0(&"Tell players who you are...");
    g_data_057aee28 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  uVar2 = (undefined1)bVar3;
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffffa7,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_3ae5ba0("loggedIn=",pSVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = "Dialog.EditProfileDetails.BuildBody";
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_30,(System_String_o *)"Dialog.EditProfileDetails.BuildBody",pSVar4,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(body,method_00);
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__AccountNameInput(body,method_00);
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LocalBioImport(body,method_00);
  Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LabeledTextArea
            (body,"Bio","profile-details-bio","Tell players who you are...",in_R8);
  __this_03 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileSocialLinksEditor);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_03,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar1 = *plVar5;
      __cxa_end_catch();
      __this_01.fields._detail._7_1_ = uVar2;
      __this_01.fields._0_15_ = in_stack_ffffffffffffff98;
      __this_01.fields._startMs = (int64_t)GStack_30.fields._area;
      __this_01.fields._24_8_ = GStack_30.fields._detail;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_01,(MethodInfo *)&stack0xffffffffffffffa8);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_02.fields._detail._7_1_ = uVar2;
    __this_02.fields._0_15_ = in_stack_ffffffffffffff98;
    __this_02.fields._startMs = (int64_t)GStack_30.fields._area;
    __this_02.fields._24_8_ = GStack_30.fields._detail;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xffffffffffffffa8);
    _Unwind_Resume(auVar6._0_8_);
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component(body,__this_03,(MethodInfo *)0x0);
  __this_00.fields._detail._7_1_ = uVar2;
  __this_00.fields._0_15_ = in_stack_ffffffffffffff98;
  __this_00.fields._startMs = (int64_t)GStack_30.fields._area;
  __this_00.fields._24_8_ = GStack_30.fields._detail;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_00,(MethodInfo *)&stack0xffffffffffffffa8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x4521e50

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  
  if (g_data_057aee29 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile.save.details");
    g_data_057aee29 = '\x01';
    method = extraout_RDX;
  }
  actionId = "profile.save.details";
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)footer;
  if (g_data_057aee3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition,"profile.save.details",method);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"profile.save.idle");
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"Save";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee3b = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary(footer,"Save",actionId,(MethodInfo *)0x0)
    ;
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this_01 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(__this_00->fields).alignSelf;
      (__this_00->fields).alignSelf = "profile.save.idle";
      il2cpp_runtime_helper_022b4080();
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = __this_00;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,__this_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$AccountNameInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__AccountNameInput (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4521770

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__AccountNameInput
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_Action_AottgUi__o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  void *in_RCX;
  System_String_c *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  System_String_o *pSVar12;
  bool_conflict bVar4;
  
  if (g_data_057aee2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Account Name");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Must log in to set account name");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"Account name");
    il2cpp_runtime_helper_023445d0(&"account.loggedIn");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"profile-details-name");
    g_data_057aee2a = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,"Account Name","accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar12 = "profile-details-name";
    if (cVar3 == '\0') {
      puVar5 = &"Must log in to set account name";
    }
    else {
      puVar5 = &"Account name";
    }
    pSVar10 = (System_String_o *)*puVar5;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    in_RCX = (void *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (ui,pSVar12,pSVar10,0,"inputField",pGVar11,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x19,(MethodInfo *)0x0);
    if (cVar3 == '\0') {
      method = *(MethodInfo **)*(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)ui;
    }
    else {
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      method = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    }
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).value = (System_String_o *)method;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).value);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      method._0_4_ = 0;
      method._4_2_ = 0;
      method._6_2_ = 0;
      pGVar11 = pGVar9;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar9,(MethodInfo *)0x0);
      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar9->fields).alignSelf = "account.loggedIn";
        il2cpp_runtime_helper_022b4080(&(pGVar9->fields).alignSelf);
        (pGVar6->fields).contentLayout = pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar9);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee2b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LocalBioImport_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"profile-details-local-bio-import");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-details-import-local-bio-row");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee2b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  bVar4 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio((MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee2c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LabeledTextArea_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"-field");
        g_data_057aee2c = '\x01';
      }
      pSVar10 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
      pSVar12 = pSVar10;
      System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      if (pSVar10 != (System_String_o *)0x0) {
        pSVar10->fields = (System_String_Fields)method;
        il2cpp_runtime_helper_022b4080(&pSVar10->fields,method);
        pSVar10[1].klass = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pSVar10 + 1,extraout_RDX);
        pSVar10[1].monitor = in_RCX;
        il2cpp_runtime_helper_022b4080(&pSVar10[1].monitor,in_RCX);
        pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pSVar10 = System_String__Concat_3ae5ba0
                            ((System_String_o *)pSVar10[1].klass,"-field",(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pSVar12 = "Column";
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0
                             ,(System_String_o *)0x0,5.0,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                             ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (__this,"default",pSVar7,pSVar10,pGVar11,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar12,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Callout
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,2,"Your local Bio differs from your account Bio. Sync this field with your local Bio?","profile-details-local-bio-import",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = "default";
    pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar7;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar7);
    }
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,pSVar12,pSVar7,"profile-details-import-local-bio-row",pGVar9,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$LocalBioImport
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LocalBioImport (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4521a20

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LocalBioImport
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  void *in_RCX;
  System_String_c *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  System_String_o *pSVar7;
  
  if (g_data_057aee2b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LocalBioImport_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"profile-details-local-bio-import");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-details-import-local-bio-row");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee2b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  bVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee2c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LabeledTextArea_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"-field");
        g_data_057aee2c = '\x01';
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
      pSVar7 = pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6->fields = (System_String_Fields)method;
        il2cpp_runtime_helper_022b4080(&pSVar6->fields,method);
        pSVar6[1].klass = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pSVar6 + 1,extraout_RDX);
        pSVar6[1].monitor = in_RCX;
        il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,in_RCX);
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pSVar6 = System_String__Concat_3ae5ba0
                           ((System_String_o *)pSVar6[1].klass,"-field",(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pSVar7 = "Column";
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,5.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (__this,"default",pSVar3,pSVar6,pGVar5,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar7,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Callout(ui,2,"Your local Bio differs from your account Bio. Sync this field with your local Bio?","profile-details-local-bio-import",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,pSVar7,pSVar3,"profile-details-import-local-bio-row",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$LabeledTextArea
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LabeledTextArea (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* id, System_String_o* placeholder, const MethodInfo* method);
// 0x4521c60

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog__LabeledTextArea
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *id,
               System_String_o *placeholder,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *__this;
  
  if (g_data_057aee2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LabeledTextArea_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-field");
    g_data_057aee2c = '\x01';
  }
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  __this = pSVar1;
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1->fields = (System_String_Fields)label;
    il2cpp_runtime_helper_022b4080(&pSVar1->fields,label);
    pSVar1[1].klass = (System_String_c *)id;
    il2cpp_runtime_helper_022b4080(pSVar1 + 1,id);
    pSVar1[1].monitor = placeholder;
    il2cpp_runtime_helper_022b4080(&pSVar1[1].monitor,placeholder);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar1 = System_String__Concat_3ae5ba0((System_String_o *)pSVar1[1].klass,"-field",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this = "Column";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,5.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",build,pSVar1,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___ctor (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o* __this, const MethodInfo* method);
// 0x4521f90

void Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgEditProfileDetailsDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


