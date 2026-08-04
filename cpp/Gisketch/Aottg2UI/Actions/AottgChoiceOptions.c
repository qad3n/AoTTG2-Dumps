// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* items, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x3b8d900

void Gisketch_Aottg2UI_Actions_AottgChoiceOptions___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,
               Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *items,
               Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._items = items;
  il2cpp_runtime_helper_022b4080(&__this->fields,items);
  (__this->fields)._localizer = localizer;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._localizer,localizer);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_Count
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x3b8b9a0

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_Count
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  long lVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  System_Nullable_bool__Fields SVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_Nullable_bool__Fields __this_00;
  System_String_o *str2;
  uint uVar7;
  MethodInfo *method_00;
  System_Nullable_bool__Fields unaff_RBX;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  System_Nullable_bool__Fields SVar11;
  System_Nullable_bool__Fields unaff_R12;
  uint index;
  bool bVar12;
  undefined4 uStack_84;
  System_Nullable_bool__Fields SStack_80;
  undefined8 uStack_78;
  System_Nullable_bool__Fields SStack_70;
  System_Nullable_bool__Fields SStack_68;
  undefined2 uStack_36;
  uint uStack_34;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    return (int32_t)pGVar1->max_length;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = method;
  SVar11 = (System_Nullable_bool__Fields)__this;
  if (g_data_057a9e9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"slideDown");
    il2cpp_runtime_helper_023445d0(&"percent");
    il2cpp_runtime_helper_023445d0(&"-options");
    il2cpp_runtime_helper_023445d0(&"Button");
    SVar11 = (System_Nullable_bool__Fields)&"dropdownItem";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9a = '\x01';
  }
  if (*(long *)((long)__this + 0x28) != 0) {
    index = (uint)method;
    if ((int)index < 0) {
label_03b8baae:
      bVar12 = false;
    }
    else {
      lVar2 = *(long *)(*(long *)((long)__this + 0x28) + 0x10);
      if (lVar2 == 0) goto label_03b8be06;
      uVar8 = *(uint *)(lVar2 + 0x18);
      if ((int)uVar8 <= (int)index) goto label_03b8baae;
      uVar7 = uVar8 - 1;
      if ((int)index < (int)(uVar8 - 1)) {
        uVar7 = index;
      }
      if (uVar8 <= uVar7) goto label_03b8be0b;
      lVar2 = *(long *)(lVar2 + 0x20 + (long)(int)uVar7 * 8);
      if (lVar2 == 0) goto label_03b8be06;
      bVar12 = *(char *)(lVar2 + 0x28) != '\0';
    }
    unaff_R12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pMVar4 = (MethodInfo *)0x0;
    SVar11 = unaff_R12;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)unaff_R12 + 0x10) = "Button";
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x10);
      uStack_34 = index;
      if (g_data_057a9ea4 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-option-");
        g_data_057a9ea4 = '\x01';
      }
      unaff_RBX = *(System_Nullable_bool__Fields *)((long)__this + 0x20);
      pSVar3 = System_Int32__ToString((int32_t)&uStack_34,(MethodInfo *)0x0);
      pMVar4 = (MethodInfo *)
               System_String__Concat_3af7150
                         ((System_String_o *)unaff_RBX,"-option-",pSVar3,(MethodInfo *)0x0);
      *(MethodInfo **)((long)unaff_R12 + 0x18) = pMVar4;
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x18);
      SVar11.hasValue = 0;
      SVar11.value = 0;
      if (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)__this + 0x28) !=
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pMVar4 = (MethodInfo *)
                 Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                           (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)__this + 0x28),index,
                            method_00);
        SVar11 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20);
        *(MethodInfo **)((long)unaff_R12 + 0x20) = pMVar4;
        il2cpp_runtime_helper_022b4080();
        if ((*(long *)((long)__this + 0x28) != 0) &&
           (lVar2 = *(long *)(*(long *)((long)__this + 0x28) + 0x10), lVar2 != 0)) {
          uVar8 = *(uint *)(lVar2 + 0x18) - 1;
          pMVar4 = (MethodInfo *)(ulong)uVar8;
          if ((int)index < (int)uVar8) {
            pMVar4 = (MethodInfo *)((ulong)method & 0xffffffff);
          }
          uVar8 = 0;
          if (-1 < (int)index) {
            uVar8 = (uint)pMVar4;
          }
          if (*(uint *)(lVar2 + 0x18) <= uVar8) goto label_03b8be0b;
          lVar2 = *(long *)(lVar2 + 0x20 + (long)(int)uVar8 * 8);
          if (lVar2 != 0) {
            *(undefined8 *)((long)unaff_R12 + 0x28) = *(undefined8 *)(lVar2 + 0x20);
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x28);
            *(undefined8 *)((long)unaff_R12 + 0x40) = "dropdownItem";
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x40);
            uStack_36 = 0;
            pMVar4 = (MethodInfo *)(ulong)bVar12;
            SVar11 = (System_Nullable_bool__Fields)&uStack_36;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar11,(uint)bVar12,MethodInfo_Nullable_1_Boolean);
            *(undefined2 *)((long)unaff_R12 + 0x6b) = uStack_36;
            if ((*(long *)((long)__this + 0x28) != 0) &&
               (lVar2 = *(long *)(*(long *)((long)__this + 0x28) + 0x10), lVar2 != 0)) {
              uVar8 = *(uint *)(lVar2 + 0x18) - 1;
              pMVar4 = (MethodInfo *)(ulong)uVar8;
              if ((int)index < (int)uVar8) {
                pMVar4 = (MethodInfo *)((ulong)method & 0xffffffff);
              }
              uVar8 = 0;
              if (-1 < (int)index) {
                uVar8 = (uint)pMVar4;
              }
              if (*(uint *)(lVar2 + 0x18) <= uVar8) goto label_03b8be0b;
              lVar2 = *(long *)(lVar2 + 0x20 + (long)(int)uVar8 * 8);
              if (lVar2 != 0) {
                pMVar4 = *(MethodInfo **)(lVar2 + 0x30);
                SVar11 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0xb8);
                *(MethodInfo **)((long)unaff_R12 + 0xb8) = pMVar4;
                il2cpp_runtime_helper_022b4080();
                if ((*(long *)((long)__this + 0x28) != 0) &&
                   (lVar2 = *(long *)(*(long *)((long)__this + 0x28) + 0x10), lVar2 != 0)) {
                  uVar8 = *(uint *)(lVar2 + 0x18) - 1;
                  pMVar4 = (MethodInfo *)(ulong)uVar8;
                  if ((int)index < (int)uVar8) {
                    pMVar4 = (MethodInfo *)((ulong)method & 0xffffffff);
                  }
                  uVar8 = 0;
                  if (-1 < (int)index) {
                    uVar8 = (uint)pMVar4;
                  }
                  if (*(uint *)(lVar2 + 0x18) <= uVar8) goto label_03b8be0b;
                  lVar2 = *(long *)(lVar2 + 0x20 + (long)(int)uVar8 * 8);
                  if (lVar2 != 0) {
                    *(undefined8 *)((long)unaff_R12 + 0xc0) = *(undefined8 *)(lVar2 + 0x38);
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xc0);
                    if (bVar12 == false) {
                      SVar5.hasValue = 0;
                      SVar5.value = 0;
                    }
                    else {
                      SVar5 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
                      pMVar4 = (MethodInfo *)0x0;
                      SVar11 = SVar5;
                      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                                ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)SVar5,(MethodInfo *)0x0)
                      ;
                      if (SVar5 == (System_Nullable_bool__Fields)0x0) goto label_03b8be06;
                      *(undefined8 *)((long)SVar5 + 0x10) = "slideDown";
                      il2cpp_runtime_helper_022b4080((long)SVar5 + 0x10);
                      pSVar3 = System_String__Concat_3ae5ba0
                                         (*(System_String_o **)((long)__this + 0x20),"-options",
                                          (MethodInfo *)0x0);
                      *(System_String_o **)((long)SVar5 + 0x18) = pSVar3;
                      il2cpp_runtime_helper_022b4080((long)SVar5 + 0x18,pSVar3);
                      *(undefined4 *)((long)SVar5 + 0x20) = 0x3df5c28f;
                      *(undefined4 *)((long)SVar5 + 0x28) = 0x3ccccccd;
                      *(uint *)((long)SVar5 + 0x2c) = index;
                    }
                    *(System_Nullable_bool__Fields *)((long)unaff_R12 + 0xf8) = SVar5;
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xf8);
                    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
                    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
                    unaff_RBX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pMVar4 = (MethodInfo *)0x0;
                    SVar11 = unaff_RBX;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,(MethodInfo *)0x0);
                    if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)unaff_RBX + 0x10) = 0x42c80000;
                      pMVar4 = "percent";
                      SVar11 = (System_Nullable_bool__Fields)((long)unaff_RBX + 0x18);
                      *(MethodInfo **)((long)unaff_RBX + 0x18) = "percent";
                      il2cpp_runtime_helper_022b4080();
                      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                        (pGVar6->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX;
                        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).width,unaff_RBX);
                        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)unaff_R12 + 0xd8) =
                             pGVar6;
                        il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xd8,pGVar6);
                        return unaff_R12.hasValue;
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
label_03b8be06:
  il2cpp_runtime_helper_022b2c90();
