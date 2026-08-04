// Type: Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchChoiceOptionRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$Register
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register (System_String_o* key, System_Action_GisketchChoiceOptionRenderContext__o* renderer, const MethodInfo* method);
// 0x3b93710

void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
               (System_String_o *key,System_Action_GisketchChoiceOptionRenderContext__o *renderer,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057a9ed5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    g_data_057a9ed5 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((renderer == (System_Action_GisketchChoiceOptionRenderContext__o *)0x0) || ((char)bVar1 != '\0')) {
    return;
  }
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8),(Il2CppObject *)key,(Il2CppObject *)renderer,
               MethodInfo_Void_set_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ed7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchChoiceOptionRenderConte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    g_data_057a9ed7 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchChoiceOptionRenderConte);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
  **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$TryRender
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender (System_String_o* key, Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x3b8d5c0

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender
          (System_String_o *key,Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,
          MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *local_20;
  
  if (g_data_057a9ed6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    g_data_057a9ed6 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  bVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) &&
     ((char)bVar1 == '\0')) {
    if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_03b8d684:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9ea6 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchDropdownItemFeedback);
        g_data_057a9ea6 = '\x01';
      }
      *(undefined4 *)&__this_00[1].fields._buckets = 8;
      __this = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchDropdownItemFeedback);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
      __this_00[1].fields._entries = __this;
      il2cpp_runtime_helper_022b4080(&__this_00[1].fields._entries);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar2 = 0;
    }
    else {
      if (local_20 == (Il2CppObject *)0x0) goto label_03b8d684;
      (*local_20[1].monitor)(local_20[4].klass,context,local_20[2].monitor);
      bVar2 = 0x5579401;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer___cctor (const MethodInfo* method);
// 0x3b937b0

void Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057a9ed7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchChoiceOptionRenderConte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    g_data_057a9ed7 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchChoiceOptionRenderConte);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
  **(undefined8 **)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchChoiceOptionRenderer + 0xb8),__this);
  return;
}


