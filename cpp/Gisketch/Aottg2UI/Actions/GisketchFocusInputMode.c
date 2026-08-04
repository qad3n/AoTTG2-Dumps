// Type: Gisketch.Aottg2UI.Actions.GisketchFocusInputMode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusInputMode.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__add_Changed (System_Action_o* value, const MethodInfo* method);
// 0x3b95570

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__add_Changed(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (g_data_057a9ee9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9ee9 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10);
  while ((pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_Action))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__remove_Changed (System_Action_o* value, const MethodInfo* method);
// 0x3b95630

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__remove_Changed
               (System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (g_data_057a9eea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eea = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10);
  while ((pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_Action))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_Mode
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_Mode (const MethodInfo* method);
// 0x3b956f0

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_Mode(MethodInfo *method)

{
  if (g_data_057a9eeb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eeb = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18);
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$set_Mode
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__set_Mode (int32_t value, const MethodInfo* method);
// 0x3b95730

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__set_Mode(int32_t value,MethodInfo *method)

{
  if (g_data_057a9eec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eec = '\x01';
  }
  *(int32_t *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) = value;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$get_IsNavigation
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation (const MethodInfo* method);
// 0x3b8aeb0

bool_conflict Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation(MethodInfo *method)

{
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) >> 8),
                  *(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1);
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer (const MethodInfo* method);
// 0x3b89e70

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer(MethodInfo *method)

{
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    in_RDX = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
      in_RDX = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),in_RDX,*(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetNavigation (const MethodInfo* method);
// 0x3b89fe0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetNavigation(MethodInfo *method)

{
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    in_RDX = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
      in_RDX = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),in_RDX,*(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$TakeTab
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab (bool* backwards, const MethodInfo* method);
// 0x3b95820

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab(bool_conflict *backwards,MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  bool_conflict bVar3;
  
  *(undefined1 *)backwards = 0;
  bVar3 = 0;
  bVar1 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = UnityEngine_Input__GetKey(0x130,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = UnityEngine_Input__GetKey(0x12f,(MethodInfo *)0x0);
      *(char *)backwards = (char)bVar1;
    }
    else {
      *(undefined1 *)backwards = 1;
    }
    if (g_data_057a9eed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9eed = '\x01';
    }
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
    }
    lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    bVar3 = 1;
    if (*(int *)(lVar2 + 0x18) != 1) {
      if (g_data_057a9f2a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9f2a = '\x01';
        lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      }
      *(undefined4 *)(lVar2 + 0x18) = 1;
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Poll
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll (const MethodInfo* method);
// 0x3b95930

bool_conflict Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll(MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  undefined8 unaff_RBX;
  
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput(method);
  if ((char)bVar1 == '\0') {
    bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput(method);
    if ((char)bVar1 != '\0') {
      if (g_data_057a9eed == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9eed = '\x01';
      }
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
      }
      lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar2 + 0x18) != 0) {
        if (g_data_057a9f2a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
          g_data_057a9f2a = '\x01';
          lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
        }
        *(undefined4 *)(lVar2 + 0x18) = 0;
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        }
      }
    }
    bVar1 = 0;
  }
  else {
    if (g_data_057a9eed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9eed = '\x01';
    }
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
    }
    lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (*(int *)(lVar2 + 0x18) != 1) {
      if (g_data_057a9f2a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9f2a = '\x01';
        lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      }
      *(undefined4 *)(lVar2 + 0x18) = 1;
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
    }
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$PollPointerOnly
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly (const MethodInfo* method);
// 0x3b95cd0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar3;
  
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput(method);
  if ((char)bVar2 != '\0') {
    uVar3 = extraout_RDX;
    if (g_data_057a9eed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9eed = '\x01';
      uVar3 = extraout_RDX_00;
    }
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
      uVar3 = extraout_RDX_01;
    }
    lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    if (*(int *)(lVar1 + 0x18) != 0) {
      if (g_data_057a9f2a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9f2a = '\x01';
        lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
        *(undefined4 *)(lVar1 + 0x18) = 0;
        lVar1 = *(long *)(lVar1 + 0x10);
        uVar3 = extraout_RDX_02;
      }
      else {
        *(undefined4 *)(lVar1 + 0x18) = 0;
        lVar1 = *(long *)(lVar1 + 0x10);
      }
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),uVar3,*(code **)(lVar1 + 0x18))
        ;
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$SetMode
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode (int32_t mode, const MethodInfo* method);
// 0x3b95770

void Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(int32_t mode,MethodInfo *method)

{
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    in_RDX = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != mode) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(int32_t *)(lVar1 + 0x18) = mode;
      lVar1 = *(long *)(lVar1 + 0x10);
      in_RDX = extraout_RDX_01;
    }
    else {
      *(int32_t *)(lVar1 + 0x18) = mode;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),in_RDX,*(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasNavigationInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput (const MethodInfo* method);
// 0x3b95a90

bool_conflict Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasNavigationInput(MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined8 unaff_RBX;
  MethodInfo *method_00;
  float fVar4;
  undefined7 uVar3;
  
  if (g_data_057a9eee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Submit");
    il2cpp_runtime_helper_023445d0(&"Vertical");
    il2cpp_runtime_helper_023445d0(&"Horizontal");
    g_data_057a9eee = '\x01';
  }
  bVar1 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  bVar2 = (bool_conflict)CONCAT71(uVar3,1);
  if ((char)bVar1 == '\0') {
    bVar1 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = UnityEngine_Input__GetKeyDown(0x114,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = UnityEngine_Input__GetKeyDown(0x113,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = UnityEngine_Input__GetKeyDown(0x10f,(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              method_00 = (MethodInfo *)0x0;
              bVar1 = UnityEngine_Input__GetKeyDown(0x20,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                fVar4 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis("Horizontal",method_00);
                if (ABS(fVar4) <= 0.5) {
                  fVar4 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis("Vertical",method_00);
                  if (ABS(fVar4) <= 0.5) {
                    fVar4 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis("Submit",method_00);
                    bVar2 = (bool_conflict)CONCAT71(uVar3,0.5 < ABS(fVar4));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$HasPointerInput
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput (const MethodInfo* method);
// 0x3b95bb0

bool_conflict Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__HasPointerInput(MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  undefined8 unaff_RBP;
  undefined8 uVar4;
  float fVar6;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_Fields UVar11;
  undefined7 uVar5;
  
  if (g_data_057a9eef == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eef = '\x01';
  }
  bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if ((char)bVar2 == '\0') {
    bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        UVar7 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
        if (ABS(UVar7.fields.y * UVar7.fields.y + UVar7.fields.x * UVar7.fields.x) <= 0.01) {
          iVar3 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
          uVar4 = CONCAT71(uVar5,0 < iVar3);
        }
      }
    }
  }
  bVar2 = (bool_conflict)uVar4;
  if (*(char *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0xc) != '\0') {
    UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    uVar1 = **(undefined8 **)(TypeInfo_GisketchFocusInputMode + 0xb8);
    fVar6 = UVar10.fields.y - (float)((ulong)uVar1 >> 0x20);
    fVar8 = UVar10.fields.z - *(float *)(*(undefined8 **)(TypeInfo_GisketchFocusInputMode + 0xb8) + 1);
    fVar9 = UVar10.fields.x - (float)uVar1;
    if (0.01 < fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8) {
      bVar2 = (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
    }
  }
  UVar11 = (UnityEngine_Vector3_Fields)UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  **(UnityEngine_Vector3_Fields **)(TypeInfo_GisketchFocusInputMode + 0xb8) = UVar11;
  *(undefined1 *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0xc) = 1;
  return bVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputMode$$Axis
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis (System_String_o* name, const MethodInfo* method);
// 0x3b95d80

float Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Axis(System_String_o *name,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Input__GetAxisRaw(name,(MethodInfo *)0x0);
  return fVar1;
}