label_03b8be0b:
  uStack_78 = il2cpp_runtime_helper_022b2ca0();
  SStack_70 = unaff_RBX;
  SStack_68 = unaff_R12;
  if (g_data_057a9e9b == '\0') {
    SStack_80.hasValue = 0x3b8be36;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    SStack_80.hasValue = 0x3b8be42;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    SStack_80.hasValue = 0x3b8be4e;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    SStack_80.hasValue = 0x3b8be5a;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&"Column");
    SStack_80.hasValue = 0x3b8be66;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    SStack_80.hasValue = 0x3b8be72;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&"point");
    SStack_80.hasValue = 0x3b8be7e;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&"scrollView");
    SStack_80.hasValue = 0x3b8be8a;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&"-options-scroll");
    SStack_80.hasValue = 0x3b8be96;
    SStack_80.value = 0;
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9e9b = '\x01';
  }
  SStack_80.hasValue = 0x3b8beac;
  SStack_80.value = 0;
  __this_00 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar9 = 0;
  SStack_80.hasValue = 0x3b8beb9;
  SStack_80.value = 0;
  SVar5 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)__this_00 + 0x10) = "ScrollView";
    SStack_80.hasValue = 0x3b8bedb;
    SStack_80.value = 0;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x10);
    SStack_80.hasValue = 0x3b8bef0;
    SStack_80.value = 0;
    pSVar3 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)((long)SVar11 + 0x20),"-options-scroll",(MethodInfo *)0x0);
    *(System_String_o **)((long)__this_00 + 0x18) = pSVar3;
    SStack_80.hasValue = 0x3b8bf02;
    SStack_80.value = 0;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x18,pSVar3);
    *(undefined8 *)((long)__this_00 + 0x40) = "scrollView";
    SStack_80.hasValue = 0x3b8bf1b;
    SStack_80.value = 0;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x40);
    SStack_80.hasValue = 0x3b8bf2b;
    SStack_80.value = 0;
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    SStack_80.hasValue = 0x3b8bf38;
    SStack_80.value = 0;
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    SStack_80.hasValue = 0x3b8bf47;
    SStack_80.value = 0;
    unaff_RBX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar9 = 0;
    SStack_80.hasValue = 0x3b8bf54;
    SStack_80.value = 0;
    SVar5 = unaff_RBX;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,(MethodInfo *)0x0);
    if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
      *(float *)((long)unaff_RBX + 0x10) = (float)*(int *)((long)SVar11 + 0x60) * 38.0;
      uVar10 = "point";
      SVar5 = (System_Nullable_bool__Fields)((long)unaff_RBX + 0x18);
      *(undefined8 *)((long)unaff_RBX + 0x18) = "point";
      SStack_80.hasValue = 0x3b8bf8a;
      SStack_80.value = 0;
      il2cpp_runtime_helper_022b4080();
      uVar9 = (undefined4)uVar10;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar6->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX;
        SStack_80.hasValue = 0x3b8bfa6;
        SStack_80.value = 0;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).height,unaff_RBX);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_00 + 0xd8) = pGVar6;
        SStack_80.hasValue = 0x3b8bfbe;
        SStack_80.value = 0;
        il2cpp_runtime_helper_022b4080((long)__this_00 + 0xd8);
        SStack_80.hasValue = 0x3b8bfc7;
        SStack_80.value = 0;
        SVar11 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uVar9 = 0;
        SStack_80.hasValue = 0x3b8bfd4;
        SStack_80.value = 0;
        SVar5 = SVar11;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar11,(MethodInfo *)0x0);
        unaff_RBX.hasValue = 0;
        unaff_RBX.value = 0;
        if (SVar11 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)SVar11 + 0x10) = "Column";
          SStack_80.hasValue = 0x3b8bff0;
          SStack_80.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar11 + 0x10);
          *(undefined8 *)((long)SVar11 + 0x20) = "Stretch";
          SStack_80.hasValue = 0x3b8c00a;
          SStack_80.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar11 + 0x20);
          *(undefined4 *)((long)SVar11 + 0x70) = 0;
          *(System_Nullable_bool__Fields *)((long)__this_00 + 0xe0) = SVar11;
          SStack_80.hasValue = 0x3b8c029;
          SStack_80.value = 0;
          il2cpp_runtime_helper_022b4080((long)__this_00 + 0xe0,SVar11);
          *(MethodInfo **)((long)__this_00 + 0x118) = pMVar4;
          SStack_80.hasValue = 0x3b8c043;
          SStack_80.value = 0;
          il2cpp_runtime_helper_022b4080((long)__this_00 + 0x118,pMVar4);
          return __this_00.hasValue;
        }
      }
    }
  }
  SStack_80.hasValue = 0x3b8c05a;
  SStack_80.value = 0;
  il2cpp_runtime_helper_022b2c90();
  uStack_84 = uVar9;
  SStack_80 = unaff_RBX;
  if (g_data_057a9ea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-option-");
    g_data_057a9ea4 = '\x01';
  }
  pSVar3 = *(System_String_o **)((long)SVar5 + 0x20);
  str2 = System_Int32__ToString((int32_t)&uStack_84,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3af7150(pSVar3,"-option-",str2,(MethodInfo *)0x0);
  return (int32_t)pSVar3;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$get_EnabledCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, const MethodInfo* method);
