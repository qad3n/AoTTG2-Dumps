// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCarouselRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___cctor (const MethodInfo* method);
// 0x5e8a5e0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07548875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateCarouselRuntime");
    Il2CppMethodInitialized_07548875 = '\x01';
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
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"GameCreateCarouselRuntime",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o* __this, System_String_o* id, int32_t count, float height, float gap, System_Action_AottgUi__o* buildChoices, float paddingTop, int32_t selectedIndex, const MethodInfo* method);
// 0x5e8a6a0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this,System_String_o *id,int32_t count,
               float height,float gap,System_Action_AottgUi__o *buildChoices,float paddingTop,
               int32_t selectedIndex,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._count = count;
  (__this->fields)._height = height;
  (__this->fields)._gap = gap;
  (__this->fields)._buildChoices = buildChoices;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildChoices);
  (__this->fields)._paddingTop = paddingTop;
  (__this->fields)._selectedIndex = selectedIndex;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__Build (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e8a730

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_Build_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548876 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_Build_b__10_0,
             (MethodInfo_4A81BE0 *)0x0);
  id = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((__this->fields)._height + (__this->fields)._paddingTop,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                      (__this->fields)._paddingTop,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e8a8a0

bool Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_array *pSVar1;
  int32_t selectedIndex;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_UI_ScrollRect_o *scroll;
  System_Globalization_CultureInfo_o *provider;
  
  if (Il2CppMethodInitialized_07548877 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&"-scroll");
    Il2CppMethodInitialized_07548877 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
      pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          if (__this != (UnityEngine_GameObject_o *)0x0) {
            __this_00 = UnityEngine_GameObject__AddComponent_object_
                                  (__this,(MethodInfo_353B6A0 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCarouselRuntime
                                  );
            if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              pSVar4 = System_String__Concat_52f0320
                                 ((node->fields).value,"-scroll",(MethodInfo *)0x0);
              pUVar3 = UnityEngine_Transform__Find(pUVar3,pSVar4,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                scroll = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar3,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
                pSVar1 = (node->fields).options;
                if (pSVar1 != (System_String_array *)0x0) {
                  if ((int)pSVar1->max_length == 0) {
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar4 = pSVar1->m_Items[0];
                  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
                  }
                  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
                  selectedIndex =
                       System_Int32__Parse_54b78a0
                                 (pSVar4,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
                  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_o *)0x0) {
                    Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime__Setup
                              (__this_00,scroll,selectedIndex,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$<Build>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___Build_b__10_0 (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5e8aa40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8aef7: jmp 0x5e8b0ca

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___Build_b__10_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  float gap;
  uint uVar1;
  int iVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  System_String_array *pSVar10;
  System_Globalization_CultureInfo_o *provider;
  int32_t count;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  uint uVar12;
  float value;
  
  if (Il2CppMethodInitialized_07548878 == '\0') {
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
    Il2CppMethodInitialized_07548878 = '\x01';
  }
  build = (__this->fields)._buildChoices;
  pSVar4 = System_String__Concat_52f0320((__this->fields)._id,"-scroll",(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._height,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,height,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  gap = (__this->fields)._gap;
  iVar2 = (__this->fields)._count;
  count = 1;
  if (1 < iVar2) {
    count = iVar2;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime);
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRowRuntime__SpanLength
                    (count,260.0,gap,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
  contentLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Row",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                  "NoWrap",gap,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                  (MethodInfo *)0x0);
  if (((row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
      (pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                          (row,"clear",build,pSVar4,pGVar7,contentLayout,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
      pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (pGVar11 = (pGVar8->fields).children,
     pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    uVar12 = 0xffffffff;
    do {
      uVar12 = uVar12 + 1;
      uVar1 = (uint)pGVar11->max_length;
      if ((int)uVar1 <= (int)uVar12) {
        pGVar8 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
        if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar8->fields).type = "GameCreateCarouselRuntime";
          Il2CppCodeGenWriteBarrier(&(pGVar8->fields).type);
          pSVar4 = System_String__Concat_52f0320((__this->fields)._id,"-runtime",(MethodInfo *)0x0)
          ;
          (pGVar8->fields).id = pSVar4;
          Il2CppCodeGenWriteBarrier(&(pGVar8->fields).id);
          (pGVar8->fields).value = (__this->fields)._id;
          Il2CppCodeGenWriteBarrier(&(pGVar8->fields).value);
          pSVar10 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar4 = System_Int32__ToString_54b7520
                             (&(__this->fields)._selectedIndex,(System_IFormatProvider_o *)provider,
                              (MethodInfo *)0x0);
          if (pSVar10 != (System_String_array *)0x0) {
            if ((int)pSVar10->max_length != 0) {
              pSVar10->m_Items[0] = pSVar4;
              Il2CppCodeGenWriteBarrier(pSVar10->m_Items);
              (pGVar8->fields).options = pSVar10;
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).options);
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
              pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  "Absolute",(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              (pGVar8->fields).layout = pGVar7;
              Il2CppCodeGenWriteBarrier(&(pGVar8->fields).layout);
              Gisketch_Aottg2UI_Code_AottgUi__Add(row,pGVar8,(MethodInfo *)0x0);
              return;
            }
label_05e8b0cf:
            ThrowIndexOutOfRangeException();
          }
        }
        break;
      }
      if (uVar1 <= uVar12) goto label_05e8b0cf;
      pGVar3 = pGVar11->m_Items[(int)uVar12];
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      (__this_00->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      pSVar4 = System_String__Concat_52f0320((pGVar3->fields).id,"-fade",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
      (__this_00->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
      pGVar7 = (pGVar3->fields).layout;
      if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,(pGVar7->fields).width,
                          (pGVar7->fields).height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_00->fields).layout = pGVar7;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
      if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
      if ((int)pGVar9->max_length == 0) goto label_05e8b0cf;
      pGVar9->m_Items[0] = pGVar3;
      Il2CppCodeGenWriteBarrier(pGVar9->m_Items);
      (__this_00->fields).children = pGVar9;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).children);
      if ((uint)pGVar11->max_length <= uVar12) goto label_05e8b0cf;
      pGVar11->m_Items[(int)uVar12] = __this_00;
      Il2CppCodeGenWriteBarrier(pGVar11->m_Items + (int)uVar12);
      pGVar11 = (pGVar8->fields).children;
    } while (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0);
  }
  ThrowNullReferenceException();
}


