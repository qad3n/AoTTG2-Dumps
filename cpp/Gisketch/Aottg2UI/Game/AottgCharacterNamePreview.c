// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreview.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___cctor (const MethodInfo* method);
// 0x41d06d0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (DAT_05704e3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildPreview);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&"CharacterNamePreview");
    DAT_05704e3e = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"CharacterNamePreview",factory,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o* __this, System_String_o* id, bool liveDialog, const MethodInfo* method);
// 0x41d05b0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *__this,System_String_o *id,
               bool_conflict liveDialog,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  *(char *)&(__this->fields)._liveDialog = (char)liveDialog;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Build (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41d0790

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  undefined8 *puVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704e3f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"CharacterNamePreview");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"live");
    DAT_05704e3f = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "CharacterNamePreview";
    il2cpp_runtime_glue(&__this_00->fields);
    (__this_00->fields).id = (__this->fields)._id;
    il2cpp_runtime_glue(&(__this_00->fields).id);
    if ((char)(__this->fields)._liveDialog == '\0') {
      puVar1 = *(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      puVar1 = &"live";
    }
    (__this_00->fields).value = (System_String_o *)*puVar1;
    il2cpp_runtime_glue();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
    il2cpp_runtime_glue(&(__this_00->fields).search,pGVar2);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x41d0940

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  MethodInfo *method_00;
  
  if (DAT_05704e40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgCharacterNamePreviewRuntime___GetComponents);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e40 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_041d0a4b;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)pUVar3,1,MethodInfo_AottgCharacterNamePreviewRuntime___GetComponents);
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar4->max_length;
      if ((int)uVar2 < 1) {
        return;
      }
      uVar5 = 0;
      while( true ) {
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)pSVar4->m_Items[(int)uVar5]
            == (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) break;
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                   pSVar4->m_Items[(int)uVar5],method_00);
        uVar5 = uVar5 + 1;
        uVar2 = (uint)pSVar4->max_length;
        if ((int)uVar2 <= (int)uVar5) {
          return;
        }
      }
    }
  }
LAB_041d0a4b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$BuildPreview
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__BuildPreview (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x41d0f50

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__BuildPreview
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_RectOffset_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this_02;
  undefined8 extraout_RAX;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar3;
  
  if (DAT_05704e41 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_Ao);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_RectOffset);
    il2cpp_init_method_metadata(&"characterNamePreviewBg");
    il2cpp_init_method_metadata(&"live");
    DAT_05704e41 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_Image_AddComponent_Image);
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (__this = (context->fields).Theme, __this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0
       )) {
      UVar3.fields.b = 0.13;
      UVar3.fields.a = 1.0;
      UVar3.fields.r = 0.13;
      UVar3.fields.g = 0.13;
      UVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (__this,"characterNamePreviewBg",UVar3,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        (*pIVar2->klass->vtable[0x17].methodPtr)
                  (UVar3.fields._0_8_,UVar3.fields._8_8_,pIVar2,pIVar2->klass->vtable[0x17].method);
        (*pIVar2->klass->vtable[0x19].methodPtr)(pIVar2,0,pIVar2->klass->vtable[0x19].method);
        __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                    UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutG);
        __this_01 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
        method_00 = (MethodInfo *)0xa;
        UnityEngine_RectOffset___ctor(__this_01,0xf,0xf,10,10,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_padding
                    ((UnityEngine_UI_LayoutGroup_o *)__this_00,__this_01,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                    (__this_00,2.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                    (__this_00,1,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                    (__this_00,1,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                    (__this_00,0,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                    (__this_00,0,(MethodInfo *)0x0);
          __this_02 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)
                      UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_AottgCharacterNamePreviewRuntime_AddComponent_Ao);
          if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            state = (context->fields).State;
            uVar1 = System_String__op_Equality((node->fields).value,"live",(MethodInfo *)0x0);
            if (__this_02 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
                        (__this_02,state,uVar1 & 0xff,method_00);
              return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