// 0x3b8aa10

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__get_EnabledCount
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  int iVar4;
  int32_t extraout_EAX;
  uint uVar5;
  
  pGVar3 = (__this->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar2 = (uint)pGVar3->max_length;
    if ((int)uVar2 < 1) {
      return 0;
    }
    uVar5 = 0;
    iVar4 = 0;
    while (uVar5 < uVar2) {
      __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
      if (pGVar3->m_Items[(int)uVar5] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_03b8aa59;
      bVar1 = (byte)(pGVar3->m_Items[(int)uVar5]->fields).enabled;
      __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)bVar1;
      iVar4 = iVar4 + (uint)bVar1;
      uVar5 = uVar5 + 1;
      if ((int)uVar2 <= (int)uVar5) {
        return iVar4;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Create
// il2cpp: Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* value, System_String_array* options, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x3b8a350

Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *value,
          System_String_array *options,Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,
          MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  void *pvVar2;
  UnityEngine_Component_o *__this;
  char *pcVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_c *pGVar4;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  System_String_Fields SVar5;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *in_RAX;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar7;
  undefined4 extraout_var;
  UnityEngine_GameObject_o *pUVar8;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *extraout_RAX;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *extraout_RAX_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *extraout_RAX_01;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  undefined8 *puVar9;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *extraout_RAX_02;
  uint uVar10;
  int iVar11;
  uint uVar12;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar13;
  MethodInfo *method_00;
  long *plVar14;
  Il2CppClass *pIVar15;
  MethodInfo *pMVar16;
  MethodInfo *method_01;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  Il2CppClass *pIVar20;
  Il2CppClass *pIVar21;
  long lVar22;
  Il2CppClass *pIVar23;
  MethodInfo *in_R9;
  int iVar24;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *unaff_R13;
  ulong unaff_R14;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined4 in_stack_fffffffffffffef8;
  undefined4 in_stack_fffffffffffffefc;
  undefined4 in_stack_ffffffffffffff00;
  undefined4 in_stack_ffffffffffffff04;
  undefined4 in_stack_ffffffffffffff08;
  undefined4 in_stack_ffffffffffffff0c;
  undefined4 in_stack_ffffffffffffff10;
  undefined4 in_stack_ffffffffffffff14;
  System_String_o SStack_e8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  Il2CppClass *pIStack_a8;
  Il2CppClass *pIStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGStack_88;
  undefined8 uStack_80;
  Il2CppClass *pIStack_78;
  MethodInfo *pMStack_70;
  Il2CppClass *pIStack_68;
  Il2CppClass *pIStack_60;
  System_String_array *pSStack_58;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGStack_50;
  ulong uStack_48;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGStack_40;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *local_38;
  
  local_38 = in_RAX;
  if (g_data_057a9ea9 == '\0') {
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a37c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChoiceOptions);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a388;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a394;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a3a0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057a9ea9 = '\x01';
  }
  if (((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
      (unaff_R13 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)(node->fields).options,
      unaff_R13 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) &&
     (unaff_R13->max_length != 0)) {
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a3ce;
    pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChoiceOptions);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a3db;
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    (pGVar7->fields)._items = unaff_R13;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a3eb;
    il2cpp_runtime_helper_022b4080(&pGVar7->fields,unaff_R13);
    goto label_03b8a56c;
  }
  local_38 = localizer;
  if ((options == (System_String_array *)0x0) || (options->max_length == 0)) {
    pMVar16 = (MethodInfo *)0x1;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a415;
    pIVar23 = TypeInfo_string;
    options = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    }
    if (options == (System_String_array *)0x0) goto label_03b8a5eb;
    if ((int)options->max_length != 0) {
      options->m_Items[0] = value;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a45e;
      il2cpp_runtime_helper_022b4080(options->m_Items,value);
      goto label_03b8a45e;
    }
    goto label_03b8a5d1;
  }
label_03b8a45e:
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a472;
  value = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
  if (0 < (int)options->max_length) {
    if ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)value ==
        (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a59d;
      node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
      pMVar16 = (MethodInfo *)0x0;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a5aa;
      pIVar23 = (Il2CppClass *)node;
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)node,(MethodInfo *)0x0);
      if ((int)options->max_length == 0) {
label_03b8a5d1:
        pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a5d6;
        il2cpp_runtime_helper_022b2ca0();
      }
      else {
        if ((Il2CppClass *)node == (Il2CppClass *)0x0) goto label_03b8a5eb;
        (((Il2CppClass *)node)->_1).name = (char *)options->m_Items[0];
        pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a5c9;
        il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)node)->_1).name);
        if ((int)options->max_length == 0) goto label_03b8a5d1;
      }
      pMVar16 = (MethodInfo *)options->m_Items[0];
      pIVar23 = (Il2CppClass *)&(((Il2CppClass *)node)->_1).namespaze;
      (((Il2CppClass *)node)->_1).namespaze = (char *)pMVar16;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a5eb;
      il2cpp_runtime_helper_022b4080();
label_03b8a5eb:
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                   Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf;
      il2cpp_runtime_helper_022b2c90();
      lVar22 = *(long *)&(pIVar23->_1).byval_arg.bits;
      pIStack_60 = (Il2CppClass *)node;
      pSStack_58 = options;
      pGStack_50 = unaff_R13;
      uStack_48 = unaff_R14;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)value;
      if (lVar22 != 0) {
        pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
        method_01 = pMVar16;
        pIVar20 = pIVar23;
        do {
          lVar22 = *(long *)(lVar22 + 0x10);
          if (lVar22 == 0) break;
          uVar19 = *(uint *)(lVar22 + 0x18);
          iVar24 = (int)pGVar7;
          if ((int)uVar19 <= iVar24) {
            return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
          }
          pGVar13 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)(uVar19 - 1);
          if (iVar24 < (int)(uVar19 - 1)) {
            pGVar13 = pGVar7;
          }
          if (uVar19 <= (uint)pGVar13) {
            pIStack_68 = (Il2CppClass *)Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel;
            il2cpp_runtime_helper_022b2ca0();
            pIVar21 = pIVar20;
            pIStack_78 = (Il2CppClass *)node;
            pMStack_70 = pMVar16;
            pIStack_68 = pIVar23;
            if (g_data_057a9ea0 == '\0') {
              pIVar21 = (Il2CppClass *)&TypeInfo_Object;
              uStack_80 = 0x3b8a6dd;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9ea0 = '\x01';
            }
            pIVar23 = (pIVar20->_1).castClass;
            if (pIVar23 == (Il2CppClass *)0x0) {
label_03b8a780:
              node = (pIVar20->_1).this_arg.data;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                uStack_80 = 0x3b8a79c;
                il2cpp_runtime_helper_02337ed0();
              }
              method_01 = (MethodInfo *)0x0;
              uStack_80 = 0x3b8a7a8;
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)node,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)CONCAT44(extraout_var,bVar6);
              }
              pIVar21 = *(Il2CppClass **)&(pIVar20->_1).byval_arg.bits;
              if (pIVar21 != (Il2CppClass *)0x0) {
                node = (pIVar20->_1).this_arg.data;
                uVar19 = *(uint *)&(pIVar20->_1).parent;
                method_01 = (MethodInfo *)(ulong)uVar19;
                uStack_80 = 0x3b8a7c2;
                pMVar16 = (MethodInfo *)
                          Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                                    ((Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)pIVar21,uVar19,
                                     method_00);
                if ((Il2CppClass *)node != (Il2CppClass *)0x0) {
                  pvVar2 = (((Il2CppClass *)node)->_1).image;
                  uStack_80 = 0x3b8a7dd;
                  (**(code **)((long)pvVar2 + 0x558))(node,pMVar16,*(undefined8 *)((long)pvVar2 + 0x560));
                  __this = (pIVar20->_1).this_arg.data;
                  pIVar21 = (Il2CppClass *)0x0;
                  method_01 = pMVar16;
                  if (__this != (UnityEngine_Component_o *)0x0) {
                    index = *(int32_t *)&(pIVar20->_1).parent;
                    uStack_80 = 0x3b8a7f1;
                    pUVar8 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                              ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pIVar20,index,pUVar8,
                               (pIVar20->_1).this_arg.data,1,in_R9);
                    return extraout_RAX;
                  }
                }
              }
