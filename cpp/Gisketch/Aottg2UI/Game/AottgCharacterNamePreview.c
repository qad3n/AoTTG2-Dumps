// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___cctor (const MethodInfo* method);
// 0x58dd6e0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_075454f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_BuildPreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterNamePreview");
    Il2CppMethodInitialized_075454f0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_BuildPreview,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"CharacterNamePreview",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o* __this, System_String_o* id, bool liveDialog, const MethodInfo* method);
// 0x58dd7a0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *__this,System_String_o *id,bool liveDialog
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._liveDialog = liveDialog;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Build (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58dd7d0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075454f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterNamePreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"live");
    Il2CppMethodInitialized_075454f1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "CharacterNamePreview";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).id = (__this->fields)._id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    if ((__this->fields)._liveDialog == false) {
      ppSVar1 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      ppSVar1 = &"live";
    }
    (__this_00->fields).value = *ppSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58dd980

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075454f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgCharacterNamePreviewRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454f2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_058dda8a;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)pUVar3,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgCharacterNamePreviewRuntime
                       );
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar4->max_length;
      if ((int)uVar2 < 1) {
        return;
      }
      uVar5 = 0;
      while( true ) {
        if (uVar2 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        if ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)pSVar4->m_Items[(int)uVar5] ==
            (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) break;
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)pSVar4->m_Items[(int)uVar5],
                   method_00);
        uVar5 = uVar5 + 1;
        uVar2 = (uint)pSVar4->max_length;
        if ((int)uVar2 <= (int)uVar5) {
          return;
        }
      }
    }
  }
label_058dda8a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$BuildPreview
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__BuildPreview (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x58de050

bool Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__BuildPreview
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  bool liveDialog;
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_00;
  UnityEngine_RectOffset_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar2;
  
  if (Il2CppMethodInitialized_075454f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgCharacterNamePreviewRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&"characterNamePreviewBg");
    il2cpp_codegen_initialize_runtime_metadata(&"live");
    Il2CppMethodInitialized_075454f3 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (__this = (context->fields).Theme, __this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      UVar2.fields.b = 0.13;
      UVar2.fields.a = 1.0;
      UVar2.fields.r = 0.13;
      UVar2.fields.g = 0.13;
      UVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (__this,"characterNamePreviewBg",UVar2,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (pUVar1,UVar2,(pUVar1->klass->vtable)._23_set_color.method);
        (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar1,false,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (go,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
        method_00 = (MethodInfo *)&g_data_0000000a;
        UnityEngine_RectOffset___ctor_68cd0a0(__this_01,0xf,0xf,10,10,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_padding
                    ((UnityEngine_UI_LayoutGroup_o *)__this_00,__this_01,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,2.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (go,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgCharacterNamePreviewRuntime
                                );
          if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            state = (context->fields).State;
            liveDialog = System_String__op_Equality
                                   ((node->fields).value,"live",(MethodInfo *)0x0);
            if (__this_02 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                        (__this_02,state,liveDialog,method_00);
              return true;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


