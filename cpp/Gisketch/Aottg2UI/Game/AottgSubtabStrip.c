// Type: Gisketch.Aottg2UI.Game.AottgSubtabStrip
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSubtabStrip.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, System_String_o* id, Gisketch_Aottg2UI_Game_AottgSubtab_array* tabs, System_String_o* selectedId, System_Action_GisketchActionContext__string__o* selected, const MethodInfo* method);
// 0x5e7d690

void Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs,System_String_o *selectedId,
               System_Action_GisketchActionContext__string__o *selected,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754880c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array);
    Il2CppMethodInitialized_0754880c = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  if (tabs == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array,0);
  }
  (__this->fields)._tabs = tabs;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tabs);
  if (selectedId == (System_String_o *)0x0) {
    selectedId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._selectedId = selectedId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedId);
  (__this->fields)._selected = selected;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selected);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Build (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e7d750

void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Build
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *text;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_array *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *method_01;
  System_String_o **method_02;
  
  method_02 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_0754880d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip_Build_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSubtabStrip");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    method_02 = &"settingsSubtabStrip";
    il2cpp_codegen_initialize_runtime_metadata(&"settingsSubtabStrip");
    Il2CppMethodInitialized_0754880d = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RegisterFactory((MethodInfo *)method_02);
  text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip_Build_b__8_0,
             (MethodInfo_4A803E0 *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                       (ui,4,text,__this_00,(__this->fields)._id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).type = "AottgSubtabStrip";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
      (pGVar1->fields).style = "settingsSubtabStrip";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
      method_01 = (MethodInfo *)(__this->fields)._selectedId;
      (pGVar1->fields).value = (System_String_o *)method_01;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).value);
      method_00 = Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabIds(__this,method_01);
      (pGVar1->fields).options = method_00;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).options);
      pGVar2 = Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabMetadata(__this,(MethodInfo *)method_00);
      (pGVar1->fields).deferredChildren = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).deferredChildren);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$Select
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Select (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e7dcf0

void Gisketch_Aottg2UI_Game_AottgSubtabStrip__Select
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *value;
  System_Action_GisketchActionContext__string__o *pSVar1;
  code *vtableDispatch;
  bool bVar2;
  System_String_o **ppSVar3;
  
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    ppSVar3 = &((context.fields.Node)->fields).value;
  }
  value = *ppSVar3;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((bVar2) ||
     (pSVar1 = (__this->fields)._selected, pSVar1 == (System_Action_GisketchActionContext__string__o *)0x0)) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,value,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$TabIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabIds (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, const MethodInfo* method);
// 0x5e7da60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7db07: jmp 0x5e7db64

System_String_array *
Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabIds
          (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar3;
  Gisketch_Aottg2UI_Game_AottgSubtab_Fields *pGVar4;
  long lVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_0754880e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754880e = '\x01';
  }
  pGVar3 = (__this->fields)._tabs;
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pGVar3->max_length);
    pGVar3 = (__this->fields)._tabs;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
      if (pSVar2 == (System_String_array *)0x0) {
        if ((int)pGVar3->max_length < 1) {
          return (System_String_array *)0x0;
        }
      }
      else {
        lVar5 = 0;
        uVar6 = 0;
        do {
          uVar1 = (uint)pGVar3->max_length;
          if ((long)(int)uVar1 <= (long)uVar6) {
            return pSVar2;
          }
          if (uVar1 <= uVar6) {
label_05e7db64:
            ThrowIndexOutOfRangeException();
          }
          if (pGVar3->m_Items[uVar6] == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
            pGVar4 = *(Gisketch_Aottg2UI_Game_AottgSubtab_Fields **)(g_data_07556758 + 0xb8);
            uVar1 = (uint)pSVar2->max_length;
          }
          else {
            pGVar4 = &pGVar3->m_Items[uVar6]->fields;
            uVar1 = (uint)pSVar2->max_length;
          }
          if (uVar1 <= uVar6) goto label_05e7db64;
          pSVar2->m_Items[uVar6] = pGVar4->_Id_k__BackingField;
          Il2CppCodeGenWriteBarrier((void **)((long)pSVar2->m_Items + lVar5));
          uVar6 = uVar6 + 1;
          pGVar3 = (__this->fields)._tabs;
          lVar5 = lVar5 + 8;
        } while (pGVar3 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$TabMetadata
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabMetadata (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, const MethodInfo* method);
// 0x5e7db70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7dbde: nop 
// asm:   0x5e7dc27: jmp 0x5e7dccc

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgSubtabStrip__TabMetadata
          (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgSubtab_Fields *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o **ppSVar6;
  long lVar7;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_0754880f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Il2CppMethodInitialized_0754880f = '\x01';
  }
  pGVar5 = (__this->fields)._tabs;
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,
                        (uint32_t)pGVar5->max_length);
    pGVar5 = (__this->fields)._tabs;
    if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
      lVar7 = 0x20;
      uVar8 = 0;
      do {
        uVar1 = (uint)pGVar5->max_length;
        if ((long)(int)uVar1 <= (long)uVar8) {
          return pGVar4;
        }
        if (uVar1 <= uVar8) {
label_05e7dce3:
          ThrowIndexOutOfRangeException();
        }
        pGVar2 = pGVar5->m_Items[uVar8];
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
          pGVar3 = *(Gisketch_Aottg2UI_Game_AottgSubtab_Fields **)(g_data_07556758 + 0xb8);
        }
        else {
          pGVar3 = &pGVar2->fields;
        }
        if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (__this_00->fields).id = pGVar3->_Id_k__BackingField;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
        if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
          ppSVar6 = *(System_String_o ***)(g_data_07556758 + 0xb8);
        }
        else {
          ppSVar6 = &(pGVar2->fields)._Label_k__BackingField;
        }
        (__this_00->fields).text = *ppSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
        if ((uint)pGVar4->max_length <= uVar8) goto label_05e7dce3;
        pGVar4->m_Items[uVar8] = __this_00;
        Il2CppCodeGenWriteBarrier((void **)((long)pGVar4->m_Items + lVar7 + -0x20));
        uVar8 = uVar8 + 1;
        pGVar5 = (__this->fields)._tabs;
        lVar7 = lVar7 + 8;
      } while (pGVar5 != (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStrip$$<Build>b__8_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStrip___Build_b__8_0 (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e7dd60

void Gisketch_Aottg2UI_Game_AottgSubtabStrip___Build_b__8_0
               (Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *value;
  System_Action_GisketchActionContext__string__o *pSVar1;
  code *vtableDispatch;
  bool bVar2;
  System_String_o **ppSVar3;
  
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    ppSVar3 = &((context.fields.Node)->fields).value;
  }
  value = *ppSVar3;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((bVar2) ||
     (pSVar1 = (__this->fields)._selected, pSVar1 == (System_Action_GisketchActionContext__string__o *)0x0)) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,value,(pSVar1->fields).method,vtableDispatch);
  return;
}