label_03b8a813:
              uStack_80 = 0x3b8a818;
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              lVar22 = *(long *)&(pIVar20->_1).byval_arg.bits;
              if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto label_03b8a813;
              uVar19 = *(uint *)&(pIVar20->_1).parent;
              uVar18 = *(uint *)(lVar22 + 0x18);
              method_01 = (MethodInfo *)(ulong)uVar18;
              uVar12 = uVar18 - 1;
              if ((int)uVar19 < (int)(uVar18 - 1)) {
                uVar12 = uVar19;
              }
              pIVar21 = (Il2CppClass *)(ulong)uVar12;
              uVar10 = 0;
              if (-1 < (int)uVar19) {
                uVar10 = uVar12;
              }
              if (uVar10 < uVar18) {
                lVar22 = *(long *)(lVar22 + 0x20 + (long)(int)uVar10 * 8);
                node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
                if (lVar22 == 0) goto label_03b8a813;
                uStack_80 = 0x3b8a745;
                bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar22 + 0x10),(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') {
                  plVar14 = (long *)(lVar22 + 0x10);
label_03b8a76d:
                  pIVar21 = (Il2CppClass *)*plVar14;
                }
                else {
                  pIVar21 = *(Il2CppClass **)(lVar22 + 0x18);
                  if (pIVar21 == (Il2CppClass *)0x0) {
                    plVar14 = *(long **)(g_data_057b9c00 + 0xb8);
                    goto label_03b8a76d;
                  }
                }
                (pIVar23->_1).declaringType = pIVar21;
                pIVar23 = (Il2CppClass *)&(pIVar23->_1).declaringType;
                uStack_80 = 0x3b8a780;
                il2cpp_runtime_helper_022b4080(pIVar23);
                goto label_03b8a780;
              }
            }
            uStack_80 = 0x3b8a81d;
            auVar25 = il2cpp_runtime_helper_022b2ca0();
            uStack_80 = auVar25._0_8_;
            pcVar3 = (pIVar21->_1).name;
            if (pcVar3 == (char *)0x0) goto label_03b8a8ab;
            uVar19 = (uint)*(undefined8 *)(pcVar3 + 0x18);
            iVar24 = (int)method_01;
            if ((int)uVar19 < 1) goto label_03b8a88f;
            uVar18 = auVar25._8_4_ + iVar24 + uVar19;
            iVar11 = 1;
            goto label_03b8a85b;
          }
          node = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)
                  (lVar22 + 0x20 + (long)(int)(uint)pGVar13 * 8);
          if ((Il2CppClass *)node == (Il2CppClass *)0x0) break;
          pIStack_68 = (Il2CppClass *)0x3b8a657;
          bVar6 = System_String__IsNullOrEmpty
                            ((System_String_o *)
                             ((UnityEngine_Object_Fields *)&(((Il2CppClass *)node)->_1).name)->m_CachedPtr,
                             (MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(((Il2CppClass *)node)->_1).name;
label_03b8a684:
            pIVar20 = (((Il2CppClass *)node)->_1).image;
          }
          else {
            pIVar20 = (Il2CppClass *)(((Il2CppClass *)node)->_1).namespaze;
            if (pIVar20 == (Il2CppClass *)0x0) {
              node = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(g_data_057b9c00 + 0xb8);
              goto label_03b8a684;
            }
          }
          pIStack_68 = (Il2CppClass *)0x3b8a691;
          method_01 = pMVar16;
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pIVar20,(System_String_o *)pMVar16,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return pGVar7;
          }
          pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)(iVar24 + 1);
          lVar22 = *(long *)&(pIVar23->_1).byval_arg.bits;
        } while (lVar22 != 0);
      }
      pIStack_68 = (Il2CppClass *)0x3b8a6ab;
      il2cpp_runtime_helper_022b2c90();
      return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
    }
    localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)options->m_Items;
    unaff_R13 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
                ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)value)->m_Items;
    unaff_R14 = 0;
    do {
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a4af;
      node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
      pMVar16 = (MethodInfo *)0x0;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a4bc;
      pIVar23 = (Il2CppClass *)node;
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)node,(MethodInfo *)0x0);
      if ((uint)options->max_length <= unaff_R14) goto label_03b8a5d1;
      if ((Il2CppClass *)node == (Il2CppClass *)0x0) goto label_03b8a5eb;
      (((Il2CppClass *)node)->_1).name = (char *)localizer->klass;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a4e4;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)node)->_1).name);
      if ((uint)options->max_length <= unaff_R14) goto label_03b8a5d1;
      (((Il2CppClass *)node)->_1).namespaze = (char *)localizer->klass;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a506;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)node)->_1).namespaze);
      if ((uint)((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)value)->max_length <=
          unaff_R14) goto label_03b8a5d1;
      (unaff_R13->obj).klass = (Il2CppClass *)node;
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a522;
      il2cpp_runtime_helper_022b4080(unaff_R13);
      unaff_R14 = unaff_R14 + 1;
      localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)&localizer->monitor;
      unaff_R13 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)&(unaff_R13->obj).monitor;
    } while ((long)unaff_R14 < (long)(int)options->max_length);
  }
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a54b;
  pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChoiceOptions);
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a558;
  System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
  (pGVar7->fields)._items = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)value;
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a568;
  il2cpp_runtime_helper_022b4080(&pGVar7->fields,value);
  localizer = local_38;
label_03b8a56c:
  (pGVar7->fields)._localizer = localizer;
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x3b8a57c;
  il2cpp_runtime_helper_022b4080(&(pGVar7->fields)._localizer,localizer);
  return pGVar7;
label_03b8a85b:
  pIVar21 = (Il2CppClass *)(ulong)uVar18;
  if ((-1 < (int)uVar19) && (uVar12 = (uint)((long)(int)uVar18 % (long)(int)uVar19), -1 < (int)uVar12)) {
    uVar10 = uVar19 - 1;
    if ((int)uVar12 < (int)(uVar19 - 1)) {
      uVar10 = uVar12;
    }
    if (uVar19 <= uVar10) goto label_03b8a8b0;
    if (*(long *)(pcVar3 + (long)(int)uVar10 * 8 + 0x20) == 0) goto label_03b8a8ab;
    if (*(char *)(*(long *)(pcVar3 + (long)(int)uVar10 * 8 + 0x20) + 0x28) != '\0') {
      return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)
             ((long)(int)uVar18 % (long)(int)uVar19 & 0xffffffff);
    }
  }
  iVar11 = iVar11 + 1;
  uVar18 = uVar18 + auVar25._8_4_;
  if ((int)uVar19 < iVar11) {
label_03b8a88f:
    if (-1 < iVar24) {
      pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)(uVar19 - 1);
      if (iVar24 < (int)(uVar19 - 1)) {
        pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)((ulong)method_01 & 0xffffffff);
      }
      return pGVar7;
    }
    return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
  }
  goto label_03b8a85b;
label_03b8a8ab:
  pGStack_88 = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x3b8a8b0;
  il2cpp_runtime_helper_022b2c90();
