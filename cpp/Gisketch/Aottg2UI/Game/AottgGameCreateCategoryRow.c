// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCategoryRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___cctor (const MethodInfo* method);
// 0x5e8cf40

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07548894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateCategoryRowRuntime");
    Il2CppMethodInitialized_07548894 = '\x01';
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
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"GameCreateCategoryRowRuntime",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o* __this, System_String_o* id, int32_t count, float height, float gap, System_Action_AottgUi__o* buildChoices, bool wrap, float paddingTop, const MethodInfo* method);
// 0x5e8d000

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this,System_String_o *id,int32_t count,
               float height,float gap,System_Action_AottgUi__o *buildChoices,bool wrap,float paddingTop,
               MethodInfo *method)

{
  int32_t iVar1;
  
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  iVar1 = 1;
  if (1 < count) {
    iVar1 = count;
  }
  (__this->fields)._count = iVar1;
  (__this->fields)._height = height;
  (__this->fields)._gap = gap;
  (__this->fields)._paddingTop = paddingTop;
  (__this->fields)._wrap = wrap;
  (__this->fields)._buildChoices = buildChoices;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildChoices);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__Build (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e8d0a0

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_Build_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07548895 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_Build_b__11_0,
             (MethodInfo_4A81BE0 *)0x0);
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
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e8d210

bool Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  float height;
  float gap;
  int32_t count;
  bool wrap;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *__this_00;
  
  if (Il2CppMethodInitialized_07548896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCategoryRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_07548896 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar1,true,(pUVar1->klass->vtable)._28_set_ignoreLayout.method);
      pUVar2 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            __this = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
            if (__this != (UnityEngine_GameObject_o *)0x0) {
              __this_00 = UnityEngine_GameObject__AddComponent_object_
                                    (__this,(MethodInfo_353B6A0 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCategoryRowRuntime
                                    );
              pUVar2 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pUVar3,0,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar3 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar2,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  count = (node->fields).maxVisibleItems;
                  height = (node->fields).referenceHeight;
                  gap = (node->fields).min.fields.value;
                  wrap = System_String__op_Equality
                                   ((node->fields).value,"Wrap",(MethodInfo *)0x0);
                  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime_o *)0x0) {
                    Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__Setup
                              (__this_00,pUVar3,count,height,gap,wrap,method);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$<Build>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___Build_b__11_0 (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* shell, const MethodInfo* method);
// 0x5e8d4a0

void Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___Build_b__11_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *shell,MethodInfo *method)

{
  float gap;
  int iVar1;
  System_String_o *wrap;
  System_String_o *alignItems;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  int iVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar6;
  System_String_o **ppSVar7;
  System_Nullable_float__Fields SStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_Action_AottgUi__o *pSStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  if (Il2CppMethodInitialized_07548897 == '\0') {
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
    Il2CppMethodInitialized_07548897 = '\x01';
  }
  pSStack_40 = (__this->fields)._buildChoices;
  pSStack_48 = System_String__Concat_52f0320((__this->fields)._id,"-content",(MethodInfo *)0x0);
  alignItems = "Stretch";
  pSVar6 = "Row";
  if ((__this->fields)._wrap == false) {
    ppSVar7 = &"NoWrap";
  }
  else {
    ppSVar7 = &"Wrap";
  }
  pSStack_50 = "clear";
  wrap = *ppSVar7;
  gap = (__this->fields)._gap;
  iVar1 = (__this->fields)._count;
  pGStack_38 = shell;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
  }
  iVar2 = iVar1 + -1;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points((float)iVar2 * gap + (float)iVar1 * 260.0,(MethodInfo *)0x0)
  ;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._height,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (pSVar6,(System_String_o *)0x0,alignItems,(System_String_o *)0x0,wrap,gap,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  __this_00 = pGStack_38;
  if (pGStack_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGStack_38,pSStack_50,pSStack_40,pSStack_48,pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "GameCreateCategoryRowRuntime";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
      pSVar6 = System_String__Concat_52f0320((__this->fields)._id,"-runtime",(MethodInfo *)0x0);
      (__this_01->fields).id = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).id);
      if ((__this->fields)._wrap == false) {
        ppSVar7 = &"NoWrap";
      }
      else {
        ppSVar7 = &"Wrap";
      }
      (__this_01->fields).value = *ppSVar7;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).value);
      (__this_01->fields).maxVisibleItems = (__this->fields)._count;
      (__this_01->fields).referenceHeight = (__this->fields)._height;
      SStack_58.hasValue = false;
      SStack_58._1_3_ = 0;
      SStack_58.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&SStack_58,(__this->fields)._gap,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      (__this_01->fields).min.fields = SStack_58;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_01->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout);
      Gisketch_Aottg2UI_Code_AottgUi__Add(__this_00,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


