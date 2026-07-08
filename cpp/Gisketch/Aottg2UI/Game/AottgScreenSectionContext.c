// Type: Gisketch.Aottg2UI.Game.AottgScreenSectionContext
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScreenSectionContext.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSectionContext___ctor (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, System_String_o* screenId, System_String_o* sectionId, System_String_o* sectionTitle, int32_t order, const MethodInfo* method);
// 0x4203b20

void Gisketch_Aottg2UI_Game_AottgScreenSectionContext___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this,System_String_o *screenId,
               System_String_o *sectionId,System_String_o *sectionTitle,int32_t order,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_c *pSVar2;
  undefined4 in_register_0000000c;
  
  if (DAT_05704ffe == '\0') {
    il2cpp_init_method_metadata(&"-");
    DAT_05704ffe = '\x01';
  }
  pSVar2 = (System_String_c *)
           System_String__Concat(sectionId,"-",sectionTitle,(MethodInfo *)0x0);
  screenId->klass = pSVar2;
  il2cpp_runtime_glue(screenId,pSVar2);
  screenId->fields = (System_String_Fields)sectionTitle;
  il2cpp_runtime_glue(&screenId->fields);
  bVar1 = System_String__IsNullOrEmpty
                    ((System_String_o *)CONCAT44(in_register_0000000c,order),(MethodInfo *)0x0);
  pSVar2 = (System_String_c *)CONCAT44(in_register_0000000c,order);
  if ((char)bVar1 != '\0') {
    pSVar2 = (System_String_c *)sectionTitle;
  }
  screenId[1].klass = pSVar2;
  il2cpp_runtime_glue(screenId + 1,pSVar2);
  *(int *)&screenId->monitor = (int)method;
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionId (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, const MethodInfo* method);
// 0x4203bc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionId
          (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this,MethodInfo *method)

{
  return (System_String_o *)method->invoker_method;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionTitle (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, const MethodInfo* method);
// 0x4203bd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__get_SectionTitle
          (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this,MethodInfo *method)

{
  return (System_String_o *)method->name;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$HeaderMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__HeaderMotion (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, const MethodInfo* method);
// 0x4203be0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__HeaderMotion
          (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (DAT_05704fff == '\0') {
    il2cpp_init_method_metadata(&"slideLeft");
    DAT_05704fff = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideLeft",(System_String_o *)method->methodPointer,0.12,0.01,0.018,
                      *(int32_t *)&method->virtualMethodPointer,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenSectionContext$$RowMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this, int32_t index, const MethodInfo* method);
// 0x41f86f0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
          (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this,int32_t index,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  undefined4 in_register_0000003c;
  
  if (DAT_05705000 == '\0') {
    il2cpp_init_method_metadata(&"slideLeft");
    DAT_05705000 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideLeft",*(System_String_o **)CONCAT44(in_register_0000003c,index),0.12,
                      0.025,0.018,
                      (int)method + *(int *)((undefined8 *)CONCAT44(in_register_0000003c,index) + 1)
                      + 1,(MethodInfo *)0x0);
  return pGVar1;
}


