// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor (const MethodInfo* method);
// 0x452ea20

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory (const MethodInfo* method);
// 0x452ea30

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  intptr_t extraout_RDX;
  intptr_t iVar3;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (g_data_057aee9f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileHover);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"PublicProfileHover");
    g_data_057aee9f = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgPublicProfileHover + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgPublicProfileHover + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_AottgPublicProfileHover + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_AottgPublicProfileHover + 0xb8);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  iVar3 = 0;
  __this_00 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).method_ptr = iVar3;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,iVar3);
    (__this_00->fields).invoke_impl = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).invoke_impl,extraout_RDX);
    return;
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"PublicProfileHover",factory,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined1 **)(TypeInfo_AottgPublicProfileHover + 0xb8) = 1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x452eb60

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o *__this,System_String_o *id,
               System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._accountId = accountId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._accountId,accountId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x452eba0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_String_o *accountId;
  MethodInfo_255A020 *pMVar7;
  MethodInfo_255A020 *pMVar8;
  System_String_o *id;
  MethodInfo *method_00;
  long *plVar9;
  
  if (g_data_057aeea0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileHover);
    g_data_057aeea0 = '\x01';
    method = extraout_RDX;
  }
  id = (__this->fields)._id;
  accountId = (__this->fields)._accountId;
  if (*(int *)((long)&TypeInfo_AottgPublicProfileHover[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node(id,accountId,method);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeea1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileHover);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"PublicProfileHover");
      g_data_057aeea1 = '\x01';
    }
    method_00 = TypeInfo_AottgPublicProfileHover;
    if (*(int *)((long)&TypeInfo_AottgPublicProfileHover[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(method_00);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pMVar7 = (MethodInfo_255A020 *)0x0;
    pGVar2 = pGVar3;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pMVar8 = pMVar7;
      plVar9 = (long *)pGVar2;
      if (g_data_057aeea2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP);
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
        plVar9 = &TypeInfo_Object;
        il2cpp_runtime_helper_023445d0();
        g_data_057aeea2 = '\x01';
      }
      if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
         (pMVar8 = MethodInfo_LayoutElement_AddComponent_LayoutElement, plVar9 = (long *)pGVar2,
         pIVar5 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pGVar2,MethodInfo_LayoutElement_AddComponent_LayoutElement), pIVar5 != (Il2CppObject *)0x0))
      {
        (*pIVar5->klass->vtable[0x1c].methodPtr)(pIVar5,1,pIVar5->klass->vtable[0x1c].method);
        pMVar8 = (MethodInfo_255A020 *)0x0;
        plVar9 = (long *)pGVar2;
        pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar2,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = UnityEngine_Transform__get_parent(pUVar6,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return;
          }
          pMVar8 = (MethodInfo_255A020 *)0x0;
          pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar2,(MethodInfo *)0x0)
          ;
          plVar9 = (long *)pGVar2;
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            pMVar8 = (MethodInfo_255A020 *)0x0;
            pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                     UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar3,(MethodInfo *)0x0);
            plVar9 = (long *)pGVar3;
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              pMVar8 = (MethodInfo_255A020 *)0x0;
              pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pGVar2,(MethodInfo *)0x0);
              plVar9 = (long *)pGVar2;
              if (((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
                  (pMVar8 = MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP,
                  pIVar5 = UnityEngine_GameObject__AddComponent_object_
                                     ((UnityEngine_GameObject_o *)pGVar3,MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP),
                  plVar9 = (long *)pGVar3, pMVar7 != (MethodInfo_255A020 *)0x0)) &&
                 (pIVar5 != (Il2CppObject *)0x0)) {
                pIVar5[2].klass = (Il2CppClass *)pMVar7->klass;
                il2cpp_runtime_helper_022b4080(pIVar5 + 2);
                return;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar9)->fields).text = (System_String_o *)pMVar8;
      il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar9)->fields).text);
      return;
    }
    (pGVar3->fields).type = "PublicProfileHover";
    il2cpp_runtime_helper_022b4080(&pGVar3->fields);
    (pGVar3->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,id);
    (pGVar3->fields).text = accountId;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).text,accountId);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar4);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Add(ui,pGVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node (System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x452ec20

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node
          (System_String_o *id,System_String_o *accountId,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  undefined4 extraout_var;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  undefined8 uVar7;
  MethodInfo_255A020 *pMVar8;
  MethodInfo_255A020 *pMVar9;
  MethodInfo *method_00;
  long *plVar10;
  
  if (g_data_057aeea1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileHover);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"PublicProfileHover");
    g_data_057aeea1 = '\x01';
  }
  method_00 = TypeInfo_AottgPublicProfileHover;
  if (*(int *)((long)&TypeInfo_AottgPublicProfileHover[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(method_00);
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pMVar8 = (MethodInfo_255A020 *)0x0;
  pGVar6 = pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "PublicProfileHover";
    il2cpp_runtime_helper_022b4080(&pGVar2->fields);
    (pGVar2->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,id);
    (pGVar2->fields).text = accountId;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).text,accountId);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
    return pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar8;
  plVar10 = (long *)pGVar6;
  if (g_data_057aeea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    plVar10 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeea2 = '\x01';
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pMVar9 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
    plVar10 = (long *)pGVar6;
    pIVar4 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pGVar6,MethodInfo_LayoutElement_AddComponent_LayoutElement);
    if (pIVar4 != (Il2CppObject *)0x0) {
      (*pIVar4->klass->vtable[0x1c].methodPtr)(pIVar4,1,pIVar4->klass->vtable[0x1c].method);
      pMVar9 = (MethodInfo_255A020 *)0x0;
      plVar10 = (long *)pGVar6;
      pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        uVar7 = CONCAT44(extraout_var,bVar1);
        if ((char)bVar1 == '\0') {
label_0452eed0:
          return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT71((int7)((ulong)uVar7 >> 8),1);
        }
        pMVar9 = (MethodInfo_255A020 *)0x0;
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
        plVar10 = (long *)pGVar6;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pMVar9 = (MethodInfo_255A020 *)0x0;
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                   UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar2,(MethodInfo *)0x0);
          plVar10 = (long *)pGVar2;
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            pMVar9 = (MethodInfo_255A020 *)0x0;
            pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pGVar6,(MethodInfo *)0x0);
            plVar10 = (long *)pGVar6;
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              pMVar9 = MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP;
              pIVar4 = UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)pGVar2,MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP);
              plVar10 = (long *)pGVar2;
              if ((pMVar8 != (MethodInfo_255A020 *)0x0) && (pIVar4 != (Il2CppObject *)0x0)) {
                pIVar4[2].klass = (Il2CppClass *)pMVar8->klass;
                uVar7 = il2cpp_runtime_helper_022b4080(pIVar4 + 2);
                goto label_0452eed0;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar10)->fields).text = (System_String_o *)pMVar9;
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
           il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar10)->fields).text);
  return pGVar6;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x452edb0

