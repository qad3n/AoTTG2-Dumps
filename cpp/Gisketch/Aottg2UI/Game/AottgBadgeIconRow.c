// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor (const MethodInfo* method);
// 0x44fa9d0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  intptr_t iVar1;
  Il2CppObject *extraout_RDX;
  intptr_t iVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  undefined4 uVar3;
  undefined4 in_XMM1_Da;
  
  if (g_data_057aecd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgBadgeIconRow");
    g_data_057aecd8 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  iVar2 = 0;
  iVar1 = 0;
  __this_00 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgBadgeIconRow",factory,(MethodInfo *)0x0);
    return;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).method_ptr = iVar2;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,iVar2);
  *(undefined4 *)&(__this_00->fields).invoke_impl = uVar3;
  *(undefined4 *)((long)&(__this_00->fields).invoke_impl + 4) = in_XMM1_Da;
  (__this_00->fields).m_target = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_target,extraout_RDX);
  (__this_00->fields).method = iVar1;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).method,iVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, System_String_o* id, float size, float gap, System_String_o* stateKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x44faa90

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,System_String_o *id,float size,float gap,
               System_String_o *stateKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._size = size;
  (__this->fields)._gap = gap;
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._stateKey,stateKey);
  (__this->fields)._visibleKey = visibleKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._visibleKey,visibleKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44fab10

