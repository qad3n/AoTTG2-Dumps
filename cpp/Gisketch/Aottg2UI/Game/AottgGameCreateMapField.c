// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapField
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateMapField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateMapField.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c___cctor (const MethodInfo* method);
// 0x5e989d0

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075488d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c);
    Il2CppMethodInitialized_075488d3 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c_o* __this, const MethodInfo* method);
// 0x5e98a40

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField.<>c$$<Build>b__10_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c___Build_b__10_5 (Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e98a50

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c___Build_b__10_5
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___cctor (const MethodInfo* method);
// 0x5e97550

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_075488ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_BuildHoverRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateMapHover");
    Il2CppMethodInitialized_075488ca = '\x01';
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
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_BuildHoverRuntime,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"GameCreateMapHover",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o* __this, System_String_o* id, System_String_o* mapName, System_String_o* actionId, bool editable, int32_t selectableMapCount, System_String_o* tooltip, System_String_o* label, const MethodInfo* method);
// 0x5e97610

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this,System_String_o *id,
               System_String_o *mapName,System_String_o *actionId,bool editable,int32_t selectableMapCount,
               System_String_o *tooltip,System_String_o *label,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075488cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Map");
    Il2CppMethodInitialized_075488cb = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  if (mapName == (System_String_o *)0x0) {
    mapName = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._mapName = mapName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapName);
  if (!editable) {
    actionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._actionId = actionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actionId);
  (__this->fields)._editable = editable;
  (__this->fields)._selectableMapCount = selectableMapCount;
  (__this->fields)._tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip);
  bVar1 = System_String__IsNullOrEmpty(label,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    label = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Map",(MethodInfo *)0x0)
    ;
  }
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField__Build (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e97760

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075488cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"-map-field");
    Il2CppMethodInitialized_075488cc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_0,
             (MethodInfo_4A81BE0 *)0x0);
  id = System_String__Concat_52f0320((__this->fields)._id,"-map-field",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$BuildHoverRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateMapField__BuildHoverRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e978e0

bool Gisketch_Aottg2UI_Game_AottgGameCreateMapField__BuildHoverRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_075488cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateMapHover);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488cd = '\x01';
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
     pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
    pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if (((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
          pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
         (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         __this != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__AddComponent_object_
                  (__this,(MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateMapHover);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_0 (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x5e979f0

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075488ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"card");
    Il2CppMethodInitialized_075488ce = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_1,
             (MethodInfo_4A81BE0 *)0x0);
  id = System_String__Concat_52f0320((__this->fields)._id,"-preview-frame",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,12.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (field == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (field,"card",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_1 (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x5e97b80

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  MethodInfo *method_00;
  System_Nullable_bool__Fields aSStack_38 [4];
  
  method_00 = (MethodInfo *)card;
  if (Il2CppMethodInitialized_075488cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-hover");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-other-map-count-overlay");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"image");
    il2cpp_codegen_initialize_runtime_metadata(&"-caption");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateMapHover");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-placeholder");
    Il2CppMethodInitialized_075488cf = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite((__this->fields)._mapName,method_00);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_2,
               (MethodInfo_4A81BE0 *)0x0);
    pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-preview-placeholder",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(244.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (card == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e9832e;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (card,"clear",pSVar3,pSVar2,pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    id = System_String__Concat_52f0320((__this->fields)._id,"-preview",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(244.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (card == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e9832e;
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (card,pSVar2,"image",id,pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_3,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-caption",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (card,"clear",pSVar3,pSVar2,pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (((__this->fields)._editable != false) && (1 < (__this->fields)._selectableMapCount)) {
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_4,
               (MethodInfo_4A81BE0 *)0x0);
    pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-other-map-count-overlay",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(244.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexEnd",
                        "Absolute",(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,8.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (card,"clear",pSVar3,pSVar2,pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (card,5,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                      (__this->fields)._actionId,(__this->fields)._id,(__this->fields)._tooltip,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      (MethodInfo *)0x0);
  aSStack_38[0].hasValue = false;
  aSStack_38[0].value = false;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)aSStack_38,(__this->fields)._editable,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).enabled.fields = aSStack_38[0];
    (pGVar7->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).style);
    (pGVar7->fields).formLabel = (__this->fields)._label;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).formLabel);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        "Absolute",(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    (pGVar7->fields).layout = pGVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout);
    pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).type = "GameCreateMapHover";
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).type);
      pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-hover",(MethodInfo *)0x0);
      (pGVar7->fields).id = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).id);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar7->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout);
      Gisketch_Aottg2UI_Code_AottgUi__Add(card,pGVar7,(MethodInfo *)0x0);
      return;
    }
  }
label_05e9832e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_2 (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x5e98550

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_075488d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Map.NoPreview");
    Il2CppMethodInitialized_075488d0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Map.NoPreview",(MethodInfo *)0x0);
  id = System_String__Concat_52f0320((__this->fields)._id,"-preview-empty",(MethodInfo *)0x0);
  if (empty == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (empty,text,"subtext",id,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_3 (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* caption, const MethodInfo* method);
// 0x5e98620

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_3
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *caption,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075488d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-map-name");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_075488d1 = '\x01';
  }
  text = (__this->fields)._mapName;
  id = System_String__Concat_52f0320((__this->fields)._id,"-map-name",(MethodInfo *)0x0);
  if (caption != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (caption,text,"header",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).clip = true;
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_4 (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* overlay, const MethodInfo* method);
// 0x5e98780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e9883e: jmp 0x5e98859

void Gisketch_Aottg2UI_Game_AottgGameCreateMapField___Build_b__10_4
               (Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *overlay,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c_StaticFields *pGVar2;
  System_Action_GisketchActionContext__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  int iStack_34;
  
  if (Il2CppMethodInitialized_075488d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c_Build_b__10_5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c);
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-other-map-count");
    Il2CppMethodInitialized_075488d2 = '\x01';
  }
  iStack_34 = (__this->fields)._selectableMapCount + -1;
  pSVar1 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("+",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c->static_fields;
    __this_00 = pGVar2->__9__10_5;
  }
  else {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c->static_fields;
    __this_00 = pGVar2->__9__10_5;
  }
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c_Build_b__10_5,
               (MethodInfo_4A803E0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c->static_fields;
    pGVar2->__9__10_5 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__10_5);
  }
  id = System_String__Concat_52f0320((__this->fields)._id,"-other-map-count",(MethodInfo *)0x0);
  if (overlay != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                       (overlay,0,pSVar1,__this_00,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


