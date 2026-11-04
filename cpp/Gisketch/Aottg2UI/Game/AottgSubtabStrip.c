// Type: Gisketch.Aottg2UI.Game.AottgSubtabStrip
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSubtabStrip.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, System_String_o* id, Gisketch_Aottg2UI_Game_AottgSubtab_array* tabs, System_String_o* selectedId, System_Action_GisketchActionContext__string__o* selected, const MethodInfo* method);
// 0x1823b91e0

void Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs,System_String_o *selectedId,
               System_Action_GisketchActionContext__string__o *selected,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array);
    Il2CppMethodInitialized_184347cdb = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  if (tabs == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array,0);
  }
  (__this->fields)._tabs = tabs;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tabs,tabs);
  if (selectedId == (System_String_o *)0x0) {
    selectedId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._selectedId = selectedId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedId,selectedId);
  (__this->fields)._selected = selected;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selected,selected);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Build (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823b88c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b8bb7: jmp 0x1823b8b30
// asm:   0x1823b8c2c: nop dword ptr [rax]
// asm:   0x1823b8d0a: jmp 0x1823b8e2c

void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Build
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar2;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  DG_Tweening_Core_DOSetter_Color2__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_01;
  Gisketch_Aottg2UI_Game_AottgSubtab_Fields *pGVar5;
  System_String_o **ppSVar6;
  uint uVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_184347cdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip_Build_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSubtabStrip");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"settingsSubtabStrip");
    Il2CppMethodInitialized_184347cdc = '\x01';
  }
  if (Il2CppMethodInitialized_184347cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSubtabStrip");
    Il2CppMethodInitialized_184347cdf = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_BuildRuntime,
               (MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) goto label_1823b8e2c;
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this_00,"AottgSubtabStrip",__this_01,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime->static_fields->_registered = true;
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_02 = (DG_Tweening_Core_DOSetter_Color2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip_Build_b__8_0,
             (MethodInfo_1387DC0 *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    uVar8 = 0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                       (ui,4,pSVar1,(System_Action_GisketchActionContext__o *)__this_02,(__this->fields)._id,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).type = "AottgSubtabStrip";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type,"AottgSubtabStrip");
      (pGVar4->fields).style = "settingsSubtabStrip";
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style,"settingsSubtabStrip");
      pSVar1 = (__this->fields)._selectedId;
      (pGVar4->fields).value = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value,pSVar1);
      if (Il2CppMethodInitialized_184347cdd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
        Il2CppMethodInitialized_184347cdd = '\x01';
      }
      pGVar2 = (__this->fields)._tabs;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
        value = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pGVar2->max_length);
        pGVar2 = (__this->fields)._tabs;
        uVar7 = uVar8;
        while (pGVar2 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
          if ((int)pGVar2->max_length <= (int)uVar7) {
            (pGVar4->fields).options = value;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).options,value);
            if (Il2CppMethodInitialized_184347cde == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
              Il2CppMethodInitialized_184347cde = '\x01';
            }
            pGVar2 = (__this->fields)._tabs;
            if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
              value_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                         SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,
                                    (uint32_t)pGVar2->max_length);
              pGVar2 = (__this->fields)._tabs;
              goto joined_r0x0001823b8c26;
            }
            break;
          }
          pGVar2 = (__this->fields)._tabs;
          if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) break;
          if ((uint)pGVar2->max_length <= uVar7) goto label_1823b8e32;
          if (pGVar2->m_Items[(int)uVar7] == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
            pGVar5 = *(Gisketch_Aottg2UI_Game_AottgSubtab_Fields **)(g_data_184354e50 + 0xb8);
          }
          else {
            pGVar5 = &((__this->fields)._tabs)->m_Items[(int)uVar7]->fields;
          }
          if (value == (System_String_array *)0x0) break;
          if ((uint)value->max_length <= uVar7) goto label_1823b8e32;
          pSVar1 = pGVar5->_Id_k__BackingField;
          value->m_Items[(int)uVar7] = pSVar1;
          Il2CppCodeGenWriteBarrier(value->m_Items + (int)uVar7,pSVar1);
          uVar7 = uVar7 + 1;
          pGVar2 = (__this->fields)._tabs;
        }
      }
    }
  }
label_1823b8e2c:
  ThrowNullReferenceException();