void Gisketch_Aottg2UI_Game_AottgBadgeIconRow__Build
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_String_o *stateKey;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  uint *puVar3;
  byte bVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_c *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_c *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_03;
  UnityEngine_UI_ContentSizeFitter_o *__this_04;
  Il2CppObject *pIVar8;
  System_Action_string__o *value;
  undefined1 in_CL;
  long extraout_RDX;
  void *extraout_RDX_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_c *__this_05;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **__this_06;
  MethodInfo *in_R8;
  float fVar10;
  float fVar11;
  float in_XMM1_Da;
  
  if (g_data_057aecd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"AottgBadgeIconRow");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057aecd9 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  __this_05 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_c *)0x0) {
    (__this_00->_1).name = (char *)"AottgBadgeIconRow";
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).name);
    (__this_00->_1).namespaze = (char *)(__this->fields)._id;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).namespaze);
    *(System_String_o **)&(__this_00->_1).byval_arg.bits = (__this->fields)._stateKey;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg.bits);
    *(float *)&(__this_00->_1).interopData = (__this->fields)._size;
    *(float *)((long)&(__this_00->_1).interopData + 4) = (__this->fields)._gap;
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_c *)0x0;
    bVar5 = System_String__IsNullOrEmpty((__this->fields)._visibleKey,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      __this_05 = __this_01;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchLength_c *)0x0) goto label_044faced;
      (__this_01->_1).byval_arg.data = (__this->fields)._visibleKey;
      il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg);
    }
    (__this_00->_2).cctor_thread = (size_t)__this_01;
    il2cpp_runtime_helper_022b4080(&(__this_00->_2).cctor_thread);
    in_XMM1_Da = 0.0;
    in_CL = 0;
    in_R8 = (MethodInfo *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,(__this->fields)._gap,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    __this_05 = (Gisketch_Aottg2UI_Data_GisketchLength_c *)&(__this_00->_2).initializationExceptionGCHandle;
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)&(__this_00->_2).initializationExceptionGCHandle =
         pGVar6;
    il2cpp_runtime_helper_022b4080();
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add
                (ui,(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_044faced:
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = pGVar6;
  __this_06 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)__this_05;
  if (g_data_057aecda == '\0') {
    __this_06 = &MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecda = '\x01';
  }
  if (((__this_05 != (Gisketch_Aottg2UI_Data_GisketchLength_c *)0x0) &&
      (pGVar9 = MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR,
      __this_02 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_05,(MethodInfo_255A020 *)MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR),
      __this_06 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)__this_05,
      pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0)) && (extraout_RDX != 0)) {
    fVar11 = (pGVar6->fields).gap;
    fVar10 = 1.0;
    if (1.0 <= fVar11) {
      fVar10 = fVar11;
    }
    fVar11 = (pGVar6->fields).gapRow;
    in_XMM1_Da = 0.0;
    if (0.0 <= fVar11) {
      in_XMM1_Da = fVar11;
    }
    pGVar1 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(extraout_RDX + 0x30);
    stateKey = (pGVar6->fields).alignSelf;
    pGVar2 = pGVar6[1].fields.minWidth;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      bVar4 = 1;
    }
    else {
      __this_06 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)pGVar2[1].klass;
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_06,(MethodInfo *)0x0);
      bVar4 = (byte)bVar5;
    }
    if (__this_02 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                (__this_02,fVar10,in_XMM1_Da,pGVar1,stateKey,(uint)bVar4,in_R8);
      return;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecdb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    g_data_057aecdb = '\x01';
  }
  fVar10 = 1.0;
  if (1.0 <= fVar11) {
    fVar10 = fVar11;
  }
  *(float *)&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).byval_arg.data = fVar10;
  puVar3 = &(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).byval_arg.bits;
  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)
   &(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).byval_arg.bits = pGVar9;
  il2cpp_runtime_helper_022b4080(puVar3,pGVar9);
  (((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).this_arg.data = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).this_arg);
  *(undefined1 *)&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).element_class = in_CL;
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
     ((__this_03 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup),
      __this_03 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0 &&
      ((pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
       , pUVar7 == (UnityEngine_GameObject_o *)0x0 ||
       (__this_03 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup),
       __this_03 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)))))) {
label_044fb0b7:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_03,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(__this_03,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(__this_03,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(__this_03,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight(__this_03,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_03,in_XMM1_Da,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
     ((__this_04 = (UnityEngine_UI_ContentSizeFitter_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter),
      __this_04 == (UnityEngine_UI_ContentSizeFitter_o *)0x0 &&
      ((pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
       , pUVar7 == (UnityEngine_GameObject_o *)0x0 ||
       (__this_04 = (UnityEngine_UI_ContentSizeFitter_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter),
       __this_04 == (UnityEngine_UI_ContentSizeFitter_o *)0x0)))))) goto label_044fb0b7;
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_04,2,(MethodInfo *)0x0);
  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_04,2,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
     ((pIVar8 = UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement),
      pIVar8 == (Il2CppObject *)0x0 &&
      ((pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
       , pUVar7 == (UnityEngine_GameObject_o *)0x0 ||
       (pIVar8 = UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_LayoutElement_AddComponent_LayoutElement),
       pIVar8 == (Il2CppObject *)0x0)))))) goto label_044fb0b7;
  value = (System_Action_string__o *)pIVar8->klass->vtable[0x26].method;
  (*pIVar8->klass->vtable[0x26].methodPtr)
            (*(undefined4 *)&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).byval_arg.data,
             pIVar8);
  *(undefined1 *)((long)&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).element_class + 1) = 1;
  if (g_data_057aece5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece5 = '\x01';
    if (*(undefined1 *)((long)&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).element_class + 1)
        == '\0') goto label_044fb0a3;
  }
  if ((*(undefined1 *)((long)&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).element_class + 2)
       == '\0') &&
     (pGVar1 = *(Gisketch_Aottg2UI_State_GisketchUIState_o **)puVar3,
     pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar1,value,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(((Gisketch_Aottg2UI_Data_GisketchLength_c *)__this_06)->_1).element_class + 2) = 1
    ;
  }
