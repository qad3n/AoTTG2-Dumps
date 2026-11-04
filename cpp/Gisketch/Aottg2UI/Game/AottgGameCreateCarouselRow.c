// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCarouselRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___cctor (const MethodInfo* method);
// 0x1823bf270

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateCarouselRuntime");
    Il2CppMethodInitialized_184347d51 = '\x01';
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
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_BuildRuntime,
             (MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"GameCreateCarouselRuntime",__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o* __this, System_String_o* id, int32_t count, float height, float gap, System_Action_AottgUi__o* buildChoices, float paddingTop, int32_t selectedIndex, const MethodInfo* method);
// 0x1823bf330

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this,System_String_o *id,int32_t count,
               float height,float gap,System_Action_AottgUi__o *buildChoices,float paddingTop,
               int32_t selectedIndex,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._gap = gap;
  (__this->fields)._buildChoices = buildChoices;
  (__this->fields)._height = height;
  (__this->fields)._count = count;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildChoices,buildChoices);
  (__this->fields)._paddingTop = paddingTop;
  (__this->fields)._selectedIndex = selectedIndex;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__Build (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823be980

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347d52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_Build_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347d52 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_Build_b__10_0,
             (MethodInfo *)0x0);
  id = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((__this->fields)._paddingTop + (__this->fields)._height,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                      (__this->fields)._paddingTop,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823be6d0

bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_array *pSVar1;
  UnityEngine_UI_Scrollbar_o *__this;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  int32_t iVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this_01;
  System_String_o *pSVar6;
  UnityEngine_UI_ScrollRect_o *__this_02;
  System_Globalization_CultureInfo_o *provider;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *pGVar7;
  DG_Tweening_Core_DOSetter_Vector2__o *__this_03;
  
  if (Il2CppMethodInitialized_184347d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&"-scroll");
    Il2CppMethodInitialized_184347d53 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar3->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar3,true,(pUVar3->klass->vtable)._28_set_ignoreLayout.method);
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar5,(MethodInfo_6F4D60 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselRuntime
                                  );
            if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              pSVar6 = System_String__Concat_1969e50
                                 ((node->fields).value,"-scroll",(MethodInfo *)0x0);
              pUVar4 = UnityEngine_Transform__Find(pUVar4,pSVar6,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                __this_02 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar4,
                                       (MethodInfo_6651A0 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
                pSVar1 = (node->fields).options;
                if (pSVar1 != (System_String_array *)0x0) {
                  if ((int)pSVar1->max_length == 0) {
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar6 = pSVar1->m_Items[0];
                  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
                  }
                  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
                  iVar2 = System_Int32__Parse_1b291b0
                                    (pSVar6,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
                  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *)0x0) {
                    if (Il2CppMethodInitialized_184347d55 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_UnityEngine_Events_UnityAction_Vector2);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
                      Il2CppMethodInitialized_184347d55 = '\x01';
                    }
                    (__this_01->fields)._scroll = __this_02;
                    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._scroll,__this_02);
                    (__this_01->fields)._selectedIndex = iVar2;
                    if (__this_02 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      __this = (__this_02->fields).m_VerticalScrollbar;
                      (__this_02->fields).m_Horizontal = true;
                      (__this_02->fields).m_Vertical = false;
                      (__this_02->fields).m_ScrollSensitivity = 168.0;
                      if (__this != (UnityEngine_UI_Scrollbar_o *)0x0) {
                        pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                          UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                    (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,(MethodInfo *)0x0);
                          pGVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge
                                             (__this_01,false,(MethodInfo *)0x0);
                          (__this_01->fields)._leftEdge = pGVar7;
                          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._leftEdge,pGVar7);
                          pGVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__CreateEdge
                                             (__this_01,true,(MethodInfo *)0x0);
                          (__this_01->fields)._rightEdge = pGVar7;
                          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._rightEdge,pGVar7);
                          __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                      (__this_02->fields).m_OnValueChanged;
                          __this_03 = (DG_Tweening_Core_DOSetter_Vector2__o *)
                                      il2cpp_codegen_object_new
                                                ((Il2CppClass *)
                                                 TypeInfo_UnityEngine_Events_UnityAction_Vector2);
                          UnityEngine_Events_UnityAction_Vector2____ctor
                                    (__this_03,(Il2CppObject *)__this_01,
                                     (intptr_t)
                                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll
                                     ,(MethodInfo_E5A7E0 *)0x0);
                          if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                            UnityEngine_Events_UnityEvent_Vector2___AddListener
                                      (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_03,
                                       (MethodInfo_EBBB50 *)
                                       MethodInfo_UnityEngine_Events_UnityEvent_Vector2_AddListener);
                            return true;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$<Build>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___Build_b__10_0 (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823beb20

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___Build_b__10_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  float gap;
  int iVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_00;
  System_String_array *value_01;
  System_Globalization_CultureInfo_o *provider;
  int iVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_184347d54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"NoWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateCarouselRuntime");
    il2cpp_codegen_initialize_runtime_metadata(&"-runtime");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"-scroll");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"-fade");
    Il2CppMethodInitialized_184347d54 = '\x01';
  }
  build = (__this->fields)._buildChoices;
  pSVar3 = System_String__Concat_1969e50((__this->fields)._id,"-scroll",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._height,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,height,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  iVar1 = (__this->fields)._count;
  gap = (__this->fields)._gap;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
  }
  iVar8 = 0;
  if (-1 < iVar1 + -1) {
    iVar8 = iVar1 + -1;
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points((float)iVar8 * gap + (float)iVar1 * 260.0,(MethodInfo *)0x0)
  ;
  contentLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                  "NoWrap",gap,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                  (MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                       (row,"clear",build,pSVar3,pGVar6,contentLayout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      uVar9 = 0;
      while (pGVar2 = (pGVar7->fields).children,
            pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)pGVar2->max_length <= (int)uVar9) {
          pGVar7 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).type = "GameCreateCarouselRuntime";
            Il2CppCodeGenWriteBarrier(&(pGVar7->fields).type,"GameCreateCarouselRuntime");
            pSVar3 = System_String__Concat_1969e50
                               ((__this->fields)._id,"-runtime",(MethodInfo *)0x0);
            (pGVar7->fields).id = pSVar3;
            Il2CppCodeGenWriteBarrier(&(pGVar7->fields).id,pSVar3);
            pSVar3 = (__this->fields)._id;
            (pGVar7->fields).value = pSVar3;
            Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value,pSVar3);
            value_01 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            pSVar3 = System_Int32__ToString_1b29900
                               (&(__this->fields)._selectedIndex,(System_IFormatProvider_o *)provider,
                                (MethodInfo *)0x0);
            if (value_01 != (System_String_array *)0x0) {
              if ((int)value_01->max_length != 0) {
                value_01->m_Items[0] = pSVar3;
                Il2CppCodeGenWriteBarrier(value_01->m_Items,pSVar3);
                (pGVar7->fields).options = value_01;
                Il2CppCodeGenWriteBarrier(&(pGVar7->fields).options,value_01);
                pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
                pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    "Absolute",(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar7->fields).layout = pGVar6;
                Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout,pGVar6);
                Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar7,(MethodInfo *)0x0);
                return;
              }