bool_conflict
Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this;
  ulong uVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  long *plVar7;
  
  pGVar6 = node;
  plVar7 = (long *)go;
  if (g_data_057aeea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    plVar7 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeea2 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGVar6 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
    plVar7 = (long *)go;
    pIVar3 = UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
    if (pIVar3 != (Il2CppObject *)0x0) {
      (*pIVar3->klass->vtable[0x1c].methodPtr)(pIVar3,1,pIVar3->klass->vtable[0x1c].method);
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      plVar7 = (long *)go;
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        uVar5 = (ulong)uVar1;
        if ((char)uVar1 == '\0') {
label_0452eed0:
          return (bool_conflict)CONCAT71((int7)(uVar5 >> 8),1);
        }
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        plVar7 = (long *)go;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          __this = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
          plVar7 = (long *)pUVar4;
          if (__this != (UnityEngine_Transform_o *)0x0) {
            pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
            pUVar4 = (UnityEngine_Transform_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            plVar7 = (long *)__this;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pGVar6 = MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP;
              pIVar3 = UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)pUVar4,(MethodInfo_255A020 *)MethodInfo_AottgPublicProfileHoverRuntime_AddComponent_AottgPublicP);
              plVar7 = (long *)pUVar4;
              if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
                 (pIVar3 != (Il2CppObject *)0x0)) {
                pIVar3[2].klass = (Il2CppClass *)(node->fields).text;
                uVar5 = il2cpp_runtime_helper_022b4080(pIVar3 + 2);
                goto label_0452eed0;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ((UnityEngine_Transform_o *)((long)plVar7 + 0x18))->monitor = pGVar6;
  bVar2 = il2cpp_runtime_helper_022b4080(&((UnityEngine_Transform_o *)((long)plVar7 + 0x18))->monitor);
  return bVar2;
}


