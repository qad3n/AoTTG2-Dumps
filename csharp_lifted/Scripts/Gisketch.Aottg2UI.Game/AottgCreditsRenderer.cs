// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsRenderer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001FE")]
internal static class AottgCreditsRenderer
{
	[Token(Token = "0x4000AB0")]
	private const string InfoIcon = "UI/Icons/info-circle";

	[Token(Token = "0x4000AB1")]
	private const float GroupTopGap = 8f;

	[Token(Token = "0x4000AB2")]
	private const float ContributorCellWidthPercent = 32f;

	[Token(Token = "0x4000AB3")]
	private const float ContributorCellHeight = 36f;

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x5D80210", Offset = "0x5D7F210", VA = "0x5D80210")]
	public static void BuildCategory(AottgUi content, AottgCreditCategory category, int categoryIndex, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildCategory): 17 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		IReadOnlyList<AottgCreditContributor> contributors;
		AottgUi pGVar3;
		AottgUi content_00;
		bool bVar4;
		int iVar5;
		int iVar6;
		String pSVar7;
		AottgCreditsBrushHeader __this;
		String pSVar8;
		GisketchNodeDefinition pGVar9;
		GisketchUIBindingDefinition __this_00;
		VirtualInvokeData pVVar10;
		MethodInfo pMVar11;
		AottgCreditGroup group;
		ulong uVar12;
		long lVar13;
		object pIVar14;
		int iStack_4c;
		String pSStack_48;
		AottgUi pGStack_40;
		int iStack_38;
		int iStack_34;

