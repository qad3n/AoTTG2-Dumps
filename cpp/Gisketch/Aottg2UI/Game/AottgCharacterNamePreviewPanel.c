// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___cctor (const MethodInfo* method);
// 0x181e0daf0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184344b7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
    Il2CppMethodInitialized_184344b7a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___ctor(Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x181e0caf0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344b7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NamePreview");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"Name Preview");
    Il2CppMethodInitialized_184344b7b = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (title,"MainMenu.Profile.NamePreview","Name Preview","profilePreviewTitle",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, System_String_o* id, float width, bool liveDialog, System_String_o* alignSelf, bool fullWidth, const MethodInfo* method);
// 0x181df5a50

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,System_String_o *id,
               float width,bool liveDialog,System_String_o *alignSelf,bool fullWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._alignSelf = alignSelf;
  (__this->fields)._width = width;
  (__this->fields)._liveDialog = liveDialog;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._alignSelf,alignSelf);
  (__this->fields)._fullWidth = fullWidth;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181df5390

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  float grow;
  float shrink;
  
  if (Il2CppMethodInitialized_184344b77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    Il2CppMethodInitialized_184344b77 = '\x01';
  }
  if ((__this->fields)._fullWidth == false) {
    width = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._width,(MethodInfo *)0x0);
    shrink = 0.0;
    grow = 0.0;
  }
  else {
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    shrink = 1.0;
    grow = 1.0;
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (__this->fields)._alignSelf,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,grow,
                      shrink,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_0,
             (MethodInfo *)0x0);
  id = (__this->fields)._id;
  pGVar1 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",(System_Action_AottgUi__o *)__this_00,id,layout,pGVar1,
                        (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion((MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).exit = pGVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).exit,pGVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x181df5600

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (Il2CppMethodInitialized_184344b78 == '\0') {
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
    Il2CppMethodInitialized_184344b78 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
  }
  pSVar4 = "profilePreviewTitleBar";
  pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9__6_1;
  if (pUVar1 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9;
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar1,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c_Build_b__6_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9__6_1 =
         (System_Action_AottgUi__o *)pUVar1;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c->static_fields->__9__6_1,
               pUVar1);
  }
  id = System_String__Concat_1969e50((__this->fields)._id,"-title-bar",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,pSVar4,(System_Action_AottgUi__o *)pUVar1,id,pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar1,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_2,
               (MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-body",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,"default",(System_Action_AottgUi__o *)pUVar1,pSVar4,pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181df59b0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___Build_b__6_2
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *component;
  
  if (Il2CppMethodInitialized_184344b79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    il2cpp_codegen_initialize_runtime_metadata(&"-nameplate");
    Il2CppMethodInitialized_184344b79 = '\x01';
  }
  value = System_String__Concat_1969e50((__this->fields)._id,"-nameplate",(MethodInfo *)0x0);
  bVar1 = (__this->fields)._liveDialog;
  component = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
  (component->fields)._id = value;
  Il2CppCodeGenWriteBarrier(&(component->fields)._id,value);
  (component->fields)._liveDialog = bVar1;
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


