// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHover.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor (const MethodInfo* method);
// 0x41fd0f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory (const MethodInfo* method);
// 0x41fd100

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (DAT_05704fc4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileHover);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&"PublicProfileHover");
    DAT_05704fc4 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgPublicProfileHover + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgPublicProfileHover + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = **(char **)(TypeInfo_AottgPublicProfileHover + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_AottgPublicProfileHover + 0xb8);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"PublicProfileHover",factory,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined1 **)(TypeInfo_AottgPublicProfileHover + 0xb8) = 1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x41fd230

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o *__this,System_String_o *id,
               System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._accountId = accountId;
  il2cpp_runtime_glue(&(__this->fields)._accountId,accountId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41fd270

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *accountId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704fc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileHover);
    DAT_05704fc5 = '\x01';
    method = extraout_RDX;
  }
  id = (__this->fields)._id;
  accountId = (__this->fields)._accountId;
  if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
    il2cpp_init_class();
    method = extraout_RDX_00;
  }
  node = Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node(id,accountId,method);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Add(ui,node,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node (System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x41fd2f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node
          (System_String_o *id,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (DAT_05704fc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileHover);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"PublicProfileHover");
    DAT_05704fc6 = '\x01';
  }
  method_00 = TypeInfo_AottgPublicProfileHover;
  if (*(int *)((long)&TypeInfo_AottgPublicProfileHover[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(method_00);
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "PublicProfileHover";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).text = accountId;
    il2cpp_runtime_glue(&(__this->fields).text,accountId);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
    il2cpp_runtime_glue(&(__this->fields).search,pGVar1);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x41fd480

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this;
  ulong uVar4;
  
  if (DAT_05704fc7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_Aott);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704fc7 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_LayoutElement_AddComponent_LayoutElement);
    if (pIVar2 != (Il2CppObject *)0x0) {
      (*pIVar2->klass->vtable[0x1c].methodPtr)(pIVar2,1,pIVar2->klass->vtable[0x1c].method);
      pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        uVar4 = (ulong)uVar1;
        if ((char)uVar1 == '\0') {
LAB_041fd5a0:
          return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
        }
        pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            __this = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
            if (__this != (UnityEngine_GameObject_o *)0x0) {
              pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_Aott);
              if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
                 (pIVar2 != (Il2CppObject *)0x0)) {
                pIVar2[2].klass = (Il2CppClass *)(node->fields).text;
                uVar4 = il2cpp_runtime_glue(pIVar2 + 2);
                goto LAB_041fd5a0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


