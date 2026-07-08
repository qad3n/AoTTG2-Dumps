// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewPanel.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___cctor (const MethodInfo* method);
// 0x41d05e0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704e3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704e3c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x41d0650

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x41d0660

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_<>c__<Build>b__6_1
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  if (DAT_05704e3d == '\0') {
    il2cpp_init_method_metadata(&"profilePreviewTitle");
    il2cpp_init_method_metadata(&"Name Preview");
    DAT_05704e3d = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (title,"Name Preview","profilePreviewTitle",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, System_String_o* id, float width, bool liveDialog, System_String_o* alignSelf, bool fullWidth, const MethodInfo* method);
// 0x41cffa0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,System_String_o *id,
               float width,bool_conflict liveDialog,System_String_o *alignSelf,
               bool_conflict fullWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._width = width;
  *(char *)&(__this->fields)._liveDialog = (char)liveDialog;
  (__this->fields)._alignSelf = alignSelf;
  il2cpp_runtime_glue(&(__this->fields)._alignSelf,alignSelf);
  *(char *)&(__this->fields)._fullWidth = (char)fullWidth;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41d0010

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  float grow;
  float shrink;
  
  if (DAT_05704e39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__6_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704e39 = '\x01';
  }
  if ((char)(__this->fields)._fullWidth == '\0') {
    width = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._width,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._alignSelf;
    shrink = 0.0;
    grow = 0.0;
  }
  else {
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._alignSelf;
    shrink = 1.0;
    grow = 1.0;
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,pSVar3,
                      (System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,grow,shrink,(MethodInfo *)0x0);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  pSVar3 = (__this->fields)._id;
  pGVar1 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",build,pSVar3,layout,pGVar1,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion((MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).enter = pGVar1;
      il2cpp_runtime_glue(&(pGVar2->fields).enter,pGVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x41d01e0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__<Build>b__6_0
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *pSVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (DAT_05704e3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__6_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__6_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"profilePreviewTitleBar");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"-title-bar");
    il2cpp_init_method_metadata(&"-body");
    DAT_05704e3a = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = "profilePreviewTitleBar";
  pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar2;
    il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  }
  id = System_String__Concat((__this->fields)._id,"-title-bar",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,pSVar5,pSVar2,id,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pSVar5 = System_String__Concat((__this->fields)._id,"-body",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,"default",pSVar2,pSVar5,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41d0500

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__<Build>b__6_2
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  
  if (DAT_05704e3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterNamePreview);
    il2cpp_init_method_metadata(&"-nameplate");
    DAT_05704e3b = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
           System_String__Concat((__this->fields)._id,"-nameplate",(MethodInfo *)0x0);
  bVar1 = (__this->fields)._liveDialog;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgCharacterNamePreview);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pGVar2;
  il2cpp_runtime_glue(__this_00 + 1,pGVar2);
  *(char *)&__this_00[1].monitor = (char)bVar1;
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


