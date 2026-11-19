// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreenState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreenState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits (const MethodInfo* method);
// 0x5e83c90

ApplicationManagers_Credits_AottgCreditsResponse_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754883d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_0754883d = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$set_Credits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits (ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x5e83cd0

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits
               (ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754883e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_0754883e = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_HasCategories
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories (const MethodInfo* method);
// 0x5e82550

bool Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_0754883f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory);
    Il2CppMethodInitialized_0754883f = '\x01';
  }
  if (Il2CppMethodInitialized_07548884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_07548884 = '\x01';
  }
  pAVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
  if (pAVar1 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    return false;
  }
  obj = (Il2CppObject *)(pAVar1->fields)._Categories_k__BackingField;
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = obj->klass;
  uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar6 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar7 = 0;
    do {
      if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory__c **)
           ((long)&pIVar3->interfaceType + lVar7) ==
          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory) {
        pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar7);
        goto label_05e82615;
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar6 * 0x10 != lVar7);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,0);
label_05e82615:
  iVar4 = (*pVVar5->methodPtr)(obj,pVVar5->method);
  return 0 < iVar4;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Set
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x5e83d20

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set
               (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_07548885 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear (const MethodInfo* method);
// 0x5e83d70

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_07548885 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField =
       (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField
            );
  return;
}


