// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Localization/Aottg2GisketchLocale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text (System_String_o* key, const MethodInfo* method);
// 0x5359cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5359d3d: nop dword ptr [rax]

System_String_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  undefined8 uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075429a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_075429a5 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    obj = (Il2CppObject *)
          TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->static_fields->Localizer;
  }
  else {
    obj = *(Il2CppObject **)
           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->static_fields;
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = **(undefined8 **)(g_data_07556758 + 0xb8);
  pIVar3 = obj->klass;
  uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar8) ==
          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
        pVVar5 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar8);
        goto label_05359dc3;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_05359dc3:
  pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(obj,key,uVar2,pVVar5->method,pVVar5->methodPtr);
  return pSVar6;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x535ff30

System_String_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text_525ff30
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_075429a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_075429a6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    obj = (Il2CppObject *)
          TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->static_fields->Localizer;
  }
  else {
    obj = *(Il2CppObject **)
           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->static_fields;
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = obj->klass;
  uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar6 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar7 = 0;
    do {
      if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar7) ==
          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
        pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar7);
        goto label_05360023;
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar6 * 0x10 != lVar7);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_05360023:
  pSVar5 = (System_String_o *)(*pVVar4->methodPtr)(obj,key,fallback,pVVar4->method,pVVar4->methodPtr);
  return pSVar5;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Key
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* key, const MethodInfo* method);
// 0x5360040

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *key,MethodInfo *method)

{
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).textKey = key;
    Il2CppCodeGenWriteBarrier(&(node->fields).textKey);
  }
  return node;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale___cctor (const MethodInfo* method);
// 0x5360060

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075429a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    Il2CppMethodInitialized_075429a7 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->static_fields->Localizer =
       (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->static_fields->Localizer);
  return;
}