label_044fb0a3:
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh
            ((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_06,(MethodInfo *)value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRow$$BuildRow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x44fad00

bool_conflict
Gisketch_Aottg2UI_Game_AottgBadgeIconRow__BuildRow
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o **ppGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_String_o *stateKey;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  byte bVar4;
  bool_conflict extraout_EAX;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar6;
  undefined8 extraout_RAX;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar8;
  UnityEngine_UI_ContentSizeFitter_o *__this_00;
  Il2CppObject *pIVar9;
  System_Action_string__o *value;
  undefined8 uVar10;
  undefined1 uVar11;
  System_String_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **__this_01;
  float fVar13;
  float fVar14;
  float in_XMM1_Da;
  bool_conflict bVar5;
  
  uVar11 = SUB81(view,0);
  pGVar12 = node;
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)go;
  if (g_data_057aecda == '\0') {
    __this_01 = &MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecda = '\x01';
  }
  if (((go != (UnityEngine_GameObject_o *)0x0) &&
      (pGVar12 = MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR,
      pGVar6 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
               UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadgeIconRowR),
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)go,
      node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) {
    fVar14 = (float)(node->fields).active;
    fVar13 = 1.0;
    if (1.0 <= fVar14) {
      fVar13 = fVar14;
    }
    fVar14 = (float)(node->fields).enabled.fields.hasValue;
    in_XMM1_Da = 0.0;
    if (0.0 <= fVar14) {
      in_XMM1_Da = fVar14;
    }
    pGVar2 = (context->fields).State;
    stateKey = (node->fields).textKey;
    pGVar3 = (node->fields).contentLayout;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      bVar4 = 1;
    }
    else {
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(pGVar3->fields).alignItems;
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_01,(MethodInfo *)0x0);
      bVar4 = (byte)bVar5;
    }
    if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                (pGVar6,fVar13,in_XMM1_Da,pGVar2,stateKey,(uint)bVar4,method);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecdb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    g_data_057aecdb = '\x01';
  }
  fVar13 = 1.0;
  if (1.0 <= fVar14) {
    fVar13 = fVar14;
  }
  (((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._size = fVar13;
  ppGVar1 = &(((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._state;
  (((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._state =
       (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar12;
  il2cpp_runtime_helper_022b4080(ppGVar1,pGVar12);
  (((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._stateKey = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._stateKey);
  *(undefined1 *)&(((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._controlsActive =
       uVar11;
  pGVar6 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01;
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
     ((__this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup),
      __this == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0 &&
      ((pGVar6 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01,
       pGVar8 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pGVar8 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0 ||
       (__this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                 UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pGVar8,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup)
       , pGVar6 = pGVar8, __this == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)))))) {
label_044fb0b7:
    uVar10 = il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)
           CONCAT71((int7)((ulong)uVar10 >> 8),*(undefined1 *)((long)&(pGVar6->fields)._controlsActive + 3));
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment((UnityEngine_UI_LayoutGroup_o *)__this,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(__this,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(__this,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(__this,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight(__this,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this,in_XMM1_Da,(MethodInfo *)0x0);
  pGVar6 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01;
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
     ((__this_00 = (UnityEngine_UI_ContentSizeFitter_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter),
      __this_00 == (UnityEngine_UI_ContentSizeFitter_o *)0x0 &&
      ((pGVar6 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01,
       pGVar8 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pGVar8 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0 ||
       (__this_00 = (UnityEngine_UI_ContentSizeFitter_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar8,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter), pGVar6 = pGVar8,
       __this_00 == (UnityEngine_UI_ContentSizeFitter_o *)0x0)))))) goto label_044fb0b7;
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_00,2,(MethodInfo *)0x0);
  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_00,2,(MethodInfo *)0x0);
  pGVar6 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01;
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
     ((pIVar9 = UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement),
      pIVar9 == (Il2CppObject *)0x0 &&
      ((pGVar6 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01,
       pGVar8 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pGVar8 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0 ||
       (pIVar9 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pGVar8,MethodInfo_LayoutElement_AddComponent_LayoutElement)
       , pGVar6 = pGVar8, pIVar9 == (Il2CppObject *)0x0)))))) goto label_044fb0b7;
  value = (System_Action_string__o *)pIVar9->klass->vtable[0x26].method;
  (*pIVar9->klass->vtable[0x26].methodPtr)
            ((((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._size,pIVar9);
  *(undefined1 *)
   ((long)&(((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._controlsActive + 1) = 1
  ;
  if (g_data_057aece5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece5 = '\x01';
    if (*(char *)((long)&(((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields).
                         _controlsActive + 1) == '\0') goto label_044fb0a3;
  }
  if ((*(char *)((long)&(((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields).
                        _controlsActive + 2) == '\0') &&
     (pGVar2 = *ppGVar1, pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(pGVar2,value,(MethodInfo *)0x0);
    *(undefined1 *)
     ((long)&(((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01)->fields)._controlsActive + 2) =
         1;
  }
label_044fb0a3:
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh
            ((Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)__this_01,(MethodInfo *)value);
  return extraout_EAX;
}


