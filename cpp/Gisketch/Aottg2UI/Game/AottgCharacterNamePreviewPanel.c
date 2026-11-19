// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___cctor (const MethodInfo* method);
// 0x58dd5f0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075454ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
    Il2CppMethodInitialized_075454ee = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x58dd660

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x58dd670

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075454ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NamePreview");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitle");
    Il2CppMethodInitialized_075454ef = '\x01';
  }
  if (title == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (title,"MainMenu.Profile.NamePreview","profilePreviewTitle",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, System_String_o* id, float width, bool liveDialog, System_String_o* alignSelf, bool fullWidth, const MethodInfo* method);
// 0x58dcff0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,System_String_o *id,
               float width,bool liveDialog,System_String_o *alignSelf,bool fullWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._width = width;
  (__this->fields)._liveDialog = liveDialog;
  (__this->fields)._alignSelf = alignSelf;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._alignSelf);
  (__this->fields)._fullWidth = fullWidth;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58dd060

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  float grow;
  float shrink;
  
  if (Il2CppMethodInitialized_075454e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    Il2CppMethodInitialized_075454e2 = '\x01';
  }
  if ((__this->fields)._fullWidth == false) {
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
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,grow,
                      shrink,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_0,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar3 = (__this->fields)._id;
  pGVar1 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",__this_00,pSVar3,layout,pGVar1,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion((MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).exit = pGVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).exit);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x58dd230

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *pSVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (Il2CppMethodInitialized_075454e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c_Build_b__6_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"-title-bar");
    il2cpp_codegen_initialize_runtime_metadata(&"-body");
    Il2CppMethodInitialized_075454e3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
  }
  pSVar5 = "profilePreviewTitleBar";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields;
  pSVar2 = pGVar1->__9__6_1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c_Build_b__6_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields;
    pGVar1->__9__6_1 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__6_1);
  }
  id = System_String__Concat_52f0320((__this->fields)._id,"-title-bar",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (preview == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (preview,pSVar5,pSVar2,id,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_2,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar5 = System_String__Concat_52f0320((__this->fields)._id,"-body",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,pGVar3,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (preview,"default",pSVar2,pSVar5,pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58dd550

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_2
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  bool liveDialog;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *__this_00;
  
  if (Il2CppMethodInitialized_075454e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    il2cpp_codegen_initialize_runtime_metadata(&"-nameplate");
    Il2CppMethodInitialized_075454e4 = '\x01';
  }
  id = System_String__Concat_52f0320((__this->fields)._id,"-nameplate",(MethodInfo *)0x0);
  liveDialog = (__this->fields)._liveDialog;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___ctor(__this_00,id,liveDialog,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


