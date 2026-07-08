// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreenState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreenState.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits (const MethodInfo* method);
// 0x41724b0

ApplicationManagers_Credits_AottgCreditsResponse_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits(MethodInfo *method)

{
  if (DAT_05704adc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreenState);
    DAT_05704adc = '\x01';
  }
  return (ApplicationManagers_Credits_AottgCreditsResponse_o *)
         **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$set_Credits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits (ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x41724f0

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits
               (ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  if (DAT_05704add == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreenState);
    DAT_05704add = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = value;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8),value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_HasCategories
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories (const MethodInfo* method);
// 0x4170cc0

bool_conflict Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories(MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (DAT_05704ade == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704ade = '\x01';
  }
  if (DAT_05704b2a == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704b2a = '\x01';
  }
  if (**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) == 0) {
    return 0;
  }
  plVar1 = *(long **)(**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) + 0x10);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar2 = *plVar1;
  if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
    lVar5 = 0;
    do {
      if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar5) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
        puVar3 = (undefined8 *)
                 ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar5) * 0x10 + lVar2 + 0x138);
        goto LAB_04170d85;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
  }
  puVar3 = (undefined8 *)il2cpp_runtime_glue(plVar1,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
LAB_04170d85:
  uVar4 = (*(code *)*puVar3)(plVar1,puVar3[1]);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),0 < (int)uVar4);
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Set
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x4167150

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set
               (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  if (DAT_05704b2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreenState);
    DAT_05704b2b = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = credits;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8),credits);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear (const MethodInfo* method);
// 0x41671a0

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear(MethodInfo *method)

{
  if (DAT_05704b2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreenState);
    DAT_05704b2b = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8),0);
  return;
}


