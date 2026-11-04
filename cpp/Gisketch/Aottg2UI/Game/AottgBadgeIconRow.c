// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor (const MethodInfo* method);
// 0x181df1450

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow_BuildRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgBadgeIconRow");
    Il2CppMethodInitialized_184344b40 = '\x01';
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
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgBadgeIconRow",__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, System_String_o* id, float size, float gap, System_String_o* stateKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x181df1510

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,System_String_o *id,float size,float gap,
               System_String_o *stateKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._stateKey = stateKey;
  (__this->fields)._size = size;
  (__this->fields)._gap = gap;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey,stateKey);
  (__this->fields)._visibleKey = visibleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleKey,visibleKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181df1210
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df1307: mov edi, r14d
// asm:   0x181df130a: jmp 0x181df133f

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"AottgBadgeIconRow");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184344b41 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgBadgeIconRow";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"AottgBadgeIconRow");
    pSVar1 = (__this->fields)._id;
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar1);
    pSVar1 = (__this->fields)._stateKey;
    (__this_00->fields).textKey = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey,pSVar1);
    (__this_00->fields).referenceWidth = (__this->fields)._size;
    (__this_00->fields).referenceHeight = (__this->fields)._gap;
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._visibleKey,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0;
    if (!bVar2) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_181df144a;
      pSVar1 = (__this->fields)._visibleKey;
      (__this_01->fields).visible = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible,pSVar1);
    }
    (__this_00->fields).bind = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bind,__this_01);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Row",(System_String_o *)0x0,"Center",
                       (System_String_o *)0x0,(System_String_o *)0x0,(__this->fields)._gap,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_181df144a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$BuildRow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181df1100

bool Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  System_String_o *stateKey;
  bool controlsActive;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this;
  float size;
  float fVar2;
  
  if (Il2CppMethodInitialized_184344b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
    Il2CppMethodInitialized_184344b42 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      fVar2 = (node->fields).referenceWidth;
      fVar1 = (node->fields).referenceHeight;
      if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
        state = (context->fields).State;
        stateKey = (node->fields).textKey;
        if ((node->fields).bind == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          controlsActive = true;
        }
        else {
          controlsActive =
               System_String__IsNullOrEmpty((((node->fields).bind)->fields).visible,(MethodInfo *)0x0);
        }
        if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
          size = 1.0;
          if (1.0 <= fVar2) {
            size = fVar2;
          }
          fVar2 = 0.0;
          if (0.0 <= fVar1) {
            fVar2 = fVar1;
          }
          Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                    (__this,size,fVar2,state,stateKey,controlsActive,(MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


