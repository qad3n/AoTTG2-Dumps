// Type: Gisketch.Aottg2UI.Building.GisketchComponentRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchComponentRegistry.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, Gisketch_Aottg2UI_Building_GisketchComponentFactory_o* factory, const MethodInfo* method);
// 0x3af90a0

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type
               ,Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057014e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_057014e2 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if ((factory != (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) &&
     ((char)bVar1 == '\0')) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._factories;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this_00,(Il2CppObject *)type,(Il2CppObject *)factory,MethodInfo_Void_set_Item);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$TryBuild
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, System_String_o* type, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b074d0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchComponentRegistry__TryBuild
          (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,System_String_o *type,
          UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  bool_conflict bVar2;
  Il2CppObject *pIStack_40;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGStack_38;
  
  pGStack_38 = view;
  if (DAT_057014e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_057014e3 = '\x01';
  }
  pIStack_40 = (Il2CppObject *)0x0;
  bVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(type,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._factories;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03b07589:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)type,&pIStack_40,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar2 = 0;
    }
    else {
      if (pIStack_40 == (Il2CppObject *)0x0) goto LAB_03b07589;
      bVar2 = (*pIStack_40[1].monitor)
                        (pIStack_40[4].klass,go,node,context,pGStack_38,pIStack_40[2].monitor);
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* __this, const MethodInfo* method);
// 0x3b07590

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057014e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Bui);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_057014e4 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__GisketchComponentFactory);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,comparer,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Bui);
  (__this->fields)._factories =
       (System_Collections_Generic_Dictionary_string__GisketchComponentFactory__o *)__this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchComponentRegistry$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor (const MethodInfo* method);
// 0x3b076b0

void Gisketch_Aottg2UI_Building_GisketchComponentRegistry___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  MethodInfo *in_RSI;
  
  if (DAT_057014e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    DAT_057014e5 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           il2cpp_runtime_glue(TypeInfo_GisketchComponentRegistry);
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry___ctor(__this,in_RSI);
  **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchComponentRegistry + 0xb8),__this);
  return;
}


