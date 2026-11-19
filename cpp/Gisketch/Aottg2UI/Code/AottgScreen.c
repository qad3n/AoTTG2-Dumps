// Type: Gisketch.Aottg2UI.Code.AottgScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x5367290

System_String_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075429ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    Il2CppMethodInitialized_075429ee = '\x01';
  }
  return "screen";
}


// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x53672c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (Il2CppMethodInitialized_075429ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    Il2CppMethodInitialized_075429ef = '\x01';
  }
  if (Il2CppMethodInitialized_07542a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542a24 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 100.0;
      (__this_01->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column","Center","Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffe0);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgScreen$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, System_String_o* id, System_String_o* title, System_String_o* titleKey, System_String_o* searchTitle, System_String_o* searchTitleKey, System_String_o* searchGroup, System_String_o* backScreenId, System_String_o* backActionId, int32_t lifecycle, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5367440

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,System_String_o *id,System_String_o *title,
          System_String_o *titleKey,System_String_o *searchTitle,System_String_o *searchTitleKey,
          System_String_o *searchGroup,System_String_o *backScreenId,System_String_o *backActionId,
          int32_t lifecycle,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)titleKey;
  if (Il2CppMethodInitialized_075429f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_075429f0 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,id,actions,method_00);
  (*(__this->klass->vtable)._6_Build.methodPtr)(__this,__this_01,(__this->klass->vtable)._6_Build.method);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition);
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    (__this_02->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).id);
    if (Il2CppMethodInitialized_075429f1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_075429f1 = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty(titleKey,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(titleKey,(MethodInfo *)0x0);
    }
    (__this_02->fields).title = title;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).title);
    if (Il2CppMethodInitialized_075429f1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_075429f1 = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty(searchTitleKey,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      searchTitle = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                              (searchTitleKey,(MethodInfo *)0x0);
    }
    (__this_02->fields).searchTitle = searchTitle;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).searchTitle);
    bVar1 = System_String__IsNullOrEmpty(searchGroup,(MethodInfo *)0x0);
    if (bVar1) {
      searchGroup = id;
    }
    (__this_02->fields).searchGroup = searchGroup;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).searchGroup);
    (__this_02->fields).backScreenId = backScreenId;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).backScreenId);
    (__this_02->fields).backActionId = backActionId;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).backActionId);
    (__this_02->fields).lifecycle = lifecycle;
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_03->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).type);
      (__this_03->fields).id = id;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).id);
      pSVar2 = (*(__this->klass->vtable)._4_get_RootStyle.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_RootStyle.method);
      (__this_03->fields).style = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).style);
      pGVar3 = (*(__this->klass->vtable)._5_get_RootLayout.methodPtr)
                         (__this,(__this->klass->vtable)._5_get_RootLayout.method);
      (__this_03->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).layout);
      if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        if (Il2CppMethodInitialized_07542a18 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
          Il2CppMethodInitialized_07542a18 = '\x01';
        }
        __this_00 = (__this_01->fields)._children;
        if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (MethodInfo_395F5A0 *)
                              MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_ToArray);
          (__this_03->fields).children = pGVar4;
          Il2CppCodeGenWriteBarrier(&(__this_03->fields).children);
          (__this_02->fields).root = __this_03;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).root);
          return __this_02;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgScreen$$Localized
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgScreen__Localized (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x5367750

System_String_o *
Gisketch_Aottg2UI_Code_AottgScreen__Localized
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075429f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075429f1 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    return fallback;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.AottgScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgScreen___ctor (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x53677c0

void Gisketch_Aottg2UI_Code_AottgScreen___ctor
               (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