label_03b8a8b0:
  pGStack_88 = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x3b8a8b5;
  auVar26 = il2cpp_runtime_helper_022b2ca0();
  pIStack_98 = auVar26._0_8_;
  lVar22 = *(long *)&(pIVar21->_1).byval_arg.bits;
  pIVar15 = (Il2CppClass *)node;
  pIStack_90 = (Il2CppClass *)node;
  pGStack_88 = localizer;
  if ((lVar22 == 0) ||
     (pGVar7 = *(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)(lVar22 + 0x10),
     pGVar7 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)) {
label_03b8a93b:
    pIStack_a0 = (Il2CppClass *)0x3b8a940;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar19 = *(uint *)&(pGVar7->fields)._localizer;
    uVar18 = uVar19 - 1;
    if ((int)method_01 < 0) {
      method_01 = (MethodInfo *)0x0;
      if ((int)uVar19 < 1) {
        return pGVar7;
      }
    }
    else {
      if (((int)uVar18 < (int)method_01) && (method_01 = (MethodInfo *)(ulong)uVar18, (int)uVar18 < 0)) {
        return pGVar7;
      }
      if ((int)uVar19 <= (int)method_01) {
        return pGVar7;
      }
    }
    uVar12 = (uint)method_01;
    if ((int)uVar12 < (int)uVar18) {
      uVar18 = uVar12;
    }
    pIVar15 = pIVar21;
    if (uVar18 < uVar19) {
      pGVar4 = (&pGVar7[1].klass)[(int)uVar18];
      if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_c *)0x0) {
        if (((char)(pGVar4->_1).byval_arg.bits == '\0') || (uVar12 == *(uint *)&(pIVar21->_1).parent)) {
          return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)pGVar4;
        }
        *(uint *)&(pIVar21->_1).parent = uVar12;
        pIStack_a0 = (Il2CppClass *)0x3b8a91e;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pIVar21,method_01);
        pIStack_a0 = (Il2CppClass *)&g_data_057b9b70;
        pIStack_a8 = pIStack_90;
        pIStack_98 = pIVar20;
        pIStack_90 = pIVar23;
        if (g_data_057a9ea2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
          g_data_057a9ea2 = '\x01';
        }
        pIVar23 = (pIVar21->_1).castClass;
        if (pIVar23 == (Il2CppClass *)0x0) {
          return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
        }
        pIVar23 = (pIVar23->_1).castClass;
        uVar17 = 0;
        bVar6 = System_String__IsNullOrEmpty((System_String_o *)pIVar23,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)CONCAT44(extraout_var_01,bVar6);
        }
        pIVar20 = (pIVar21->_1).declaringType;
        if (pIVar20 == (Il2CppClass *)0x0) {
          return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)CONCAT44(extraout_var_01,bVar6);
        }
        pIVar15 = (pIVar21->_1).castClass;
        if (pIVar15 != (Il2CppClass *)0x0) {
          pUVar8 = (UnityEngine_GameObject_o *)(pIVar15->_1).namespaze;
          pIVar23 = (pIVar15->_1).castClass;
          node_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pIVar21,(MethodInfo *)0x0);
          SStack_e8.fields._stringLength = 0;
          SStack_e8.fields._firstChar = 0;
          SStack_e8.fields._6_2_ = 0;
          uStack_d0 = 0;
          SStack_e8.klass = (System_String_c *)0x0;
          SStack_e8.monitor = (void *)0x0;
          __this_00.fields.ElementId._4_4_ = in_stack_fffffffffffffefc;
          __this_00.fields.ElementId._0_4_ = in_stack_fffffffffffffef8;
          __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff00;
          __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff04;
          __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff08;
          __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff0c;
          __this_00.fields.InputSource = in_stack_ffffffffffffff10;
          __this_00.fields._28_4_ = in_stack_ffffffffffffff14;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
                    (__this_00,&SStack_e8,pUVar8,node_00,(int32_t)(pIVar21->_1).castClass,
                     (MethodInfo *)(auVar26._8_8_ & 0xffffffff));
          SVar5 = SStack_e8.fields;
          uStack_b8._0_4_ = SStack_e8.fields._stringLength;
          uStack_b8._4_2_ = SStack_e8.fields._firstChar;
          uStack_b8._6_2_ = SStack_e8.fields._6_2_;
          uStack_b0._0_4_ = (undefined4)uStack_d0;
          uStack_b0._4_4_ = uStack_d0._4_4_;
          uStack_c8 = SStack_e8.klass._0_4_;
          uStack_c4 = SStack_e8.klass._4_4_;
          uStack_c0 = SStack_e8.monitor._0_4_;
          uStack_bc = SStack_e8.monitor._4_4_;
          pvVar2 = (pIVar20->_1).image;
          SStack_e8.fields = SVar5;
          if ((ulong)*(ushort *)((long)pvVar2 + 0x12e) != 0) {
            lVar22 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar2 + 0xb0) + lVar22) == TypeInfo_IGisketchActionHandler) {
                puVar9 = (undefined8 *)
                         ((long)pvVar2 +
                         (long)*(int *)(*(long *)((long)pvVar2 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                goto label_03b8d4fd;
              }
              lVar22 = lVar22 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar2 + 0x12e) << 4 != lVar22);
          }
          puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar20,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
          pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)
                   (*(code *)*puVar9)(pIVar20,pIVar23,puVar9[1]);
          return pGVar7;
        }
        il2cpp_runtime_helper_022b2c90();
        pcVar3 = (pIVar23->_1).name;
        if (pcVar3 != (char *)0x0) {
          uVar19 = *(uint *)(pcVar3 + 0x18) - 1;
          pIVar23 = (Il2CppClass *)(ulong)uVar19;
          if ((int)uVar17 < (int)uVar19) {
            pIVar23 = (Il2CppClass *)(uVar17 & 0xffffffff);
          }
          uVar19 = 0;
          if (-1 < (int)uVar17) {
            uVar19 = (uint)pIVar23;
          }
          if (*(uint *)(pcVar3 + 0x18) <= uVar19) goto label_03b8d59f;
          lVar22 = *(long *)(pcVar3 + (long)(int)uVar19 * 8 + 0x20);
          if (lVar22 != 0) {
            bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar22 + 0x10),(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              return *(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)(lVar22 + 0x10);
            }
            if (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)(lVar22 + 0x18) !=
                (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
              return *(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)(lVar22 + 0x18);
            }
            return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
        il2cpp_runtime_helper_022b2ca0();
        System_Object___ctor((Il2CppObject *)pIVar23,(MethodInfo *)0x0);
        return extraout_RAX_02;
      }
      goto label_03b8a93b;
    }
  }
  pIStack_a0 = (Il2CppClass *)0x3b8a945;
  auVar26 = il2cpp_runtime_helper_022b2ca0();
  if (*(long *)&(pIVar21->_1).byval_arg.bits == 0) {
    return auVar26._0_8_;
  }
  pIStack_a8 = (Il2CppClass *)0x3b8a960;
  pIVar23 = pIVar21;
  pIStack_a0 = pIVar15;
  uVar18 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                     ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pIVar21,(System_String_o *)method_01,
                      auVar26._8_8_);
  uVar19 = (uint)method_01;
  pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)CONCAT44(extraout_var_00,uVar18);
  lVar22 = *(long *)&(pIVar21->_1).byval_arg.bits;
  if (lVar22 == 0) {
label_03b8a9aa:
    pIStack_a8 = (Il2CppClass *)0x3b8a9af;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar18 < 0) {
      return pGVar7;
    }
    lVar22 = *(long *)(lVar22 + 0x10);
    if (lVar22 == 0) goto label_03b8a9aa;
    uVar12 = *(uint *)(lVar22 + 0x18);
    if ((int)uVar12 <= (int)uVar18) {
      return pGVar7;
    }
    uVar19 = uVar12 - 1;
    if ((int)uVar18 < (int)(uVar12 - 1)) {
      uVar19 = uVar18;
    }
    if (uVar19 < uVar12) {
      lVar22 = *(long *)(lVar22 + 0x20 + (long)(int)uVar19 * 8);
      if (lVar22 != 0) {
        if (*(char *)(lVar22 + 0x28) != '\0') {
          *(uint *)&(pIVar21->_1).parent = uVar18;
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                    ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pIVar21,(MethodInfo *)(ulong)uVar19);
          return extraout_RAX_00;
        }
        return pGVar7;
      }
      goto label_03b8a9aa;
    }
  }
  pIStack_a8 = (Il2CppClass *)0x3b8a9b4;
  pIStack_a8 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar19 < 0) {
    return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
  }
  pcVar3 = (pIVar23->_1).name;
  if (pcVar3 != (char *)0x0) {
    uVar18 = *(uint *)(pcVar3 + 0x18);
    if ((int)uVar18 <= (int)uVar19) {
      return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
    }
    if ((int)(uVar18 - 1) <= (int)uVar19) {
      uVar19 = uVar18 - 1;
    }
    if (uVar18 <= uVar19) goto label_03b8aa00;
    lVar22 = *(long *)(pcVar3 + (long)(int)uVar19 * 8 + 0x20);
    if (lVar22 != 0) {
      return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)
             CONCAT71((int7)((ulong)lVar22 >> 8),*(char *)(lVar22 + 0x28) != '\0');
    }
  }
  uStack_b0 = 0x3b8aa00;
  il2cpp_runtime_helper_022b2c90();
