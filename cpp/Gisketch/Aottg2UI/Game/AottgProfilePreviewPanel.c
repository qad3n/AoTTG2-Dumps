// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreviewPanel.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___cctor (const MethodInfo* method);
// 0x41f6480

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704f88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704f88 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x41f64f0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x41f6500

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_<>c__<Build>b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  if (DAT_05704f89 == '\0') {
    il2cpp_init_method_metadata(&"Preview");
    il2cpp_init_method_metadata(&"profilePreviewTitle");
    DAT_05704f89 = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (title,"Preview","profilePreviewTitle",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, const MethodInfo* method);
// 0x41ee340

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,
               System_String_o *avatarSprite,System_String_o *bannerSprite,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._avatarSprite = avatarSprite;
  il2cpp_runtime_glue(&__this->fields,avatarSprite);
  (__this->fields)._bannerSprite = bannerSprite;
  il2cpp_runtime_glue(&(__this->fields)._bannerSprite,bannerSprite);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41f5ea0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  System_String_o *detail;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod local_58;
  char *pcStack_50;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_40;
  
  if (DAT_05704f86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"profile-preview-dialog");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"avatar=");
    il2cpp_init_method_metadata(&"ProfilePreviewPanel.Build");
    il2cpp_init_method_metadata(&"profilePreviewDialog");
    il2cpp_init_method_metadata(&" banner=");
    DAT_05704f86 = '\x01';
  }
  local_58 = (InvokerMethod)0x0;
  pcStack_50 = (char *)0x0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  detail = System_String__Concat
                     ("avatar=",(__this->fields)._avatarSprite," banner=",
                      (__this->fields)._bannerSprite,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_40,"ProfilePreviewPanel.Build",detail,(MethodInfo *)0x0);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (DAT_05704f5e == '\0') {
    il2cpp_init_method_metadata(&"slideRightSmall");
    DAT_05704f5e = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    uVar3 = 0;
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",build,"profile-preview-dialog",layout,pGVar1,(MethodInfo *)0x0);
    if (DAT_05704f5f == '\0') {
      il2cpp_init_method_metadata(&"slideRightSmall");
      DAT_05704f5f = '\x01';
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).enter = pGVar1;
      il2cpp_runtime_glue(&(pGVar2->fields).enter,pGVar1);
      __this_00.fields._detail = (System_String_o *)uVar4;
      __this_00.fields._area = (System_String_o *)uVar3;
      __this_00.fields._startMs = uVar5;
      __this_00.fields._enabled = (int)uVar6;
      __this_00.fields._hotLoop = (int)((ulong)uVar6 >> 0x20);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&local_68);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x41f6210

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__<Build>b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  System_String_o *pSVar3;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  
  if (DAT_05704f87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfilePreviewCard);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__3_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"profilePreviewTitleBar");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"profile-preview-title-bar");
    DAT_05704f87 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "profilePreviewTitleBar";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
    il2cpp_runtime_glue(lVar1 + 8,build);
  }
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
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,pSVar3,build,"profile-preview-title-bar",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)(__this->fields)._avatarSprite;
    pSVar3 = (__this->fields)._bannerSprite;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgProfilePreviewCard);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pGVar2;
    il2cpp_runtime_glue(__this_00 + 1,pGVar2);
    __this_00[1].monitor = pSVar3;
    il2cpp_runtime_glue(&__this_00[1].monitor,pSVar3);
    Gisketch_Aottg2UI_Code_AottgUi__Component(preview,__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


