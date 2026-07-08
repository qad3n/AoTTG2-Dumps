// Type: UI.HUDBottomHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/HUDBottomHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/HUDBottomHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.HUDBottomHandler$$SetBottomHUD
// il2cpp: void UI_HUDBottomHandler__SetBottomHUD (UI_HUDBottomHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x40ae4d0

void UI_HUDBottomHandler__SetBottomHUD
               (UI_HUDBottomHandler_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  Characters_BaseCharacter_o **ppCVar1;
  Characters_Human_o **ppCVar2;
  Characters_BasicTitan_o **ppCVar3;
  UnityEngine_GameObject_o **ppUVar4;
  UnityEngine_UI_Image_o **ppUVar5;
  UnityEngine_UI_Image_o **ppUVar6;
  UnityEngine_UI_Image_o **ppUVar7;
  UnityEngine_UI_Image_o **ppUVar8;
  UnityEngine_UI_Text_o **ppUVar9;
  UnityEngine_UI_Text_o **ppUVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  UnityEngine_Object_o *pUVar26;
  Characters_BaseCharacter_o *x;
  Characters_Human_o *pCVar27;
  Characters_Human_c *pCVar28;
  long lVar29;
  Il2CppClass *pIVar30;
  bool_conflict bVar31;
  UnityEngine_UI_Text_o *pUVar32;
  UnityEngine_Transform_o *pUVar33;
  UnityEngine_GameObject_o *pUVar34;
  UnityEngine_UI_Slider_o *pUVar35;
  UnityEngine_UI_Image_o *pUVar36;
  System_Collections_Generic_List_GameObject__o *pSVar37;
  Il2CppClass *pIVar38;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector2_o offset;
  undefined8 uVar39;
  UnityEngine_Vector2_o offset_00;
  undefined8 uVar40;
  
  if (DAT_05704645 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_HUDScaler_AddComponent_HUDScaler);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"GunReloadRight");
    il2cpp_init_method_metadata(&"HealthBar");
    il2cpp_init_method_metadata(&"GunShoot");
    il2cpp_init_method_metadata(&"TSBombReload");
    il2cpp_init_method_metadata(&"GunEmptyLeft");
    il2cpp_init_method_metadata(&"BladeAmmoGroupLeft");
    il2cpp_init_method_metadata(&"AmmoFillLeft");
    il2cpp_init_method_metadata(&"AmmoLabelLeft");
    il2cpp_init_method_metadata(&"TSBombBackground");
    il2cpp_init_method_metadata(&"SpecialIconFill");
    il2cpp_init_method_metadata(&"GasFillLeft");
    il2cpp_init_method_metadata(&"GunShootRight");
    il2cpp_init_method_metadata(&"GasFillRight");
    il2cpp_init_method_metadata(&"Prefabs/InGame/HUDBottomAHSS");
    il2cpp_init_method_metadata(&"Fill Area/Fill");
    il2cpp_init_method_metadata(&"BladeFillRight");
    il2cpp_init_method_metadata(&"GunReloadLeft");
    il2cpp_init_method_metadata(&"TSBackground");
    il2cpp_init_method_metadata(&"PerkCDTimer");
    il2cpp_init_method_metadata(&"BombFillRight");
    il2cpp_init_method_metadata(&"PerkCDTimerBackground");
    il2cpp_init_method_metadata(&"GunBackgroundLeft");
    il2cpp_init_method_metadata(&"Prefabs/InGame/HUDBottomTitan");
    il2cpp_init_method_metadata(&"TSShoot");
    il2cpp_init_method_metadata(&"BladeAmmoGroupRight");
    il2cpp_init_method_metadata(&"BladeOut");
    il2cpp_init_method_metadata(&"GunAmmoFillRight");
    il2cpp_init_method_metadata(&"GunShootLeft");
    il2cpp_init_method_metadata(&"GunEmptyRight");
    il2cpp_init_method_metadata(&"Prefabs/InGame/HUDBottomBlade");
    il2cpp_init_method_metadata(&"GunAmmoLabelLeft");
    il2cpp_init_method_metadata(&"GunBackgroundRight");
    il2cpp_init_method_metadata(&"AmmoFillRight");
    il2cpp_init_method_metadata(&"SpecialFill");
    il2cpp_init_method_metadata(&"GunAmmoBackground");
    il2cpp_init_method_metadata(&"TSReload");
    il2cpp_init_method_metadata(&"BombFillLeft");
    il2cpp_init_method_metadata(&"AmmoLabelRight");
    il2cpp_init_method_metadata(&"StaminaBar");
    il2cpp_init_method_metadata(&"GasBackground");
    il2cpp_init_method_metadata(&"GunBackground");
    il2cpp_init_method_metadata(&"GunReload");
    il2cpp_init_method_metadata(&"Prefabs/InGame/HUDBottomAPG");
    il2cpp_init_method_metadata(&"BladeBackground");
    il2cpp_init_method_metadata(&"BladeFillLeft");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"GunAmmoLabelRight");
    il2cpp_init_method_metadata(&"BladeReload");
    il2cpp_init_method_metadata(&"GunAmmoFillLeft");
    il2cpp_init_method_metadata(&"SpecialIconBackground");
    il2cpp_init_method_metadata(&"Prefabs/InGame/HUDBottomTS");
    DAT_05704645 = '\x01';
    method = extraout_RDX;
  }
  ppCVar1 = &(__this->fields)._character;
  (__this->fields)._character = character;
  il2cpp_runtime_glue(ppCVar1,character,method);
  ppCVar2 = &(__this->fields)._human;
  (__this->fields)._human = (Characters_Human_o *)0x0;
  il2cpp_runtime_glue(ppCVar2);
  ppCVar3 = &(__this->fields)._playerTitan;
  (__this->fields)._playerTitan = (Characters_BasicTitan_o *)0x0;
  il2cpp_runtime_glue(ppCVar3);
  pUVar26 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar4 = &(__this->fields)._hudBottom;
  bVar31 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar31 != '\0') {
    pUVar26 = (UnityEngine_Object_o *)*ppUVar4;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar26,(MethodInfo *)0x0);
  }
  x = *ppCVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar31 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar38 = TypeInfo_Human;
  pIVar30 = TypeInfo_BasicTitan;
  if (((char)bVar31 != '\0') ||
     (pCVar27 = (Characters_Human_o *)*ppCVar1, pCVar27 == (Characters_Human_o *)0x0)) {
    return;
  }
  pCVar28 = pCVar27->klass;
  bVar23 = (pCVar28->_2).naturalAligment;
  bVar24 = (TypeInfo_Human->_2).naturalAligment;
  if ((bVar23 < bVar24) || ((pCVar28->_2).typeHierarchy[(ulong)bVar24 - 1] != TypeInfo_Human)) {
    bVar24 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if (bVar23 < bVar24) {
      return;
    }
    if ((pCVar28->_2).typeHierarchy[(ulong)bVar24 - 1] != TypeInfo_BasicTitan) {
      return;
    }
    *ppCVar3 = (Characters_BasicTitan_o *)pCVar27;
    pIVar38 = pIVar30;
    if ((bVar24 <= (pCVar27->klass->_2).naturalAligment) &&
       ((pCVar27->klass->_2).typeHierarchy[(ulong)bVar24 - 1] == pIVar30)) {
      il2cpp_runtime_glue(ppCVar3);
      pUVar33 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar34 = UI_ElementFactory__InstantiateAndBind(pUVar33,"Prefabs/InGame/HUDBottomTitan",(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar34;
      il2cpp_runtime_glue(ppUVar4);
      pUVar34 = (__this->fields)._hudBottom;
      if ((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
         ((pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar33 = UnityEngine_Transform__Find(pUVar33,"StaminaBar",(MethodInfo *)0x0),
          pUVar33 != (UnityEngine_Transform_o *)0x0)))) {
        pUVar35 = (UnityEngine_UI_Slider_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar33,MethodInfo_Slider_GetComponent_Slider);
        (__this->fields)._staminaSlider = pUVar35;
        il2cpp_runtime_glue(&(__this->fields)._staminaSlider);
        pUVar35 = (__this->fields)._staminaSlider;
        if ((pUVar35 != (UnityEngine_UI_Slider_o *)0x0) &&
           ((pUVar33 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar35,(MethodInfo *)0x0),
            pUVar33 != (UnityEngine_Transform_o *)0x0 &&
            (pUVar33 = UnityEngine_Transform__Find(pUVar33,"Fill Area/Fill",(MethodInfo *)0x0),
            pUVar33 != (UnityEngine_Transform_o *)0x0)))) {
          pUVar36 = (UnityEngine_UI_Image_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
          (__this->fields)._staminaFill = pUVar36;
          il2cpp_runtime_glue(&(__this->fields)._staminaFill,pUVar36);
          pUVar34 = (__this->fields)._hudBottom;
          if (pUVar34 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__AddComponent<object>(pUVar34,MethodInfo_HUDScaler_AddComponent_HUDScaler);
            pUVar34 = *ppUVar4;
            if (DAT_056fde1f == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fde1f = '\x01';
            }
            uVar11 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            offset.fields.x = (float)uVar11 * 10.0;
            offset.fields.y = (float)((ulong)uVar11 >> 0x20) * 10.0;
            UI_ElementFactory__SetAnchor(pUVar34,7,7,offset,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_040b021a;
    }
LAB_040b021f:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pCVar27,pIVar38);
  }
  *ppCVar2 = pCVar27;
  if (((pCVar27->klass->_2).naturalAligment < bVar24) ||
     ((pCVar27->klass->_2).typeHierarchy[(ulong)bVar24 - 1] != pIVar38)) goto LAB_040b021f;
  il2cpp_runtime_glue(ppCVar2);
  if ((*ppCVar2 == (Characters_Human_o *)0x0) ||
     (lVar29 = *(long *)&((*ppCVar2)->fields).MountState, lVar29 == 0)) goto LAB_040b021a;
  iVar25 = *(int *)(lVar29 + 0x1d0);
  if (iVar25 == 1) {
    pUVar33 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar34 = UI_ElementFactory__InstantiateAndBind(pUVar33,"Prefabs/InGame/HUDBottomAHSS",(MethodInfo *)0x0);
    (__this->fields)._hudBottom = pUVar34;
    il2cpp_runtime_glue(ppUVar4);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunBackgroundLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._ahssBackgroundLeft = pUVar36;
    il2cpp_runtime_glue(&(__this->fields)._ahssBackgroundLeft);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunBackgroundRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._ahssBackgroundRight = pUVar36;
    il2cpp_runtime_glue(&(__this->fields)._ahssBackgroundRight);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunEmptyLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._ahssEmptyLeft = pUVar36;
    il2cpp_runtime_glue(&(__this->fields)._ahssEmptyLeft);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunEmptyRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._ahssEmptyRight = pUVar36;
    il2cpp_runtime_glue(&(__this->fields)._ahssEmptyRight);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunReloadLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    ppUVar5 = &(__this->fields)._ahssReloadLeft;
    (__this->fields)._ahssReloadLeft = pUVar36;
    il2cpp_runtime_glue(ppUVar5);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunReloadRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    ppUVar6 = &(__this->fields)._ahssReloadRight;
    (__this->fields)._ahssReloadRight = pUVar36;
    il2cpp_runtime_glue(ppUVar6);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunShootLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._ahssShootLeft = pUVar36;
    il2cpp_runtime_glue(&(__this->fields)._ahssShootLeft);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunShootRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._ahssShootRight = pUVar36;
    il2cpp_runtime_glue(&(__this->fields)._ahssShootRight);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunReloadLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    *ppUVar5 = pUVar36;
    il2cpp_runtime_glue(ppUVar5);
    if (((*ppUVar4 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunReloadRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    *ppUVar6 = pUVar36;
    il2cpp_runtime_glue(ppUVar6);
    if (((*ppUVar4 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunAmmoLabelLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar32 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._ammoLabelLeft = pUVar32;
    il2cpp_runtime_glue(&(__this->fields)._ammoLabelLeft);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunAmmoLabelRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar32 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._ammoLabelRight = pUVar32;
    il2cpp_runtime_glue(&(__this->fields)._ammoLabelRight,pUVar32);
    pUVar36 = (__this->fields)._ahssEmptyLeft;
    if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
    uVar11._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
    uVar11._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
    uVar12._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
    uVar12._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    (*(pUVar36->klass->vtable)._23_set_color.methodPtr)
              (uVar11,uVar12,pUVar36,(pUVar36->klass->vtable)._23_set_color.method);
    pUVar36 = (__this->fields)._ahssEmptyRight;
    if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
    uVar13._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
    uVar13._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
    uVar14._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
    uVar14._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    (*(pUVar36->klass->vtable)._23_set_color.methodPtr)
              (uVar13,uVar14,pUVar36,(pUVar36->klass->vtable)._23_set_color.method);
    pUVar36 = (__this->fields)._ahssReloadLeft;
    if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
    uVar15._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
    uVar15._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
    uVar16._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
    uVar16._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    (*(pUVar36->klass->vtable)._23_set_color.methodPtr)
              (uVar15,uVar16,pUVar36,(pUVar36->klass->vtable)._23_set_color.method);
    pUVar36 = (__this->fields)._ahssReloadRight;
    if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
    uVar17._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
    uVar17._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
    uVar18._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
    uVar18._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    (*(pUVar36->klass->vtable)._23_set_color.methodPtr)
              (uVar17,uVar18,pUVar36,(pUVar36->klass->vtable)._23_set_color.method);
    pUVar36 = (__this->fields)._ahssShootLeft;
    if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
    uVar19._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar19._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar20._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar20._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
    (*(pUVar36->klass->vtable)._23_set_color.methodPtr)
              (uVar19,uVar20,pUVar36,(pUVar36->klass->vtable)._23_set_color.method);
    pUVar36 = (__this->fields)._ahssShootRight;
    if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
    uVar39._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar39._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar40._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar40._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
LAB_040afde8:
    (*(pUVar36->klass->vtable)._23_set_color.methodPtr)
              (uVar39,uVar40,pUVar36,(pUVar36->klass->vtable)._23_set_color.method);
LAB_040afdf8:
    pUVar34 = *ppUVar4;
  }
  else {
    if (iVar25 == 3) {
      pUVar33 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar34 = UI_ElementFactory__InstantiateAndBind(pUVar33,"Prefabs/InGame/HUDBottomAPG",(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar34;
      il2cpp_runtime_glue(ppUVar4);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunBackground",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._apgBackground = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._apgBackground);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunAmmoFillLeft",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._ammoFillLeft = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._ammoFillLeft);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunAmmoFillRight",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._ammoFillRight = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._ammoFillRight);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunReload",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._apgReload = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._apgReload);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunShoot",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._apgShoot = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._apgShoot);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunAmmoBackground",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._apgAmmoBackground = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._apgAmmoBackground);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunAmmoLabelLeft",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar32 = (UnityEngine_UI_Text_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._ammoLabelLeft = pUVar32;
      il2cpp_runtime_glue(&(__this->fields)._ammoLabelLeft);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GunAmmoLabelRight",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar32 = (UnityEngine_UI_Text_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._ammoLabelRight = pUVar32;
      il2cpp_runtime_glue(&(__this->fields)._ammoLabelRight,pUVar32);
      pUVar36 = (__this->fields)._apgReload;
joined_r0x040aecbe:
      if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
      uVar39._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar39._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar40._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar40._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
      goto LAB_040afde8;
    }
    pUVar33 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (iVar25 != 2) {
      pUVar34 = UI_ElementFactory__InstantiateAndBind(pUVar33,"Prefabs/InGame/HUDBottomBlade",(MethodInfo *)0x0);
      *ppUVar4 = pUVar34;
      il2cpp_runtime_glue(ppUVar4);
      if (((*ppUVar4 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BladeBackground",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._bladeBackground = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._bladeBackground);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BladeReload",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._bladeReload = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._bladeReload);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BladeOut",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._bladeOut = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._bladeOut);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BladeFillLeft",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._bladeFillLeft = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._bladeFillLeft);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BladeFillRight",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._bladeFillRight = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._bladeFillRight,pUVar36);
      pSVar37 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar37,MethodInfo_List_1_UnityEngine_GameObject);
      (__this->fields)._bladeAmmoLeft = pSVar37;
      il2cpp_runtime_glue(&(__this->fields)._bladeAmmoLeft,pSVar37);
      pSVar37 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar37,MethodInfo_List_1_UnityEngine_GameObject);
      (__this->fields)._bladeAmmoRight = pSVar37;
      il2cpp_runtime_glue(&(__this->fields)._bladeAmmoRight);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BladeAmmoGroupLeft",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar34 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
      (__this->fields)._bladeAmmoGroupLeft = pUVar34;
      il2cpp_runtime_glue(&(__this->fields)._bladeAmmoGroupLeft);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BladeAmmoGroupRight",(MethodInfo *)0x0),
         pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
      pUVar34 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
      (__this->fields)._bladeAmmoGroupRight = pUVar34;
      il2cpp_runtime_glue(&(__this->fields)._bladeAmmoGroupRight,pUVar34);
      pUVar36 = (__this->fields)._bladeOut;
      goto joined_r0x040aecbe;
    }
    pUVar34 = UI_ElementFactory__InstantiateAndBind(pUVar33,"Prefabs/InGame/HUDBottomTS",(MethodInfo *)0x0);
    *ppUVar4 = pUVar34;
    il2cpp_runtime_glue(ppUVar4);
    if (((*ppUVar4 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"TSBackground",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    ppUVar5 = &(__this->fields)._tsBackground;
    (__this->fields)._tsBackground = pUVar36;
    il2cpp_runtime_glue(ppUVar5);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"TSBombBackground",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    ppUVar6 = &(__this->fields)._tsBombBackground;
    (__this->fields)._tsBombBackground = pUVar36;
    il2cpp_runtime_glue(ppUVar6);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"AmmoFillLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    ppUVar7 = &(__this->fields)._ammoFillLeft;
    (__this->fields)._ammoFillLeft = pUVar36;
    il2cpp_runtime_glue(ppUVar7);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"AmmoFillRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    ppUVar8 = &(__this->fields)._ammoFillRight;
    (__this->fields)._ammoFillRight = pUVar36;
    il2cpp_runtime_glue(ppUVar8);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BombFillLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._bombFillLeft = pUVar36;
    il2cpp_runtime_glue();
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"BombFillRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._bombFillRight = pUVar36;
    il2cpp_runtime_glue();
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"TSReload",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._tsReload = pUVar36;
    il2cpp_runtime_glue();
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"TSBombReload",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._tsBombReload = pUVar36;
    il2cpp_runtime_glue(&(__this->fields)._tsBombReload);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"TSShoot",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar36 = (UnityEngine_UI_Image_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
    (__this->fields)._tsShoot = pUVar36;
    il2cpp_runtime_glue();
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"AmmoLabelLeft",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar32 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Text_GetComponent_Text);
    ppUVar9 = &(__this->fields)._ammoLabelLeft;
    (__this->fields)._ammoLabelLeft = pUVar32;
    il2cpp_runtime_glue(ppUVar9);
    pUVar34 = (__this->fields)._hudBottom;
    if (((pUVar34 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
        pUVar33 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"AmmoLabelRight",(MethodInfo *)0x0),
       pUVar33 == (UnityEngine_Transform_o *)0x0)) goto LAB_040b021a;
    pUVar32 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar33,MethodInfo_Text_GetComponent_Text);
    ppUVar10 = &(__this->fields)._ammoLabelRight;
    (__this->fields)._ammoLabelRight = pUVar32;
    il2cpp_runtime_glue(ppUVar10,pUVar32);
    pUVar36 = (__this->fields)._tsReload;
    if (pUVar36 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b021a;
    uVar21._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
    uVar21._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
    uVar22._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
    uVar22._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    (*(pUVar36->klass->vtable)._23_set_color.methodPtr)(uVar21,uVar22);
    lVar29 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x58), lVar29 == 0)) ||
       (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)) goto LAB_040b021a;
    if (*(char *)(lVar29 + 0x11) == '\0') goto LAB_040afdf8;
    pUVar36 = *ppUVar5;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,0,(MethodInfo *)0x0);
    pUVar36 = *ppUVar6;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,1,(MethodInfo *)0x0);
    pUVar36 = *ppUVar7;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,0,(MethodInfo *)0x0);
    pUVar36 = *ppUVar8;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,0,(MethodInfo *)0x0);
    pUVar36 = (__this->fields)._bombFillLeft;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,1,(MethodInfo *)0x0);
    pUVar36 = (__this->fields)._bombFillRight;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,1,(MethodInfo *)0x0);
    pUVar36 = (__this->fields)._tsReload;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,0,(MethodInfo *)0x0);
    pUVar36 = (__this->fields)._tsShoot;
    if ((pUVar36 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,0,(MethodInfo *)0x0);
    pUVar32 = *ppUVar9;
    if ((pUVar32 == (UnityEngine_UI_Text_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,0,(MethodInfo *)0x0);
    pUVar32 = *ppUVar10;
    if ((pUVar32 == (UnityEngine_UI_Text_o *)0x0) ||
       (pUVar34 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar34 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b021a;
    UnityEngine_GameObject__SetActive(pUVar34,0,(MethodInfo *)0x0);
    pUVar34 = *ppUVar4;
  }
  if (pUVar34 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>(pUVar34,MethodInfo_HUDScaler_AddComponent_HUDScaler);
    pUVar34 = *ppUVar4;
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar11 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    offset_00.fields.x = (float)uVar11 * 10.0;
    offset_00.fields.y = (float)((ulong)uVar11 >> 0x20) * 10.0;
    UI_ElementFactory__SetAnchor(pUVar34,7,7,offset_00,(MethodInfo *)0x0);
    if (((*ppUVar4 != (UnityEngine_GameObject_o *)0x0) &&
        (pUVar33 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0),
        pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar33 = UnityEngine_Transform__Find(pUVar33,"SpecialFill",(MethodInfo *)0x0),
       pUVar33 != (UnityEngine_Transform_o *)0x0)) {
      pUVar36 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._specialFill = pUVar36;
      il2cpp_runtime_glue(&(__this->fields)._specialFill);
      pUVar34 = (__this->fields)._hudBottom;
      if (((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
          (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
          pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar33 = UnityEngine_Transform__Find(pUVar33,"SpecialIconBackground",(MethodInfo *)0x0),
         pUVar33 != (UnityEngine_Transform_o *)0x0)) {
        pUVar36 = (UnityEngine_UI_Image_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
        (__this->fields)._specialIconBackground = pUVar36;
        il2cpp_runtime_glue(&(__this->fields)._specialIconBackground);
        pUVar34 = (__this->fields)._hudBottom;
        if (((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
            pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar33 = UnityEngine_Transform__Find(pUVar33,"SpecialIconFill",(MethodInfo *)0x0),
           pUVar33 != (UnityEngine_Transform_o *)0x0)) {
          pUVar36 = (UnityEngine_UI_Image_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
          (__this->fields)._specialIconFill = pUVar36;
          il2cpp_runtime_glue(&(__this->fields)._specialIconFill);
          pUVar34 = (__this->fields)._hudBottom;
          if (((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
              (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
              pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
             (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GasFillLeft",(MethodInfo *)0x0),
             pUVar33 != (UnityEngine_Transform_o *)0x0)) {
            pUVar36 = (UnityEngine_UI_Image_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
            (__this->fields)._gasFillLeft = pUVar36;
            il2cpp_runtime_glue(&(__this->fields)._gasFillLeft);
            pUVar34 = (__this->fields)._hudBottom;
            if (((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
                (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
                pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
               (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GasFillRight",(MethodInfo *)0x0),
               pUVar33 != (UnityEngine_Transform_o *)0x0)) {
              pUVar36 = (UnityEngine_UI_Image_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
              (__this->fields)._gasFillRight = pUVar36;
              il2cpp_runtime_glue(&(__this->fields)._gasFillRight);
              pUVar34 = (__this->fields)._hudBottom;
              if (((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
                  (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
                  pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
                 (pUVar33 = UnityEngine_Transform__Find(pUVar33,"GasBackground",(MethodInfo *)0x0),
                 pUVar33 != (UnityEngine_Transform_o *)0x0)) {
                pUVar36 = (UnityEngine_UI_Image_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
                (__this->fields)._gasBackground = pUVar36;
                il2cpp_runtime_glue(&(__this->fields)._gasBackground,pUVar36);
                (__this->fields)._currentSpecialIcon = "";
                il2cpp_runtime_glue(&(__this->fields)._currentSpecialIcon);
                pUVar34 = (__this->fields)._hudBottom;
                if (((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
                    (pUVar33 = UnityEngine_GameObject__get_transform(pUVar34,(MethodInfo *)0x0),
                    pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
                   (pUVar33 = UnityEngine_Transform__Find(pUVar33,"HealthBar",(MethodInfo *)0x0),
                   pUVar33 != (UnityEngine_Transform_o *)0x0)) {
                  pUVar36 = (UnityEngine_UI_Image_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
                  (__this->fields)._healthImage = pUVar36;
                  il2cpp_runtime_glue(&(__this->fields)._healthImage);
                  pUVar36 = (__this->fields)._healthImage;
                  if (pUVar36 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_Behaviour__set_enabled
                              ((UnityEngine_Behaviour_o *)pUVar36,0,(MethodInfo *)0x0);
                    if (((*ppUVar4 != (UnityEngine_GameObject_o *)0x0) &&
                        (pUVar33 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0)
                        , pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
                       (pUVar33 = UnityEngine_Transform__Find
                                            (pUVar33,"PerkCDTimer",(MethodInfo *)0x0),
                       pUVar33 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar36 = (UnityEngine_UI_Image_o *)
                                UnityEngine_Component__GetComponent<object>
                                          ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
                      ppUVar5 = &(__this->fields)._perkCDImage;
                      (__this->fields)._perkCDImage = pUVar36;
                      il2cpp_runtime_glue(ppUVar5);
                      pUVar34 = (__this->fields)._hudBottom;
                      if (((pUVar34 != (UnityEngine_GameObject_o *)0x0) &&
                          (pUVar33 = UnityEngine_GameObject__get_transform
                                               (pUVar34,(MethodInfo *)0x0),
                          pUVar33 != (UnityEngine_Transform_o *)0x0)) &&
                         (pUVar33 = UnityEngine_Transform__Find
                                              (pUVar33,"PerkCDTimerBackground",(MethodInfo *)0x0),
                         pUVar33 != (UnityEngine_Transform_o *)0x0)) {
                        pUVar36 = (UnityEngine_UI_Image_o *)
                                  UnityEngine_Component__GetComponent<object>
                                            ((UnityEngine_Component_o *)pUVar33,MethodInfo_Image_GetComponent_Image);
                        (__this->fields)._perkCDBackgroundImage = pUVar36;
                        il2cpp_runtime_glue(&(__this->fields)._perkCDBackgroundImage);
                        pUVar36 = (__this->fields)._perkCDBackgroundImage;
                        if (pUVar36 != (UnityEngine_UI_Image_o *)0x0) {
                          UnityEngine_Behaviour__set_enabled
                                    ((UnityEngine_Behaviour_o *)pUVar36,0,(MethodInfo *)0x0);
                          pUVar36 = *ppUVar5;
                          if (pUVar36 != (UnityEngine_UI_Image_o *)0x0) {
                            UnityEngine_Behaviour__set_enabled
                                      ((UnityEngine_Behaviour_o *)pUVar36,0,(MethodInfo *)0x0);
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
LAB_040b021a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$SetBottomHUDActive
// il2cpp: void UI_HUDBottomHandler__SetBottomHUDActive (UI_HUDBottomHandler_o* __this, bool active, const MethodInfo* method);
// 0x40b0230

void UI_HUDBottomHandler__SetBottomHUDActive
               (UI_HUDBottomHandler_o *__this,bool_conflict active,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05704646 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704646 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._hudBottom;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,active & 0xff,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.HUDBottomHandler$$SetSpecialIcon
// il2cpp: void UI_HUDBottomHandler__SetSpecialIcon (UI_HUDBottomHandler_o* __this, System_String_o* icon, const MethodInfo* method);
// 0x40b02b0

void UI_HUDBottomHandler__SetSpecialIcon
               (UI_HUDBottomHandler_o *__this,System_String_o *icon,MethodInfo *method)

{
  (__this->fields)._newSpecialIcon = icon;
  il2cpp_runtime_glue(&(__this->fields)._newSpecialIcon);
  return;
}


// UI.HUDBottomHandler$$ShakeGas
// il2cpp: void UI_HUDBottomHandler__ShakeGas (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b02d0

void UI_HUDBottomHandler__ShakeGas(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_UI_Image_o *x_00;
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (DAT_05704647 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704647 = '\x01';
  }
  x = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    x_00 = (__this->fields)._gasBackground;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasBackground,method_00);
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillLeft,method_01);
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillRight,method_02);
      (__this->fields)._gasAnimationTimeLeft = 0.4;
    }
  }
  return;
}


// UI.HUDBottomHandler$$Reload
// il2cpp: void UI_HUDBottomHandler__Reload (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b0460

void UI_HUDBottomHandler__Reload(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Animator_o *pUVar5;
  
  if (DAT_05704648 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704648 = '\x01';
  }
  x = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pUVar1 = (__this->fields)._bladeBackground;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pUVar1 = (__this->fields)._apgBackground;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pUVar1 = (__this->fields)._ahssBackgroundLeft;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            pUVar1 = (__this->fields)._tsBackground;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              return;
            }
            lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
               (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) {
              if (*(char *)(lVar2 + 0x11) != '\0') {
                return;
              }
              pUVar1 = (__this->fields)._tsBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._tsShoot;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._tsReload;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields)._tsReload;
                    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar5 = (UnityEngine_Animator_o *)
                                 UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
                       pUVar5 != (UnityEngine_Animator_o *)0x0)) {
                      UnityEngine_Animator__Update(pUVar5,0.0,(MethodInfo *)0x0);
                      pUVar1 = (__this->fields)._ammoFillLeft;
                      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar4 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                        pUVar1 = (__this->fields)._ammoFillRight;
                        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                           (pUVar4 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0)
                           , pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                          (__this->fields)._reloadAnimationTimeLeft = 1.0;
                          (__this->fields)._shootAnimationTimeLeft = 0.0;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pUVar1 = (__this->fields)._ahssShootLeft;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._ahssShootRight;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._ahssEmptyLeft;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._ahssEmptyRight;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields)._ahssBackgroundLeft;
                    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar4 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                      pUVar1 = (__this->fields)._ahssBackgroundRight;
                      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar4 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                        pUVar1 = (__this->fields)._ahssReloadLeft;
                        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                           (pUVar4 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0)
                           , pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                          pUVar1 = (__this->fields)._ahssReloadRight;
                          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                             (pUVar4 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pUVar1,
                                                  (MethodInfo *)0x0),
                             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                            pUVar1 = (__this->fields)._ahssReloadLeft;
                            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                               (pUVar5 = (UnityEngine_Animator_o *)
                                         UnityEngine_Component__GetComponent<object>
                                                   ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
                               pUVar5 != (UnityEngine_Animator_o *)0x0)) {
                              UnityEngine_Animator__Update(pUVar5,0.0,(MethodInfo *)0x0);
                              pUVar1 = (__this->fields)._ahssReloadRight;
                              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                                 (pUVar5 = (UnityEngine_Animator_o *)
                                           UnityEngine_Component__GetComponent<object>
                                                     ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator
                                                     ), pUVar5 != (UnityEngine_Animator_o *)0x0)) {
                                UnityEngine_Animator__Update(pUVar5,0.0,(MethodInfo *)0x0);
                                (__this->fields)._reloadAnimationTimeLeft = 1.333;
                                (__this->fields)._shootAnimationTimeLeft = 0.0;
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
        else {
          pUVar1 = (__this->fields)._apgShoot;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._apgAmmoBackground;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._apgBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._apgReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._apgReload;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar5 = (UnityEngine_Animator_o *)
                               UnityEngine_Component__GetComponent<object>
                                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
                     pUVar5 != (UnityEngine_Animator_o *)0x0)) {
                    UnityEngine_Animator__Update(pUVar5,0.0,(MethodInfo *)0x0);
                    (__this->fields)._reloadAnimationTimeLeft = 0.8;
                    (__this->fields)._shootAnimationTimeLeft = 0.0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pUVar1 = (__this->fields)._bladeOut;
        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._bladeBackground;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._bladeFillLeft;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._bladeFillRight;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._bladeReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._bladeReload;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar5 = (UnityEngine_Animator_o *)
                               UnityEngine_Component__GetComponent<object>
                                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
                     pUVar5 != (UnityEngine_Animator_o *)0x0)) {
                    UnityEngine_Animator__Update(pUVar5,0.0,(MethodInfo *)0x0);
                    (__this->fields)._reloadAnimationTimeLeft = 1.0;
                    return;
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
  }
  return;
}


// UI.HUDBottomHandler$$ShootAPG
// il2cpp: void UI_HUDBottomHandler__ShootAPG (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b0b10

void UI_HUDBottomHandler__ShootAPG(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Animator_o *__this_00;
  
  if (DAT_05704649 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704649 = '\x01';
  }
  x = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields)._apgBackground;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pUVar1 = (__this->fields)._apgShoot;
        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._apgShoot;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (__this_00 = (UnityEngine_Animator_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
             __this_00 != (UnityEngine_Animator_o *)0x0)) {
            UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._apgAmmoBackground;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._apgBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._apgReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
                  (__this->fields)._reloadAnimationTimeLeft = 0.0;
                  (__this->fields)._shootAnimationTimeLeft = 0.5;
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// UI.HUDBottomHandler$$ShootAHSS
// il2cpp: void UI_HUDBottomHandler__ShootAHSS (UI_HUDBottomHandler_o* __this, bool left, bool right, const MethodInfo* method);
// 0x40b0cc0

void UI_HUDBottomHandler__ShootAHSS
               (UI_HUDBottomHandler_o *__this,bool_conflict left,bool_conflict right,
               MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Animator_o *pUVar4;
  
  if (DAT_0570464a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570464a = '\x01';
  }
  x = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    pUVar1 = (__this->fields)._ahssBackgroundLeft;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      return;
    }
    if ((char)left != '\0') {
      pUVar1 = (__this->fields)._ahssShootLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssShootLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = (UnityEngine_Animator_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
         pUVar4 == (UnityEngine_Animator_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_Animator__Update(pUVar4,0.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssBackgroundLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssEmptyLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssReloadLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
    }
    if ((char)right != '\0') {
      pUVar1 = (__this->fields)._ahssShootRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
LAB_040b0f6b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssShootRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = (UnityEngine_Animator_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
         pUVar4 == (UnityEngine_Animator_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_Animator__Update(pUVar4,0.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssBackgroundRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssEmptyRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssReloadRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b0f6b;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
    }
    (__this->fields)._reloadAnimationTimeLeft = 0.0;
    (__this->fields)._shootAnimationTimeLeft = 0.667;
  }
  return;
}


// UI.HUDBottomHandler$$ShootTS
// il2cpp: void UI_HUDBottomHandler__ShootTS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b0f70

void UI_HUDBottomHandler__ShootTS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Animator_o *__this_00;
  
  if (DAT_0570464b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570464b = '\x01';
  }
  x = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pUVar1 = (__this->fields)._tsBackground;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
           (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) {
          if (*(char *)(lVar2 + 0x11) != '\0') {
            return;
          }
          pUVar1 = (__this->fields)._tsShoot;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._tsShoot;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (__this_00 = (UnityEngine_Animator_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar1,MethodInfo_Animator_GetComponent_Animator),
               __this_00 != (UnityEngine_Animator_o *)0x0)) {
              UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._tsBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._tsReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._ammoFillLeft;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields)._ammoFillRight;
                    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar4 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                      (__this->fields)._reloadAnimationTimeLeft = 0.0;
                      (__this->fields)._shootAnimationTimeLeft = 1.0;
                      return;
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
    }
  }
  return;
}


// UI.HUDBottomHandler$$Update
// il2cpp: void UI_HUDBottomHandler__Update (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b11a0

void UI_HUDBottomHandler__Update(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  Characters_Human_o *pCVar4;
  System_Object_array *pSVar5;
  Il2CppClass *pIVar6;
  Characters_BasicTitan_o *x;
  bool_conflict bVar7;
  MethodInfo *pMVar8;
  float fVar9;
  
  if (DAT_0570464c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AHSSWeapon);
    il2cpp_init_method_metadata(&TypeInfo_APGWeapon);
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearWeapon);
    DAT_0570464c = '\x01';
  }
  pCVar4 = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    x = (__this->fields)._playerTitan;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar8 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      UI_HUDBottomHandler__UpdatePlayerTitan(__this,pMVar8);
      return;
    }
  }
  else {
    fVar1 = (__this->fields)._reloadAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._reloadAnimationTimeLeft = fVar1 - fVar9;
    fVar1 = (__this->fields)._gasAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._gasAnimationTimeLeft = fVar1 - fVar9;
    fVar1 = (__this->fields)._shootAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shootAnimationTimeLeft = fVar1 - fVar9;
    UI_HUDBottomHandler__UpdateHumanSpecial(__this,pMVar8);
    UI_HUDBottomHandler__UpdateGas(__this,pMVar8);
    UI_HUDBottomHandler__UpdatePerkTimer(__this,pMVar8);
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar5 = (pCVar4->fields).crossfadeCache;
    if (pSVar5 != (System_Object_array *)0x0) {
      pIVar6 = (pSVar5->obj).klass;
      bVar2 = (pIVar6->_2).naturalAligment;
      bVar3 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar3 <= bVar2) &&
         ((pIVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          TypeInfo_BladeWeapon)) {
        UI_HUDBottomHandler__UpdateBlade(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
      bVar3 = (TypeInfo_APGWeapon->_2).naturalAligment;
      if ((bVar3 <= bVar2) &&
         ((pIVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          TypeInfo_APGWeapon)) {
        UI_HUDBottomHandler__UpdateAPG(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
      bVar3 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
      if ((bVar3 <= bVar2) &&
         ((pIVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          TypeInfo_AHSSWeapon)) {
        UI_HUDBottomHandler__UpdateAHSS(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
      bVar3 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      if ((bVar3 <= bVar2) &&
         ((pIVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          TypeInfo_ThunderspearWeapon)) {
        UI_HUDBottomHandler__UpdateTS(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
    }
  }
  return;
}


// UI.HUDBottomHandler$$StopAnimator
// il2cpp: void UI_HUDBottomHandler__StopAnimator (UI_HUDBottomHandler_o* __this, UnityEngine_UI_Image_o* obj, const MethodInfo* method);
// 0x40b3990

void UI_HUDBottomHandler__StopAnimator
               (UI_HUDBottomHandler_o *__this,UnityEngine_UI_Image_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *target;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Animator_o *__this_00;
  float fVar3;
  
  if (DAT_0570464d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Animator_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_0570464d = '\x01';
  }
  target = (__this->fields)._hudBottom;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = MiscExtensions__GetActive(target,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._AnimationCache;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_040b3ae3;
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      if (obj == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b3ae3;
      __this_00 = (UnityEngine_Animator_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)obj,MethodInfo_Animator_GetComponent_Animator);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._AnimationCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_040b3ae3;
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
    }
    else {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._AnimationCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_040b3ae3;
      __this_00 = (UnityEngine_Animator_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (pSVar1,(Il2CppObject *)obj,MethodInfo_Animator_get_Item);
    }
    if (__this_00 == (UnityEngine_Animator_o *)0x0) {
LAB_040b3ae3:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar3 = UnityEngine_Animator__get_speed(__this_00,(MethodInfo *)0x0);
    if ((fVar3 != 0.0) || (NAN(fVar3))) {
      UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(__this_00,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.HUDBottomHandler$$StartAnimator
// il2cpp: void UI_HUDBottomHandler__StartAnimator (UI_HUDBottomHandler_o* __this, UnityEngine_UI_Image_o* obj, const MethodInfo* method);
// 0x40b0390

void UI_HUDBottomHandler__StartAnimator
               (UI_HUDBottomHandler_o *__this,UnityEngine_UI_Image_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *target;
  bool_conflict bVar1;
  UnityEngine_Animator_o *__this_00;
  float fVar2;
  
  if (DAT_0570464e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_0570464e = '\x01';
  }
  target = (__this->fields)._hudBottom;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = MiscExtensions__GetActive(target,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if ((obj == (UnityEngine_UI_Image_o *)0x0) ||
     (__this_00 = (UnityEngine_Animator_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)obj,MethodInfo_Animator_GetComponent_Animator),
     __this_00 == (UnityEngine_Animator_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  fVar2 = UnityEngine_Animator__get_speed(__this_00,(MethodInfo *)0x0);
  if (fVar2 != 0.0) {
    return;
  }
  if (NAN(fVar2)) {
    return;
  }
  UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
  UnityEngine_Animator__set_speed(__this_00,1.0,(MethodInfo *)0x0);
  return;
}


// UI.HUDBottomHandler$$UpdatePerkTimer
// il2cpp: void UI_HUDBottomHandler__UpdatePerkTimer (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b1b50

void UI_HUDBottomHandler__UpdatePerkTimer(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_Horse_o *pCVar2;
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *pAVar3;
  bool_conflict bVar4;
  UnityEngine_UI_Image_o *pUVar5;
  float value;
  
  pCVar1 = (__this->fields)._human;
  if (((pCVar1 == (Characters_Human_o *)0x0) ||
      (pCVar2 = (pCVar1->fields).Horse, pCVar2 == (Characters_Horse_o *)0x0)) ||
     (pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
               (pCVar2->fields).VisibleName,
     pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)) goto LAB_040b1d1b;
  bVar4 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                    (pAVar3,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (pCVar2 = (pCVar1->fields).Horse, pCVar2 == (Characters_Horse_o *)0x0)) ||
       (pAVar3 = *(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o **)
                  &(pCVar2->fields).HasExplicitNameTag,
       pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0))
    goto LAB_040b1d1b;
    bVar4 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                      (pAVar3,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') goto LAB_040b1bcc;
    pUVar5 = (__this->fields)._perkCDImage;
    if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b1d1b;
  }
  else {
LAB_040b1bcc:
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (pCVar2 = (pCVar1->fields).Horse, pCVar2 == (Characters_Horse_o *)0x0)) ||
       (pAVar3 = *(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o **)
                  &(pCVar2->fields).HasExplicitNameTag,
       pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0))
    goto LAB_040b1d1b;
    bVar4 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                      (pAVar3,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._human;
    if ((pCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar2 = (pCVar1->fields).Horse, pCVar2 == (Characters_Horse_o *)0x0)) goto LAB_040b1d1b;
    if ((char)bVar4 == '\0') {
      pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
               (pCVar2->fields).VisibleName;
      if (pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)
      goto LAB_040b1d1b;
      bVar4 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                        (pAVar3,(MethodInfo *)0x0);
      value = 0.0;
      if ((char)bVar4 != '\0') {
        pCVar1 = (__this->fields)._human;
        if ((pCVar1 == (Characters_Human_o *)0x0) ||
           (pCVar2 = (pCVar1->fields).Horse, pCVar2 == (Characters_Horse_o *)0x0))
        goto LAB_040b1d1b;
        pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                 (pCVar2->fields).VisibleName;
        goto joined_r0x040b1c74;
      }
    }
    else {
      pAVar3 = *(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o **)
                &(pCVar2->fields).HasExplicitNameTag;
joined_r0x040b1c74:
      if (pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)
      goto LAB_040b1d1b;
      value = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                        (pAVar3,(MethodInfo *)0x0);
    }
    pUVar5 = (__this->fields)._perkCDImage;
    if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b1d1b;
    if ((0.0 < value) && ((value != 1.0 || (NAN(value))))) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,1,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._perkCDBackgroundImage;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,1,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._perkCDImage;
        if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_fillAmount(pUVar5,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_040b1d1b;
    }
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,0,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._perkCDBackgroundImage;
  if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar5,0,(MethodInfo *)0x0);
    return;
  }
LAB_040b1d1b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$UpdateHumanSpecial
// il2cpp: void UI_HUDBottomHandler__UpdateHumanSpecial (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b1410

void UI_HUDBottomHandler__UpdateHumanSpecial(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Characters_Human_o *pCVar2;
  System_Action_Hashtable__o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  System_String_o *path;
  undefined1 auVar4 [16];
  bool_conflict bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  System_String_o *name;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Sprite_o *value;
  UnityEngine_GameObject_o *pUVar9;
  float value_00;
  
  if (DAT_0570464f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Icons/Specials/");
    il2cpp_init_method_metadata(&"");
    DAT_0570464f = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) goto LAB_040b1861;
  __this_00 = (pCVar2->fields).OnPlayerPropertiesChanged;
  if (__this_00 == (System_Action_Hashtable__o *)0x0) {
    pUVar3 = (__this->fields)._specialFill;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b1861;
    UnityEngine_UI_Image__set_fillAmount(pUVar3,0.0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._specialIconFill;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b1861;
    UnityEngine_UI_Image__set_fillAmount(pUVar3,0.0,(MethodInfo *)0x0);
  }
  else {
    value_00 = Characters_BaseUseable__GetCooldownRatio
                         ((Characters_BaseUseable_o *)__this_00,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._specialFill;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b1861;
    UnityEngine_UI_Image__set_fillAmount(pUVar3,value_00,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._specialIconFill;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b1861;
    UnityEngine_UI_Image__set_fillAmount(pUVar3,value_00,(MethodInfo *)0x0);
    bVar5 = System_String__op_Inequality
                      ((__this->fields)._currentSpecialIcon,(__this->fields)._newSpecialIcon,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      ppSVar1 = &(__this->fields)._currentSpecialIcon;
      (__this->fields)._currentSpecialIcon = (__this->fields)._newSpecialIcon;
      il2cpp_runtime_glue(ppSVar1);
      bVar5 = System_String__op_Inequality
                        ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        name = System_String__Concat("Icons/Specials/",*ppSVar1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        texture = (UnityEngine_Texture2D_o *)
                  ApplicationManagers_ResourceManager__LoadAsset(path,name,1,(MethodInfo *)0x0);
        if (texture == (UnityEngine_Texture2D_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (texture->klass != TypeInfo_Texture2D) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(texture);
        }
        iVar6 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                          (texture,(texture->klass->vtable)._5_get_width.method);
        iVar7 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
        auVar4._4_4_ = (float)iVar7;
        auVar4._0_4_ = (float)iVar6;
        auVar4._8_8_ = 0;
        value = UnityEngine_Sprite__Create
                          (texture,(UnityEngine_Rect_o)(auVar4 << 0x40),
                           (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._specialIconBackground;
        if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_UI_Image__set_sprite(pUVar3,value,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._specialIconFill;
        if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_UI_Image__set_sprite(pUVar3,value,(MethodInfo *)0x0);
      }
    }
  }
  pUVar3 = (__this->fields)._specialIconBackground;
  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar9 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      if ((pCVar2->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = System_String__op_Inequality
                          ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0);
      }
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar9,uVar8 & 0xff,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._specialIconFill;
        if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar9 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._human;
          if (pCVar2 != (Characters_Human_o *)0x0) {
            if ((pCVar2->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
              uVar8 = 0;
            }
            else {
              uVar8 = System_String__op_Inequality
                                ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0
                                );
            }
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar9,uVar8 & 0xff,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_040b1861:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$UpdateGas
// il2cpp: void UI_HUDBottomHandler__UpdateGas (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b18a0

void UI_HUDBottomHandler__UpdateGas(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  Characters_Human_o *pCVar16;
  Characters_Horse_o *pCVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UnityEngine_UI_Image_o *pUVar18;
  float value;
  undefined8 uVar19;
  undefined8 uVar20;
  
  pCVar16 = (__this->fields)._human;
  if ((pCVar16 != (Characters_Human_o *)0x0) &&
     (pCVar17 = (pCVar16->fields).Horse, pCVar17 != (Characters_Horse_o *)0x0)) {
    fVar1 = (float)(pCVar17->fields).SoundsEnabled;
    value = 0.0;
    if (0.0 < fVar1) {
      value = (float)(pCVar17->fields).FootstepsEnabled / fVar1;
    }
    pUVar18 = (__this->fields)._gasFillLeft;
    if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_fillAmount(pUVar18,value,(MethodInfo *)0x0);
      pUVar18 = (__this->fields)._gasFillRight;
      if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_fillAmount(pUVar18,value,(MethodInfo *)0x0);
        if (value <= 0.0) {
          pUVar18 = (__this->fields)._gasBackground;
          if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
            uVar19._0_4_ = (__this->fields).BackgroundEmptyColor.fields.r;
            uVar19._4_4_ = (__this->fields).BackgroundEmptyColor.fields.g;
            uVar20._0_4_ = (__this->fields).BackgroundEmptyColor.fields.b;
            uVar20._4_4_ = (__this->fields).BackgroundEmptyColor.fields.a;
LAB_040b19e2:
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (uVar19,uVar20,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
            if (0.0 < (__this->fields)._gasAnimationTimeLeft) {
              return;
            }
            UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasBackground,method_00);
            UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasFillLeft,method_01);
            UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasFillRight,method_02);
            return;
          }
        }
        else if (value <= 0.15) {
          pUVar18 = (__this->fields)._gasFillLeft;
          if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
            uVar6._0_4_ = (__this->fields).FillVeryLowColor.fields.r;
            uVar6._4_4_ = (__this->fields).FillVeryLowColor.fields.g;
            uVar7._0_4_ = (__this->fields).FillVeryLowColor.fields.b;
            uVar7._4_4_ = (__this->fields).FillVeryLowColor.fields.a;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (uVar6,uVar7,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
            pUVar18 = (__this->fields)._gasFillRight;
            if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
              uVar8._0_4_ = (__this->fields).FillVeryLowColor.fields.r;
              uVar8._4_4_ = (__this->fields).FillVeryLowColor.fields.g;
              uVar9._0_4_ = (__this->fields).FillVeryLowColor.fields.b;
              uVar9._4_4_ = (__this->fields).FillVeryLowColor.fields.a;
              (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                        (uVar8,uVar9,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
              pUVar18 = (__this->fields)._gasBackground;
              if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                uVar10._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
                uVar10._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
                uVar11._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
                uVar11._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
                (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                          (uVar10,uVar11,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
                UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasBackground,method_03)
                ;
                UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillLeft,method_04);
                UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillRight,method_05);
                return;
              }
            }
          }
        }
        else {
          pUVar18 = (__this->fields)._gasFillLeft;
          if (value <= 0.3) {
            if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
              uVar12._0_4_ = (__this->fields).FillLowColor.fields.r;
              uVar12._4_4_ = (__this->fields).FillLowColor.fields.g;
              uVar13._0_4_ = (__this->fields).FillLowColor.fields.b;
              uVar13._4_4_ = (__this->fields).FillLowColor.fields.a;
              (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                        (uVar12,uVar13,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
              pUVar18 = (__this->fields)._gasFillRight;
              if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                uVar14._0_4_ = (__this->fields).FillLowColor.fields.r;
                uVar14._4_4_ = (__this->fields).FillLowColor.fields.g;
                uVar15._0_4_ = (__this->fields).FillLowColor.fields.b;
                uVar15._4_4_ = (__this->fields).FillLowColor.fields.a;
                (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                          (uVar14,uVar15,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
                pUVar18 = (__this->fields)._gasBackground;
                if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                  uVar19._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
                  uVar19._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
                  uVar20._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
                  uVar20._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
                  goto LAB_040b19e2;
                }
              }
            }
          }
          else if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
            uVar2._0_4_ = (__this->fields).FillNormalColor.fields.r;
            uVar2._4_4_ = (__this->fields).FillNormalColor.fields.g;
            uVar3._0_4_ = (__this->fields).FillNormalColor.fields.b;
            uVar3._4_4_ = (__this->fields).FillNormalColor.fields.a;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (uVar2,uVar3,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
            pUVar18 = (__this->fields)._gasFillRight;
            if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
              uVar4._0_4_ = (__this->fields).FillNormalColor.fields.r;
              uVar4._4_4_ = (__this->fields).FillNormalColor.fields.g;
              uVar5._0_4_ = (__this->fields).FillNormalColor.fields.b;
              uVar5._4_4_ = (__this->fields).FillNormalColor.fields.a;
              (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                        (uVar4,uVar5,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
              pUVar18 = (__this->fields)._gasBackground;
              if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                uVar19._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
                uVar19._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
                uVar20._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
                uVar20._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
                goto LAB_040b19e2;
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


// UI.HUDBottomHandler$$UpdateBlade
// il2cpp: void UI_HUDBottomHandler__UpdateBlade (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b1d20

void UI_HUDBottomHandler__UpdateBlade(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  Characters_Human_o *pCVar13;
  System_Object_array *pSVar14;
  Il2CppClass *pIVar15;
  UnityEngine_UI_Image_o *pUVar16;
  UnityEngine_GameObject_array *pUVar17;
  long lVar18;
  bool_conflict bVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Animator_o *__this_00;
  UnityEngine_Object_o *pUVar21;
  UnityEngine_Transform_o *pUVar22;
  System_Collections_Generic_List_GameObject__o *pSVar23;
  int iVar24;
  UnityEngine_UI_Image_o *pUVar25;
  float value;
  undefined8 uVar26;
  UnityEngine_Quaternion_o value_00;
  
  if (DAT_05704650 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Prefabs/InGame/HUDBladeAmmo");
    DAT_05704650 = '\x01';
  }
  pCVar13 = (__this->fields)._human;
  if ((pCVar13 == (Characters_Human_o *)0x0) ||
     (pSVar14 = (pCVar13->fields).crossfadeCache, pSVar14 == (System_Object_array *)0x0))
  goto LAB_040b24ed;
  pIVar15 = (pSVar14->obj).klass;
  bVar10 = (TypeInfo_BladeWeapon->_2).naturalAligment;
  if (((pIVar15->_2).naturalAligment < bVar10) ||
     ((pIVar15->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_BladeWeapon)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pSVar14);
  }
  pUVar25 = (__this->fields)._bladeFillLeft;
  if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
  value = *(float *)(pSVar14->m_Items + 4) / *(float *)((long)pSVar14->m_Items + 0x1c);
  pUVar20 = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_GameObject_o *)0x0) goto LAB_040b24ed;
  bVar19 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
  if ((char)bVar19 != '\0') {
    pUVar25 = (__this->fields)._bladeFillRight;
    if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
    pUVar16 = (__this->fields)._bladeFillLeft;
    UnityEngine_UI_Image__set_fillAmount(pUVar25,value,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
    UnityEngine_UI_Image__set_fillAmount(pUVar16,value,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeFillLeft;
    if (value <= 0.25) {
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
      uVar6._0_4_ = (__this->fields).FillVeryLowColor.fields.r;
      uVar6._4_4_ = (__this->fields).FillVeryLowColor.fields.g;
      uVar7._0_4_ = (__this->fields).FillVeryLowColor.fields.b;
      uVar7._4_4_ = (__this->fields).FillVeryLowColor.fields.a;
      (*(pUVar25->klass->vtable)._23_set_color.methodPtr)
                (uVar6,uVar7,pUVar25,(pUVar25->klass->vtable)._23_set_color.method);
      pUVar25 = (__this->fields)._bladeFillRight;
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
      uVar8._0_4_ = (__this->fields).FillVeryLowColor.fields.r;
      uVar8._4_4_ = (__this->fields).FillVeryLowColor.fields.g;
      uVar9._0_4_ = (__this->fields).FillVeryLowColor.fields.b;
      uVar9._4_4_ = (__this->fields).FillVeryLowColor.fields.a;
      (*(pUVar25->klass->vtable)._23_set_color.methodPtr)
                (uVar8,uVar9,pUVar25,(pUVar25->klass->vtable)._23_set_color.method);
      pUVar25 = (__this->fields)._bladeBackground;
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
      uVar26._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar26._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
    }
    else {
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
      uVar2._0_4_ = (__this->fields).BladeFillNormalColor.fields.r;
      uVar2._4_4_ = (__this->fields).BladeFillNormalColor.fields.g;
      uVar3._0_4_ = (__this->fields).BladeFillNormalColor.fields.b;
      uVar3._4_4_ = (__this->fields).BladeFillNormalColor.fields.a;
      (*(pUVar25->klass->vtable)._23_set_color.methodPtr)
                (uVar2,uVar3,pUVar25,(pUVar25->klass->vtable)._23_set_color.method);
      pUVar25 = (__this->fields)._bladeFillRight;
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
      uVar4._0_4_ = (__this->fields).BladeFillNormalColor.fields.r;
      uVar4._4_4_ = (__this->fields).BladeFillNormalColor.fields.g;
      uVar5._0_4_ = (__this->fields).BladeFillNormalColor.fields.b;
      uVar5._4_4_ = (__this->fields).BladeFillNormalColor.fields.a;
      (*(pUVar25->klass->vtable)._23_set_color.methodPtr)
                (uVar4,uVar5,pUVar25,(pUVar25->klass->vtable)._23_set_color.method);
      pUVar25 = (__this->fields)._bladeBackground;
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
      uVar26._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
      uVar26._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
    }
    (*(pUVar25->klass->vtable)._23_set_color.methodPtr)(uVar26);
  }
  if (0.0 < value) {
LAB_040b1ffb:
    if (value <= 0.0) goto LAB_040b220e;
    pUVar25 = (__this->fields)._bladeBackground;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    bVar19 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
    if (((char)bVar19 != '\0') || (0.0 < (__this->fields)._reloadAnimationTimeLeft))
    goto LAB_040b220e;
    pUVar25 = (__this->fields)._bladeBackground;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeReload;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeOut;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeFillLeft;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeFillRight;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeFillRight;
    if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
    pUVar16 = (__this->fields)._bladeFillLeft;
    UnityEngine_UI_Image__set_fillAmount(pUVar25,value,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b24ed;
    UnityEngine_UI_Image__set_fillAmount(pUVar16,value,(MethodInfo *)0x0);
    pSVar23 = (__this->fields)._bladeAmmoLeft;
  }
  else {
    pUVar25 = (__this->fields)._bladeOut;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    bVar19 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
    if ((char)bVar19 != '\0') goto LAB_040b1ffb;
    pUVar25 = (__this->fields)._bladeReload;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    bVar19 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
    if ((char)bVar19 != '\0') goto LAB_040b1ffb;
    pUVar25 = (__this->fields)._bladeOut;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_GameObject__SetActive(pUVar20,1,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeOut;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (__this_00 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar25,MethodInfo_Animator_GetComponent_Animator),
       __this_00 == (UnityEngine_Animator_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
    pUVar25 = (__this->fields)._bladeBackground;
    if ((pUVar25 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b24ed;
    UnityEngine_GameObject__SetActive(pUVar20,0,(MethodInfo *)0x0);
LAB_040b220e:
    pSVar23 = (__this->fields)._bladeAmmoLeft;
  }
  if (pSVar23 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    iVar11 = (pSVar23->fields)._size;
    iVar24 = *(int *)(pSVar14->m_Items + 5);
    if (iVar24 < iVar11) {
      if (iVar11 - iVar24 < 1) {
        return;
      }
      iVar24 = 0;
      do {
        pUVar21 = (UnityEngine_Object_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar23,0,MethodInfo_GameObject_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(pUVar21,(MethodInfo *)0x0);
        pSVar23 = (__this->fields)._bladeAmmoRight;
        if (pSVar23 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
        pUVar21 = (UnityEngine_Object_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar23,0,MethodInfo_GameObject_get_Item);
        UnityEngine_Object__Destroy(pUVar21,(MethodInfo *)0x0);
        pSVar23 = (__this->fields)._bladeAmmoLeft;
        if (pSVar23 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar23,0,MethodInfo_Void_RemoveAt);
        pSVar23 = (__this->fields)._bladeAmmoRight;
        if (pSVar23 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar23,0,MethodInfo_Void_RemoveAt);
        iVar24 = iVar24 + 1;
        if (iVar11 - *(int *)(pSVar14->m_Items + 5) <= iVar24) {
          return;
        }
        pSVar23 = (__this->fields)._bladeAmmoLeft;
      } while (pSVar23 != (System_Collections_Generic_List_GameObject__o *)0x0);
    }
    else {
      if (iVar24 <= iVar11) {
        return;
      }
      if (iVar24 - iVar11 < 1) {
        return;
      }
      pUVar20 = (__this->fields)._bladeAmmoGroupLeft;
      if (pUVar20 != (UnityEngine_GameObject_o *)0x0) {
        iVar24 = 0;
        do {
          pUVar22 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
          pUVar20 = UI_ElementFactory__InstantiateAndBind(pUVar22,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
          lVar18 = MethodInfo_Void_Add;
          if (pSVar23 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          piVar1 = &(pSVar23->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar17 = (pSVar23->fields)._items;
          if (pUVar17 == (UnityEngine_GameObject_array *)0x0) break;
          uVar12 = (pSVar23->fields)._size;
          if (uVar12 < (uint)pUVar17->max_length) {
            (pSVar23->fields)._size = uVar12 + 1;
            pUVar17->m_Items[(int)uVar12] = pUVar20;
            il2cpp_runtime_glue(pUVar17->m_Items + (int)uVar12);
            pUVar20 = (__this->fields)._bladeAmmoGroupRight;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar23,(Il2CppObject *)pUVar20,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            pUVar20 = (__this->fields)._bladeAmmoGroupRight;
          }
          if (pUVar20 == (UnityEngine_GameObject_o *)0x0) break;
          pUVar22 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
          pUVar20 = UI_ElementFactory__InstantiateAndBind(pUVar22,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
          if (pUVar20 == (UnityEngine_GameObject_o *)0x0) break;
          pUVar22 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
          value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0
                               );
          if (pUVar22 == (UnityEngine_Transform_o *)0x0) break;
          UnityEngine_Transform__set_localRotation(pUVar22,value_00,(MethodInfo *)0x0);
          lVar18 = MethodInfo_Void_Add;
          pSVar23 = (__this->fields)._bladeAmmoRight;
          if (pSVar23 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          piVar1 = &(pSVar23->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar17 = (pSVar23->fields)._items;
          if (pUVar17 == (UnityEngine_GameObject_array *)0x0) break;
          uVar12 = (pSVar23->fields)._size;
          if (uVar12 < (uint)pUVar17->max_length) {
            (pSVar23->fields)._size = uVar12 + 1;
            pUVar17->m_Items[(int)uVar12] = pUVar20;
            il2cpp_runtime_glue(pUVar17->m_Items + (int)uVar12);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar23,(Il2CppObject *)pUVar20,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar24 + 1;
          if (*(int *)(pSVar14->m_Items + 5) - iVar11 <= iVar24) {
            return;
          }
          pUVar20 = (__this->fields)._bladeAmmoGroupLeft;
          pSVar23 = (__this->fields)._bladeAmmoLeft;
        } while (pUVar20 != (UnityEngine_GameObject_o *)0x0);
      }
    }
  }
LAB_040b24ed:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$UpdateAPG
// il2cpp: void UI_HUDBottomHandler__UpdateAPG (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b2510

void UI_HUDBottomHandler__UpdateAPG(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  int iVar14;
  Characters_Human_o *pCVar15;
  System_Object_array *pSVar16;
  Il2CppClass *pIVar17;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_UI_Text_o *pUVar18;
  UnityEngine_UI_Text_o *pUVar19;
  bool_conflict bVar20;
  System_String_o *pSVar21;
  UnityEngine_GameObject_o *pUVar22;
  UnityEngine_UI_Image_o *pUVar23;
  float value;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (DAT_05704651 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05704651 = '\x01';
  }
  pCVar15 = (__this->fields)._human;
  if ((pCVar15 != (Characters_Human_o *)0x0) &&
     (pSVar16 = (pCVar15->fields).crossfadeCache, pSVar16 != (System_Object_array *)0x0)) {
    pIVar17 = (pSVar16->obj).klass;
    bVar13 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
    if (((pIVar17->_2).naturalAligment < bVar13) ||
       ((pIVar17->_2).typeHierarchy[(ulong)bVar13 - 1] != TypeInfo_AmmoWeapon)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar16);
    }
    iVar14 = *(int *)((long)pSVar16->m_Items + 0x24);
    if (iVar14 < 1) {
      if (*(int *)(pSVar16->m_Items + 5) == -1) {
        value = 1.0;
        pUVar23 = (__this->fields)._ammoFillRight;
      }
      else {
        value = 0.0;
        pUVar23 = (__this->fields)._ammoFillRight;
      }
    }
    else {
      value = (float)*(int *)(pSVar16->m_Items + 5) / (float)iVar14;
      pUVar23 = (__this->fields)._ammoFillRight;
    }
    if (pUVar23 != (UnityEngine_UI_Image_o *)0x0) {
      __this_00 = (__this->fields)._ammoFillLeft;
      UnityEngine_UI_Image__set_fillAmount(pUVar23,value,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_fillAmount(__this_00,value,(MethodInfo *)0x0);
        if (value <= 0.0) {
          pUVar23 = (__this->fields)._apgBackground;
          if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
          uVar5._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
          uVar5._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
          uVar6._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
          uVar6._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
          (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                    (uVar5,uVar6,pUVar23,(pUVar23->klass->vtable)._23_set_color.method);
          pUVar23 = (__this->fields)._apgAmmoBackground;
          if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
          uVar7._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
          uVar7._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
          uVar8._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
          uVar8._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
          (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                    (uVar7,uVar8,pUVar23,(pUVar23->klass->vtable)._23_set_color.method);
          pUVar23 = (__this->fields)._apgShoot;
          if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
          uVar24._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
          uVar24._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
          uVar25._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
          uVar25._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
        }
        else {
          pUVar23 = (__this->fields)._apgBackground;
          if (value <= 0.5) {
            if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
            uVar9._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
            uVar9._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
            uVar10._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
            uVar10._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                      (uVar9,uVar10,pUVar23,(pUVar23->klass->vtable)._23_set_color.method);
            pUVar23 = (__this->fields)._apgAmmoBackground;
            if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
            uVar11._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
            uVar11._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
            uVar12._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
            uVar12._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                      (uVar11,uVar12,pUVar23,(pUVar23->klass->vtable)._23_set_color.method);
            pUVar23 = (__this->fields)._apgShoot;
            if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
            uVar24._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
            uVar24._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
            uVar25._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
            uVar25._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
          }
          else {
            if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
            uVar1._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
            uVar1._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
            uVar2._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
            uVar2._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
            (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                      (uVar1,uVar2,pUVar23,(pUVar23->klass->vtable)._23_set_color.method);
            pUVar23 = (__this->fields)._apgAmmoBackground;
            if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
            uVar3._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
            uVar3._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
            uVar4._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
            uVar4._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
            (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                      (uVar3,uVar4,pUVar23,(pUVar23->klass->vtable)._23_set_color.method);
            pUVar23 = (__this->fields)._apgShoot;
            if (pUVar23 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b29d9;
            uVar24._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
            uVar24._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
            uVar25._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
            uVar25._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
          }
        }
        (*(pUVar23->klass->vtable)._23_set_color.methodPtr)(uVar24,uVar25);
        pUVar18 = (__this->fields)._ammoLabelLeft;
        pUVar19 = (__this->fields)._ammoLabelRight;
        pSVar21 = System_Int32__ToString((int32_t)(pSVar16->m_Items + 4),(MethodInfo *)0x0);
        if ((pUVar19 != (UnityEngine_UI_Text_o *)0x0) &&
           ((*(pUVar19->klass->vtable)._75_set_text.methodPtr)
                      (pUVar19,pSVar21,(pUVar19->klass->vtable)._75_set_text.method),
           pUVar18 != (UnityEngine_UI_Text_o *)0x0)) {
          (*(pUVar18->klass->vtable)._75_set_text.methodPtr)
                    (pUVar18,pSVar21,(pUVar18->klass->vtable)._75_set_text.method);
          pUVar18 = (__this->fields)._ammoLabelLeft;
          if (*(int *)(pSVar16->m_Items + 4) == 0) {
            if (pUVar18 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b29d9;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (0x3f800000,0x3f80000000000000,pUVar18,
                       (pUVar18->klass->vtable)._23_set_color.method);
            pUVar18 = (__this->fields)._ammoLabelRight;
            if (pUVar18 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b29d9;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f80000000000000);
            pUVar23 = (__this->fields)._apgBackground;
          }
          else {
            if (pUVar18 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b29d9;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (0x3f80000000000000,0x3f80000000000000,pUVar18,
                       (pUVar18->klass->vtable)._23_set_color.method);
            pUVar18 = (__this->fields)._ammoLabelRight;
            if (pUVar18 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b29d9;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (0x3f80000000000000,0x3f80000000000000);
            pUVar23 = (__this->fields)._apgBackground;
          }
          if ((pUVar23 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar22 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
             pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
            bVar20 = UnityEngine_GameObject__get_activeSelf(pUVar22,(MethodInfo *)0x0);
            if (((char)bVar20 != '\0') ||
               ((0.0 < (__this->fields)._reloadAnimationTimeLeft ||
                (0.0 < (__this->fields)._shootAnimationTimeLeft)))) {
              return;
            }
            pUVar23 = (__this->fields)._apgBackground;
            if ((pUVar23 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar22 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
               pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar22,1,(MethodInfo *)0x0);
              pUVar23 = (__this->fields)._apgAmmoBackground;
              if ((pUVar23 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar22 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
                 pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar22,0,(MethodInfo *)0x0);
                pUVar23 = (__this->fields)._apgReload;
                if ((pUVar23 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar22 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
                   pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar22,0,(MethodInfo *)0x0);
                  pUVar23 = (__this->fields)._apgShoot;
                  if ((pUVar23 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar22 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
                     pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar22,0,(MethodInfo *)0x0);
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
LAB_040b29d9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$UpdateAHSS
// il2cpp: void UI_HUDBottomHandler__UpdateAHSS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b29f0

void UI_HUDBottomHandler__UpdateAHSS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Il2CppObject **ppIVar1;
  UnityEngine_Color_o *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  Characters_Human_o *pCVar21;
  System_Object_array *pSVar22;
  Il2CppClass *pIVar23;
  UnityEngine_UI_Text_o *pUVar24;
  UnityEngine_UI_Text_o *pUVar25;
  UnityEngine_Color_o *pUVar26;
  int iVar27;
  bool_conflict bVar28;
  System_String_o *pSVar29;
  UnityEngine_GameObject_o *pUVar30;
  float *pfVar31;
  UnityEngine_UI_Image_o *pUVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  if (DAT_05704652 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    DAT_05704652 = '\x01';
  }
  pCVar21 = (__this->fields)._human;
  if ((pCVar21 == (Characters_Human_o *)0x0) ||
     (pSVar22 = (pCVar21->fields).crossfadeCache, pSVar22 == (System_Object_array *)0x0))
  goto LAB_040b31e4;
  pIVar23 = (pSVar22->obj).klass;
  bVar20 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
  if (((pIVar23->_2).naturalAligment < bVar20) ||
     ((pIVar23->_2).typeHierarchy[(ulong)bVar20 - 1] != TypeInfo_AmmoWeapon)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pSVar22);
  }
  pUVar24 = (__this->fields)._ammoLabelLeft;
  pUVar25 = (__this->fields)._ammoLabelRight;
  ppIVar1 = pSVar22->m_Items + 4;
  pSVar29 = System_Int32__ToString((int32_t)ppIVar1,(MethodInfo *)0x0);
  if ((pUVar25 == (UnityEngine_UI_Text_o *)0x0) ||
     ((*(pUVar25->klass->vtable)._75_set_text.methodPtr)
                (pUVar25,pSVar29,(pUVar25->klass->vtable)._75_set_text.method),
     pUVar24 == (UnityEngine_UI_Text_o *)0x0)) goto LAB_040b31e4;
  (*(pUVar24->klass->vtable)._75_set_text.methodPtr)
            (pUVar24,pSVar29,(pUVar24->klass->vtable)._75_set_text.method);
  pUVar24 = (__this->fields)._ammoLabelLeft;
  if (*(int *)ppIVar1 == 0) {
    if (pUVar24 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b31e4;
    (*(pUVar24->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f80000000000000,pUVar24,(pUVar24->klass->vtable)._23_set_color.method);
    pUVar24 = (__this->fields)._ammoLabelRight;
    if (pUVar24 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b31e4;
    (*(pUVar24->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f80000000000000,pUVar24,(pUVar24->klass->vtable)._23_set_color.method);
    iVar27 = *(int *)(pSVar22->m_Items + 5);
    if (iVar27 == 1) goto LAB_040b2c58;
LAB_040b2b3a:
    if (iVar27 == 0) {
      pUVar32 = (__this->fields)._ahssEmptyLeft;
      if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
      uVar3._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar3._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar4._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar4._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
                (uVar3,uVar4,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
      pUVar32 = (__this->fields)._ahssEmptyRight;
      if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
      uVar5._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar5._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar6._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar6._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
                (uVar5,uVar6,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
      pUVar32 = (__this->fields)._ahssShootLeft;
      if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
      uVar7._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar7._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar8._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar8._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
                (uVar7,uVar8,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
      pUVar32 = (__this->fields)._ahssShootRight;
      if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
      uVar33._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar33._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar34._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar34._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    }
    else {
      pUVar32 = (__this->fields)._ahssBackgroundLeft;
      if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
      uVar18._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
      uVar18._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
      uVar19._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
      uVar19._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
      (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
                (uVar18,uVar19,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
      pUVar32 = (__this->fields)._ahssBackgroundRight;
      if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
      uVar33._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
      uVar33._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
      uVar34._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
      uVar34._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
    }
  }
  else {
    if (pUVar24 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b31e4;
    (*(pUVar24->klass->vtable)._23_set_color.methodPtr)
              (0x3f80000000000000,0x3f80000000000000,pUVar24,
               (pUVar24->klass->vtable)._23_set_color.method);
    pUVar24 = (__this->fields)._ammoLabelRight;
    if (pUVar24 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b31e4;
    (*(pUVar24->klass->vtable)._23_set_color.methodPtr)
              (0x3f80000000000000,0x3f80000000000000,pUVar24,
               (pUVar24->klass->vtable)._23_set_color.method);
    iVar27 = *(int *)(pSVar22->m_Items + 5);
    if (iVar27 != 1) goto LAB_040b2b3a;
LAB_040b2c58:
    pUVar32 = (__this->fields)._ahssEmptyLeft;
    if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
    pUVar2 = &(__this->fields).BackgroundLowColor;
    pfVar31 = &(__this->fields).BackgroundVeryLowColor.fields.b;
    pUVar26 = &(__this->fields).BackgroundVeryLowColor;
    if (0 < *(int *)ppIVar1) {
      pfVar31 = &(__this->fields).BackgroundLowColor.fields.b;
      pUVar26 = pUVar2;
    }
    uVar9._0_4_ = (pUVar26->fields).r;
    uVar9._4_4_ = (pUVar26->fields).g;
    (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
              (uVar9,*(undefined8 *)pfVar31,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
    pUVar32 = (__this->fields)._ahssEmptyRight;
    if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
    uVar10._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar10._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar11._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar11._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
    (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
              (uVar10,uVar11,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
    pUVar32 = (__this->fields)._ahssBackgroundLeft;
    if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
    uVar12._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar12._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar13._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar13._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
    (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
              (uVar12,uVar13,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
    pUVar32 = (__this->fields)._ahssBackgroundRight;
    if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
    uVar14._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar14._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar15._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar15._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
    (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
              (uVar14,uVar15,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
    pUVar32 = (__this->fields)._ahssShootLeft;
    if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
    uVar16._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar16._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar17._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar17._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
    (*(pUVar32->klass->vtable)._23_set_color.methodPtr)
              (uVar16,uVar17,pUVar32,(pUVar32->klass->vtable)._23_set_color.method);
    pUVar32 = (__this->fields)._ahssShootRight;
    if (pUVar32 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b31e4;
    uVar34._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar34._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
    uVar33._0_4_ = (pUVar2->fields).r;
    uVar33._4_4_ = (pUVar2->fields).g;
  }
  (*(pUVar32->klass->vtable)._23_set_color.methodPtr)(uVar33,uVar34);
  pUVar32 = (__this->fields)._ahssEmptyLeft;
  if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar30 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
     pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
  bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar30,(MethodInfo *)0x0);
  if (((char)bVar28 != '\0') && (1 < *(int *)(pSVar22->m_Items + 5))) {
    pUVar32 = (__this->fields)._ahssEmptyLeft;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,0,(MethodInfo *)0x0);
    pUVar32 = (__this->fields)._ahssBackgroundLeft;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,1,(MethodInfo *)0x0);
  }
  pUVar32 = (__this->fields)._ahssEmptyRight;
  if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar30 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
     pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
  bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar30,(MethodInfo *)0x0);
  if (((char)bVar28 != '\0') && (0 < *(int *)(pSVar22->m_Items + 5))) {
    pUVar32 = (__this->fields)._ahssEmptyRight;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,0,(MethodInfo *)0x0);
    pUVar32 = (__this->fields)._ahssBackgroundRight;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,1,(MethodInfo *)0x0);
  }
  pUVar32 = (__this->fields)._ahssShootLeft;
  if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar30 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
     pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
  bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar30,(MethodInfo *)0x0);
  if (((char)bVar28 != '\0') && ((__this->fields)._shootAnimationTimeLeft <= 0.0)) {
    pUVar32 = (__this->fields)._ahssShootLeft;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,0,(MethodInfo *)0x0);
    pUVar32 = (__this->fields)._ahssEmptyLeft;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,1,(MethodInfo *)0x0);
  }
  pUVar32 = (__this->fields)._ahssShootRight;
  if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar30 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
     pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
  bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar30,(MethodInfo *)0x0);
  if (((char)bVar28 != '\0') && ((__this->fields)._shootAnimationTimeLeft <= 0.0)) {
    pUVar32 = (__this->fields)._ahssShootRight;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,0,(MethodInfo *)0x0);
    pUVar32 = (__this->fields)._ahssEmptyRight;
    if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
    UnityEngine_GameObject__SetActive(pUVar30,1,(MethodInfo *)0x0);
  }
  pUVar32 = (__this->fields)._ahssReloadLeft;
  if ((pUVar32 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar30 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
     pUVar30 != (UnityEngine_GameObject_o *)0x0)) {
    bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar30,(MethodInfo *)0x0);
    if ((char)bVar28 == '\0') {
      pUVar32 = (__this->fields)._ahssReloadRight;
      if ((pUVar32 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar30 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
         pUVar30 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b31e4;
      bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar30,(MethodInfo *)0x0);
      if ((char)bVar28 == '\0') {
        return;
      }
    }
    if (0.0 < (__this->fields)._reloadAnimationTimeLeft) {
      return;
    }
    pUVar32 = (__this->fields)._ahssReloadLeft;
    if ((pUVar32 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar30 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
       pUVar30 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar30,0,(MethodInfo *)0x0);
      pUVar32 = (__this->fields)._ahssReloadRight;
      if ((pUVar32 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar30 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
         pUVar30 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar30,0,(MethodInfo *)0x0);
        pUVar32 = (__this->fields)._ahssBackgroundRight;
        if ((pUVar32 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar30 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
           pUVar30 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (pUVar30,(uint)(0 < *(int *)(pSVar22->m_Items + 5)),(MethodInfo *)0x0);
          pUVar32 = (__this->fields)._ahssBackgroundLeft;
          if ((pUVar32 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar30 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
             pUVar30 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive
                      (pUVar30,(uint)(1 < *(int *)(pSVar22->m_Items + 5)),(MethodInfo *)0x0);
            pUVar32 = (__this->fields)._ahssEmptyRight;
            if ((pUVar32 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar30 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
               pUVar30 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive
                        (pUVar30,(uint)(*(int *)(pSVar22->m_Items + 5) < 1),(MethodInfo *)0x0);
              pUVar32 = (__this->fields)._ahssEmptyLeft;
              if ((pUVar32 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar30 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar32,(MethodInfo *)0x0),
                 pUVar30 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive
                          (pUVar30,(uint)(*(int *)(pSVar22->m_Items + 5) < 2),(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_040b31e4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$UpdateTS
// il2cpp: void UI_HUDBottomHandler__UpdateTS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b3200

void UI_HUDBottomHandler__UpdateTS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  Characters_Human_o *pCVar9;
  System_Object_array *__this_00;
  Il2CppClass *pIVar10;
  long lVar11;
  UnityEngine_UI_Image_o *pUVar12;
  UnityEngine_UI_Text_o *pUVar13;
  UnityEngine_UI_Text_o *pUVar14;
  bool_conflict bVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Animator_o *__this_01;
  System_String_o *pSVar17;
  UnityEngine_UI_Image_o *pUVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (DAT_05704653 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearWeapon);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704653 = '\x01';
  }
  pCVar9 = (__this->fields)._human;
  if (pCVar9 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar9->fields).crossfadeCache;
    if (__this_00 != (System_Object_array *)0x0) {
      pIVar10 = (__this_00->obj).klass;
      bVar7 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      if (((pIVar10->_2).naturalAligment < bVar7) ||
         ((pIVar10->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_ThunderspearWeapon)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
    }
    lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if ((((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x58), lVar11 != 0)) &&
        (lVar11 = *(long *)(lVar11 + 0x48), lVar11 != 0)) &&
       (__this_00 != (System_Object_array *)0x0)) {
      if (*(char *)(lVar11 + 0x11) == '\0') {
        iVar8 = *(int *)((long)__this_00->m_Items + 0x24);
        if (iVar8 < 1) {
          if (*(int *)(__this_00->m_Items + 5) == -1) {
            fVar19 = 1.0;
            pUVar18 = (__this->fields)._ammoFillRight;
          }
          else {
            fVar19 = 0.0;
            pUVar18 = (__this->fields)._ammoFillRight;
          }
        }
        else {
          fVar19 = (float)*(int *)(__this_00->m_Items + 5) / (float)iVar8;
          pUVar18 = (__this->fields)._ammoFillRight;
        }
        if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
        pUVar12 = (__this->fields)._ammoFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar19,(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
        UnityEngine_UI_Image__set_fillAmount(pUVar12,fVar19,(MethodInfo *)0x0);
        if (fVar19 <= 0.0) {
          pUVar18 = (__this->fields)._tsBackground;
          if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
          uVar3._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
          uVar3._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
          uVar4._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
          uVar4._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
          (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                    (uVar3,uVar4,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
          pUVar18 = (__this->fields)._tsShoot;
          if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
          uVar20._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
          uVar20._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
          uVar21._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
          uVar21._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
        }
        else {
          pUVar18 = (__this->fields)._tsBackground;
          if (fVar19 <= 0.5) {
            if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
            uVar5._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
            uVar5._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
            uVar6._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
            uVar6._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (uVar5,uVar6,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
            pUVar18 = (__this->fields)._tsShoot;
            if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
            uVar20._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
            uVar20._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
            uVar21._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
            uVar21._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
          }
          else {
            if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
            uVar1._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
            uVar1._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
            uVar2._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
            uVar2._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
            (*(pUVar18->klass->vtable)._23_set_color.methodPtr)
                      (uVar1,uVar2,pUVar18,(pUVar18->klass->vtable)._23_set_color.method);
            pUVar18 = (__this->fields)._tsShoot;
            if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
            uVar20._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
            uVar20._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
            uVar21._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
            uVar21._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
          }
        }
        (*(pUVar18->klass->vtable)._23_set_color.methodPtr)(uVar20,uVar21);
        pUVar13 = (__this->fields)._ammoLabelLeft;
        pUVar14 = (__this->fields)._ammoLabelRight;
        pSVar17 = System_Int32__ToString((int32_t)(__this_00->m_Items + 4),(MethodInfo *)0x0);
        if ((pUVar14 == (UnityEngine_UI_Text_o *)0x0) ||
           ((*(pUVar14->klass->vtable)._75_set_text.methodPtr)
                      (pUVar14,pSVar17,(pUVar14->klass->vtable)._75_set_text.method),
           pUVar13 == (UnityEngine_UI_Text_o *)0x0)) goto LAB_040b38a6;
        (*(pUVar13->klass->vtable)._75_set_text.methodPtr)
                  (pUVar13,pSVar17,(pUVar13->klass->vtable)._75_set_text.method);
        pUVar13 = (__this->fields)._ammoLabelLeft;
        if (*(int *)(__this_00->m_Items + 4) == 0) {
          if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b38a6;
          (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                    (0x3f800000,0x3f80000000000000,pUVar13,
                     (pUVar13->klass->vtable)._23_set_color.method);
          pUVar13 = (__this->fields)._ammoLabelRight;
          if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b38a6;
          (*(pUVar13->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f80000000000000);
          pUVar18 = (__this->fields)._tsBackground;
        }
        else {
          if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b38a6;
          (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                    (0x3f80000000000000,0x3f80000000000000,pUVar13,
                     (pUVar13->klass->vtable)._23_set_color.method);
          pUVar13 = (__this->fields)._ammoLabelRight;
          if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040b38a6;
          (*(pUVar13->klass->vtable)._23_set_color.methodPtr)(0x3f80000000000000,0x3f80000000000000)
          ;
          pUVar18 = (__this->fields)._tsBackground;
        }
        if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
        bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          return;
        }
        if (0.0 < (__this->fields)._reloadAnimationTimeLeft) {
          return;
        }
        if (0.0 < (__this->fields)._shootAnimationTimeLeft) {
          return;
        }
        pUVar18 = (__this->fields)._tsBackground;
        if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
        UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
        pUVar18 = (__this->fields)._tsReload;
        if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
        UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
        pUVar18 = (__this->fields)._tsShoot;
        if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
        UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
        pUVar18 = (__this->fields)._ammoFillLeft;
        if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
        UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
        pUVar18 = (__this->fields)._ammoFillRight;
      }
      else {
        fVar19 = Characters_BaseUseable__GetCooldownRatio
                           ((Characters_BaseUseable_o *)__this_00,(MethodInfo *)0x0);
        pUVar18 = (__this->fields)._bombFillRight;
        if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
        pUVar12 = (__this->fields)._bombFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar19,(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b38a6;
        UnityEngine_UI_Image__set_fillAmount(pUVar12,fVar19,(MethodInfo *)0x0);
        if (((bool)(char)(__this->fields)._bombInCooldown != fVar19 < 1.0) &&
           (*(bool *)&(__this->fields)._bombInCooldown = fVar19 < 1.0, 1.0 <= fVar19)) {
          pUVar18 = (__this->fields)._tsBombReload;
          if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
             (pUVar16 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
             pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
          bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            pUVar18 = (__this->fields)._tsBombBackground;
            if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
               (pUVar16 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
               pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
            UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
            pUVar18 = (__this->fields)._tsBombReload;
            if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
               (pUVar16 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
               pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
            UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
            pUVar18 = (__this->fields)._tsBombReload;
            if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
               (__this_01 = (UnityEngine_Animator_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar18,MethodInfo_Animator_GetComponent_Animator),
               __this_01 == (UnityEngine_Animator_o *)0x0)) goto LAB_040b38a6;
            UnityEngine_Animator__Update(__this_01,0.0,(MethodInfo *)0x0);
            (__this->fields)._reloadAnimationTimeLeft = 0.5;
          }
        }
        pUVar18 = (__this->fields)._tsBombBackground;
        if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
        bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
        if (((char)bVar15 != '\0') || (0.0 < (__this->fields)._reloadAnimationTimeLeft)) {
          return;
        }
        pUVar18 = (__this->fields)._tsBombReload;
        if ((pUVar18 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_GameObject_o *)0x0)) goto LAB_040b38a6;
        UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
        pUVar18 = (__this->fields)._tsBombBackground;
      }
      if ((pUVar18 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar16 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
         pUVar16 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_040b38a6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$UpdatePlayerTitan
// il2cpp: void UI_HUDBottomHandler__UpdatePlayerTitan (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b38c0

void UI_HUDBottomHandler__UpdatePlayerTitan(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  float fVar4;
  undefined8 extraout_RDX;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pCVar1 = (__this->fields)._playerTitan;
  if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
     (pUVar2 = (__this->fields)._staminaSlider, pUVar2 != (UnityEngine_UI_Slider_o *)0x0)) {
    fVar5 = (pCVar1->fields).ClimbCooldown / *(float *)((long)&(pCVar1->fields).HoldHuman + 4);
    fVar4 = 1.0;
    if (fVar5 <= 1.0) {
      fVar4 = fVar5;
    }
    (*(pUVar2->klass->vtable)._47_set_value.methodPtr)
              ((ulong)(-(uint)(0.0 <= fVar5) & (uint)fVar4),pUVar2,
               (pUVar2->klass->vtable)._47_set_value.method);
    pCVar1 = (__this->fields)._playerTitan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      pUVar3 = (__this->fields)._staminaFill;
      if ((pCVar1->fields).ClimbCooldown <= 1.0) {
        if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b397f;
        uVar6._0_4_ = (__this->fields).StaminaFillLowColor.fields.r;
        uVar6._4_4_ = (__this->fields).StaminaFillLowColor.fields.g;
        uVar7._0_4_ = (__this->fields).StaminaFillLowColor.fields.b;
        uVar7._4_4_ = (__this->fields).StaminaFillLowColor.fields.a;
      }
      else {
        if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040b397f;
        uVar6._0_4_ = (__this->fields).StaminaFillNormalColor.fields.r;
        uVar6._4_4_ = (__this->fields).StaminaFillNormalColor.fields.g;
        uVar7._0_4_ = (__this->fields).StaminaFillNormalColor.fields.b;
        uVar7._4_4_ = (__this->fields).StaminaFillNormalColor.fields.a;
      }
      vtable_dispatch = (pUVar3->klass->vtable)._23_set_color.methodPtr;
      (*vtable_dispatch)
                (uVar6,uVar7,pUVar3,(pUVar3->klass->vtable)._23_set_color.method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
LAB_040b397f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HUDBottomHandler$$.ctor
// il2cpp: void UI_HUDBottomHandler___ctor (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x40b3af0

void UI_HUDBottomHandler___ctor(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05704654 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_An);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Image__Animator);
    il2cpp_init_method_metadata(&"");
    DAT_05704654 = '\x01';
  }
  (__this->fields).FillLowColor.fields.r = 1.0;
  (__this->fields).FillLowColor.fields.g = 0.5;
  (__this->fields).FillLowColor.fields.b = 0.0;
  (__this->fields).FillLowColor.fields.a = 0.5;
  (__this->fields).BackgroundLowColor.fields.r = 1.0;
  (__this->fields).BackgroundLowColor.fields.g = 0.75;
  (__this->fields).BackgroundLowColor.fields.b = 0.5;
  (__this->fields).BackgroundLowColor.fields.a = 1.0;
  (__this->fields).FillVeryLowColor.fields.r = 1.0;
  (__this->fields).FillVeryLowColor.fields.g = 0.0;
  (__this->fields).FillVeryLowColor.fields.b = 0.0;
  (__this->fields).FillVeryLowColor.fields.a = 0.5;
  (__this->fields).BackgroundVeryLowColor.fields.r = 1.0;
  (__this->fields).BackgroundVeryLowColor.fields.g = 0.5;
  (__this->fields).BackgroundVeryLowColor.fields.b = 0.5;
  (__this->fields).BackgroundVeryLowColor.fields.a = 1.0;
  (__this->fields).FillNormalColor.fields.r = 1.0;
  (__this->fields).FillNormalColor.fields.g = 1.0;
  (__this->fields).FillNormalColor.fields.b = 1.0;
  (__this->fields).FillNormalColor.fields.a = 0.5;
  (__this->fields).BladeFillNormalColor.fields.r = 1.0;
  (__this->fields).BladeFillNormalColor.fields.g = 1.0;
  (__this->fields).BladeFillNormalColor.fields.b = 1.0;
  (__this->fields).BladeFillNormalColor.fields.a = 0.75;
  (__this->fields).BackgroundNormalColor.fields.r = 1.0;
  (__this->fields).BackgroundNormalColor.fields.g = 1.0;
  (__this->fields).BackgroundNormalColor.fields.b = 1.0;
  (__this->fields).BackgroundNormalColor.fields.a = 1.0;
  (__this->fields).BackgroundEmptyColor.fields.r = 1.0;
  (__this->fields).BackgroundEmptyColor.fields.g = 0.25;
  (__this->fields).BackgroundEmptyColor.fields.b = 0.25;
  (__this->fields).BackgroundEmptyColor.fields.a = 1.0;
  (__this->fields).StaminaFillNormalColor.fields.r = 0.77;
  (__this->fields).StaminaFillNormalColor.fields.g = 0.77;
  (__this->fields).StaminaFillNormalColor.fields.b = 0.77;
  (__this->fields).StaminaFillNormalColor.fields.a = 1.0;
  (__this->fields).StaminaFillLowColor.fields.r = 0.77;
  (__this->fields).StaminaFillLowColor.fields.g = 0.5;
  (__this->fields).StaminaFillLowColor.fields.b = 0.5;
  (__this->fields).StaminaFillLowColor.fields.a = 1.0;
  (__this->fields)._currentSpecialIcon = "";
  il2cpp_runtime_glue(&(__this->fields)._currentSpecialIcon);
  (__this->fields)._newSpecialIcon = "";
  il2cpp_runtime_glue(&(__this->fields)._newSpecialIcon);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_Image__Animator);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_An);
  (__this->fields)._AnimationCache =
       (System_Collections_Generic_Dictionary_Image__Animator__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._AnimationCache);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


