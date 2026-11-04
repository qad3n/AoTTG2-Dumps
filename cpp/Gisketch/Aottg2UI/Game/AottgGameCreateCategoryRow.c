// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCategoryRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___cctor (const MethodInfo* method);
// 0x1823c1fb0

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateCategoryRowRuntime");
    Il2CppMethodInitialized_184347d61 = '\x01';
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
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_BuildRuntime,
             (MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"GameCreateCategoryRowRuntime",__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o* __this, System_String_o* id, int32_t count, float height, float gap, System_Action_AottgUi__o* buildChoices, bool wrap, float paddingTop, const MethodInfo* method);
// 0x1823c2070

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this,System_String_o *id,int32_t count,
               float height,float gap,System_Action_AottgUi__o *buildChoices,bool wrap,float paddingTop,
               MethodInfo *method)

{
  int32_t iVar1;
  
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  iVar1 = 1;
  if (0 < count) {
    iVar1 = count;
  }
  (__this->fields)._count = iVar1;
  (__this->fields)._wrap = wrap;
  (__this->fields)._height = height;
  (__this->fields)._gap = gap;
  (__this->fields)._paddingTop = paddingTop;
  (__this->fields)._buildChoices = buildChoices;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildChoices,buildChoices);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__Build (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823c19f0

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347d62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_Build_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184347d62 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_Build_b__11_0,
             (MethodInfo *)0x0);
  id = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((__this->fields)._paddingTop + (__this->fields)._height,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                      (__this->fields)._paddingTop,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823c17a0

bool Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int32_t iVar3;
  UnityEngine_RectTransform_o *__this;
  bool bVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  
  if (Il2CppMethodInitialized_184347d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_184347d63 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar5->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar5,true,(pUVar5->klass->vtable)._28_set_ignoreLayout.method);
      pUVar6 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__GetParent(pUVar6,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar6,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                             );
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCategoryRowRuntime
                                    );
              pUVar6 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pUVar7,0,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                pUVar7 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar6,
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  iVar3 = (node->fields).maxVisibleItems;
                  fVar1 = (node->fields).referenceHeight;
                  fVar2 = (node->fields).min.fields.value;
                  bVar4 = System_String__op_Equality
                                    ((node->fields).value,"Wrap",(MethodInfo *)0x0);
                  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *)0x0) {
                    if (Il2CppMethodInitialized_184347d65 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
                      Il2CppMethodInitialized_184347d65 = '\x01';
                    }
                    (__this_01->fields)._content = pUVar7;
                    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._content,pUVar7);
                    __this = (__this_01->fields)._content;
                    if (__this != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (__this,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                      pGVar8 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)__this_01,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
                      (__this_01->fields)._flex = pGVar8;
                      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._flex,pGVar8);
                      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                        pGVar8 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar7,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
                        (__this_01->fields)._contentFlex = pGVar8;
                        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._contentFlex,pGVar8);
                        (__this_01->fields)._height = fVar1;
                        (__this_01->fields)._gap = fVar2;
                        (__this_01->fields)._count = iVar3;
                        (__this_01->fields)._wrap = bVar4;
                        Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Apply
                                  (__this_01,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$<Build>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___Build_b__11_0 (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* shell, const MethodInfo* method);
// 0x1823c1b90

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___Build_b__11_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *shell,MethodInfo *method)

{
  int iVar1;
  float gap;
  int iVar2;
  System_Action_AottgUi__o *build;
  System_String_o *style;
  System_String_o *alignItems;
  int iVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar7;
  System_String_o *wrap;
  System_Nullable_float__Fields local_res8;
  
  if (Il2CppMethodInitialized_184347d64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"NoWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-runtime");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateCategoryRowRuntime");
    Il2CppMethodInitialized_184347d64 = '\x01';
  }
  build = (__this->fields)._buildChoices;
  local_res8 = (System_Nullable_float__Fields)
               System_String__Concat_1969e50((__this->fields)._id,"-content",(MethodInfo *)0x0);
  alignItems = "Stretch";
  style = "clear";
  pSVar7 = "Row";
  wrap = "Wrap";
  if ((__this->fields)._wrap == false) {
    wrap = "NoWrap";
  }
  gap = (__this->fields)._gap;
  iVar2 = (__this->fields)._count;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
  }
  iVar1 = iVar2 + -1;
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points((float)iVar3 * gap + (float)iVar2 * 260.0,(MethodInfo *)0x0)
  ;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._height,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (pSVar7,(System_String_o *)0x0,alignItems,(System_String_o *)0x0,wrap,gap,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (shell != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (shell,style,build,(System_String_o *)local_res8,pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "GameCreateCategoryRowRuntime";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"GameCreateCategoryRowRuntime");
      pSVar7 = System_String__Concat_1969e50((__this->fields)._id,"-runtime",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar7);
      pSVar7 = "NoWrap";
      if ((__this->fields)._wrap != false) {
        pSVar7 = "Wrap";
      }
      (__this_00->fields).value = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar7);
      (__this_00->fields).maxVisibleItems = (__this->fields)._count;
      (__this_00->fields).referenceHeight = (__this->fields)._height;
      local_res8.hasValue = false;
      local_res8._1_3_ = 0;
      local_res8.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_res8,(__this->fields)._gap,
                 (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
      (__this_00->fields).min.fields = local_res8;
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
      (__this_00->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,pGVar6);
      Gisketch_Aottg2UI_Code_AottgUi__Add(shell,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