label_03b8aa00:
  uStack_b0 = 0x3b8aa05;
  uStack_b0 = il2cpp_runtime_helper_022b2ca0();
  pcVar3 = (pIVar23->_1).name;
  if (pcVar3 != (char *)0x0) {
    uVar19 = *(uint *)(pcVar3 + 0x18);
    if ((int)uVar19 < 1) {
      return (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
    }
    uVar18 = 0;
    pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
    while (uVar18 < uVar19) {
      pIVar23 = (Il2CppClass *)0x0;
      if (*(long *)(pcVar3 + (long)(int)uVar18 * 8 + 0x20) == 0) goto label_03b8aa59;
      bVar1 = *(byte *)(*(long *)(pcVar3 + (long)(int)uVar18 * 8 + 0x20) + 0x28);
      pIVar23 = (Il2CppClass *)(ulong)bVar1;
      pGVar7 = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)((int)pGVar7 + (uint)bVar1);
      uVar18 = uVar18 + 1;
      if ((int)uVar19 <= (int)uVar18) {
        return pGVar7;
      }
    }
    uStack_b8 = 0x3b8aa59;
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  uStack_b8 = 0x3b8aa5e;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pIVar23,(MethodInfo *)0x0);
  return extraout_RAX_01;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Option
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8c260

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Option
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *extraout_RAX;
  uint uVar3;
  uint uVar4;
  
  pGVar2 = (__this->fields)._items;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pGVar2->max_length;
    uVar4 = uVar1 - 1;
    if (index < (int)uVar4) {
      uVar4 = index;
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)uVar4;
    uVar3 = 0;
    if (-1 < index) {
      uVar3 = uVar4;
    }
    if (uVar3 < uVar1) {
      return pGVar2->m_Items[(int)uVar3];
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Enabled
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8a9c0

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Enabled
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar4;
  int iVar5;
  bool_conflict extraout_EAX;
  uint uVar6;
  undefined4 in_register_00000034;
  ulong uVar7;
  
  uVar7 = CONCAT44(in_register_00000034,index);
  if (index < 0) {
    return 0;
  }
  pGVar3 = (__this->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar2 = (uint)pGVar3->max_length;
    if ((int)uVar2 <= index) {
      return 0;
    }
    uVar6 = uVar2 - 1;
    method = (MethodInfo *)(ulong)uVar6;
    if ((int)uVar6 <= index) {
      index = uVar6;
    }
    uVar7 = (ulong)(uint)index;
    if (uVar2 <= (uint)index) goto label_03b8aa00;
    pGVar4 = pGVar3->m_Items[index];
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pGVar4 >> 8),(char)(pGVar4->fields).enabled != '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90(__this,uVar7,method);
label_03b8aa00:
  il2cpp_runtime_helper_022b2ca0();
  pGVar3 = (__this->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar2 = (uint)pGVar3->max_length;
    if ((int)uVar2 < 1) {
      return 0;
    }
    uVar6 = 0;
    iVar5 = 0;
    while (uVar6 < uVar2) {
      __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0;
      if (pGVar3->m_Items[(int)uVar6] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_03b8aa59;
      bVar1 = (byte)(pGVar3->m_Items[(int)uVar6]->fields).enabled;
      __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)bVar1;
      iVar5 = iVar5 + (uint)bVar1;
      uVar6 = uVar6 + 1;
      if ((int)uVar2 <= (int)uVar6) {
        return iVar5;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8d530

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  System_String_o *pSVar4;
  uint uVar5;
  bool_conflict bVar6;
  System_String_o *extraout_RAX;
  uint uVar7;
  undefined4 in_register_00000034;
  
  pGVar2 = (__this->fields)._items;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar1 = (uint)pGVar2->max_length;
    method = (MethodInfo *)(ulong)uVar1;
    uVar5 = uVar1 - 1;
    if (index < (int)(uVar1 - 1)) {
      uVar5 = index;
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)uVar5;
    uVar7 = 0;
    if (-1 < index) {
      uVar7 = uVar5;
    }
    if (uVar1 <= uVar7) goto label_03b8d59f;
    pGVar3 = pGVar2->m_Items[(int)uVar7];
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).value,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return (pGVar3->fields).value;
      }
      pSVar4 = (pGVar3->fields).text;
      if (pSVar4 != (System_String_o *)0x0) {
        return pSVar4;
      }
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
  }
  il2cpp_runtime_helper_022b2c90(__this,CONCAT44(in_register_00000034,index),method);
label_03b8d59f:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8c0c0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t index,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_c *pGVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  bool_conflict bVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  System_String_o *extraout_RAX;
  uint uVar12;
  ulong uVar13;
  long *value;
  long lVar14;
  
  uVar13 = (ulong)(uint)index;
  value = (long *)__this;
  if (g_data_057a9eaa == '\0') {
    value = &TypeInfo_IGisketchLocalizer;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eaa = '\x01';
  }
  pGVar3 = (__this->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar2 = (uint)pGVar3->max_length;
    uVar12 = uVar2 - 1;
    uVar13 = (ulong)uVar12;
    if (index < (int)uVar12) {
      uVar13 = (ulong)(uint)index;
    }
    uVar12 = 0;
    if (-1 < index) {
      uVar12 = (uint)uVar13;
    }
    if (uVar2 <= uVar12) goto label_03b8c250;
    pGVar4 = pGVar3->m_Items[(int)uVar12];
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar9 = System_String__IsNullOrEmpty((pGVar4->fields).textKey,(MethodInfo *)0x0);
      if (((char)bVar9 == '\0') &&
         (pGVar5 = (__this->fields)._localizer,
         pGVar5 != (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0)) {
        pSVar11 = (pGVar4->fields).text;
        pSVar6 = (pGVar4->fields).textKey;
        pGVar7 = pGVar5->klass;
        uVar1._0_1_ = (pGVar7->_2).rank;
        uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar8 = (pGVar7->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar14) == TypeInfo_IGisketchLocalizer) {
              pVVar10 = pGVar7->vtable + *(int *)((long)&pIVar8->offset + lVar14);
              goto label_03b8c22e;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar5,TypeInfo_IGisketchLocalizer,0);
label_03b8c22e:
        pSVar11 = (System_String_o *)
                  (*pVVar10->methodPtr)(pGVar5,pSVar6,pSVar11,pVVar10->method,pVVar10->methodPtr);
        return pSVar11;
      }
      value = (long *)(pGVar4->fields).text;
      uVar13 = 0;
      bVar9 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return (pGVar4->fields).text;
      }
      pGVar3 = (__this->fields)._items;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        uVar2 = (uint)pGVar3->max_length;
        uVar12 = uVar2 - 1;
        uVar13 = (ulong)uVar12;
        if (index < (int)uVar12) {
          uVar13 = (ulong)(uint)index;
        }
        uVar12 = 0;
        if (-1 < index) {
          uVar12 = (uint)uVar13;
        }
        if (uVar2 <= uVar12) goto label_03b8c250;
        pGVar4 = pGVar3->m_Items[(int)uVar12];
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          bVar9 = System_String__IsNullOrEmpty((pGVar4->fields).value,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return (pGVar4->fields).value;
          }
          pSVar11 = (pGVar4->fields).text;
          if (pSVar11 != (System_String_o *)0x0) {
            return pSVar11;
          }
          return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b8c250:
  il2cpp_runtime_helper_022b2ca0();
  pGVar3 = (((Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)value)->fields)._items;
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = (uint)pGVar3->max_length;
    uVar12 = uVar2 - 1;
    value = (long *)(ulong)uVar12;
    if ((int)uVar13 < (int)uVar12) {
      value = (long *)(uVar13 & 0xffffffff);
    }
    uVar12 = 0;
    if (-1 < (int)uVar13) {
      uVar12 = (uint)value;
    }
    if (uVar12 < uVar2) {
      return (System_String_o *)pGVar3->m_Items[(int)uVar12];
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$NextEnabledIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o* __this, int32_t start, int32_t step, const MethodInfo* method);
// 0x3b8a820

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex
                  (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this,int32_t start,int32_t step,
                  MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  long lVar4;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_Fields SVar9;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  uint uVar10;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  bool_conflict bVar11;
  int32_t iVar12;
  int32_t extraout_EAX_01;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar14;
  VirtualInvokeData *pVVar15;
  int iVar16;
  uint uVar17;
  ulong extraout_RDX;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_01;
  long lVar21;
  System_String_o *pSVar22;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  System_String_o SStack_70;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,start);
  pGVar13 = (__this->fields)._items;
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar20 = (uint)pGVar13->max_length;
    if (0 < (int)uVar20) {
      uVar19 = step + start + uVar20;
      iVar16 = 1;
      do {
        __this = (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)(ulong)uVar19;
        uVar17 = (int)uVar19 % (int)uVar20;
        if ((-1 < (int)uVar20) && (-1 < (int)uVar17)) {
          uVar10 = uVar20 - 1;
          if ((int)uVar17 < (int)(uVar20 - 1)) {
            uVar10 = uVar17;
          }
          if (uVar20 <= uVar10) goto label_03b8a8b0;
          if (pGVar13->m_Items[(int)uVar10] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto label_03b8a8ab;
          if ((char)(pGVar13->m_Items[(int)uVar10]->fields).enabled != '\0') {
            return uVar17;
          }
        }
        iVar16 = iVar16 + 1;
        uVar19 = uVar19 + step;
      } while (iVar16 <= (int)uVar20);
    }
    if (start < 0) {
      return 0;
    }
    iVar12 = uVar20 - 1;
    if (start < (int)(uVar20 - 1)) {
      iVar12 = start;
    }
    return iVar12;
  }
label_03b8a8ab:
  il2cpp_runtime_helper_022b2c90();
label_03b8a8b0:
  il2cpp_runtime_helper_022b2ca0();
  pGVar3 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._options;
  if ((pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar13 = (pGVar3->fields)._items,
     pGVar13 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
label_03b8a93b:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar20 = (uint)pGVar13->max_length;
    uVar19 = uVar20 - 1;
    if ((int)method_01 < 0) {
      method_01 = (MethodInfo *)0x0;
      if ((int)uVar20 < 1) goto label_03b8a934;
    }
    else if ((((int)uVar19 < (int)method_01) && (method_01 = (MethodInfo *)(ulong)uVar19, (int)uVar19 < 0)) ||
            ((int)uVar20 <= (int)method_01)) goto label_03b8a934;
    uVar17 = (uint)method_01;
    if ((int)uVar17 < (int)uVar19) {
      uVar19 = uVar17;
    }
    if (uVar19 < uVar20) {
      pGVar13 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)pGVar13->m_Items[(int)uVar19];
      if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        if ((*(char *)(pGVar13->m_Items + 1) == '\0') ||
           (uVar17 == (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._index)) {
label_03b8a934:
          return (int32_t)pGVar13;
        }
        (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._index = uVar17;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this,method_01);
        if (g_data_057a9ea2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
          g_data_057a9ea2 = '\x01';
        }
        pGVar14 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._node;
        if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          return 0;
        }
        pSVar22 = (pGVar14->fields).action;
        uVar18 = 0;
        bVar11 = System_String__IsNullOrEmpty(pSVar22,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return bVar11;
        }
        pGVar5 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._actions;
        if (pGVar5 == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
          return bVar11;
        }
        pGVar14 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._node;
        if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pSVar22 = (pGVar14->fields).id;
          pSVar6 = (pGVar14->fields).action;
          pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
          ;
          SStack_70.fields._stringLength = 0;
          SStack_70.fields._firstChar = 0;
          SStack_70.fields._6_2_ = 0;
          uStack_58 = 0;
          SStack_70.klass = (System_String_c *)0x0;
          SStack_70.monitor = (void *)0x0;
          __this_00.fields.ElementId._4_4_ = in_stack_ffffffffffffff74;
          __this_00.fields.ElementId._0_4_ = in_stack_ffffffffffffff70;
          __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff78;
          __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff7c;
          __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff80;
          __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff84;
          __this_00.fields.InputSource = in_stack_ffffffffffffff88;
          __this_00.fields._28_4_ = in_stack_ffffffffffffff8c;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
                    (__this_00,&SStack_70,(UnityEngine_GameObject_o *)pSVar22,pGVar14,
                     (int32_t)(((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._node,
                     (MethodInfo *)(extraout_RDX & 0xffffffff));
          SVar9 = SStack_70.fields;
          uStack_40._0_4_ = SStack_70.fields._stringLength;
          uStack_40._4_2_ = SStack_70.fields._firstChar;
          uStack_40._6_2_ = SStack_70.fields._6_2_;
          uStack_38._0_4_ = (undefined4)uStack_58;
          uStack_38._4_4_ = uStack_58._4_4_;
          uStack_50 = SStack_70.klass._0_4_;
          uStack_4c = SStack_70.klass._4_4_;
          uStack_48 = SStack_70.monitor._0_4_;
          uStack_44 = SStack_70.monitor._4_4_;
          pGVar7 = pGVar5->klass;
          uVar2._0_1_ = (pGVar7->_2).rank;
          uVar2._1_1_ = (pGVar7->_2).minimumAlignment;
          SStack_70.fields = SVar9;
          if ((ulong)uVar2 != 0) {
            pIVar8 = (pGVar7->_1).interfaceOffsets;
            lVar21 = 0;
            do {
              if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IGisketchActionHandler) {
                pVVar15 = pGVar7->vtable + *(int *)((long)&pIVar8->offset + lVar21);
                goto label_03b8d4fd;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar21);
          }
          pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar5,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
          iVar12 = (*pVVar15->methodPtr)(pGVar5,pSVar6,pVVar15->method);
          return iVar12;
        }
        il2cpp_runtime_helper_022b2c90();
        SVar9 = pSVar22->fields;
        if (SVar9 != (System_String_Fields)0x0) {
          uVar20 = *(uint *)((long)SVar9 + 0x18) - 1;
          pSVar22 = (System_String_o *)(ulong)uVar20;
          if ((int)uVar18 < (int)uVar20) {
            pSVar22 = (System_String_o *)(uVar18 & 0xffffffff);
          }
          uVar20 = 0;
          if (-1 < (int)uVar18) {
            uVar20 = (uint)pSVar22;
          }
          if (*(uint *)((long)SVar9 + 0x18) <= uVar20) goto label_03b8d59f;
          lVar21 = *(long *)((long)SVar9 + 0x20 + (long)(int)uVar20 * 8);
          if (lVar21 != 0) {
            bVar11 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar21 + 0x10),(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return (int32_t)*(undefined8 *)(lVar21 + 0x10);
            }
            if (*(long *)(lVar21 + 0x18) == 0) {
              return (int32_t)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            return (int32_t)*(long *)(lVar21 + 0x18);
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
        il2cpp_runtime_helper_022b2ca0();
        System_Object___ctor((Il2CppObject *)pSVar22,(MethodInfo *)0x0);
        return extraout_EAX_01;
      }
      goto label_03b8a93b;
    }
  }
  iVar12 = il2cpp_runtime_helper_022b2ca0();
  if ((((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._options ==
      (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    return iVar12;
  }
  uStack_30 = 0x3b8a960;
  __this_01 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this;
  uVar19 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                     ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this,(System_String_o *)method_01,
                      method_00);
  uVar20 = (uint)method_01;
  pGVar3 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._options;
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8a9aa:
    uStack_30 = 0x3b8a9af;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar19 < 0) {
      return uVar19;
    }
    pGVar13 = (pGVar3->fields)._items;
    if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8a9aa;
    uVar17 = (uint)pGVar13->max_length;
    if ((int)uVar17 <= (int)uVar19) {
      return uVar19;
    }
    uVar20 = uVar17 - 1;
    if ((int)uVar19 < (int)(uVar17 - 1)) {
      uVar20 = uVar19;
    }
    if (uVar20 < uVar17) {
      if (pGVar13->m_Items[(int)uVar20] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if ((char)(pGVar13->m_Items[(int)uVar20]->fields).enabled == '\0') {
          return uVar19;
        }
        (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this)->fields)._index = uVar19;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this,(MethodInfo *)(ulong)uVar20);
        return extraout_EAX;
      }
      goto label_03b8a9aa;
    }
  }
  uStack_30 = 0x3b8a9b4;
  uStack_30 = il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar20 < 0) {
    return 0;
  }
  lVar21 = (__this_01->fields).m_CachedPtr;
  if (lVar21 != 0) {
    uVar19 = *(uint *)(lVar21 + 0x18);
    if ((int)uVar19 <= (int)uVar20) {
      return 0;
    }
    if ((int)(uVar19 - 1) <= (int)uVar20) {
      uVar20 = uVar19 - 1;
    }
    if (uVar19 <= uVar20) goto label_03b8aa00;
    lVar21 = *(long *)(lVar21 + 0x20 + (long)(int)uVar20 * 8);
    if (lVar21 != 0) {
      return (int32_t)CONCAT71((int7)((ulong)lVar21 >> 8),*(char *)(lVar21 + 0x28) != '\0');
    }
  }
  uStack_38 = 0x3b8aa00;
  il2cpp_runtime_helper_022b2c90();
label_03b8aa00:
  uStack_38 = 0x3b8aa05;
  uStack_38 = il2cpp_runtime_helper_022b2ca0();
  lVar21 = (__this_01->fields).m_CachedPtr;
  if (lVar21 != 0) {
    uVar20 = *(uint *)(lVar21 + 0x18);
    if ((int)uVar20 < 1) {
      return 0;
    }
    uVar19 = 0;
    iVar16 = 0;
    while (uVar19 < uVar20) {
      lVar4 = *(long *)(lVar21 + 0x20 + (long)(int)uVar19 * 8);
      __this_01 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      if (lVar4 == 0) goto label_03b8aa59;
      bVar1 = *(byte *)(lVar4 + 0x28);
      __this_01 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(ulong)bVar1;
      iVar16 = iVar16 + (uint)bVar1;
      uVar19 = uVar19 + 1;
      if ((int)uVar20 <= (int)uVar19) {
        return iVar16;
      }
    }
    uStack_40 = 0x3b8aa59;
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  uStack_40 = 0x3b8aa5e;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptions$$ApplyDisabledArrowVisual
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual (UnityEngine_GameObject_o* go, bool enabled, const MethodInfo* method);
// 0x3b8d940

void Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
               (UnityEngine_GameObject_o *go,bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  int32_t index;
  long lVar3;
  code *pcVar4;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this;
  undefined8 uVar5;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this_00;
  undefined4 extraout_var;
  undefined8 uVar7;
  UnityEngine_UI_Selectable_o *pUVar8;
  bool bVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *pGVar10;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  undefined1 auVar14 [16];
  
  pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)go;
  if (g_data_057a9eab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDisabledSelectableOpacity_GetComponent_GisketchD);
    pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eab = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)
                UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_GisketchDisabledSelectableOpacity_GetComponent_GisketchD);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar10 = __this_00;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar7 = CONCAT44(extraout_var,bVar6);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)0x0)
    goto Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh;
  }
  __this_00 = pGVar10;
  unaff_RBX = 0;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x28) = uVar7;
  if (g_data_057a9ed2 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8d9e0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8d9ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed2 = '\x01';
  }
  pUVar8 = (__this_00->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8da10;
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this_00->fields)._selectable;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8da20;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8da36;
    pUVar8 = (UnityEngine_UI_Selectable_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_Selectable_GetComponent_Selectable);
    (__this_00->fields)._selectable = pUVar8;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8da45;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar8 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8da5a;
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b8da66;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar9 = true;
  if ((char)bVar6 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
      *(code **)((long)register0x00000020 + -0x30) =
           Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerEnter;
      auVar14 = il2cpp_runtime_helper_022b2c90();
      method_00 = auVar14._8_8_;
      *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBP;
      *(Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o **)((long)register0x00000020 + -0x38) =
           __this_00;
      *(long *)((long)register0x00000020 + -0x40) = auVar14._0_8_;
      __this = *(Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **)&(pUVar8->fields).m_EnableCalled;
      if (__this == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        return;
      }
      index = (pUVar8->fields).m_Navigation.fields.m_Mode;
      if (method_01 == (MethodInfo *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b8dafc;
        UVar13 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar7 = UVar13.fields._0_8_;
        method_00 = extraout_RDX_03;
      }
      else {
        uVar7 = *(undefined8 *)&method_01[2].field_0x54;
      }
      uVar5 = *(undefined8 *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x30) = *(undefined8 *)((long)register0x00000020 + -0x30);
      *(UnityEngine_UI_Selectable_o ***)((long)register0x00000020 + -0x38) = ppUVar1;
      *(undefined8 *)((long)register0x00000020 + -0x40) = uVar5;
      if ((char)(__this->fields)._pointerSelectionLocked != '\0') {
        UVar2 = (__this->fields)._pointerLockPosition.fields;
        fVar11 = (float)uVar7 - UVar2.x;
        fVar12 = (float)((ulong)uVar7 >> 0x20) - UVar2.y;
        if (fVar12 * fVar12 + fVar11 * fVar11 < 4.0) {
          return;
        }
        *(undefined1 *)&(__this->fields)._pointerSelectionLocked = 0;
      }
      if (g_data_057a9eed == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b8d100;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9eed = '\x01';
        method_00 = extraout_RDX;
      }
      if (g_data_057a9c87 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b8d11c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
        method_00 = extraout_RDX_00;
      }
      lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar3 + 0x18) != 0) {
        if (g_data_057a9f2a == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b8d17b;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
          g_data_057a9f2a = '\x01';
          lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
          method_00 = extraout_RDX_02;
        }
        else {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
        }
        if (lVar3 != 0) {
          uVar7 = *(undefined8 *)(lVar3 + 0x28);
          uVar5 = *(undefined8 *)(lVar3 + 0x40);
          pcVar4 = *(code **)(lVar3 + 0x18);
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b8d15f;
          (*pcVar4)(uVar5,uVar7);
          method_00 = extraout_RDX_01;
        }
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this,index,method_00);
      return;
    }
    bVar9 = (char)((*ppUVar1)->fields).m_Interactable != '\0';
  }
  if (((char)(__this_00->fields)._initialized != '\0') &&
     ((bool)*(char *)((long)&(__this_00->fields)._initialized + 1) == bVar9)) {
    return;
  }
  *(undefined1 *)&(__this_00->fields)._initialized = 1;
  *(bool *)((long)&(__this_00->fields)._initialized + 1) = bVar9;
  if (bVar9 == false) {
    fVar11 = 0.5;
  }
  else {
    fVar11 = 1.0;
  }
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this_00,fVar11,method_01);
  return;
}


