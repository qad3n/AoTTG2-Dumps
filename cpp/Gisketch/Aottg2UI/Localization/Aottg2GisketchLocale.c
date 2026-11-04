// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Localization/Aottg2GisketchLocale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x1818c0020

System_String_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  ushort uVar6;
  
  if (Il2CppMethodInitialized_184342028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_184342028 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  obj = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->static_fields->Localizer
  ;
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = obj->klass;
  uVar1 = (pIVar2->_2).interface_offsets_count;
  if (uVar1 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    uVar6 = 0;
    do {
      if (pIVar3[uVar6].interfaceType ==
          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
        pVVar4 = pIVar2->vtable + pIVar3[uVar6].offset;
        goto label_1818c00d3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_1818c00d3:
  pSVar5 = (*pVVar4->methodPtr)(obj,key,fallback,pVVar4->method);
  return pSVar5;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$Key
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* key, const MethodInfo* method);
// 0x1818bfff0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *key,MethodInfo *method)

{
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).textKey = key;
    Il2CppCodeGenWriteBarrier(&(node->fields).textKey,key);
  }
  return node;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale___cctor (const MethodInfo* method);
// 0x1818c0120

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *__this;
  
  if (Il2CppMethodInitialized_184342029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    Il2CppMethodInitialized_184342029 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->static_fields->Localizer = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->static_fields->Localizer,__this);
  return;
}