joined_r0x0001823b8c26:
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) goto label_1823b8e2c;
  if ((int)pGVar2->max_length <= (int)uVar8) {
    (pGVar4->fields).deferredChildren = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).deferredChildren,value_00);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
    value_01 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
    (pGVar4->fields).layout = value_01;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,value_01);
    return;
  }
  pGVar2 = (__this->fields)._tabs;
  if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) goto label_1823b8e2c;
  if ((uint)pGVar2->max_length <= uVar8) {
label_1823b8e32:
    ThrowIndexOutOfRangeException();
  }
  pGVar3 = pGVar2->m_Items[(int)uVar8];
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
    pGVar5 = *(Gisketch_Aottg2UI_Game_AottgSubtab_Fields **)(g_data_184354e50 + 0xb8);
  }
  else {
    pGVar5 = &pGVar3->fields;
  }
  if (__this_03 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823b8e2c;
  pSVar1 = pGVar5->_Id_k__BackingField;
  (__this_03->fields).id = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).id,pSVar1);
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
    ppSVar6 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    ppSVar6 = &(pGVar3->fields)._Label_k__BackingField;
  }
  pSVar1 = *ppSVar6;
  (__this_03->fields).text = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).text,pSVar1);
  if (value_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_1823b8e2c;
  if ((uint)value_00->max_length <= uVar8) goto label_1823b8e32;
  value_00->m_Items[(int)uVar8] = __this_03;
  Il2CppCodeGenWriteBarrier(value_00->m_Items + (int)uVar8,__this_03);
  pGVar2 = (__this->fields)._tabs;
  uVar8 = uVar8 + 1;
  goto joined_r0x0001823b8c26;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$Select
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Select (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823b8e40

void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Select
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_o *value;
  System_Action_GisketchActionContext__string__o *pSVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar3 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    ppSVar3 = &(((context->fields).Node)->fields).value;
  }
  value = *ppSVar3;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (pSVar1 = (__this->fields)._selected, pSVar1 != (System_Action_GisketchActionContext__string__o *)0x0)) {
    local_28 = *(undefined4 *)&(context->fields).ElementId;
    uStack_24 = *(undefined4 *)((longlong)&(context->fields).ElementId + 4);
    uStack_20 = *(undefined4 *)&(context->fields).GameObject;
    uStack_1c = *(undefined4 *)((longlong)&(context->fields).GameObject + 4);
    local_18 = *(undefined4 *)&(context->fields).Node;
    uStack_14 = *(undefined4 *)((longlong)&(context->fields).Node + 4);
    iStack_10 = (context->fields).InputSource;
    uStack_c = *(undefined4 *)&(context->fields).field_0x1c;
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,&local_28,value,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$TabIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabIds (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, const MethodInfo* method);
// 0x1823b8ed0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b8f2f: nop 
// asm:   0x1823b8fa0: jmp 0x1823b8f30

System_String_array *
Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabIds
          (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar1;
  System_String_o *value;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Game_AottgSubtab_Fields *pGVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347cdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184347cdd = '\x01';
  }
  pGVar1 = (__this->fields)._tabs;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pGVar1->max_length);
    uVar4 = 0;
    pGVar1 = (__this->fields)._tabs;
    while (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)uVar4) {
        return pSVar2;
      }
      pGVar1 = (__this->fields)._tabs;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) break;
      if ((uint)pGVar1->max_length <= uVar4) {
label_1823b8fbb:
        ThrowIndexOutOfRangeException();
      }
      if (pGVar1->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
        pGVar3 = *(Gisketch_Aottg2UI_Game_AottgSubtab_Fields **)(g_data_184354e50 + 0xb8);
      }
      else {
        pGVar3 = &((__this->fields)._tabs)->m_Items[(int)uVar4]->fields;
      }
      if (pSVar2 == (System_String_array *)0x0) break;
      if ((uint)pSVar2->max_length <= uVar4) goto label_1823b8fbb;
      value = pGVar3->_Id_k__BackingField;
      pSVar2->m_Items[(int)uVar4] = value;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar4,value);
      uVar4 = uVar4 + 1;
      pGVar1 = (__this->fields)._tabs;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$TabMetadata
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabMetadata (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, const MethodInfo* method);
// 0x1823b8fd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b9112: jmp 0x1823b9045

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabMetadata
          (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtab_Fields *pGVar5;
  System_String_o **ppSVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184347cde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Il2CppMethodInitialized_184347cde = '\x01';
  }
  pGVar1 = (__this->fields)._tabs;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,
                        (uint32_t)pGVar1->max_length);
    uVar7 = 0;
    pGVar1 = (__this->fields)._tabs;
    while (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)uVar7) {
        return pGVar4;
      }
      pGVar1 = (__this->fields)._tabs;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) break;
      if ((uint)pGVar1->max_length <= uVar7) {
label_1823b913b:
        ThrowIndexOutOfRangeException();
      }
      pGVar2 = pGVar1->m_Items[(int)uVar7];
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
        pGVar5 = *(Gisketch_Aottg2UI_Game_AottgSubtab_Fields **)(g_data_184354e50 + 0xb8);
      }
      else {
        pGVar5 = &pGVar2->fields;
      }
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      pSVar3 = pGVar5->_Id_k__BackingField;
      (__this_00->fields).id = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar3);
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
        ppSVar6 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
      }
      else {
        ppSVar6 = &(pGVar2->fields)._Label_k__BackingField;
      }
      pSVar3 = *ppSVar6;
      (__this_00->fields).text = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar3);
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
      if ((uint)pGVar4->max_length <= uVar7) goto label_1823b913b;
      pGVar4->m_Items[(int)uVar7] = __this_00;
      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar7,__this_00);
      uVar7 = uVar7 + 1;
      pGVar1 = (__this->fields)._tabs;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$<Build>b__8_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip___Build_b__8_0 (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823b9150

void Gisketch_Aottg2UI_Game_AottgSubtabStrip___Build_b__8_0
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  undefined8 uVar2;
  System_String_o *value;
  System_Action_GisketchActionContext__string__o *pSVar3;
  bool bVar4;
  System_String_o **ppSVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  System_String_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pGVar1 = (context->fields).Node;
  uVar2 = *(undefined8 *)&(context->fields).InputSource;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    ppSVar5 = &(pGVar1->fields).value;
  }
  value = *ppSVar5;
  bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((!bVar4) &&
     (pSVar3 = (__this->fields)._selected, pSVar3 != (System_Action_GisketchActionContext__string__o *)0x0)) {
    local_48 = (context->fields).ElementId;
    pUStack_40 = (context->fields).GameObject;
    local_58 = SUB84(pGVar1,0);
    uStack_54 = (undefined4)((ulonglong)pGVar1 >> 0x20);
    uStack_50 = (undefined4)uVar2;
    uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    (*(code *)(pSVar3->fields).invoke_impl)
              ((pSVar3->fields).method_code,&local_48,value,(pSVar3->fields).method);
  }
  return;
}