		pGStack_40 = content;
		iStack_4c = 0;
		pSStack_48 = context._SectionId_k__BackingField;
		pSVar7 = String.Concat(context._SectionId_k__BackingField, "-core-header");
		if (category != null) {
			pSVar8 = category._Name_k__BackingField;
			__this = il2cpp_codegen_object_new(typeof(AottgCreditsBrushHeader)) ;
			__this = new AottgComponent();
			bVar4 = String.IsNullOrEmpty(pSVar7);
			if (__this != null) {
				if (bVar4) {
					pSVar7 = "credits-category-header";
				}
				__this._id = pSVar7;
				if (pSVar8 == null) {
					pSVar8 = (String)**(long*)(g_data_07556758 + 0xb8);
				}
				__this._text = pSVar8;
				pGVar3 = pGStack_40;
				if (pGStack_40 != null) {
					pGStack_40.Component((AottgComponent)__this);
					bVar4 = String.IsNullOrEmpty(category._Description_k__BackingField);
					if (!bVar4) {
						pSVar7 = category._Description_k__BackingField;
						pSVar8 = String.Concat(pSStack_48, "-description");
						pGVar3.Text(pSVar7, "text", pSVar8, null, null);
					}
					if (categoryIndex == 0) {
						pGVar9 = pGVar3.TextKey("Credits.Refreshing", "stateMetaText", "credits-refreshing-text", null, null);
						__this_00 = new GisketchUIBindingDefinition();
						if (__this_00 == null) goto label_05e80805;
						__this_00.visible = "credits.refreshing";
						if (pGVar9 == null) goto label_05e80805;
						pGVar9.bind = __this_00;
					}
					pIVar14 = (object)category._Contributors_k__BackingField;
					if (pIVar14 != null) {
						pIVar1 = pIVar14.klass;
						uVar12 = (ulong)(pIVar1._2).interface_offsets_count;
						if (uVar12 != 0) {
							pIVar2 = (pIVar1._1).interfaceOffsets;
							lVar13 = 0;
							do {
								if (*(IReadOnlyCollection<AottgCreditContributor>*)((long)&pIVar2.interfaceType + lVar13) == typeof(IReadOnlyCollection<AottgCreditContributor>)) {
									pVVar10 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar13);
									goto label_05e80551;
								}
								lVar13 = lVar13 + 0x10;
							} while (uVar12 * 0x10 != lVar13);
						}
						pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar14, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditContributor>), 0);
	label_05e80551: ;
						iVar5 = (*pVVar10.methodPtr)(pIVar14,pVVar10.method);
						pIVar14 = (object)category._Groups_k__BackingField;
						if (pIVar14 != null) {
							pIVar1 = pIVar14.klass;
							uVar12 = (ulong)(pIVar1._2).interface_offsets_count;
							if (uVar12 != 0) {
								pIVar2 = (pIVar1._1).interfaceOffsets;
								lVar13 = 0;
								do {
									if (*(IReadOnlyCollection<AottgCreditGroup>*)((long)&pIVar2.interfaceType + lVar13) == typeof(IReadOnlyCollection<AottgCreditGroup>)) {
										pMVar11 = (MethodInfo)(pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar13));
										goto label_05e805c1;
									}
									lVar13 = lVar13 + 0x10;
								} while (uVar12 * 0x10 != lVar13);
							}
							pMVar11 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(pIVar14, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditGroup>), 0);
	label_05e805c1: ;
							iStack_38 = (*pMVar11.methodPointer)(pIVar14,(MethodInfo)pMVar11.virtualMethodPointer);
							iStack_34 = iVar5;
							if (0 < iVar5) {
								contributors = category._Contributors_k__BackingField;
								pSVar7 = String.Concat(pSStack_48, "-contributors");
								AottgCreditsRenderer.BuildContributors(pGVar3, contributors, pSVar7);
							}
							pGVar3 = pGStack_40;
							iStack_4c = 0;
							pIVar14 = (object)category._Groups_k__BackingField;
							if (pIVar14 != null) {
								do {
									iVar5 = iStack_4c;
									pIVar1 = pIVar14.klass;
									uVar12 = (ulong)(pIVar1._2).interface_offsets_count;
									if (uVar12 != 0) {
										pIVar2 = (pIVar1._1).interfaceOffsets;
										lVar13 = 0;
										do {
											if (*(IReadOnlyCollection<AottgCreditGroup>*)((long)&pIVar2.interfaceType + lVar13) == typeof(IReadOnlyCollection<AottgCreditGroup>)) {
												pVVar10 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar13);
												goto label_05e806f3;
											}
											lVar13 = lVar13 + 0x10;
										} while (uVar12 * 0x10 != lVar13);
									}
									pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar14, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditGroup>), 0);
	label_05e806f3: ;
									iVar6 = (*pVVar10.methodPtr)(pIVar14,pVVar10.method);
									content_00 = pGStack_40;
									if (iVar6 <= iVar5) {
										if ((iStack_34 < 1) && (iStack_38 < 1)) {
											pSVar7 = String.Concat(pSStack_48, "-empty") ;
											AottgCreditsRenderer.BuildEmpty(content_00, pSVar7, "Credits.NoneListed");
										}
										return;
									}
									pSVar7 = iStack_4c.ToString();
									pSVar7 = String.Concat(pSStack_48, "-group-", pSVar7, "-gap");
									AottgCreditsRenderer.BuildGap(pGVar3, pSVar7);
									iVar5 = iStack_4c;
									pIVar14 = (object)category._Groups_k__BackingField;
									if (pIVar14 == null) break;
									pIVar1 = pIVar14.klass;
									uVar12 = (ulong)(pIVar1._2).interface_offsets_count;
									if (uVar12 != 0) {
										pIVar2 = (pIVar1._1).interfaceOffsets;
										lVar13 = 0;
										do {
											if (*(IReadOnlyList<AottgCreditGroup>*)((long)&pIVar2.interfaceType + lVar13) == typeof(IReadOnlyList<AottgCreditGroup>)) {
												pVVar10 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar13);
												goto label_05e8063d;
											}
											lVar13 = lVar13 + 0x10;
										} while (uVar12 * 0x10 != lVar13);
									}
									pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar14, (Il2CppClass)typeof(IReadOnlyList<AottgCreditGroup>), 0);
	label_05e8063d: ;
									group = (AottgCreditGroup)(*pVVar10.methodPtr)(pIVar14,iVar5,pVVar10.method);
									pSVar7 = iStack_4c.ToString();
									pMVar11 = null;
									pSVar7 = String.Concat(pSStack_48, "-group-", pSVar7);
									AottgCreditsRenderer.BuildGroup(pGVar3, group, pSVar7);
									iStack_4c = iStack_4c + 1;
									pIVar14 = (object)category._Groups_k__BackingField;
								} while (pIVar14 != null);
							}
						}
					}
				}
			}
		}
	label_05e80805: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x5D80AF0", Offset = "0x5D7FAF0", VA = "0x5D80AF0")]
	private static void BuildGroup(AottgUi content, AottgCreditGroup group, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGroup): 10 lines keep C-only constructs
		AottgCreditsRenderer.c__DisplayClass5_0 targetAddress;
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		IReadOnlyList<AottgCreditContributor> contributors;
		int iVar3;
		AottgCreditsRenderer.c__DisplayClass5_0 __this;
		Action<AottgUi> __this_00;
		String pSVar4;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar5;
		MethodInfo method_00;
		ulong uVar6;
		String* targetAddress_00;
		long lVar7;

		__this = new AottgCreditsRenderer.c__DisplayClass5_0();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.group = group;
			targetAddress_00 = &__this.id;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass5_0_BuildGroup_b__0);
			pSVar4 = String.Concat(__this.id, "-header");
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", "FlexStart", "Center", null, null, 7.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (content != null) {
				pGVar5 = content.Panel("default", __this_00, pSVar4, layout, null);
				if ((targetAddress.group != null) &&(pGVar5 != null)) {
					pGVar5.tooltip = targetAddress.group._Description_k__BackingField;
					if ((targetAddress.group != null) &&(obj = (object)targetAddress.group._Contributors_k__BackingField, obj != null)) {
						pIVar1 = obj.klass;
						uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
						if (uVar6 != 0) {
							pIVar2 = (pIVar1._1).interfaceOffsets;
							lVar7 = 0;
							do {
								if (*(IReadOnlyCollection<AottgCreditContributor>*)((long)&pIVar2.interfaceType + lVar7) == typeof(IReadOnlyCollection<AottgCreditContributor>)) {
									method_00 = (MethodInfo)(pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7));
									goto label_05e80da1;
								}
								lVar7 = lVar7 + 0x10;
							} while (uVar6 * 0x10 != lVar7);
						}
						method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditContributor>), 0);
	label_05e80da1: ;
						iVar3 = (*method_00.methodPointer)(obj,(MethodInfo)method_00.virtualMethodPointer);
						if (iVar3 < 1) {
							pSVar4 = String.Concat(*targetAddress_00, "-empty");
							AottgCreditsRenderer.BuildEmpty(content, pSVar4, "Credits.NoContributors");
							return;
						}
						if (targetAddress.group != null) {
							contributors = targetAddress.group._Contributors_k__BackingField;
							pSVar4 = String.Concat(*targetAddress_00, "-contributors");
							AottgCreditsRenderer.BuildContributors(content, contributors, pSVar4);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x5D80810", Offset = "0x5D7F810", VA = "0x5D80810")]
	private static void BuildContributors(AottgUi content, IReadOnlyList<AottgCreditContributor> contributors, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributors): 1 lines keep C-only constructs
		String id_00;
		AottgCreditsRenderer.c__DisplayClass6_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = new AottgCreditsRenderer.c__DisplayClass6_0();
		if (__this != null) {
			__this.contributors = contributors;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass6_0_BuildContributors_b__0);
			id_00 = __this.id;
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", null, "FlexStart", null, "Wrap", 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (content != null) {
				content.Panel("default", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x5D80FF0", Offset = "0x5D7FFF0", VA = "0x5D80FF0")]
	private static void BuildContributor(AottgUi grid, AottgCreditContributor contributor, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributor): 1 lines keep C-only constructs
		GisketchNodeDefinition __this;
		GisketchSearchDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;
		GisketchNodeDefinition[] pGVar3;
		MethodInfo method_01;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Panel";
			__this.id = id;
			__this.style = "creditsContributorCell";
			pGVar1 = AottgUi.Search(null, null, true, null, null, null, null, false);
			method_01 = (MethodInfo)&__this.search;
			__this.search = pGVar1;
			pGVar2 = AottgCreditsRenderer.ContributorCellLayout();
			__this.layout = pGVar2;
			pGVar3 = AottgCreditsRenderer.ContributorChildren(contributor, id);
			__this.children = pGVar3;
			if (grid != null) {
				grid.Add(__this);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x5D81240", Offset = "0x5D80240", VA = "0x5D81240")]
	private static GisketchNodeDefinition[] ContributorChildren(AottgCreditContributor contributor, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorChildren): 1 lines keep C-only constructs
		bool bVar1;
		GisketchNodeDefinition pGVar2;
		String pSVar3;
		GisketchLength pGVar4;
		GisketchLength pGVar5;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar6;
		GisketchNodeDefinition[] pGVar7;
		GisketchNodeDefinition __this;
		String id_00;
		GisketchNodeDefinition* targetAddress;

		pGVar2 = new GisketchNodeDefinition();
		if (pGVar2 != null) {
			pGVar2.type = "AottgHoverMarqueeText";
			pSVar3 = String.Concat(id, "-name");
			pGVar2.id = pSVar3;
			if (contributor != null) {
				pGVar2.text = contributor._Name_k__BackingField;
				pGVar2.style = "text";
				pGVar2.value = "text";
				pGVar4 = AottgUi.Percent(100.0);
				pGVar5 = AottgUi.Percent(100.0);
				minWidth = AottgUi.Points(0.0);
				pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, pGVar5, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				pGVar2.layout = pGVar6;
				bVar1 = contributor.IsLinked;
				if (bVar1) {
					pGVar7 = (GisketchNodeDefinition[])new GisketchNodeDefinition[3];
					__this = new GisketchNodeDefinition();
					if (__this != null) {
						__this.type = "Icon";
						pSVar3 = String.Concat(id, "-account-icon");
						__this.id = pSVar3;
						__this.icon = "singleplayer";
						__this.style = "icon";
						pGVar4 = AottgUi.Points(20.0);
						pGVar5 = AottgUi.Points(20.0);
						pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, pGVar5, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						__this.layout = pGVar6;
						if (pGVar7 != null) {
							if ((int)pGVar7.Length != 0) {
								pGVar7[0] = __this;
								if ((pGVar7.Length & 0xfffffffe) != 0) {
									pGVar7[1] = pGVar2;
									id_00 = String.Concat(id, "-hover");
									pSVar3 = contributor._AccountId_k__BackingField;
									pGVar2 = AottgPublicProfileHover.Node(id_00, pSVar3);
									if (2 < (uint)pGVar7.Length) {
										targetAddress = pGVar7.m_Items + 2;
										pGVar7[2] = pGVar2;
										goto label_05e8168d;
									}
								}
							}
							goto label_05e816a9;
						}
					}
				}
				else {
					pGVar7 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
					if (pGVar7 != null) {
						if ((int)pGVar7.Length != 0) {
							pGVar7[0] = pGVar2;
	label_05e8168d: ;
							return pGVar7;
						}
	label_05e816a9: ;
						throw new IndexOutOfRangeException();
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x5D81140", Offset = "0x5D80140", VA = "0x5D81140")]
	private static GisketchLayoutDefinition ContributorCellLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorCellLayout): clean
		GisketchLength width;
		GisketchLength height;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(32.0);
		height = AottgUi.Points(36.0);
		minWidth = AottgUi.Points(0.0);
		pGVar1 = AottgUi.Layout("Row", null, "Center", null, null, 8.0, width, height, minWidth, null, null, null, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x5D80E30", Offset = "0x5D7FE30", VA = "0x5D80E30")]
	private static void BuildEmpty(AottgUi content, string id, string textKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildEmpty): 2 lines keep C-only constructs
		String id_00;
		AottgCreditsRenderer.c__DisplayClass10_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgCreditsRenderer.c__DisplayClass10_0)) ;
		__this = new Object();
		if (__this != null) {
			__this.textKey = textKey;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0_BuildEmpty_b__0);
			id_00 = __this.id;
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (content != null) {
				content.Panel("default", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x5D809E0", Offset = "0x5D7F9E0", VA = "0x5D809E0")]
	private static void BuildGap(AottgUi content, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGap): clean
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(8.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel("default", null, id, layout, null);
		return;
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x5D816C0", Offset = "0x5D806C0", VA = "0x5D816C0")]
	public static string SectionId(string name, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SectionId): 2 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String str1;
		uint in_register_00000034;
		MethodInfo method_00;
		int local_14;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, index);
		pSVar2 = AottgCreditsRenderer.SafeId(name);
		bVar1 = String.IsNullOrEmpty(pSVar2);
		str1 = local_14.ToString("00");
		if (bVar1) {
			pSVar2 = String.Concat("category-", str1);
			return pSVar2;
		}
		pSVar2 = String.Concat("category-", str1, "-", pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x5D81770", Offset = "0x5D80770", VA = "0x5D81770")]
	private static string SafeId(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c (Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SafeId): clean
		bool bVar1;
		bool bVar2;
		ushort uVar3;
		int iVar4;
		StringBuilder __this;
		String pSVar5;
		int index;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (value != null) {
			iVar4 = value._stringLength;
			__this = new StringBuilder(iVar4);
			if (0 < value._stringLength) {
				if (__this == null) {
					uVar3 = value.get_Chars(0);
					uVar3 = Char.ToLowerInvariant(uVar3);
					Char.IsLetterOrDigit(uVar3);
					throw new NullReferenceException();
				}
				bVar1 = false;
				index = 0;
				do {
					uVar3 = value.get_Chars(index);
					uVar3 = Char.ToLowerInvariant(uVar3);
					bVar2 = Char.IsLetterOrDigit(uVar3);
					if (bVar2) {
						bVar1 = false;
	label_05e8186f: ;
						__this.Append(uVar3);
					}
					else if (!bVar1) {
						iVar4 = __this.Length;
						if (0 < iVar4) {
							bVar1 = true;
							uVar3 = 0x2d;
							goto label_05e8186f;
						}
					}
					index = index + 1;
				} while (index < value._stringLength);
				if (bVar1) {
					iVar4 = __this.Length;
					if (0 < iVar4) {
						iVar4 = __this.Length;
						__this.Length = iVar4 + -1;
					}
					goto label_05e818ca;
				}
			}
			if (__this != null) {
	label_05e818ca: ;
				return pSVar5;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c.

	// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$.ctor: clean
	private void c__DisplayClass6_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$.ctor: clean
	private void c__DisplayClass10_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$<BuildEmpty>b__0: clean
	private void c__DisplayClass10_0__BuildEmpty_b__0(AottgUi empty)
	{
		String key;
		String id;

		key = this.textKey;
		id = String.Concat(this.id, "-text");
		if (empty == null) {
			throw new NullReferenceException();
		}
		empty.TextKey(key, "stateMetaText", id, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$<BuildGroup>b__0: clean
	private void c__DisplayClass5_0__BuildGroup_b__0(AottgUi header)
	{
		AottgCreditGroup pAVar1;
		bool bVar2;
		String id;
		GisketchNodeDefinition pGVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		String pSVar6;
		GisketchLength height;

		pAVar1 = this.group;
		if (pAVar1 != null) {
			pSVar6 = pAVar1._Title_k__BackingField;
			id = String.Concat(this.id, "-title");
			if (header != null) {
				pGVar3 = header.Text(pSVar6, "creditsSubcategoryHeader", id, null, null);
				pGVar4 = AottgUi.Points(0.0);
				pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, pGVar4, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (pGVar3 != null) {
					pGVar3.layout = pGVar5;
					pAVar1 = this.group;
					if (pAVar1 != null) {
						bVar2 = String.IsNullOrEmpty(pAVar1._Description_k__BackingField);
						if (bVar2) {
							return;
						}
						pSVar6 = String.Concat(this.id, "-info");
						pGVar3 = header.Image("UI/Icons/info-circle", "creditsInfoIcon", pSVar6, null, null);
						pGVar4 = AottgUi.Points(18.0);
						height = AottgUi.Points(18.0);
						pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						if (pGVar3 != null) {
							pGVar3.layout = pGVar5;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$<BuildContributors>b__0: 14 lines keep C-only constructs
	private void c__DisplayClass6_0__BuildContributors_b__0(AottgUi grid)
	{
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		uint in_EAX;
		int iVar3;
		AottgCreditContributor contributor;
		String str2;
		String pSVar4;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		object pIVar7;
		int iVar8;
		long lVar9;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		pIVar7 = (object)this.contributors;
		if (pIVar7 != null) {
			iVar8 = 0;
			do {
				pIVar1 = pIVar7.klass;
				uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar6 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar9 = 0;
					do {
						if (*(IReadOnlyCollection<AottgCreditContributor>*)((long)&pIVar2.interfaceType + lVar9) == typeof(IReadOnlyCollection<AottgCreditContributor>)) {
							pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar9);
							goto label_05e81da3;
						}
						lVar9 = lVar9 + 0x10;
					} while (uVar6 * 0x10 != lVar9);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditContributor>), 0);
	label_05e81da3: ;
				iVar3 = (*pVVar5.methodPtr)(pIVar7,pVVar5.method);
				if (iVar3 <= iVar8) {
					return;
				}
				pIVar7 = (object)this.contributors;
				if (pIVar7 == null) break;
				iVar3 = uStack_38._4_4_;
				pIVar1 = pIVar7.klass;
				uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar6 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar9 = 0;
					do {
						if (*(IReadOnlyList<AottgCreditContributor>*)((long)&pIVar2.interfaceType + lVar9) == typeof(IReadOnlyList<AottgCreditContributor>)) {
							pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar9);
							goto label_05e81ced;
						}
						lVar9 = lVar9 + 0x10;
					} while (uVar6 * 0x10 != lVar9);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7, (Il2CppClass)typeof(IReadOnlyList<AottgCreditContributor>), 0);
	label_05e81ced: ;
				contributor = (AottgCreditContributor)(*pVVar5.methodPtr)(pIVar7,iVar3,pVVar5.method);
				pSVar4 = this.id;
				str2 = (((long)&uStack_38 + 4)).ToString();
				pSVar4 = String.Concat(pSVar4, "-", str2);
				AottgCreditsRenderer.BuildContributor(grid, contributor, pSVar4);
				iVar8 = uStack_38._4_4_ + 1;
				uStack_38 = CONCAT44(iVar8, (uint)uStack_38);
				pIVar7 = (object)this.contributors;
			} while (pIVar7 != null);
		}
		throw new NullReferenceException();
	}
}
