// Type: Gisketch.Aottg2UI.Game.AottgScreenSectionContext
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScreenSectionContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSectionContext___ctor (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, System_String_o* screenId, System_String_o* sectionId, System_String_o* sectionTitle, int32_t order, const MethodInfo* method);
// 0x181e2d5a0

void Gisketch_Aottg2UI_Game_AottgScreenSectionContext___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *__this,System_String_o *screenId,
               System_String_o *sectionId,System_String_o *sectionTitle,int32_t order,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344d75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184344d75 = '\x01';
  }
  value = System_String__Concat_1969b70(screenId,"-",sectionId,(MethodInfo *)0x0);
  (__this->fields)._group = value;
  Il2CppCodeGenWriteBarrier((void **)__this,value);
  (__this->fields)._SectionId_k__BackingField = sectionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionId_k__BackingField,sectionId);
  bVar1 = System_String__IsNullOrEmpty(sectionTitle,(MethodInfo *)0x0);
  if (!bVar1) {
    sectionId = sectionTitle;
  }
  (__this->fields)._SectionTitle_k__BackingField = sectionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionTitle_k__BackingField,sectionId);
  (__this->fields)._order = order;
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionId (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionId(Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, MethodInfo* method)

{
  return (__this->fields)._Mesh_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionTitle (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionTitle(Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, MethodInfo* method)

{
  return (__this->fields)._MeshCollider_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$HeaderMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__HeaderMotion (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, const MethodInfo* method);
// 0x181e2d4b0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__HeaderMotion
          (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideLeft");
    Il2CppMethodInitialized_184344d76 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideLeft",(__this->fields)._group,0.12,0.01,0.018,(__this->fields)._order,
                      (MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$RowMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, int32_t index, const MethodInfo* method);
// 0x181e2d520

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
          (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *__this,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideLeft");
    Il2CppMethodInitialized_184344d77 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideLeft",(__this->fields)._group,0.12,0.025,0.018,
                      (__this->fields)._order + index + 1,(MethodInfo *)0x0);
  return pGVar1;
}


