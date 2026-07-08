// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRow.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor (const MethodInfo* method);
// 0x41c9910

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (DAT_05704e07 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildRow);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&"AottgBadgeIconRow");
    DAT_05704e07 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgBadgeIconRow",factory,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, System_String_o* id, float size, float gap, System_String_o* stateKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x41c99d0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,System_String_o *id,float size,
               float gap,System_String_o *stateKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._size = size;
  (__this->fields)._gap = gap;
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_glue(&(__this->fields)._stateKey,stateKey);
  (__this->fields)._visibleKey = visibleKey;
  il2cpp_runtime_glue(&(__this->fields)._visibleKey,visibleKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41c9a50

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704e08 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"AottgBadgeIconRow");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    DAT_05704e08 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgBadgeIconRow";
    il2cpp_runtime_glue(&__this_00->fields);
    (__this_00->fields).id = (__this->fields)._id;
    il2cpp_runtime_glue(&(__this_00->fields).id);
    (__this_00->fields).textKey = (__this->fields)._stateKey;
    il2cpp_runtime_glue(&(__this_00->fields).textKey);
    (__this_00->fields).active = (bool_conflict)(__this->fields)._size;
    (__this_00->fields).enabled.fields.hasValue = (bool_conflict)(__this->fields)._gap;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._visibleKey,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition)
      ;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto LAB_041c9c2d;
      (pGVar2->fields).alignItems = (__this->fields)._visibleKey;
      il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
    }
    (__this_00->fields).contentLayout = pGVar2;
    il2cpp_runtime_glue(&(__this_00->fields).contentLayout);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,(__this->fields)._gap,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
    il2cpp_runtime_glue(&(__this_00->fields).search,pGVar2);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_041c9c2d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$BuildRow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x41c9c40

bool_conflict
Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  System_String_o *stateKey;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  byte bVar3;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this;
  undefined8 extraout_RAX;
  float size;
  float gap;
  bool_conflict bVar4;
  
  if (DAT_05704e09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadge);
    DAT_05704e09 = '\x01';
  }
  if (((go != (UnityEngine_GameObject_o *)0x0) &&
      (__this = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadge),
      node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) {
    fVar1 = (float)(node->fields).active;
    size = 1.0;
    if (1.0 <= fVar1) {
      size = fVar1;
    }
    fVar1 = (float)(node->fields).enabled.fields.hasValue;
    gap = 0.0;
    if (0.0 <= fVar1) {
      gap = fVar1;
    }
    state = (context->fields).State;
    stateKey = (node->fields).textKey;
    pGVar2 = (node->fields).contentLayout;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      bVar3 = 1;
    }
    else {
      bVar4 = System_String__IsNullOrEmpty((pGVar2->fields).alignItems,(MethodInfo *)0x0);
      bVar3 = (byte)bVar4;
    }
    if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                (__this,size,gap,state,stateKey,(uint)bVar3,method);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