label_1823bf26a:
              ThrowIndexOutOfRangeException();
            }
          }
          break;
        }
        if ((uint)pGVar2->max_length <= uVar9) goto label_1823bf26a;
        value = pGVar2->m_Items[(int)uVar9];
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (__this_00->fields).type = "Panel";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Panel");
        if (value == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        pSVar3 = System_String__Concat_1969e50((value->fields).id,"-fade",(MethodInfo *)0x0);
        (__this_00->fields).id = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar3);
        (__this_00->fields).style = "clear";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"clear");
        pGVar6 = (value->fields).layout;
        if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,(pGVar6->fields).width,
                            (pGVar6->fields).height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (__this_00->fields).layout = pGVar6;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,pGVar6);
        value_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
        if (value_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
        if ((int)value_00->max_length == 0) goto label_1823bf26a;
        value_00->m_Items[0] = value;
        Il2CppCodeGenWriteBarrier(value_00->m_Items,value);
        (__this_00->fields).children = value_00;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).children,value_00);
        if ((uint)pGVar2->max_length <= uVar9) goto label_1823bf26a;
        pGVar2->m_Items[(int)uVar9] = __this_00;
        Il2CppCodeGenWriteBarrier(pGVar2->m_Items + (int)uVar9,__this_00);
        uVar9 = uVar9 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


