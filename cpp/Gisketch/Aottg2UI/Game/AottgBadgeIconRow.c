// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor (const MethodInfo* method);
// 0x58d6ed0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_075454a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow_BuildRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgBadgeIconRow");
    Il2CppMethodInitialized_075454a9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow_BuildRow,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgBadgeIconRow",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, System_String_o* id, float size, float gap, System_String_o* stateKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x58d6f90

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,System_String_o *id,float size,float gap,
               System_String_o *stateKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._size = size;
  (__this->fields)._gap = gap;
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey);
  (__this->fields)._visibleKey = visibleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58d7010

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_075454aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgBadgeIconRow");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075454aa = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgBadgeIconRow";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).id = (__this->fields)._id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    (__this_00->fields).textKey = (__this->fields)._stateKey;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey);
    fVar1 = (__this->fields)._gap;
    (__this_00->fields).referenceWidth = (__this->fields)._size;
    (__this_00->fields).referenceHeight = fVar1;
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._visibleKey,(MethodInfo *)0x0);
    if (!bVar2) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_058d71ed;
      (__this_01->fields).visible = (__this->fields)._visibleKey;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible);
    }
    (__this_00->fields).bind = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,(__this->fields)._gap,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_058d71ed:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$BuildRow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x58d7200

bool Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  System_String_o *stateKey;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  bool controlsActive;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this;
  float fVar3;
  float gap;
  
  if (Il2CppMethodInitialized_075454ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
    Il2CppMethodInitialized_075454ab = '\x01';
  }
  if (((go != (UnityEngine_GameObject_o *)0x0) &&
      (__this = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime),
      node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) {
    fVar1 = (node->fields).referenceWidth;
    fVar3 = (node->fields).referenceHeight;
    state = (context->fields).State;
    stateKey = (node->fields).textKey;
    pGVar2 = (node->fields).bind;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      controlsActive = true;
    }
    else {
      controlsActive = System_String__IsNullOrEmpty((pGVar2->fields).visible,(MethodInfo *)0x0);
    }
    if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
      gap = 0.0;
      if (0.0 <= fVar3) {
        gap = fVar3;
      }
      fVar3 = 1.0;
      if (1.0 <= fVar1) {
        fVar3 = fVar1;
      }
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                (__this,fVar3,gap,state,stateKey,controlsActive,method);
      return true;
    }
  }
  ThrowNullReferenceException();
}


