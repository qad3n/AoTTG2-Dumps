// Type: UI.SettingsAbilityPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsAbilityPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsAbilityPanel.cs
// --------------------------------

// UI.SettingsAbilityPanel.<>c$$.cctor
// il2cpp: void UI_SettingsAbilityPanel___c___cctor (const MethodInfo* method);
// 0x4442940

void UI_SettingsAbilityPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae6e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae6e3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.SettingsAbilityPanel.<>c$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___c___ctor (UI_SettingsAbilityPanel___c_o* __this, const MethodInfo* method);
// 0x44429b0

void UI_SettingsAbilityPanel___c___ctor(UI_SettingsAbilityPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel.<>c$$<Setup>b__7_0
// il2cpp: bool UI_SettingsAbilityPanel___c___Setup_b__7_0 (UI_SettingsAbilityPanel___c_o* __this, const MethodInfo* method);
// 0x44429c0

bool_conflict
UI_SettingsAbilityPanel___c___Setup_b__7_0(UI_SettingsAbilityPanel___c_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel___c_o *pUVar1;
  long lVar2;
  long lVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  undefined8 uVar4;
  
  if (g_data_057ae6e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this = (UI_SettingsAbilityPanel___c_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6e4 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if ((((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) && (*(long *)(lVar2 + 0x30) != 0)) &&
     ((method = *(MethodInfo **)(lVar2 + 0x38), method != (MethodInfo *)0x0 &&
      (lVar3 = *(long *)(lVar2 + 0x40), lVar3 != 0)))) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)lVar3 >> 8),
                    *(int *)(*(long *)(lVar2 + 0x28) + 0x14) + *(int *)(*(long *)(lVar2 + 0x30) + 0x14) +
                    *(int *)((long)&method->invoker_method + 4) + *(int *)(lVar3 + 0x14) < 0x15);
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this[1].monitor != (void *)0x0) &&
     (pUVar1 = __this + 1, __this = (UI_SettingsAbilityPanel___c_o *)0x0,
     pUVar1->klass != (UI_SettingsAbilityPanel___c_c *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels((UI_SettingsAbilityPanel_o *)pUVar1->klass,method);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this[1].monitor != (void *)0x0) &&
     (pUVar1 = __this + 1, __this = (UI_SettingsAbilityPanel___c_o *)0x0,
     pUVar1->klass != (UI_SettingsAbilityPanel___c_c *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels((UI_SettingsAbilityPanel_o *)pUVar1->klass,method);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this[1].monitor != (void *)0x0) &&
     (pUVar1 = __this + 1, __this = (UI_SettingsAbilityPanel___c_o *)0x0,
     pUVar1->klass != (UI_SettingsAbilityPanel___c_c *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels((UI_SettingsAbilityPanel_o *)pUVar1->klass,method);
    return extraout_EAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this[1].monitor != (void *)0x0) && (__this[1].klass != (UI_SettingsAbilityPanel___c_c *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels((UI_SettingsAbilityPanel_o *)__this[1].klass,method);
    return extraout_EAX_02;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___ctor (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x4441b70

void UI_SettingsAbilityPanel___c__DisplayClass7_0___ctor
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__1
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__1 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x4442a40

void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__1
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *pUVar1;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, __this = (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *)0x0,
     pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, __this = (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *)0x0,
     pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, __this = (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *)0x0,
     pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__2
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__2 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x4442a60

void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__2
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *pUVar1;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, __this = (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *)0x0,
     pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, __this = (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *)0x0,
     pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__3
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__3 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x4442a80

void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__3
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *pUVar1;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, __this = (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *)0x0,
     pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (pUVar1 = (__this->fields).__4__this, pUVar1 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(pUVar1,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__4
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__4 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x4442aa0

void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__4
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SettingsAbilityPanel$$get_PanelAlignment
// il2cpp: int32_t UI_SettingsAbilityPanel__get_PanelAlignment (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x4441160

int32_t UI_SettingsAbilityPanel__get_PanelAlignment(UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.SettingsAbilityPanel$$Setup
// il2cpp: void UI_SettingsAbilityPanel__Setup (UI_SettingsAbilityPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4441170

void UI_SettingsAbilityPanel__Setup
               (UI_SettingsAbilityPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UnityEngine_Transform_o *pUVar6;
  System_String_c *pSVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  code *vtableDispatch;
  int32_t iVar11;
  bool_conflict bVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  Il2CppClass *pIVar15;
  UnityEngine_GameObject_o *pUVar16;
  Il2CppObject *pIVar17;
  System_Func_bool__o *validation;
  UnityEngine_Events_UnityAction_o *pUVar18;
  Il2CppClass *pIVar19;
  System_String_o *pSVar20;
  MethodInfo *pMVar21;
  undefined8 extraout_RDX;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  MethodInfo *in_R9;
  MethodInfo *method_00;
  Settings_BaseSetting_o *pSVar24;
  undefined8 uStack_48;
  Il2CppClass *pIStack_40;
  System_String_o *pSStack_38;
  
  if (cRam00000000057ae6df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Setup_b__7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"UseOldEffect");
    il2cpp_runtime_helper_023445d0(&"UnusedPoints");
    il2cpp_runtime_helper_023445d0(&"k");
    il2cpp_runtime_helper_023445d0(&"BombCooldown");
    il2cpp_runtime_helper_023445d0(&"BombRadius");
    il2cpp_runtime_helper_023445d0(&"BombColor");
    il2cpp_runtime_helper_023445d0(&"BombSpeed");
    il2cpp_runtime_helper_023445d0(&"ShowBombColors");
    il2cpp_runtime_helper_023445d0(&"BombCollision");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"CursorCooldown");
    il2cpp_runtime_helper_023445d0(&"m");
    il2cpp_runtime_helper_023445d0(&"BombRange");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"s");
    cRam00000000057ae6df = '\x01';
  }
  pSVar13 = (System_String_o *)il2cpp_runtime_helper_023052d0(_DAT_05583110);
  System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
  if (pSVar13 != (System_String_o *)0x0) {
    *(UI_SettingsAbilityPanel_o **)&(pSVar13->fields)._stringLength = __this;
    il2cpp_runtime_helper_022b4080(&pSVar13->fields,__this);
    UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
    pIVar23 = "Ability";
    if (parent != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
      if (((parent->klass->_2).naturalAligment < bVar1) ||
         ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsPopup)) goto code_r0x04441b64;
      pSVar20 = (System_String_o *)parent[1].fields._currentCategoryPanel;
      uStack_48 = pSVar13 + 1;
      pSVar13[1].klass = *(System_String_c **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
      il2cpp_runtime_helper_022b4080();
      pSVar14 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)pIVar15,0x18,200.0,20.0,pSVar14,(MethodInfo *)0x0);
      parent = (UI_BasePanel_o *)pIVar15;
      if (pSVar13[1].klass != (System_String_c *)0x0) {
        pUVar6 = (__this->fields).DoublePanelRight;
        pIVar22 = ((pSVar13[1].klass)->_1).castClass;
        pIStack_40 = (Il2CppClass *)__this;
        pSStack_38 = pSVar13;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = UI_UIManager__GetLocale
                            (pSVar20,(System_String_o *)pIVar23,_DAT_055c5380,(System_String_o *)"",
                             (System_String_o *)"",in_R9);
        pMVar21 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar6,(UI_ElementStyle_o *)pIVar15,(Settings_BaseSetting_o *)pIVar22,pSVar13,
                   (System_String_o *)"",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (MethodInfo *)0x0);
        pIVar22 = pIStack_40;
        pSVar13 = uStack_48;
        if (uStack_48->klass != (System_String_c *)0x0) {
          pUVar6 = (pIStack_40->_1).this_arg.data;
          pIVar19 = (uStack_48->klass->_1).declaringType;
          pSVar14 = UI_UIManager__GetLocale
                              (pSVar20,(System_String_o *)pIVar23,_DAT_055d2a08,
                               (System_String_o *)"",(System_String_o *)"",pMVar21);
          pMVar21 = (MethodInfo *)0x0;
          UI_ElementFactory__CreateToggleSetting
                    (pUVar6,(UI_ElementStyle_o *)pIVar15,(Settings_BaseSetting_o *)pIVar19,pSVar14,
                     (System_String_o *)"",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (MethodInfo *)0x0);
          pSVar7 = pSVar13->klass;
          if (pSVar7 != (System_String_c *)0x0) {
            pUVar6 = (pIVar22->_1).this_arg.data;
            pIVar22 = (pSVar7->_1).parent;
            pSVar14 = UI_UIManager__GetLocale
                                (pSVar20,(System_String_o *)pIVar23,_DAT_055d7c90,
                                 (System_String_o *)"",(System_String_o *)"",pMVar21);
            pMVar21 = (MethodInfo *)0x0;
            UI_ElementFactory__CreateToggleSetting
                      (pUVar6,(UI_ElementStyle_o *)pIVar15,(Settings_BaseSetting_o *)pIVar22,pSVar14,
                       (System_String_o *)"",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (MethodInfo *)0x0);
            pIVar22 = pIStack_40;
            pSVar7 = pSVar13->klass;
            if (pSVar7 != (System_String_c *)0x0) {
              pUVar6 = (pIStack_40->_1).this_arg.data;
              pSVar24 = (pSVar7->_1).generic_class;
              pSVar13 = UI_UIManager__GetLocale
                                  (pSVar20,(System_String_o *)pIVar23,_DAT_055c29d8,
                                   (System_String_o *)"",(System_String_o *)"",pMVar21);
              method_00 = (MethodInfo *)0x0;
              pMVar21 = (MethodInfo *)0x0;
              UI_ElementFactory__CreateToggleSetting
                        (pUVar6,(UI_ElementStyle_o *)pIVar15,pSVar24,pSVar13,(System_String_o *)"",
                         30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              pUVar6 = *(UnityEngine_Transform_o **)&(pIVar22->_1).byval_arg.bits;
              pSVar13 = UI_UIManager__GetLocale
                                  (pSVar20,(System_String_o *)pIVar23,"UnusedPoints",
                                   (System_String_o *)"",(System_String_o *)"",pMVar21);
              pUVar16 = UI_ElementFactory__CreateDefaultLabel
                                  (pUVar6,(UI_ElementStyle_o *)pIVar15,pSVar13,0,4,(MethodInfo *)0x0);
              parent = (UI_BasePanel_o *)pIVar23;
              if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
                pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_Text_GetComponent_Text);
                (pIVar22->_1).typeMetadataHandle = pIVar17;
                il2cpp_runtime_helper_022b4080(&(pIVar22->_1).typeMetadataHandle);
                pSVar13 = pSStack_38;
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                validation = *(System_Func_bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
                if (validation == (System_Func_bool__o *)0x0) {
                  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  validation = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
                  System_Func_bool____ctor();
                  lVar8 = *(long *)(TypeInfo_c + 0xb8);
                  *(System_Func_bool__o **)(lVar8 + 8) = validation;
                  il2cpp_runtime_helper_022b4080(lVar8 + 8);
                }
                if ((uStack_48->klass != (System_String_c *)0x0) &&
                   (pSVar24 = *(Settings_BaseSetting_o **)&(uStack_48->klass->_1).byval_arg.bits,
                   pSVar24 != (Settings_BaseSetting_o *)0x0)) {
                  parent = *(UI_BasePanel_o **)&(pIVar22->_1).byval_arg.bits;
                  pSVar14 = UI_SettingsAbilityPanel__GetBombStatLabel
                                      ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar20,(System_String_o *)pIVar23
                                       ,(System_String_o *)"BombRadius",
                                       *(int32_t *)((long)&pSVar24[1].klass + 4),5.4,7.4,7.0,"m",1.0,
                                       method_00);
                  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  pUVar16 = UI_ElementFactory__CreateIncrementSetting
                                      ((UnityEngine_Transform_o *)parent,(UI_ElementStyle_o *)pIVar15,pSVar24,
                                       pSVar14,(System_String_o *)"",33.0,30.0,
                                       (System_String_array *)0x0,pUVar18,validation,(MethodInfo *)0x0);
                  (pIVar22->_1).interopData = pUVar16;
                  il2cpp_runtime_helper_022b4080(&(pIVar22->_1).interopData);
                  if ((pSVar13[1].klass != (System_String_c *)0x0) &&
                     (parent = ((pSVar13[1].klass)->_1).this_arg.data,
                     (Il2CppClass *)parent != (Il2CppClass *)0x0)) {
                    pUVar6 = *(UnityEngine_Transform_o **)&(pIVar22->_1).byval_arg.bits;
                    pSVar14 = UI_SettingsAbilityPanel__GetBombStatLabel
                                        ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar20,
                                         (System_String_o *)pIVar23,(System_String_o *)"BombRange",
                                         *(int32_t *)
                                          ((long)&((UnityEngine_Transform_Fields *)
                                                  &(((Il2CppClass *)parent)->_1).name)->m_CachedPtr + 4),0.0,
                                         4.0,7.0,"m",1.0,(MethodInfo *)pUVar18);
                    pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    pIVar19 = (Il2CppClass *)
                              UI_ElementFactory__CreateIncrementSetting
                                        (pUVar6,(UI_ElementStyle_o *)pIVar15,(Settings_BaseSetting_o *)parent,
                                         pSVar14,(System_String_o *)"",33.0,30.0,
                                         (System_String_array *)0x0,pUVar18,validation,(MethodInfo *)0x0);
                    (pIVar22->_1).klass = pIVar19;
                    il2cpp_runtime_helper_022b4080(&(pIVar22->_1).klass);
                    if ((pSVar13[1].klass != (System_String_c *)0x0) &&
                       (parent = *(UI_BasePanel_o **)&((pSVar13[1].klass)->_1).this_arg.bits,
                       (Il2CppClass *)parent != (Il2CppClass *)0x0)) {
                      pUVar6 = *(UnityEngine_Transform_o **)&(pIVar22->_1).byval_arg.bits;
                      pSVar14 = UI_SettingsAbilityPanel__GetBombStatLabel
                                          ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar20,
                                           (System_String_o *)pIVar23,(System_String_o *)"BombSpeed",
                                           *(int32_t *)
                                            ((long)&((UnityEngine_Transform_Fields *)
                                                    &(((Il2CppClass *)parent)->_1).name)->m_CachedPtr + 4),3.0
                                           ,10.5,10.5,"k",100.0,(MethodInfo *)pUVar18);
                      pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      pUVar16 = UI_ElementFactory__CreateIncrementSetting
                                          (pUVar6,(UI_ElementStyle_o *)pIVar15,
                                           (Settings_BaseSetting_o *)parent,pSVar14,
                                           (System_String_o *)"",33.0,30.0,
                                           (System_String_array *)0x0,pUVar18,validation,(MethodInfo *)0x0);
                      (pIVar22->_1).fields = pUVar16;
                      il2cpp_runtime_helper_022b4080(&(pIVar22->_1).fields);
                      if ((pSVar13[1].klass != (System_String_c *)0x0) &&
                         (parent = (UI_BasePanel_o *)((pSVar13[1].klass)->_1).element_class,
                         (Il2CppClass *)parent != (Il2CppClass *)0x0)) {
                        pUVar6 = *(UnityEngine_Transform_o **)&(pIVar22->_1).byval_arg.bits;
                        pSVar14 = UI_SettingsAbilityPanel__GetBombStatLabel
                                            ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar20,
                                             (System_String_o *)pIVar23,(System_String_o *)"BombCooldown",
                                             *(int32_t *)
                                              ((long)&((UnityEngine_Transform_Fields *)
                                                      &(((Il2CppClass *)parent)->_1).name)->m_CachedPtr + 4),
                                             4.0,7.0,7.0,"s",1.0,(MethodInfo *)pUVar18);
                        pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pMVar21 = (MethodInfo *)0x0;
                        pUVar16 = UI_ElementFactory__CreateIncrementSetting
                                            (pUVar6,(UI_ElementStyle_o *)pIVar15,
                                             (Settings_BaseSetting_o *)parent,pSVar14,
                                             (System_String_o *)"",33.0,30.0,
                                             (System_String_array *)0x0,pUVar18,validation,(MethodInfo *)0x0);
                        (pIVar22->_1).events = pUVar16;
                        il2cpp_runtime_helper_022b4080(&(pIVar22->_1).events);
                        if (pSVar13[1].klass != (System_String_c *)0x0) {
                          pUVar6 = *(UnityEngine_Transform_o **)&(pIVar22->_1).byval_arg.bits;
                          pSVar24 = ((pSVar13[1].klass)->_1).byval_arg.data;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar13 = UI_UIManager__GetLocale
                                              (pSVar20,(System_String_o *)pIVar23,_DAT_055c29e0,
                                               (System_String_o *)"",(System_String_o *)""
                                               ,pMVar21);
                          lVar8 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                          parent = (UI_BasePanel_o *)&"";
                          if ((lVar8 != 0) &&
                             (pMVar21 = "",
                             UI_ElementFactory__CreateColorSetting
                                       (pUVar6,(UI_ElementStyle_o *)pIVar15,pSVar24,pSVar13,
                                        *(UI_ColorPickPopup_o **)(lVar8 + 0x48),
                                        (System_String_o *)"",90.0,30.0,
                                        (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0),
                             uStack_48->klass != (System_String_c *)0x0)) {
                            if (g_data_057ae6e1 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                              il2cpp_runtime_helper_023445d0(&"UnusedPoints");
                              il2cpp_runtime_helper_023445d0(&"SettingsPopup");
                              il2cpp_runtime_helper_023445d0(&": ");
                              il2cpp_runtime_helper_023445d0(&"k");
                              il2cpp_runtime_helper_023445d0(&"BombCooldown");
                              il2cpp_runtime_helper_023445d0(&"BombRadius");
                              il2cpp_runtime_helper_023445d0(&"BombSpeed");
                              il2cpp_runtime_helper_023445d0(&"Ability");
                              il2cpp_runtime_helper_023445d0(&"m");
                              il2cpp_runtime_helper_023445d0(&"BombRange");
                              il2cpp_runtime_helper_023445d0(&"");
                              il2cpp_runtime_helper_023445d0(&"s");
                              g_data_057ae6e1 = '\x01';
                            }
                            uStack_48 = (System_String_o *)((ulong)uStack_48 & 0xffffffff);
                            lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                            if ((((lVar8 != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
                                (*(long *)(lVar8 + 0x30) != 0)) && (*(long *)(lVar8 + 0x38) != 0)) {
                              pIVar15 = (Il2CppClass *)0x0;
                              if (*(long *)(lVar8 + 0x40) != 0) {
                                pSStack_38 = "SettingsPopup";
                                pIStack_40 = "Ability";
                                iVar2 = *(int *)(*(long *)(lVar8 + 0x28) + 0x14);
                                iVar3 = *(int *)(*(long *)(lVar8 + 0x30) + 0x14);
                                iVar4 = *(int *)(*(long *)(lVar8 + 0x38) + 0x14);
                                iVar5 = *(int *)(*(long *)(lVar8 + 0x40) + 0x14);
                                if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                iVar11 = System_Math__Max_3cb7c30
                                                   (0,0x14 - (iVar2 + iVar3 + iVar4 + iVar5),(MethodInfo *)0x0
                                                   );
                                uStack_48 = (System_String_o *)CONCAT44(iVar11,(undefined4)uStack_48);
                                plVar9 = (pIVar22->_1).typeMetadataHandle;
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar13 = pSStack_38;
                                pIVar23 = pIStack_40;
                                pSVar20 = UI_UIManager__GetLocale
                                                    (pSStack_38,(System_String_o *)pIStack_40,"UnusedPoints",
                                                     (System_String_o *)"",
                                                     (System_String_o *)"",pMVar21);
                                pSVar14 = System_Int32__ToString((int)&uStack_48 + 4,(MethodInfo *)0x0);
                                pIVar15 = ": ";
                                pIVar19 = (Il2CppClass *)
                                          System_String__Concat_3af7150
                                                    (pSVar20,(System_String_o *)": ",pSVar14,
                                                     (MethodInfo *)0x0);
                                if (plVar9 != (long *)0x0) {
                                  (**(code **)(*plVar9 + 0x5e8))
                                            (plVar9,pIVar19,*(undefined8 *)(*plVar9 + 0x5f0));
                                  pIVar15 = pIVar19;
                                  if (*(long *)(lVar8 + 0x28) != 0) {
                                    pIVar15 = (pIVar22->_1).interopData;
                                    pMVar21 = "BombRadius";
                                    pIVar19 = pIVar22;
                                    pSVar20 = UI_SettingsAbilityPanel__GetBombStatLabel
                                                        ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar13,
                                                         (System_String_o *)pIVar23,
                                                         (System_String_o *)"BombRadius",
                                                         *(int32_t *)(*(long *)(lVar8 + 0x28) + 0x14),5.4,7.4,
                                                         7.0,"m",1.0,(MethodInfo *)validation);
                                    UI_SettingsAbilityPanel__UpdateElementLabel
                                              ((UI_SettingsAbilityPanel_o *)pIVar19,
                                               (UnityEngine_GameObject_o *)pIVar15,pSVar20,pMVar21);
                                    if (*(long *)(lVar8 + 0x30) != 0) {
                                      pIVar15 = (pIVar22->_1).klass;
                                      pMVar21 = "BombRange";
                                      pIVar19 = pIVar22;
                                      pSVar20 = UI_SettingsAbilityPanel__GetBombStatLabel
                                                          ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar13,
                                                           (System_String_o *)pIVar23,
                                                           (System_String_o *)"BombRange",
                                                           *(int32_t *)(*(long *)(lVar8 + 0x30) + 0x14),0.0,
                                                           4.0,7.0,"m",1.0,(MethodInfo *)validation);
                                      UI_SettingsAbilityPanel__UpdateElementLabel
                                                ((UI_SettingsAbilityPanel_o *)pIVar19,
                                                 (UnityEngine_GameObject_o *)pIVar15,pSVar20,pMVar21);
                                      if (*(long *)(lVar8 + 0x38) != 0) {
                                        pIVar15 = (pIVar22->_1).fields;
                                        pMVar21 = "BombSpeed";
                                        pIVar19 = pIVar22;
                                        pSVar20 = UI_SettingsAbilityPanel__GetBombStatLabel
                                                            ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar13,
                                                             (System_String_o *)pIVar23,
                                                             (System_String_o *)"BombSpeed",
                                                             *(int32_t *)(*(long *)(lVar8 + 0x38) + 0x14),3.0,
                                                             10.5,10.5,"k",100.0,
                                                             (MethodInfo *)validation);
                                        UI_SettingsAbilityPanel__UpdateElementLabel
                                                  ((UI_SettingsAbilityPanel_o *)pIVar19,
                                                   (UnityEngine_GameObject_o *)pIVar15,pSVar20,pMVar21);
                                        if (*(long *)(lVar8 + 0x40) != 0) {
                                          pUVar16 = (pIVar22->_1).events;
                                          pMVar21 = "BombCooldown";
                                          pSVar13 = UI_SettingsAbilityPanel__GetBombStatLabel
                                                              ((UI_SettingsAbilityPanel_o *)pIVar22,pSVar13,
                                                               (System_String_o *)pIVar23,
                                                               (System_String_o *)"BombCooldown",
                                                               *(int32_t *)(*(long *)(lVar8 + 0x40) + 0x14),
                                                               4.0,7.0,7.0,"s",1.0,
                                                               (MethodInfo *)validation);
                                          UI_SettingsAbilityPanel__UpdateElementLabel
                                                    ((UI_SettingsAbilityPanel_o *)pIVar22,pUVar16,pSVar13,
                                                     pMVar21);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            il2cpp_runtime_helper_022b2c90();
                            if (g_data_057ae6e2 == '\0') {
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponentInChildren_Text);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                              g_data_057ae6e2 = '\x01';
                            }
                            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pIVar23 = pIVar15;
                            bVar12 = UnityEngine_Object__op_Inequality
                                               ((UnityEngine_Object_o *)pIVar15,(UnityEngine_Object_o *)0x0,
                                                (MethodInfo *)0x0);
                            if ((char)bVar12 == '\0') {
                              return;
                            }
                            if (pIVar15 != (Il2CppClass *)0x0) {
                              pIVar15 = (Il2CppClass *)
                                        UnityEngine_GameObject__GetComponentInChildren_object_
                                                  ((UnityEngine_GameObject_o *)pIVar15,MethodInfo_Text_GetComponentInChildren_Text);
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pIVar23 = pIVar15;
                              bVar12 = UnityEngine_Object__op_Inequality
                                                 ((UnityEngine_Object_o *)pIVar15,(UnityEngine_Object_o *)0x0,
                                                  (MethodInfo *)0x0);
                              if ((char)bVar12 == '\0') {
                                return;
                              }
                              if (pIVar15 != (Il2CppClass *)0x0) {
                                pvVar10 = (pIVar15->_1).image;
                                vtableDispatch = *(code **)((long)pvVar10 + 0x5e8);
                                (*vtableDispatch)
                                          (pIVar15,extraout_RDX,*(undefined8 *)((long)pvVar10 + 0x5f0),
                                           vtableDispatch);
                                return;
                              }
                            }
                            il2cpp_runtime_helper_022b2c90();
                            UI_CategoryPanel___ctor((UI_CategoryPanel_o *)pIVar23,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
code_r0x04441b64:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel$$GetBombStatLabel
// il2cpp: System_String_o* UI_SettingsAbilityPanel__GetBombStatLabel (UI_SettingsAbilityPanel_o* __this, System_String_o* cat, System_String_o* sub, System_String_o* statName, int32_t pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, System_String_o* unit, float divisor, const MethodInfo* method);
// 0x4441fd0

System_String_o *
UI_SettingsAbilityPanel__GetBombStatLabel
          (UI_SettingsAbilityPanel_o *__this,System_String_o *cat,System_String_o *sub,
          System_String_o *statName,int32_t pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,
          System_String_o *unit,float divisor,MethodInfo *method)

{
  int32_t val2;
  bool_conflict bVar1;
  int32_t iVar2;
  MethodInfo *pMVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_String_array *values;
  System_String_o *str1;
  System_String_o *str0;
  System_String_o *str2;
  System_String_o *extraout_RAX;
  int iVar6;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  System_String_array *__this_00;
  float cooldown;
  float __this_01;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  pMVar7 = (MethodInfo *)unit;
  local_40 = divisor;
  local_3c = oldMinCost;
  local_38 = oldMaxCost;
  if (g_data_057ae6e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"BombCooldown");
    il2cpp_runtime_helper_023445d0(&"BombRadius");
    il2cpp_runtime_helper_023445d0(&"0.##");
    il2cpp_runtime_helper_023445d0(&"BombSpeed");
    il2cpp_runtime_helper_023445d0(&") (");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"BombRange");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6e0 = '\x01';
  }
  local_44 = 0.0;
  local_34 = 0.0;
  bVar1 = System_String__op_Equality(statName,"BombRadius",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(statName,"BombRange",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(statName,"BombSpeed",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(statName,"BombCooldown",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          local_44 = 0.0;
          cooldown = 0.0;
        }
        else {
          cooldown = BombUtil__GetBombCooldown((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
          local_44 = BombUtil__GetOldCooldownCost(cooldown,(MethodInfo *)0x0);
        }
      }
      else {
        cooldown = BombUtil__GetBombSpeed((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
        local_44 = BombUtil__GetOldSpeedCost(cooldown,(MethodInfo *)0x0);
      }
    }
    else {
      cooldown = BombUtil__GetBombRange((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
      local_44 = BombUtil__GetOldRangeCost(cooldown,(MethodInfo *)0x0);
    }
  }
  else {
    cooldown = BombUtil__GetBombRadius((float)pointsSpent,local_3c,local_38,cutoff,(MethodInfo *)0x0);
    local_44 = BombUtil__GetOldRadiusCost(cooldown,(MethodInfo *)0x0);
  }
  local_34 = cooldown / local_40;
  pMVar3 = (MethodInfo *)System_Single__ToString_3cccfe0(local_40,(System_String_o *)&local_34,"0.##");
  pMVar4 = (MethodInfo *)System_Single__ToString_3cccfe0(__this_01,(System_String_o *)&local_44,"0.##");
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = UI_UIManager__GetLocale(cat,sub,statName,"","",pMVar7);
  method_00 = (MethodInfo *)0x6;
  __this_00 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pMVar7 = "(";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      __this_00 = (System_String_array *)values->m_Items;
      values->m_Items[0] = (System_String_o *)"(";
      il2cpp_runtime_helper_022b4080();
      method_00 = pMVar7;
      if (1 < (uint)values->max_length) {
        __this_00 = (System_String_array *)(values->m_Items + 1);
        values->m_Items[1] = (System_String_o *)pMVar4;
        il2cpp_runtime_helper_022b4080();
        pMVar7 = ") (";
        method_00 = pMVar4;
        if (2 < (uint)values->max_length) {
          __this_00 = (System_String_array *)(values->m_Items + 2);
          values->m_Items[2] = (System_String_o *)") (";
          il2cpp_runtime_helper_022b4080();
          method_00 = pMVar7;
          if (3 < (uint)values->max_length) {
            __this_00 = (System_String_array *)(values->m_Items + 3);
            values->m_Items[3] = (System_String_o *)pMVar3;
            il2cpp_runtime_helper_022b4080();
            method_00 = pMVar3;
            if (4 < (uint)values->max_length) {
              __this_00 = (System_String_array *)(values->m_Items + 4);
              values->m_Items[4] = unit;
              il2cpp_runtime_helper_022b4080();
              method_00 = (MethodInfo *)unit;
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = ")";
                il2cpp_runtime_helper_022b4080(values->m_Items + 5);
                method_00 = (MethodInfo *)0x0;
                str1 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                __this_00 = values;
                if ((pSVar5 != (System_String_o *)0x0) && (str1 != (System_String_o *)0x0)) {
                  iVar2 = (pSVar5->fields)._stringLength;
                  val2 = (str1->fields)._stringLength;
                  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  iVar2 = System_Math__Max_3cb7c30(iVar2,val2,(MethodInfo *)0x0);
                  iVar6 = iVar2 - (str1->fields)._stringLength;
                  if (iVar6 != 0 && (str1->fields)._stringLength <= iVar2) {
                    str0 = System_String__CreateString_3afdbf0
                                     ((System_String_o *)0x0,0x20,iVar6 / 2,(MethodInfo *)0x0);
                    str2 = System_String__CreateString_3afdbf0
                                     ((System_String_o *)0x0,0x20,iVar6 - iVar6 / 2,(MethodInfo *)0x0);
                    str1 = System_String__Concat_3af7150(str0,str1,str2,(MethodInfo *)0x0);
                  }
                  pSVar5 = System_String__Concat_3af7150(pSVar5,"\n",str1,(MethodInfo *)0x0);
                  return pSVar5;
                }
                goto label_044423fe;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_044423fe:
  il2cpp_runtime_helper_022b2c90();
  UI_SettingsAbilityPanel__RefreshBombStatLabels((UI_SettingsAbilityPanel_o *)__this_00,method_00);
  return extraout_RAX;
}


// UI.SettingsAbilityPanel$$CenterString
// il2cpp: System_String_o* UI_SettingsAbilityPanel__CenterString (UI_SettingsAbilityPanel_o* __this, System_String_o* text, int32_t totalWidth, const MethodInfo* method);
// 0x4442420

System_String_o *
UI_SettingsAbilityPanel__CenterString
          (UI_SettingsAbilityPanel_o *__this,System_String_o *text,int32_t totalWidth,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_GameObject_o *element;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  System_String_o *pSVar9;
  System_String_o *str2;
  UI_CategoryPanel_o *pUVar10;
  System_String_o *extraout_RAX;
  undefined4 extraout_var;
  UI_CategoryPanel_o *x;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX_00;
  MethodInfo *method_01;
  MethodInfo *vtableDispatch;
  int iVar11;
  undefined8 extraout_RDX;
  int iVar12;
  UI_SettingsAbilityPanel_o *pUVar13;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff90;
  int32_t iStack_5c;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  
  if (text != (System_String_o *)0x0) {
    iVar12 = (text->fields)._stringLength;
    if (totalWidth <= iVar12) {
      return text;
    }
    iVar12 = totalWidth - iVar12;
    iVar11 = iVar12 / 2;
    pSVar8 = System_String__CreateString_3afdbf0((System_String_o *)0x0,0x20,iVar11,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                System_String__CreateString_3afdbf0
                          ((System_String_o *)0x0,0x20,iVar12 - iVar11,(MethodInfo *)0x0);
    vtableDispatch = method_00;
    pSVar7 = text;
    if ((((pSVar8 != (System_String_o *)0x0) && (iVar12 = (pSVar8->fields)._stringLength, iVar12 != 0)) &&
        (pSVar7 = pSVar8, text != (System_String_o *)0x0)) &&
       ((iVar11 = (text->fields)._stringLength, iVar11 != 0 &&
        (vtableDispatch = (MethodInfo *)text, method_00 != (MethodInfo *)0x0)))) {
      uVar1 = *(uint *)&method_00->invoker_method;
      method_01 = (MethodInfo *)(ulong)uVar1;
      if (uVar1 != 0) {
        pSVar7 = il2cpp_runtime_helper_023020c0(iVar11 + iVar12 + uVar1,(MethodInfo *)text);
        System_String__FillStringChecked(pSVar7,0,pSVar8,method_01);
        System_String__FillStringChecked(pSVar7,(pSVar8->fields)._stringLength,text,method_01);
        System_String__FillStringChecked
                  (pSVar7,(text->fields)._stringLength + (pSVar8->fields)._stringLength,
                   (System_String_o *)method_00,method_01);
        return pSVar7;
      }
    }
    pSVar7 = System_String__Concat_3ae5ba0(pSVar7,(System_String_o *)vtableDispatch,method_00);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"UnusedPoints");
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"k");
    il2cpp_runtime_helper_023445d0(&"BombCooldown");
    il2cpp_runtime_helper_023445d0(&"BombRadius");
    il2cpp_runtime_helper_023445d0(&"BombSpeed");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"m");
    il2cpp_runtime_helper_023445d0(&"BombRange");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"s");
    g_data_057ae6e1 = '\x01';
  }
  iStack_5c = 0;
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     ((*(long *)(lVar4 + 0x30) != 0 && (*(long *)(lVar4 + 0x38) != 0)))) {
    text = (System_String_o *)(UI_CategoryPanel_o *)0x0;
    if (*(long *)(lVar4 + 0x40) != 0) {
      pSStack_50 = "SettingsPopup";
      pSStack_58 = "Ability";
      iVar12 = *(int *)(*(long *)(lVar4 + 0x28) + 0x14);
      iVar11 = *(int *)(*(long *)(lVar4 + 0x30) + 0x14);
      iVar2 = *(int *)(*(long *)(lVar4 + 0x38) + 0x14);
      iVar3 = *(int *)(*(long *)(lVar4 + 0x40) + 0x14);
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_5c = System_Math__Max_3cb7c30(0,0x14 - (iVar12 + iVar11 + iVar2 + iVar3),(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._pointsLeftLabel;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = pSStack_50;
      pSVar7 = pSStack_58;
      pSVar9 = UI_UIManager__GetLocale(pSStack_50,pSStack_58,"UnusedPoints","","",in_R9);
      str2 = System_Int32__ToString((int32_t)&iStack_5c,(MethodInfo *)0x0);
      text = (System_String_o *)": ";
      pUVar10 = (UI_CategoryPanel_o *)
                System_String__Concat_3af7150(pSVar9,(System_String_o *)": ",str2,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pUVar10,(pUVar5->klass->vtable)._75_set_text.method);
        text = (System_String_o *)pUVar10;
        if (*(long *)(lVar4 + 0x28) != 0) {
          text = (System_String_o *)(__this->fields)._radiusElement;
          vtableDispatch = "BombRadius";
          pUVar13 = __this;
          pSVar9 = UI_SettingsAbilityPanel__GetBombStatLabel
                             (__this,pSVar8,pSVar7,(System_String_o *)"BombRadius",
                              *(int32_t *)(*(long *)(lVar4 + 0x28) + 0x14),5.4,7.4,7.0,"m",1.0,
                              in_stack_ffffffffffffff90);
          UI_SettingsAbilityPanel__UpdateElementLabel
                    (pUVar13,(UnityEngine_GameObject_o *)text,pSVar9,vtableDispatch);
          if (*(long *)(lVar4 + 0x30) != 0) {
            text = (System_String_o *)(__this->fields)._rangeElement;
            vtableDispatch = "BombRange";
            pUVar13 = __this;
            pSVar9 = UI_SettingsAbilityPanel__GetBombStatLabel
                               (__this,pSVar8,pSVar7,(System_String_o *)"BombRange",
                                *(int32_t *)(*(long *)(lVar4 + 0x30) + 0x14),0.0,4.0,7.0,"m",1.0,
                                in_stack_ffffffffffffff90);
            UI_SettingsAbilityPanel__UpdateElementLabel
                      (pUVar13,(UnityEngine_GameObject_o *)text,pSVar9,vtableDispatch);
            if (*(long *)(lVar4 + 0x38) != 0) {
              text = (System_String_o *)(__this->fields)._speedElement;
              vtableDispatch = "BombSpeed";
              pUVar13 = __this;
              pSVar9 = UI_SettingsAbilityPanel__GetBombStatLabel
                                 (__this,pSVar8,pSVar7,(System_String_o *)"BombSpeed",
                                  *(int32_t *)(*(long *)(lVar4 + 0x38) + 0x14),3.0,10.5,10.5,"k",
                                  100.0,in_stack_ffffffffffffff90);
              UI_SettingsAbilityPanel__UpdateElementLabel
                        (pUVar13,(UnityEngine_GameObject_o *)text,pSVar9,vtableDispatch);
              if (*(long *)(lVar4 + 0x40) != 0) {
                element = (__this->fields)._cooldownElement;
                vtableDispatch = "BombCooldown";
                pSVar7 = UI_SettingsAbilityPanel__GetBombStatLabel
                                   (__this,pSVar8,pSVar7,(System_String_o *)"BombCooldown",
                                    *(int32_t *)(*(long *)(lVar4 + 0x40) + 0x14),4.0,7.0,7.0,"s",1.0,
                                    in_stack_ffffffffffffff90);
                UI_SettingsAbilityPanel__UpdateElementLabel(__this,element,pSVar7,vtableDispatch);
                return extraout_RAX;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponentInChildren_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae6e2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar10 = (UI_CategoryPanel_o *)text;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if ((UI_CategoryPanel_o *)text != (UI_CategoryPanel_o *)0x0) {
      x = (UI_CategoryPanel_o *)
          UnityEngine_GameObject__GetComponentInChildren_object_
                    ((UnityEngine_GameObject_o *)text,MethodInfo_Text_GetComponentInChildren_Text);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = x;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar6);
      }
      if (x != (UI_CategoryPanel_o *)0x0) {
        vtableDispatch = x->klass[1].vtable._20_Setup.method;
        pSVar7 = (System_String_o *)
                 (*(code *)vtableDispatch)
                           (x,extraout_RDX,x->klass[1].vtable._21_Show.methodPtr,vtableDispatch);
        return pSVar7;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    UI_CategoryPanel___ctor(pUVar10,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  return (System_String_o *)CONCAT44(extraout_var,bVar6);
}


// UI.SettingsAbilityPanel$$OnStatChanged
// il2cpp: void UI_SettingsAbilityPanel__OnStatChanged (UI_SettingsAbilityPanel_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x4442410

void UI_SettingsAbilityPanel__OnStatChanged(UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel__RefreshBombStatLabels(__this,method);
  return;
}


// UI.SettingsAbilityPanel$$RefreshBombStatLabels
// il2cpp: void UI_SettingsAbilityPanel__RefreshBombStatLabels (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x4442490

void UI_SettingsAbilityPanel__RefreshBombStatLabels(UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_GameObject_o *element;
  System_String_o *cat;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  UI_CategoryPanel_o *pUVar9;
  System_String_o *pSVar10;
  UI_CategoryPanel_o *x;
  MethodInfo *vtableDispatch;
  undefined8 extraout_RDX;
  UI_SettingsAbilityPanel_o *pUVar11;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffa8;
  int32_t local_44;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (g_data_057ae6e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"UnusedPoints");
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"k");
    il2cpp_runtime_helper_023445d0(&"BombCooldown");
    il2cpp_runtime_helper_023445d0(&"BombRadius");
    il2cpp_runtime_helper_023445d0(&"BombSpeed");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"m");
    il2cpp_runtime_helper_023445d0(&"BombRange");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"s");
    g_data_057ae6e1 = '\x01';
  }
  local_44 = 0;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if ((((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) && (*(long *)(lVar5 + 0x30) != 0)) &&
     (*(long *)(lVar5 + 0x38) != 0)) {
    method = (MethodInfo *)(UI_CategoryPanel_o *)0x0;
    if (*(long *)(lVar5 + 0x40) != 0) {
      local_38 = "SettingsPopup";
      local_40 = "Ability";
      iVar1 = *(int *)(*(long *)(lVar5 + 0x28) + 0x14);
      iVar2 = *(int *)(*(long *)(lVar5 + 0x30) + 0x14);
      iVar3 = *(int *)(*(long *)(lVar5 + 0x38) + 0x14);
      iVar4 = *(int *)(*(long *)(lVar5 + 0x40) + 0x14);
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_44 = System_Math__Max_3cb7c30(0,0x14 - (iVar1 + iVar2 + iVar3 + iVar4),(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._pointsLeftLabel;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cat = local_38;
      pSVar10 = local_40;
      pSVar8 = UI_UIManager__GetLocale(local_38,local_40,"UnusedPoints","","",in_R9);
      str2 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      method = (MethodInfo *)": ";
      pUVar9 = (UI_CategoryPanel_o *)
               System_String__Concat_3af7150(pSVar8,(System_String_o *)": ",str2,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                  (pUVar6,pUVar9,(pUVar6->klass->vtable)._75_set_text.method);
        method = (MethodInfo *)pUVar9;
        if (*(long *)(lVar5 + 0x28) != 0) {
          method = (MethodInfo *)(__this->fields)._radiusElement;
          vtableDispatch = "BombRadius";
          pUVar11 = __this;
          pSVar8 = UI_SettingsAbilityPanel__GetBombStatLabel
                             (__this,cat,pSVar10,(System_String_o *)"BombRadius",
                              *(int32_t *)(*(long *)(lVar5 + 0x28) + 0x14),5.4,7.4,7.0,"m",1.0,
                              in_stack_ffffffffffffffa8);
          UI_SettingsAbilityPanel__UpdateElementLabel
                    (pUVar11,(UnityEngine_GameObject_o *)method,pSVar8,vtableDispatch);
          if (*(long *)(lVar5 + 0x30) != 0) {
            method = (MethodInfo *)(__this->fields)._rangeElement;
            vtableDispatch = "BombRange";
            pUVar11 = __this;
            pSVar8 = UI_SettingsAbilityPanel__GetBombStatLabel
                               (__this,cat,pSVar10,(System_String_o *)"BombRange",
                                *(int32_t *)(*(long *)(lVar5 + 0x30) + 0x14),0.0,4.0,7.0,"m",1.0,
                                in_stack_ffffffffffffffa8);
            UI_SettingsAbilityPanel__UpdateElementLabel
                      (pUVar11,(UnityEngine_GameObject_o *)method,pSVar8,vtableDispatch);
            if (*(long *)(lVar5 + 0x38) != 0) {
              method = (MethodInfo *)(__this->fields)._speedElement;
              vtableDispatch = "BombSpeed";
              pUVar11 = __this;
              pSVar8 = UI_SettingsAbilityPanel__GetBombStatLabel
                                 (__this,cat,pSVar10,(System_String_o *)"BombSpeed",
                                  *(int32_t *)(*(long *)(lVar5 + 0x38) + 0x14),3.0,10.5,10.5,"k",
                                  100.0,in_stack_ffffffffffffffa8);
              UI_SettingsAbilityPanel__UpdateElementLabel
                        (pUVar11,(UnityEngine_GameObject_o *)method,pSVar8,vtableDispatch);
              if (*(long *)(lVar5 + 0x40) != 0) {
                element = (__this->fields)._cooldownElement;
                vtableDispatch = "BombCooldown";
                pSVar10 = UI_SettingsAbilityPanel__GetBombStatLabel
                                    (__this,cat,pSVar10,(System_String_o *)"BombCooldown",
                                     *(int32_t *)(*(long *)(lVar5 + 0x40) + 0x14),4.0,7.0,7.0,"s",1.0
                                     ,in_stack_ffffffffffffffa8);
                UI_SettingsAbilityPanel__UpdateElementLabel(__this,element,pSVar10,vtableDispatch);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponentInChildren_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae6e2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UI_CategoryPanel_o *)method;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if ((UI_CategoryPanel_o *)method != (UI_CategoryPanel_o *)0x0) {
    x = (UI_CategoryPanel_o *)
        UnityEngine_GameObject__GetComponentInChildren_object_
                  ((UnityEngine_GameObject_o *)method,MethodInfo_Text_GetComponentInChildren_Text);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = x;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    if (x != (UI_CategoryPanel_o *)0x0) {
      vtableDispatch = x->klass[1].vtable._20_Setup.method;
      (*(code *)vtableDispatch)
                (x,extraout_RDX,x->klass[1].vtable._21_Show.methodPtr,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor(pUVar9,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel$$UpdateElementLabel
// il2cpp: void UI_SettingsAbilityPanel__UpdateElementLabel (UI_SettingsAbilityPanel_o* __this, UnityEngine_GameObject_o* element, System_String_o* newText, const MethodInfo* method);
// 0x4442850

void UI_SettingsAbilityPanel__UpdateElementLabel
               (UI_SettingsAbilityPanel_o *__this,UnityEngine_GameObject_o *element,System_String_o *newText,
               MethodInfo *method)

{
  MethodInfo *vtableDispatch;
  bool_conflict bVar1;
  UI_CategoryPanel_o *x;
  UI_CategoryPanel_o *__this_00;
  
  if (g_data_057ae6e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponentInChildren_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae6e2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UI_CategoryPanel_o *)element;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)element,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (element != (UnityEngine_GameObject_o *)0x0) {
    x = (UI_CategoryPanel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(element,MethodInfo_Text_GetComponentInChildren_Text);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = x;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    if (x != (UI_CategoryPanel_o *)0x0) {
      vtableDispatch = x->klass[1].vtable._20_Setup.method;
      (*(code *)vtableDispatch)(x,newText,x->klass[1].vtable._21_Show.methodPtr,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___ctor (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x4442920

void UI_SettingsAbilityPanel___ctor(UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


