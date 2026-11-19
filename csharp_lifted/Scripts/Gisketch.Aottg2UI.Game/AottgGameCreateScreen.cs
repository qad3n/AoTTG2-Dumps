// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000245")]
[AottgScreen("game-create", TitleKey = "GameCreate.Title", SearchTitleKey = "GameCreate.Title", SearchGroup = "main-menu", BackActionId = "gameCreate.back")]
public sealed class AottgGameCreateScreen : AottgScreen
{
	[Token(Token = "0x4000C05")]
	public const string Id = "game-create";

	[Token(Token = "0x4000C06")]
	internal const string ContentId = "game-create-content";

	[Token(Token = "0x4000C07")]
	internal const string FooterId = "game-create-footer";

	[Token(Token = "0x4000C08")]
	private const string ContentOwner = "game-create-runtime";

	[Token(Token = "0x4000C09")]
	private const string DescriptionScrollLayout = "GameCreateDescriptionScrollLayout";

	[Token(Token = "0x4000C0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] VoiceChatValues;

	[Token(Token = "0x4000C0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly string[] TitanSpawnPresets;

	[Token(Token = "0x4000C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly string[] CoreFieldIds;

	[Token(Token = "0x1700016D")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x57793D0", Offset = "0x57783D0", VA = "0x57793D0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x1700016E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x5779400", Offset = "0x5778400", VA = "0x5779400", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "Stretch", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x5778FB0", Offset = "0x5777FB0", VA = "0x5778FB0")]
	static AottgGameCreateScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$.cctor): 3 lines keep C-only constructs
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen_StaticFields pGVar1;
		GisketchComponentRegistry __this;
		object @object;
		String[] pSVar2;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07545197 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07545197 = true;
		}
		pSVar2 = (String[])new string[3];
		if (pSVar2 == null) {
	label_058793c3: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "None";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "Proximity";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "Global";
					AottgGameCreateScreen.VoiceChatValues = pSVar2;
					pSVar2 = (String[])new string[5];
					if (pSVar2 == null) goto label_058793c3;
					if ((int)pSVar2.Length != 0) {
						pSVar2[0] = "Default";
						if ((pSVar2.Length & 0xfffffffe) != 0) {
							pSVar2[1] = "All Normal";
							if (2 < (uint)pSVar2.Length) {
								pSVar2[2] = "Variety";
								if ((pSVar2.Length & 0xfffffffc) != 0) {
									pSVar2[3] = "All Abnormals";
									if (4 < (uint)pSVar2.Length) {
										pSVar2[4] = "Custom";
										pGVar1 = typeof(AottgGameCreateScreen).static_fields;
										pGVar1.TitanSpawnPresets = pSVar2;
										pSVar2 = (String[])new string[5];
										if (pSVar2 == null) goto label_058793c3;
										if ((int)pSVar2.Length != 0) {
											pSVar2[0] = "general.MapName";
											if ((pSVar2.Length & 0xfffffffe) != 0) {
												pSVar2[1] = "general.GameMode";
												if (2 < (uint)pSVar2.Length) {
													pSVar2[2] = "general.Difficulty";
													if ((pSVar2.Length & 0xfffffffc) != 0) {
														pSVar2[3] = "general.WeatherIndex";
														if (4 < (uint)pSVar2.Length) {
															pSVar2[4] = "general.Weather";
															pGVar1 = typeof(AottgGameCreateScreen).static_fields;
															pGVar1.CoreFieldIds = pSVar2;
															if ((typeof(GisketchComponentRegistry)._2). cctor_finished_or_no_cctor == 0) {
															}
															__this = typeof(GisketchComponentRegistry). static_fields.Default;
															if ((typeof(AottgGameCreateScreen.c)._2). cctor_finished_or_no_cctor == 0) {
															}
															@object = (object)AottgGameCreateScreen.c. __9;
															__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchComponentFactory));
															__this_00 = new GisketchComponentFactory(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_cctor_b__5_0);
															if (__this != null) {
																__this.Register("GameCreateDescriptionScrollLayout", __this_00);
																return;
															}
															goto label_058793c3;
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
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x57794E0", Offset = "0x57784E0", VA = "0x57794E0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$Build): 3 lines keep C-only constructs
		AottgBrushSidePanel sidePanel;
		Action<AottgUi> __this_00;
		Action<AottgUi> __this_01;
		AottgScreenWithBrushSidePanel __this_02;

		if (Il2CppMethodInitialized_0754519a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_0754519a = true;
		}
		sidePanel = AottgGameCreateScreen.SidePanel();
		__this_00 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent);
		__this_01 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter);
		__this_02 = new AottgScreenWithBrushSidePanel(sidePanel, __this_00, __this_01, 0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_02);
		return;
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x5779690", Offset = "0x5778690", VA = "0x5779690")]
	internal static bool Refresh(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$Refresh): clean
		GisketchScreenRouter pGVar1;
		bool bVar2;

		bVar2 = ((Object)root == null);
		if (!bVar2) {
			if (root == null) {
				throw new NullReferenceException();
			}
			pGVar1 = root._Screens_k__BackingField;
			if ((pGVar1 != null) &&(pGVar1._active != null)) {
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					bVar2 = AottgGameCreateScreen.RefreshImmediately(root);
					return bVar2;
				}
				bVar2 = AottgGameCreateScreen.RefreshImmediately(root);
				return bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x5779C70", Offset = "0x5778C70", VA = "0x5779C70")]
	internal static bool RefreshTitanHeadBounds(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshTitanHeadBounds): 7 lines keep C-only constructs
		GisketchScreenRouter pGVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		IntSetting pSVar4;
		Il2CppClass id;
		GisketchView __this;
		bool bVar5;
		object pIVar6;
		ulong uVar7;
		String pSVar8;
		Object x;
		ulong in_RCX;
		Selectable __this_00;
		MethodInfo method_00;
		ulong uVar9;
		int local_44;
		ulong local_40;
		int local_34;

		local_44 = 0;
		bVar5 = ((Object)root == null);
		if (bVar5) {
			return false;
		}
		if (root == null) goto label_0587a033;
		pGVar1 = root._Screens_k__BackingField;
		if ((pGVar1 == null) ||(pGVar1._active == null)) {
			return false;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05879d87;
	label_05879dbd: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05879d93;
	label_05879ddc: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05879dbd;
	label_05879d87: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05879ddc;
	label_05879d93: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Titan, pSVar3 != null)) &&(pSVar4 = pSVar3.TitanHeadMode, pSVar4 != null)) {
			local_34 = pSVar4._value;
			pIVar6 = new string[2];
			if (pIVar6 != null) {
				if (*(int)&pIVar6[1].monitor != 0) {
					pIVar6[2].klass = (Il2CppClass *)"titan.TitanHeadRandomMin";
					method_00 = (MethodInfo *)"titan.TitanHeadRandomMax";
					if (((ulong)pIVar6[1].monitor & 0xfffffffe) != 0) {
						pIVar6[2].monitor = "titan.TitanHeadRandomMax";
						if ((int)pIVar6[1].monitor < 1) {
							local_40 = 1;
						}
						else {
							uVar7 = (ulong)pIVar6[1].monitor & 0xffffffff;
							local_40 = CONCAT71((int7)((ulong)in_RCX >> 8), 1);
							uVar9 = 0;
							do {
								if (uVar7 <= uVar9) goto label_0587a038;
								pGVar1 = root._Screens_k__BackingField;
								if (pGVar1 == null) goto label_0587a033;
								id = (&pIVar6[2].klass)[uVar9];
								__this = pGVar1._active;
								local_44 = AottgGameCreateScreen.SandboxFieldIndex((String)id);
								pSVar8 = local_44.ToString();
								pSVar8 = String.Concat("game-create-sandbox-field-", pSVar8);
								if (__this == null) goto label_0587a033;
								x = (Object)__this.Find(pSVar8);
								bVar5 = (x != null);
								__this_00 = null;
								if (bVar5) {
									if (x == null) goto label_0587a033;
									__this_00 = x.GetComponent<Selectable>();
								}
								bVar5 = ((Object)__this_00 == null);
								if (bVar5) {
									pSVar8 = String.Concat("Cannot update titan head bounds: missing input for ", (String)id);
									local_40 = 0;
									Debug.LogWarning((object)pSVar8);
								}
								else {
									if (__this_00 == null) goto label_0587a033;
									method_00 = (MethodInfo)(ulong)(local_34 == 1);
									__this_00.interactable = local_34 == 1;
								}
								uVar9 = uVar9 + 1;
								uVar7 = (ulong)*(uint)&pIVar6[1].monitor;
							} while ((long)uVar9 < (long)(int)*(uint)&pIVar6[1].monitor);
						}
						return (bool)((byte)local_40 & 1);
					}
				}
	label_0587a038: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_0587a033: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x5779730", Offset = "0x5778730", VA = "0x5779730")]
	private static bool RefreshImmediately(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshImmediately): 3 lines keep C-only constructs
		uint uVar1;
		GisketchScreenRouter pGVar2;
		GisketchView __this;
		object @object;
		GisketchNodeDefinition pGVar3;
		String ownerId;
		bool bVar4;
		bool bVar5;
		bool bVar6;
		bool bVar7;
		Object x;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar8;
		Action<AottgUi> pSVar9;
		GisketchNodeDefinition[] pGVar10;
		GisketchNodeRefreshOptions pGVar11;
		bool bVar12;

		if (((root == null) ||(pGVar2 = root._Screens_k__BackingField, pGVar2 == null)) ||(__this = pGVar2._active, __this == null)) goto label_05879c69;
		x = (Object)__this.Find("brush-side-panel-button-room-button");
		bVar4 = (x != null);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452ce == false) goto label_05879bf3;
	label_0587988c: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452ce != false) goto label_0587988c;
	label_05879bf3: ;
			g_data_075452ce = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar5 = true;
		if (bVar4 != (AottgGameCreateSession._isMultiplayer != false )) {
			ownerId = "brush-side-panel";
			pGVar8 = typeof(AottgGameCreateScreen.c).static_fields;
			pSVar9 = pGVar8.__9__13_0;
			if (pSVar9 == null) {
				if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar8 = typeof(AottgGameCreateScreen.c).static_fields;
				}
				@object = (object)pGVar8.__9;
				pSVar9 = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_RefreshImmediately_b__13_0);
				pGVar8 = typeof(AottgGameCreateScreen.c).static_fields;
				pGVar8.__9__13_0 = pSVar9;
			}
			bVar5 = false;
			pGVar10 = root.BuildDetachedNodes(ownerId, pSVar9, null);
			if (pGVar10 == null) goto label_05879c69;
			if (((int)pGVar10.Length == 1) &&(pGVar3 = pGVar10[0], pGVar3 != null)) {
				pGVar11 = new GisketchNodeRefreshOptions();
				if (pGVar11 == null) goto label_05879c69;
				pGVar11.PreserveScroll = true;
				pGVar11.PreserveFocus = false;
				pGVar11.SettleLayout = true;
				bVar5 = root.RefreshNode("brush-side-panel", pGVar3, pGVar11);
			}
		}
		bVar4 = false;
		pSVar9 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter);
		pGVar10 = root.BuildDetachedNodes("game-create-footer", pSVar9, null);
		if (pGVar10 == null) {
	label_05879c69: ;
			throw new NullReferenceException();
		}
		if (((int)pGVar10.Length == 1) &&(pGVar3 = pGVar10[0], pGVar3 != null)) {
			pGVar11 = new GisketchNodeRefreshOptions();
			if (pGVar11 == null) goto label_05879c69;
			pGVar11.PreserveScroll = true;
			pGVar11.PreserveFocus = false;
			pGVar11.SettleLayout = true;
			bVar4 = root.RefreshNode("game-create-footer", pGVar3, pGVar11);
		}
		pSVar9 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent);
		pGVar10 = root.BuildDetachedNodes("game-create-content", pSVar9, "game-create-runtime");
		if (pGVar10 == null) goto label_05879c69;
		if (((int)pGVar10.Length != 1) ||(pGVar3 = pGVar10[0], pGVar3 == null)) {
			bVar12 = false;
			goto label_05879bc5;
		}
		pGVar11 = new GisketchNodeRefreshOptions();
		if (pGVar11 == null) goto label_05879c69;
		pGVar11.PreserveScroll = true;
		pGVar11.PreserveFocus = true;
		pGVar11.SettleLayout = true;
		bVar6 = root.RefreshNode("game-create-content", pGVar3, pGVar11);
		bVar12 = false;
		if (!bVar6) goto label_05879bc5;
		bVar7 = AottgGameCreateSession.IsSandbox;
		bVar12 = true;
		if (!bVar7) goto label_05879bc5;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452cf == false) goto label_05879c37;
	label_05879b6b: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452cf != false) goto label_05879b6b;
	label_05879c37: ;
			g_data_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (AottgGameCreateSession. _SandboxSection_k__BackingField == "Weather");
		bVar12 = bVar6;
		if (bVar7) {
			AottgGameCreateWeatherEditor.SyncState(root);
		}
	label_05879bc5: ;
		return (bool)(bVar4 & bVar5 & bVar12);
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x577A330", Offset = "0x5779330", VA = "0x577A330")]
	private static void BuildContent(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildContent): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "clear";
		pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
		__this = pGVar1.__9__14_0;
		if (__this == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_0);
			pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar1.__9__14_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 24.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this, "game-create-content", layout, null);
		return;
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x577A510", Offset = "0x5779510", VA = "0x577A510")]
	private static void BuildMain(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildMain): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		InGameSet pSVar3;
		Experience pMVar4;
		bool bVar5;

		if (Il2CppMethodInitialized_0754519f == false) {
			Il2CppMethodInitialized_0754519f = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587a53b;
	label_0587a626: ;
			if (Il2CppMethodInitialized_075452cd != false) goto label_0587a548;
	label_0587a638: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587a558;
	label_0587a65b: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587a626;
	label_0587a53b: ;
			if (Il2CppMethodInitialized_075452cd == false) goto label_0587a638;
	label_0587a548: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587a65b;
	label_0587a558: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar3 == null) {
			if (ui == null) {
				throw new NullReferenceException();
			}
			ui.TextKey("GameCreate.NotLoaded", "text", "game-create-not-loaded", null, null);
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d0 != false) goto label_0587a584;
	label_0587a6cc: ;
			g_data_075452d0 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587a594;
	label_0587a6ef: ;
			cVar1 = AottgGameCreateSession. _ShowRoomSettings_k__BackingField;
		}
		else {
			if (g_data_075452d0 == false) goto label_0587a6cc;
	label_0587a584: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587a6ef;
	label_0587a594: ;
			cVar1 = AottgGameCreateSession. _ShowRoomSettings_k__BackingField;
		}
		if (cVar1 != false) {
			if (((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor == 0) {
			}
			AottgGameCreateScreen.BuildRoomSettings(ui);
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d1 != false) goto label_0587a71a;
	label_0587a743: ;
			g_data_075452d1 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587a726;
	label_0587a762: ;
			cVar1 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
		}
		else {
			if (g_data_075452d1 == false) goto label_0587a743;
	label_0587a71a: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587a762;
	label_0587a726: ;
			cVar1 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
		}
		if (cVar1 != false) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452d2 != false) goto label_0587a791;
	label_0587a872: ;
				Il2CppMethodInitialized_075452d2 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075452d2 == false) goto label_0587a872;
	label_0587a791: ;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pMVar4 = AottgGameCreateSession. _Experience_k__BackingField;
			}
			else {
				pMVar4 = *(Experience*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x58);
			}
			if (pMVar4 == null) {
				if (((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor == 0) {
				}
				AottgGameCreateScreen.BuildFavorites(ui);
				return;
			}
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			bVar5 = AottgGameCreateSession.IsSandbox;
			if (bVar5) goto label_0587a7c5;
		}
		else {
			bVar5 = AottgGameCreateSession.IsSandbox;
			if (bVar5) {
	label_0587a7c5: ;
				AottgGameCreateScreen.BuildSandbox(ui);
				return;
			}
		}
		if (Il2CppMethodInitialized_075452d2 == false) {
			Il2CppMethodInitialized_075452d2 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pMVar4 = AottgGameCreateSession. _Experience_k__BackingField;
		}
		else {
			pMVar4 = *(Experience*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x58);
		}
		if (pMVar4 != null) {
			if (((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor == 0) {
			}
			AottgGameCreateScreen.BuildConfiguration(ui);
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452d3 == false) {
			Il2CppMethodInitialized_075452d3 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar5 = String.IsNullOrEmpty(AottgGameCreateSession. _Subcategory_k__BackingField);
		if (!bVar5) {
			AottgGameCreateScreen.BuildExperiences(ui);
			return;
		}
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar5 = String.IsNullOrEmpty(AottgGameCreateSession. _Category_k__BackingField);
		uVar2 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		if (bVar5) {
			if (uVar2 == 0) {
			}
			AottgGameCreateScreen.BuildCategories(ui);
			return;
		}
		if (uVar2 == 0) {
		}
		AottgGameCreateScreen.BuildSubcategories(ui);
		return;
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x577C430", Offset = "0x577B430", VA = "0x577C430")]
	private static void BuildCategories(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCategories): 3 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		AottgGameCreateScreen.c__DisplayClass16_0 __this;
		String[] pSVar3;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass16_0));
		__this = new Object();
		if (ui != null) {
			ui.TextKey("GameCreate.Categories.Title", "header", "game-create-browser-title", null, null);
			ui.TextKey("GameCreate.Categories.Description", "text", "game-create-browser-description", null, null);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar3 = AottgGameCreateSession.Categories();
			if (__this != null) {
				__this.categories = pSVar3;
				__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__0);
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 24.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				ui.Panel("clear", __this_00, "game-create-choice-browser", layout, null);
				if (Il2CppMethodInitialized_075452d5 == false) {
					Il2CppMethodInitialized_075452d5 = true;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar2 = String.IsNullOrEmpty(AottgGameCreateSession. _LoadError_k__BackingField);
				if (!bVar2) {
					if (Il2CppMethodInitialized_075452d5 == false) {
						Il2CppMethodInitialized_075452d5 = true;
						uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					ui.Callout(3, AottgGameCreateSession. _LoadError_k__BackingField, "game-create-load-error");
					return;
				}
				pSVar3 = __this.categories;
				if (pSVar3 != null) {
					if (pSVar3.Length == 0) {
						ui.TextKey("GameCreate.Categories.Empty", "text", "game-create-empty", null, null);
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x577CBF0", Offset = "0x577BBF0", VA = "0x577CBF0")]
	private static string CategoryPreview(string category)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CategoryPreview): clean
		bool bVar1;

		bVar1 = (category == "Casual");
		if (bVar1) {
			return "Data/ExperiencePreview/CasualPreview";
		}
		bVar1 = (category == "Competitive");
		if (bVar1) {
			return "Data/ExperiencePreview/CompetitivePreview";
		}
		bVar1 = (category == "PVP");
		if (bVar1) {
			return "Data/ExperiencePreview/PVPPreview";
		}
		return "Data/ExperiencePreview/GeneralPreview";
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x577C1D0", Offset = "0x577B1D0", VA = "0x577C1D0")]
	private static void BuildSubcategories(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSubcategories): 4 lines keep C-only constructs
		il2cpp_array_size_t iVar1;
		String id;
		AottgGameCreateScreen.c__DisplayClass18_0 __this;
		String[] pSVar2;
		Action<AottgUi> __this_00;
		AottgGameCreateCarouselRow __this_01;
		MethodInfo method_00;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass18_0));
		__this = new Object();
		if (ui != null) {
			ui.TextKey("GameCreate.Subcategories.Title", "header", "game-create-browser-title", null, null);
			method_00 = (MethodInfo *)"GameCreate.Categories.Description";
			ui.TextKey("GameCreate.Categories.Description", "text", "game-create-browser-description", null, null);
			AottgGameCreateScreen.BuildCategorySelector(ui);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar2 = AottgGameCreateSession.Subcategories();
			if (__this != null) {
				__this.subcategories = pSVar2;
				pSVar2 = __this.subcategories;
				if (pSVar2 != null) {
					__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0_BuildSubcategories_b__0);
					id = "game-create-subcategory-grid";
					iVar1 = pSVar2.Length;
					__this_01 = new AottgGameCreateCarouselRow(id, (int32_t)iVar1, 360.0, 14.0, __this_00, 18.0, -1);
					ui.Component((AottgComponent)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x577D240", Offset = "0x577C240", VA = "0x577D240")]
	private static string SubcategoryPreview(string subcategory)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SubcategoryPreview): 7 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Experience[] source;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Object[] experiences;
		Experience pMVar3;
		String* ppSVar4;
		String pSVar5;

		if (Il2CppMethodInitialized_075451a3 == false) {
			Il2CppMethodInitialized_075451a3 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587d44b;
	label_0587d26b: ;
			if (Il2CppMethodInitialized_075452d4 != false) goto label_0587d278;
	label_0587d45d: ;
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587d26b;
	label_0587d44b: ;
			if (Il2CppMethodInitialized_075452d4 == false) goto label_0587d45d;
	label_0587d278: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = (AottgGameCreateSession. _Category_k__BackingField == "Mission");
		if (bVar2) goto label_0587d2f9;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452d4 == false) goto label_0587d566;
	label_0587d2c5: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452d4 != false) goto label_0587d2c5;
	label_0587d566: ;
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = (AottgGameCreateSession. _Category_k__BackingField == "PVP");
		if (!bVar2) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452d4 == false) {
				Il2CppMethodInitialized_075452d4 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar2 = (AottgGameCreateSession. _Category_k__BackingField != "Competitive");
			if (bVar2) {
				return null;
			}
			bVar2 = (subcategory == "Ranking");
			if (bVar2) {
				return "Data/ExperiencePreview/RankingPreview";
			}
			bVar2 = (subcategory == "Racing Basic");
			if (bVar2) {
				ppSVar4 = &"Akina";
			}
			else {
				bVar2 = (subcategory == "Racing Hard");
				if (!bVar2) {
					return null;
				}
				ppSVar4 = &"Iri Crystal";
			}
			pSVar5 = AottgGameCreatePicker.PreviewSprite(*ppSVar4);
			return pSVar5;
		}
	label_0587d2f9: ;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source = AottgGameCreateSession.ExperiencesIn(AottgGameCreateSession. _Category_k__BackingField, subcategory);
		source_00 = Enumerable.Take<Experience>((System_Collections_Generic_IEnumerable_TSource__o)source, 1);
		experiences = Enumerable.ToArray<Experience>(source_00);
		AottgGameCreateSession.CacheExperiencePreviews((IEnumerable<Experience>)experiences);
		pMVar3 = Enumerable.FirstOrDefault<Experience>((System_Collections_Generic_IEnumerable_TSource__o)experiences);
		if (pMVar3 == null) {
		}
		else {
		}
		return pSVar5;
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x577BF50", Offset = "0x577AF50", VA = "0x577BF50")]
	private static void BuildExperiences(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperiences): 4 lines keep C-only constructs
		il2cpp_array_size_t iVar1;
		String id;
		AottgGameCreateScreen.c__DisplayClass20_0 __this;
		Experience[] pMVar2;
		Action<AottgUi> __this_00;
		AottgGameCreateCarouselRow __this_01;
		MethodInfo method_00;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass20_0));
		__this = new Object();
		if (ui != null) {
			ui.TextKey("GameCreate.Experiences.Title", "header", "game-create-browser-title", null, null);
			method_00 = (MethodInfo *)"GameCreate.Categories.Description";
			ui.TextKey("GameCreate.Categories.Description", "text", "game-create-browser-description", null, null);
			AottgGameCreateScreen.BuildCategorySelector(ui);
			AottgGameCreateScreen.BuildSubcategorySelector(ui);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pMVar2 = AottgGameCreateSession.CurrentExperiences();
			if (__this != null) {
				__this.experiences = pMVar2;
				AottgGameCreateSession.CacheExperiencePreviews((IEnumerable<Experience>)__this.experiences);
				pMVar2 = __this.experiences;
				if (pMVar2 != null) {
					__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0_BuildExperiences_b__0);
					id = "game-create-experience-grid";
					iVar1 = pMVar2.Length;
					__this_01 = new AottgGameCreateCarouselRow(id, (int32_t)iVar1, 360.0, 14.0, __this_00, 18.0, -1);
					ui.Component((AottgComponent)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x577DE20", Offset = "0x577CE20", VA = "0x577DE20")]
	private static void BuildChoiceGrid(AottgUi ui, string id, int count, Action<AottgUi> buildChoices)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildChoiceGrid): clean
		AottgGameCreateCategoryRow __this;

		__this = new AottgGameCreateCategoryRow(id, count, 360.0, 14.0, buildChoices, true, 18.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x577D1A0", Offset = "0x577C1A0", VA = "0x577D1A0")]
	private static void BuildChoiceCarousel(AottgUi ui, string id, int count, Action<AottgUi> buildChoices)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildChoiceCarousel): clean
		AottgGameCreateCarouselRow __this;

		__this = new AottgGameCreateCarouselRow(id, count, 360.0, 14.0, buildChoices, 18.0, -1);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x577ABB0", Offset = "0x5779BB0", VA = "0x577ABB0")]
	private static void BuildFavorites(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavorites): clean
		MethodInfo method_01;

		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.TextKey("GameCreate.Favorites", "header", "game-create-browser-title", null, null);
		method_01 = (MethodInfo *)"GameCreate.Favorites.Description";
		ui.TextKey("GameCreate.Favorites.Description", "text", "game-create-browser-description", null, null);
		AottgGameCreateScreen.BuildCategorySelector(ui);
		AottgGameCreateScreen.BuildFavoriteChoices(ui, false);
		return;
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x577DEC0", Offset = "0x577CEC0", VA = "0x577DEC0")]
	private static void BuildFavoriteChoices(AottgUi ui, bool compact)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavoriteChoices): 10 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass24_0 targetAddress;
		il2cpp_array_size_t iVar1;
		il2cpp_array_size_t iVar2;
		String id;
		AottgGameCreateScreen.c__DisplayClass24_0 __this;
		Experience[] pMVar3;
		String[] pSVar4;
		Action<AottgUi> __this_00;
		AottgGameCreateCategoryRow __this_01;
		String[]* targetAddress_00;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass24_0));
		__this = new Object();
		if (__this != null) {
			__this.compact = compact;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pMVar3 = AottgGameCreateSession.FavoriteExperiences();
			targetAddress = &__this.fields;
			__this.experiences = pMVar3;
			pSVar4 = AottgGameCreateSession.FavoritePresetNames();
			targetAddress_00 = &__this.presets;
			__this.presets = pSVar4;
			pMVar3 = __this.experiences;
			if (pMVar3 != null) {
				if (pMVar3.Length == 0) {
					if (*targetAddress_00 == null) goto label_0587e18a;
					if ((*targetAddress_00).Length == 0) {
						if (ui != null) {
							ui.TextKey("GameCreate.Favorites.Empty", "text", "game-create-favorites-empty", null, null);
							return;
						}
						goto label_0587e18a;
					}
				}
				if (__this.compact == false) {
					AottgGameCreateSession.CacheExperiencePreviews((IEnumerable<Experience>)pMVar3);
				}
				__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0_BuildFavoriteChoices_b__0);
				if (__this.compact != false) {
					AottgGameCreateScreen.BuildButtonRow(ui, "game-create-favorites-selector", __this_00);
					return;
				}
				pMVar3 = targetAddress.experiences;
				if ((pMVar3 != null) &&(pSVar4 = *targetAddress_00, pSVar4 != null)) {
					id = "game-create-favorites-grid";
					iVar1 = pSVar4.Length;
					iVar2 = pMVar3.Length;
					__this_01 = new AottgGameCreateCategoryRow(id, (int)iVar1 + (int)iVar2, 360.0, 14.0, __this_00, true, 18.0);
					if (ui != null) {
						ui.Component((AottgComponent)__this_01);
						return;
					}
				}
			}
		}
	label_0587e18a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x577E470", Offset = "0x577D470", VA = "0x577E470")]
	private static void BuildFavoriteChoice(AottgUi ui, string id, string title, string description, string preview, int index, bool compact, bool selected, Action select)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavoriteChoice): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass25_0 __this;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;
		AottgGameCreateChoiceTile __this_01;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass25_0));
		__this = new Object();
		if (__this != null) {
			__this.select = select;
			__this_00 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0_BuildFavoriteChoice_b__0);
			if (compact) {
				if (ui != null) {
					pGVar1 = ui.Button((uint)!selected * 5, title, __this_00, id, description, null, null);
					pGVar2 = AottgGameCreateScreen.CompactButtonLayout();
					if (pGVar1 != null) {
						pGVar1.layout = pGVar2;
						return;
					}
				}
			}
			else {
				__this_01 = new AottgGameCreateChoiceTile(id, title, description, null, "star", index, preview, __this_00, 0.0);
				if (ui != null) {
					ui.Component((AottgComponent)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x577CCE0", Offset = "0x577BCE0", VA = "0x577CCE0")]
	private static void BuildCategorySelector(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCategorySelector): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass26_0 __this;
		String[] pSVar1;
		Action<AottgUi> __this_00;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass26_0));
		__this = new Object();
		pSVar1 = AottgGameCreateSession.Categories();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.categories = pSVar1;
		__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0_BuildCategorySelector_b__0);
		AottgGameCreateScreen.BuildButtonRow(ui, "game-create-category-selector", __this_00);
		return;
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x577DAC0", Offset = "0x577CAC0", VA = "0x577DAC0")]
	private static void BuildSubcategorySelector(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSubcategorySelector): 8 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		Func<string, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source;
		String selected;
		AottgGameCreateSession klass;

		if (Il2CppMethodInitialized_075451ab == false) {
			Il2CppMethodInitialized_075451ab = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) = klass;
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession.Subcategories();
		}
		else {
			pSVar2 = AottgGameCreateSession.Subcategories();
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length < 2) {
			return;
		}
		__this = new Func<string, string>(null, (intptr_t)MethodInfo_UI_ContentLocale_ExperienceSubcategory);
		source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__TResult__o)__this);
		pSVar2 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		if (Il2CppMethodInitialized_075452d3 == false) {
			Il2CppMethodInitialized_075452d3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		selected = ContentLocale.ExperienceSubcategory(AottgGameCreateSession. _Subcategory_k__BackingField);
		AottgGameCreateScreen.BuildCompactRow(ui, "game-create-subcategory-selector", pSVar2, selected, "gameCreate.select.subcategory", "game-create-subcategory-", 1, true);
		return;
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x577E9B0", Offset = "0x577D9B0", VA = "0x577E9B0")]
	private static void BuildExperienceSelector(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSelector): 2 lines keep C-only constructs
		uint uVar1;
		Experience[] array;
		int selectedIndex;
		AottgGameCreateScreen.c__DisplayClass28_0 __this;
		Experience[] pMVar2;
		Action<AottgUi> __this_00;
		AottgGameCreateCarouselRow __this_01;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass28_0));
		__this = new Object();
		pMVar2 = AottgGameCreateSession.CurrentExperiences();
		if (__this == null) goto label_0587ebb2;
		__this.experiences = pMVar2;
		pMVar2 = __this.experiences;
		if (pMVar2 == null) goto label_0587ebb2;
		if ((int)pMVar2.Length < 2) {
			return;
		}
		__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass28_0_BuildExperienceSelector_b__0);
		array = __this.experiences;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452d2 != false) goto label_0587ead7;
	label_0587eb80: ;
			Il2CppMethodInitialized_075452d2 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452d2 == false) goto label_0587eb80;
	label_0587ead7: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		selectedIndex = Array.IndexOf<Experience>((Object[])array, (object)AottgGameCreateSession. _Experience_k__BackingField);
		__this_01 = new AottgGameCreateCarouselRow("game-create-experience-selector", (int32_t)pMVar2.Length, 46.0, 10.0, __this_00, 0.0, selectedIndex);
		if (ui != null) {
			ui.Component((AottgComponent)__this_01);
			return;
		}
	label_0587ebb2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x577E770", Offset = "0x577D770", VA = "0x577E770")]
	private static void BuildCompactRow(AottgUi ui, string id, string[] values, string selected, string actionId, string itemPrefix, AottgButtonVariant selectedVariant = AottgButtonVariant.Primary, bool carousel = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCompactRow): 3 lines keep C-only constructs
		String[] array;
		int selectedIndex;
		AottgGameCreateScreen.c__DisplayClass29_0 __this;
		Action<AottgUi> __this_00;
		Predicate<T> match;
		AottgGameCreateCarouselRow __this_01;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass29_0));
		__this = new Object();
		if (__this != null) {
			__this.values = values;
			__this.selected = selected;
			__this.actionId = actionId;
			__this.itemPrefix = itemPrefix;
			__this.selectedVariant = selectedVariant;
			__this.carousel = carousel;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildCompactRow_b__0);
			if (__this.carousel == false) {
				AottgGameCreateScreen.BuildButtonRow(ui, id, __this_00);
				return;
			}
			array = __this.values;
			if (array != null) {
				match = new Predicate<string>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildCompactRow_b__1);
				selectedIndex = Array.FindIndex<string>((Object[])array, match);
				__this_01 = new AottgGameCreateCarouselRow(id, (int32_t)array.Length, 46.0, 10.0, __this_00, 0.0, selectedIndex);
				if (ui != null) {
					ui.Component((AottgComponent)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x577EBE0", Offset = "0x577DBE0", VA = "0x577EBE0")]
	private static GisketchLayoutDefinition CarouselButtonLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CarouselButtonLayout): clean
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Points(260.0);
		height = AottgUi.Points(46.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x577E340", Offset = "0x577D340", VA = "0x577E340")]
	private static void BuildButtonRow(AottgUi ui, string id, Action<AottgUi> buildButtons)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildButtonRow): clean
		GisketchLength width;
		GisketchLayoutDefinition layout;

		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "Center", null, "Wrap", 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("clear", buildButtons, id, layout, null);
		return;
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x577ECA0", Offset = "0x577DCA0", VA = "0x577ECA0")]
	private static GisketchNodeDefinition BuildCompactChoice(AottgUi ui, string label, bool selected, string actionId, string id, [Optional][DefaultParameterValue(0)] AottgButtonVariant selectedVariant, [Optional] string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCompactChoice): clean
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;
		int variant;

		if (ui != null) {
			variant = 5;
			if (selected) {
				variant = selectedVariant;
			}
			pGVar1 = ui.Button(variant, label, actionId, id, null, null, icon);
			if (pGVar1 != null) {
				pGVar1.clip = true;
				pGVar2 = AottgGameCreateScreen.CompactButtonLayout();
				pGVar1.layout = pGVar2;
				return pGVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x577E680", Offset = "0x577D680", VA = "0x577E680")]
	private static GisketchLayoutDefinition CompactButtonLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CompactButtonLayout): clean
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(18.0);
		maxWidth = AottgUi.Percent(20.0);
		height = AottgUi.Points(46.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x577ED70", Offset = "0x577DD70", VA = "0x577ED70")]
	private static void BuildCollapsedFeatureChoice(AottgUi ui, string icon, string label, bool selected, string actionId, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCollapsedFeatureChoice): clean
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		if (ui != null) {
			pGVar1 = ui.Button((uint)!selected * 5, (String)**(ulong*)(g_data_07556758 + 0xb8), actionId, id, null, null, icon);
			if (pGVar1 != null) {
				pGVar1.formLabel = label;
				pGVar1.tooltip = label;
				width = AottgUi.Percent(9.0);
				maxWidth = AottgUi.Percent(10.0);
				height = AottgUi.Points(46.0);
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x577BA80", Offset = "0x577AA80", VA = "0x577BA80")]
	private static void BuildConfiguration(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildConfiguration): 12 lines keep C-only constructs
		uint uVar1;
		ExperienceRuleResult __this;
		bool bVar2;
		String pSVar3;
		String pSVar4;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar5;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		List<string> __this_00;
		int iStack_34;

		iStack_34 = 0;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d6 == false) goto label_0587bcdd;
	label_0587bb61: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587bb71;
	label_0587bd00: ;
			__this = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			if (g_data_075452d6 != false) goto label_0587bb61;
	label_0587bcdd: ;
			g_data_075452d6 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587bd00;
	label_0587bb71: ;
			__this = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		if (__this == null) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452d5 == false) goto label_0587be75;
	label_0587bd36: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587bd46;
	label_0587be98: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar3 = AottgGameCreateSession. _LoadError_k__BackingField;
			}
			else {
				if (Il2CppMethodInitialized_075452d5 != false) goto label_0587bd36;
	label_0587be75: ;
				Il2CppMethodInitialized_075452d5 = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587be98;
	label_0587bd46: ;
				pSVar3 = AottgGameCreateSession. _LoadError_k__BackingField;
			}
			if (pSVar3 == null) {
				if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Configuration.LoadFailed");
			}
			if (ui != null) {
				ui.Callout(3, pSVar3, "game-create-rule-error");
				return;
			}
			goto label_0587bcc6;
		}
		if (((typeof(AottgGameCreateScreen))._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgGameCreateScreen.BuildCategorySelector(ui);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			pMVar5 = extraout_RDX_01;
			if (g_data_075452d1 == false) goto label_0587bd7a;
	label_0587bbc3: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			pMVar5 = extraout_RDX;
			if (g_data_075452d1 != false) goto label_0587bbc3;
	label_0587bd7a: ;
			g_data_075452d1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			pMVar5 = extraout_RDX_02;
		}
		if (uVar1 == 0) {
			pMVar5 = extraout_RDX_03;
		}
		uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		if (AottgGameCreateSession._ShowFavorites_k__BackingField == false) {
			if (uVar1 == 0) {
			}
			AottgGameCreateScreen.BuildSubcategorySelector(ui);
			AottgGameCreateScreen.BuildExperienceSelector(ui);
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (uVar1 == 0) {
				pMVar5 = extraout_RDX_00;
			}
			AottgGameCreateScreen.BuildFavoriteChoices(ui, true);
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateScreen.BuildExperienceContext(ui);
		pMVar5 = (MethodInfo)__this.Fields;
		AottgGameCreateScreen.BuildExperienceFields(ui, (IReadOnlyList<ExperienceRuleField>)pMVar5, __this.Experience);
		AottgGameCreateScreen.BuildLockedFields(ui);
		iStack_34 = 0;
		__this_00 = __this.Errors;
		if (__this_00 != null) {
			if (ui == null) {
				if (0 < __this_00._size) {
					__this_00.get_Item(0);
					pSVar3 = iStack_34.ToString();
					String.Concat("game-create-validation-error-", pSVar3);
					throw new NullReferenceException();
				}
	label_0587bde3: ;
				bVar2 = __this.IsValid;
				if (bVar2) {
					bVar2 = ExperienceRuleEngine.Validate(__this);
					if (!bVar2) {
						if (ui == null) goto label_0587bcc6;
						ui.TextKey("GameCreate.Configuration.Invalid", "text", "game-create-validation-error", null, null);
					}
				}
				return;
			}
			do {
				if (__this_00._size <= iStack_34) goto label_0587bde3;
				pSVar3 = __this_00.get_Item(iStack_34);
				pSVar4 = iStack_34.ToString();
				pSVar4 = String.Concat("game-create-validation-error-", pSVar4);
				ui.Callout(3, pSVar3, pSVar4);
				iStack_34 = iStack_34 + 1;
				__this_00 = __this.Errors;
			} while (__this_00 != null);
		}
	label_0587bcc6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x577EF20", Offset = "0x577DF20", VA = "0x577EF20")]
	private static void BuildExperienceContext(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceContext): 2 lines keep C-only constructs
		uint uVar1;
		AottgGameCreateScreen.c__DisplayClass36_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass36_0));
		__this = new Object();
		if (Il2CppMethodInitialized_075452d2 == false) {
			Il2CppMethodInitialized_075452d2 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (__this != null) {
			__this.experience = *(Experience*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x58 );
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__0);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, "Stretch", null, null, 4.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				ui.Panel("clear", __this_00, "game-create-configuration-context", layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x5780050", Offset = "0x577F050", VA = "0x5780050")]
	private static void BuildField(AottgUi ui, ExperienceRuleField field, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildField): 12 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass37_0 targetAddress;
		String* targetAddress_00;
		String[]* targetAddress_01;
		ExperienceRuleField pSVar1;
		String actionId;
		bool bVar2;
		AottgGameCreateScreen.c__DisplayClass37_0 __this;
		String pSVar3;
		MethodInfo pMVar4;
		String[] pSVar5;
		String pSVar6;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		AottgGameCreateMapField __this_01;
		String* targetAddress_02;
		int local_44;
		AottgUi local_40;
		String local_38;

		local_44 = index;
		local_40 = ui;
		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass37_0));
		__this = new Object();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.field = field;
			pSVar3 = local_44.ToString();
			pMVar4 = (MethodInfo)String.Concat("game-create-field-", pSVar3);
			targetAddress_00 = &__this.id;
			__this.id = (String)pMVar4;
			pSVar1 = __this.field;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar5 = AottgGameCreateSession.FieldOptions(pSVar1);
			targetAddress_01 = &__this.allowed;
			__this.allowed = pSVar5;
			pSVar1 = __this.field;
			pSVar3 = AottgGameCreateScreen.FieldTooltip(pSVar1);
			targetAddress_02 = &__this.tooltip;
			__this.tooltip = pSVar3;
			pSVar1 = __this.field;
			if (pSVar1 != null) {
				pMVar4 = (MethodInfo *)"general.MapName";
				bVar2 = (pSVar1.Id == "general.MapName");
				if (bVar2) {
					pSVar3 = *targetAddress_00;
					pSVar1 = targetAddress.field;
					pSVar6 = AottgGameCreateScreen.FieldValue(pSVar1);
					actionId = "gameCreate.open.mapSelector";
					if (targetAddress.field != null) {
						pSVar5 = *targetAddress_01;
						local_38 = pSVar6;
						if (targetAddress.field.Editable == false) {
							if (pSVar5 == null) goto label_05880364;
							bVar2 = false;
						}
						else {
							if (pSVar5 == null) goto label_05880364;
							bVar2 = 1 < (int)pSVar5.Length;
						}
						pSVar6 = *targetAddress_02;
						__this_01 = new AottgGameCreateMapField(pSVar3, local_38, actionId, bVar2, (int32_t)pSVar5.Length, pSVar6, null);
						if (local_40 != null) {
							local_40.Component((AottgComponent)__this_01);
							return;
						}
					}
				}
				else {
					__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__0);
					pSVar3 = String.Concat(__this.id, "-row");
					layout = AottgGameCreateScreen.FieldRowLayout();
					if (local_40 != null) {
						local_40.Panel("clear", __this_00, pSVar3, layout, null);
						return;
					}
				}
			}
		}
	label_05880364: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x577ACD0", Offset = "0x5779CD0", VA = "0x577ACD0")]
	private static void BuildSandbox(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandbox): 11 lines keep C-only constructs
		uint uVar1;
		String[] array;
		object @object;
		List<AottgSandboxField> obj;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		uint uVar4;
		AottgUi __this;
		bool bVar5;
		int iVar6;
		int iVar7;
		AottgSubtab[] tabs;
		CultureInfo pSVar8;
		String pSVar9;
		String pSVar10;
		AottgSubtab pGVar11;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar12;
		Action<T1, T2> __this_00;
		AottgSubtabStrip __this_01;
		VirtualInvokeData pVVar13;
		ulong uVar14;
		MethodInfo pMVar15;
		long lVar16;
		uint uStack_48;
		int iStack_44;
		AottgUi pGStack_40;

		uStack_48 = 0;
		iStack_44 = 0;
		if (ui == null) goto label_0587b8dc;
		ui.TextKey("GameCreate.Sandbox.Title", "header", "game-create-sandbox-title", null, null);
		pMVar15 = (MethodInfo *)"GameCreate.Sandbox.Description";
		ui.TextKey("GameCreate.Sandbox.Description", "text", "game-create-sandbox-description", null, null);
		AottgGameCreateScreen.BuildCategorySelector(ui);
		pGStack_40 = ui;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d1 == false) goto label_0587af88;
	label_0587af0f: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587af20;
	label_0587afac: ;
			if (AottgGameCreateSession._ShowFavorites_k__BackingField != false) goto label_0587afc6;
	label_0587af31: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587af3e;
	label_0587aff5: ;
			if (g_data_075452d7 == false) goto label_0587b007;
	label_0587af4b: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587af61;
	label_0587b030: ;
			array = AottgGameCreateSession.SandboxSectionsInternal;
		}
		else {
			if (g_data_075452d1 != false) goto label_0587af0f;
	label_0587af88: ;
			g_data_075452d1 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587afac;
	label_0587af20: ;
			if (AottgGameCreateSession._ShowFavorites_k__BackingField == false) goto label_0587af31;
	label_0587afc6: ;
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			}
			AottgGameCreateScreen.BuildFavoriteChoices(ui, true);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587aff5;
	label_0587af3e: ;
			if (g_data_075452d7 != false) goto label_0587af4b;
	label_0587b007: ;
			g_data_075452d7 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587b030;
	label_0587af61: ;
			array = AottgGameCreateSession.SandboxSectionsInternal;
		}
		if (array == null) goto label_0587b8dc;
		tabs = (AottgSubtab[])new AottgSubtab[(uint32_t)array.Length];
		uStack_48 = 0;
		if (0 < (int)array.Length) {
			if (tabs == null) {
				pSVar8 = CultureInfo.InvariantCulture;
				pSVar9 = uStack_48.ToString((IFormatProvider)pSVar8);
				if (uStack_48 < (uint)array.Length) {
					pSVar10 = String.Concat("GameCreate.Sandbox.Section.", array[(int)uStack_48]);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar10 = Aottg2GisketchLocale.Text(pSVar10);
					pGVar11 = new AottgSubtab(pSVar9, pSVar10);
					throw new NullReferenceException();
				}
	label_0587ba6f: ;
				throw new IndexOutOfRangeException();
			}
			do {
				uVar4 = uStack_48;
				pSVar8 = CultureInfo.InvariantCulture;
				pSVar9 = uStack_48.ToString((IFormatProvider)pSVar8);
				if ((uint)array.Length <= uStack_48) goto label_0587ba6f;
				pSVar10 = String.Concat("GameCreate.Sandbox.Section.", array[(int)uStack_48]);
				pSVar10 = Aottg2GisketchLocale.Text(pSVar10);
				pGVar11 = new AottgSubtab(pSVar9, pSVar10);
				if ((uint)tabs.Length <= uVar4) goto label_0587ba6f;
				tabs[(int)uVar4] = pGVar11;
				uStack_48 = uStack_48 + 1;
			} while ((int)uStack_48 < (int)array.Length);
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452cf == false) goto label_0587b4ba;
	label_0587b18e: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452cf != false) goto label_0587b18e;
	label_0587b4ba: ;
			g_data_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		iStack_44 = Array.IndexOf<string>((Object[])array, (object)AottgGameCreateSession. _SandboxSection_k__BackingField);
		pSVar8 = CultureInfo.InvariantCulture;
		pSVar9 = iStack_44.ToString((IFormatProvider)pSVar8);
		pSVar10 = "game-create-sandbox-sections";
		pGVar12 = typeof(AottgGameCreateScreen.c).static_fields;
		__this_00 = (Action<T1, T2>)pGVar12.__9__38_0;
		if (__this_00 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar12 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar12.__9;
			__this_00 = new Action<GisketchActionContext, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_0);
			pGVar12 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar12.__9__38_0 = (Action<GisketchActionContext, string>)__this_00;
		}
		__this_01 = new AottgSubtabStrip(pSVar10, tabs, pSVar9, (Action<GisketchActionContext, string>)__this_00);
		__this = pGStack_40;
		pGStack_40.Component((AottgComponent)__this_01);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452d5 == false) goto label_0587b4fc;
	label_0587b2e6: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452d5 != false) goto label_0587b2e6;
	label_0587b4fc: ;
			Il2CppMethodInitialized_075452d5 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar5 = String.IsNullOrEmpty(AottgGameCreateSession. _LoadError_k__BackingField);
		if (bVar5) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587b31e;
	label_0587b3ec: ;
			if (g_data_075452cf == false) goto label_0587b3fe;
	label_0587b32b: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452d5 == false) goto label_0587b5c8;
	label_0587b3a5: ;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075452d5 != false) goto label_0587b3a5;
	label_0587b5c8: ;
				Il2CppMethodInitialized_075452d5 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			__this.Callout(2, AottgGameCreateSession. _LoadError_k__BackingField, "game-create-sandbox-load-warning");
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587b3ec;
	label_0587b31e: ;
			if (g_data_075452cf != false) goto label_0587b32b;
	label_0587b3fe: ;
			g_data_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar5 = (AottgGameCreateSession. _SandboxSection_k__BackingField == "Weather");
		if (bVar5) {
			AottgGameCreateWeatherEditor.Build(__this);
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452cf == false) goto label_0587b60c;
	label_0587b44e: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452cf != false) goto label_0587b44e;
	label_0587b60c: ;
			g_data_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar15 = (MethodInfo *)"Custom";
		bVar5 = (AottgGameCreateSession. _SandboxSection_k__BackingField == "Custom");
		if (bVar5) {
			AottgGameCreateScreen.BuildSandboxCustom(__this);
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452cf == false) goto label_0587b6c4;
	label_0587b54c: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452cf != false) goto label_0587b54c;
	label_0587b6c4: ;
			g_data_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar15 = (MethodInfo *)"General";
		bVar5 = (AottgGameCreateSession. _SandboxSection_k__BackingField == "General");
		if (bVar5) {
			AottgGameCreateScreen.BuildSandboxGeneral(__this);
			AottgGameCreateScreen.BuildSandboxAddons(__this);
			AottgGameCreateScreen.BuildSandboxPresetActions(__this);
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452cf == false) goto label_0587b77c;
	label_0587b65c: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452cf != false) goto label_0587b65c;
	label_0587b77c: ;
			g_data_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar15 = (MethodInfo *)"Misc";
		bVar5 = (AottgGameCreateSession. _SandboxSection_k__BackingField == "Misc");
		if (bVar5) {
			AottgGameCreateScreen.BuildSandboxMisc(__this);
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452cf == false) goto label_0587b857;
	label_0587b714: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452cf != false) goto label_0587b714;
	label_0587b857: ;
			g_data_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar15 = (MethodInfo *)"Titans";
		bVar5 = (AottgGameCreateSession. _SandboxSection_k__BackingField == "Titans");
		if (bVar5) {
			AottgGameCreateScreen.BuildSandboxTitans(__this);
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452d8 == false) goto label_0587b89b;
	label_0587b7cc: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587b7dd;
	label_0587b8bf: ;
			obj = AottgGameCreateSession.SandboxFieldsInternal;
		}
		else {
			if (Il2CppMethodInitialized_075452d8 != false) goto label_0587b7cc;
	label_0587b89b: ;
			Il2CppMethodInitialized_075452d8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587b8bf;
	label_0587b7dd: ;
			obj = AottgGameCreateSession.SandboxFieldsInternal;
		}
		if (obj != null) {
			pIVar2 = (Il2CppClass)obj.klass;
			uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar14 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar16 = 0;
				do {
					if (*(Il2CppClass*)((long)&pIVar3.interfaceType + lVar16) ==typeof(IReadOnlyCollection<AottgSandboxField>)) {
						pVVar13 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar16);
						goto label_0587b8f4;
					}
					lVar16 = lVar16 + 0x10;
				} while (uVar14 * 0x10 != lVar16);
			}
			pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath((object)obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_0587b8f4: ;
			iVar6 = (*pVVar13.methodPtr)(obj,pVVar13.method);
			if (0 < iVar6) {
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
				}
				AottgGameCreateScreen.BuildSandboxFieldColumns(__this, (IReadOnlyList<AottgSandboxField>)obj);
			}
			pIVar2 = (Il2CppClass)obj.klass;
			uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar14 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar16 = 0;
				do {
					if (*(IReadOnlyCollection<AottgSandboxField>*)((long)&pIVar3.interfaceType + lVar16) == typeof(IReadOnlyCollection<AottgSandboxField>)) {
						pVVar13 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar16);
						goto label_0587b981;
					}
					lVar16 = lVar16 + 0x10;
				} while (uVar14 * 0x10 != lVar16);
			}
			pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath((object)obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_0587b981: ;
			iVar7 = (*pVVar13.methodPtr)((object)obj,pVVar13.method);
			if (iVar7 == 0) {
				__this.TextKey("GameCreate.Sandbox.Empty", "text", "game-create-sandbox-empty", null, null);
			}
			return;
		}
	label_0587b8dc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x5782110", Offset = "0x5781110", VA = "0x5782110")]
	private static void BuildSandboxPresetActions(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxPresetActions): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "clear";
		pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
		__this = pGVar1.__9__39_0;
		if (__this == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxPresetActions_b__39_0);
			pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar1.__9__39_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "Center", null, "Wrap", 14.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this, "game-create-sandbox-actions", layout, null);
		return;
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x5783870", Offset = "0x5782870", VA = "0x5783870")]
	private static void BuildSandboxField(AottgUi ui, AottgSandboxField field, int index, bool enabled = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxField): 10 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass40_0 targetAddress;
		String* targetAddress_00;
		int selectableMapCount;
		AottgSandboxField pGVar1;
		String[] pSVar2;
		String tooltip;
		bool bVar3;
		AottgGameCreateScreen.c__DisplayClass40_0 __this;
		String pSVar4;
		MethodInfo pMVar5;
		String mapName;
		String label;
		AottgGameCreateMapField __this_00;
		Action<AottgUi> __this_01;
		GisketchLayoutDefinition layout;
		String* method_00;
		String* targetAddress_01;
		int local_34;

		local_34 = index;
		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass40_0));
		__this = new Object();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.field = field;
			__this.enabled = enabled;
			pSVar4 = local_34.ToString();
			method_00 = &"game-create-sandbox-field-";
			pMVar5 = (MethodInfo)String.Concat("game-create-sandbox-field-", pSVar4);
			targetAddress_00 = &__this.id;
			__this.id = (String)pMVar5;
			pGVar1 = __this.field;
			pSVar4 = AottgGameCreateScreen.FieldTooltip(pGVar1);
			targetAddress_01 = &__this.tooltip;
			__this.tooltip = pSVar4;
			pGVar1 = __this.field;
			if (pGVar1 != null) {
				pMVar5 = (MethodInfo *)"general.MapName";
				bVar3 = (pGVar1._Id_k__BackingField == "general.MapName");
				if (bVar3) {
					pSVar4 = *targetAddress_00;
					pGVar1 = targetAddress.field;
					mapName = AottgGameCreateScreen.SandboxFieldValue(pGVar1);
					pGVar1 = targetAddress.field;
					if ((pGVar1 != null) &&(pSVar2 = pGVar1._Options_k__BackingField, pSVar2 != null)) {
						tooltip = *targetAddress_01;
						label = AottgGameCreateScreen.SandboxFieldLabel(pGVar1);
						selectableMapCount = (int32_t)pSVar2.Length;
						__this_00 = new AottgGameCreateMapField(pSVar4, mapName, "gameCreate.open.mapSelector", 1 < selectableMapCount, selectableMapCount, tooltip, label);
						if (ui != null) {
							ui.Component((AottgComponent)__this_00);
							return;
						}
					}
				}
				else if (targetAddress.field != null) {
					bVar3 = (targetAddress.field._Id_k__BackingField == "titan.TitanArmorCrawlerEnabled");
					if (bVar3) {
						if (targetAddress.field != null) {
							pSVar4 = targetAddress.field._Id_k__BackingField;
							bVar3 = __this.enabled;
							AottgGameCreateScreen.BuildSandboxSwitchById(ui, pSVar4, bVar3);
							return;
						}
					}
					else {
						__this_01 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0_BuildSandboxField_b__0);
						pSVar4 = String.Concat(__this.id, "-row");
						layout = AottgGameCreateScreen.FieldRowLayout();
						if (ui != null) {
							ui.Panel("clear", __this_01, pSVar4, layout, null);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x5781AA0", Offset = "0x5780AA0", VA = "0x5781AA0")]
	private static void BuildSandboxGeneral(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxGeneral): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass41_0 __this;
		MethodInfo pMVar1;
		AottgSandboxField pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass41_0));
		pMVar1 = null;
		__this = new Object();
		pMVar1 = (MethodInfo)AottgGameCreateScreen.SandboxField("general.MapName");
		if (__this != null) {
			__this.map = (AottgSandboxField)pMVar1;
			pGVar2 = AottgGameCreateScreen.SandboxField("general.GameMode");
			__this.mode = pGVar2;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0_BuildSandboxGeneral_b__0);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", "SpaceBetween", "FlexStart", null, "Wrap", 32.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				ui.Panel("clear", __this_00, "game-create-sandbox-core-fields", layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x57845B0", Offset = "0x57835B0", VA = "0x57845B0")]
	private static void BuildSandboxModeField(AottgUi ui, AottgSandboxField field, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxModeField): 2 lines keep C-only constructs
		int iVar1;
		String[] pSVar2;
		MethodInfo pMVar3;
		String pSVar4;
		String pSVar5;
		GisketchNodeDefinition pGVar6;
		GisketchLength width;
		GisketchLength minHeight;
		GisketchLayoutDefinition pGVar7;
		String* ppSVar8;
		String icon;
		Nullable<bool>[] local_38 = new Nullable<bool>[2];
		int local_34;

		local_34 = index;
		pMVar3 = (MethodInfo)local_34.ToString();
		pSVar4 = String.Concat("game-create-sandbox-field-", (String)pMVar3);
		pMVar3 = (MethodInfo)AottgGameCreateScreen.SandboxFieldLabel(field);
		pSVar5 = String.Concat(pSVar4, "-label");
		if (ui != null) {
			ui.Text((String)pMVar3, "text", pSVar5, null, null);
			if ((field != null) &&(pSVar2 = field._Options_k__BackingField, pSVar2 != null)) {
				iVar1 = (int)pSVar2.Length;
				pSVar5 = AottgGameCreateScreen.SandboxFieldValue(field);
				if (iVar1 < 2) {
					ppSVar8 = *(String**)(g_data_07556758 + 0xb8);
				}
				else {
					ppSVar8 = &"gameCreate.open.modeSelector";
				}
				icon = null;
				if (1 < iVar1) {
					icon = "zoom";
				}
				pGVar6 = ui.Button(1, pSVar5, *ppSVar8, pSVar4, null, null, icon);
				local_38[0].hasValue = false;
				local_38[0].value = false;
				pMVar3 = (MethodInfo)(ulong)(1 < iVar1);
				local_38 = new Nullable<bool>(1 < iVar1);
				if (pGVar6 != null) {
					pGVar6.enabled = local_38[0];
					pSVar4 = AottgGameCreateScreen.SandboxFieldLabel(field);
					pGVar6.formLabel = pSVar4;
					width = AottgUi.Percent(100.0);
					minHeight = AottgUi.Points(52.0);
					pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, minHeight, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar6.layout = pGVar7;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x5782300", Offset = "0x5781300", VA = "0x5782300")]
	private static void BuildSandboxMisc(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxMisc): clean
		uint uVar1;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		BoolSetting pSVar4;
		String id;
		String[] pSVar5;

		if (ui == null) goto label_05882d50;
		ui.TextKey("GameCreate.Sandbox.Misc.PVP", "header", "game-create-misc-pvp-title", null, null);
		pSVar5 = (String[])new string[3];
		if (pSVar5 == null) goto label_05882d50;
		if ((int)pSVar5.Length == 0) goto label_05882d4b;
		pSVar5[0] = "misc.PVP";
		if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05882d4b;
		pSVar5[1] = "misc.ThunderspearPVP";
		if ((uint)pSVar5.Length < 3) goto label_05882d4b;
		pSVar5[2] = "misc.APGPVP";
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075451c6 != false) goto label_05882695;
	label_05882bb9: ;
			id = "game-create-misc-pvp";
			Il2CppMethodInitialized_075451c6 = true;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075451c6 == false) goto label_05882bb9;
	label_05882695: ;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			id = "game-create-misc-pvp";
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, id, true, pSVar5);
		pSVar5 = (String[])new string[6];
		if (pSVar5 == null) goto label_05882d50;
		if ((int)pSVar5.Length == 0) goto label_05882d4b;
		pSVar5[0] = "misc.AllowBlades";
		if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05882d4b;
		pSVar5[1] = "misc.AllowAHSS";
		if ((uint)pSVar5.Length < 3) goto label_05882d4b;
		pSVar5[2] = "misc.AllowThunderspears";
		if ((pSVar5.Length & 0xfffffffc) == 0) goto label_05882d4b;
		pSVar5[3] = "misc.AllowAPG";
		if ((uint)pSVar5.Length < 5) goto label_05882d4b;
		pSVar5[4] = "misc.AllowUnarmed";
		if ((uint)pSVar5.Length < 6) goto label_05882d4b;
		pSVar5[5] = "misc.AllowCivilian";
		AottgGameCreateScreen.BuildSandboxMatrix(ui, "Weapons", "game-create-misc-weapons", pSVar5);
		pSVar5 = (String[])new string[5];
		if (pSVar5 == null) goto label_05882d50;
		if ((int)pSVar5.Length == 0) goto label_05882d4b;
		pSVar5[0] = "misc.AllowPlayerTitans";
		if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05882d4b;
		pSVar5[1] = "misc.AllowShifters";
		if ((uint)pSVar5.Length < 3) goto label_05882d4b;
		pSVar5[2] = "misc.AllowShifterSpecials";
		if ((pSVar5.Length & 0xfffffffc) == 0) goto label_05882d4b;
		pSVar5[3] = "misc.CustomStats";
		if ((uint)pSVar5.Length < 5) goto label_05882d4b;
		pSVar5[4] = "misc.CustomPerks";
		AottgGameCreateScreen.BuildSandboxMatrix(ui, "Characters", "game-create-misc-characters", pSVar5);
		pSVar5 = (String[])new string[7];
		if (pSVar5 == null) goto label_05882d50;
		if ((int)pSVar5.Length == 0) goto label_05882d4b;
		pSVar5[0] = "misc.EndlessRespawnEnabled";
		if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05882d4b;
		pSVar5[1] = "misc.EndlessRespawnTime";
		if ((uint)pSVar5.Length < 3) goto label_05882d4b;
		pSVar5[2] = "misc.AllowSpawnTime";
		if ((pSVar5.Length & 0xfffffffc) == 0) goto label_05882d4b;
		pSVar5[3] = "misc.InvincibilityTime";
		if ((uint)pSVar5.Length < 5) goto label_05882d4b;
		pSVar5[4] = "misc.HumanHealth";
		if ((uint)pSVar5.Length < 6) goto label_05882d4b;
		pSVar5[5] = "misc.ShifterHealth";
		if ((uint)pSVar5.Length < 7) goto label_05882d4b;
		pSVar5[6] = "misc.HorseHealth";
		AottgGameCreateScreen.BuildSandboxMatrix(ui, "RespawnHealth", "game-create-misc-respawn", pSVar5);
		pSVar5 = (String[])new string[7];
		if (pSVar5 == null) goto label_05882d50;
		if ((int)pSVar5.Length == 0) goto label_05882d4b;
		pSVar5[0] = "misc.Horses";
		if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05882d4b;
		pSVar5[1] = "misc.HorsebackCombat";
		if ((uint)pSVar5.Length < 3) goto label_05882d4b;
		pSVar5[2] = "misc.DestructibleEnvironment";
		if ((pSVar5.Length & 0xfffffffc) == 0) goto label_05882d4b;
		pSVar5[3] = "misc.GunsAirReload";
		if ((uint)pSVar5.Length < 5) goto label_05882d4b;
		pSVar5[4] = "misc.AllowStock";
		if ((uint)pSVar5.Length < 6) goto label_05882d4b;
		pSVar5[5] = "misc.ClearKDROnRestart";
		if ((uint)pSVar5.Length < 7) goto label_05882d4b;
		pSVar5[6] = "misc.GlobalMinimapDisable";
		AottgGameCreateScreen.BuildSandboxMatrix(ui, "MovementEquipment", "game-create-misc-movement", pSVar5);
		ui.Separator("game-create-misc-realism-divider", null);
		ui.TextKey("GameCreate.Sandbox.Misc.Realism", "header", "game-create-misc-realism-title", null, null);
		AottgGameCreateScreen.BuildSandboxSwitchLine(ui, "misc.RealismMode");
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05882b74;
	label_05882bf9: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05882b84;
	label_05882c1c: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05882bf9;
	label_05882b74: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05882c1c;
	label_05882b84: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar2 != null) {
			pSVar3 = pSVar2.Misc;
			if ((pSVar3 != null) &&(pSVar4 = pSVar3.RealismMode, pSVar4 != null)) {
				if (pSVar4._value == false) {
					return;
				}
				pSVar5 = (String[])new string[4];
				if (pSVar5 != null) {
					if ((int)pSVar5.Length != 0) {
						pSVar5[0] = "misc.RealismImpactThreshold";
						if ((pSVar5.Length & 0xfffffffe) != 0) {
							pSVar5[1] = "misc.RealismMaxReel";
							if (2 < (uint)pSVar5.Length) {
								pSVar5[2] = "misc.RealismMaxSpeed";
								if ((pSVar5.Length & 0xfffffffc) != 0) {
									pSVar5[3] = "misc.HookDamageMultiplier";
									AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, "game-create-misc-realism-fields", true, pSVar5);
									return;
								}
							}
						}
					}
	label_05882d4b: ;
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05882d50: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x5782D60", Offset = "0x5781D60", VA = "0x5782D60")]
	private static void BuildSandboxTitans(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxTitans): 2 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		InGameSet pSVar3;
		InGameTitanSettings pSVar4;
		BoolSetting pSVar5;
		object pIVar6;
		String pSVar7;
		GisketchLayoutDefinition pGVar8;
		String[] pSVar9;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar10;
		Action<AottgUi> pSVar11;
		MethodInfo method_02;
		Il2CppClass pIVar12;

		if (ui == null) goto label_05883698;
		ui.TextKey("GameCreate.Sandbox.Titans.Spawns", "header", "game-create-titans-spawns-title", null, null);
		pSVar7 = "clear";
		pGVar10 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar11 = pGVar10.__9__44_0;
		if (pSVar11 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar10 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar6 = (object)pGVar10.__9;
			pSVar11 = new Action<AottgUi>(pIVar6, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_0);
			pGVar10 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar10.__9__44_0 = pSVar11;
			uVar2 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar12 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar2 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar12 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar12;
		if (uVar2 == 0) {
		}
		pGVar8 = AottgGameCreateScreen.FieldRowLayout();
		ui.Panel(pSVar7, pSVar11, "game-create-titans-spawn-preset-row", pGVar8, null);
		ui.Separator("game-create-titans-size-divider", null);
		AottgGameCreateScreen.BuildSandboxSwitchLine(ui, "titan.TitanSizeEnabled");
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0588305f;
	label_05883123: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05883070;
	label_05883147: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05883123;
	label_0588305f: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05883147;
	label_05883070: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar3 == null) ||(pSVar4 = pSVar3.Titan, pSVar4 == null)) ||(pSVar5 = pSVar4.TitanSizeEnabled, pSVar5 == null)) goto label_05883698;
		bVar1 = pSVar5._value;
		pSVar9 = (String[])new string[2];
		if (pSVar9 == null) goto label_05883698;
		if ((int)pSVar9.Length == 0) goto label_0588369d;
		pSVar9[0] = "titan.TitanSizeMin";
		if ((pSVar9.Length & 0xfffffffe) == 0) goto label_0588369d;
		pSVar9[1] = "titan.TitanSizeMax";
		AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, "game-create-titans-size-fields", bVar1, pSVar9);
		ui.Separator("game-create-titans-defense-divider", null);
		ui.TextKey("GameCreate.Sandbox.Titans.HealthArmor", "header", "game-create-titans-defense-title", null, null);
		pSVar7 = "clear";
		pGVar10 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar11 = pGVar10.__9__44_1;
		if (pSVar11 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar10 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar6 = (object)pGVar10.__9;
			pSVar11 = new Action<AottgUi>(pIVar6, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_1);
			pGVar10 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar10.__9__44_1 = pSVar11;
			uVar2 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar12 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar2 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar12 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar12;
		if (uVar2 == 0) {
		}
		pGVar8 = AottgGameCreateScreen.FieldColumnsLayout();
		ui.Panel(pSVar7, pSVar11, "game-create-titans-defense", pGVar8, null);
		ui.Separator("game-create-titans-decapitation-divider", null);
		ui.TextKey("GameCreate.Sandbox.Titans.Decapitation", "header", "game-create-titans-decapitation-title", null, null);
		AottgGameCreateScreen.BuildSandboxSwitchLine(ui, "titan.TitanDecapitationEnabled");
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05883331;
	label_05883401: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05883342;
	label_05883425: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05883401;
	label_05883331: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05883425;
	label_05883342: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.Titan, pSVar4 != null)) &&(pSVar5 = pSVar4.TitanDecapitationEnabled, pSVar5 != null)) {
			bVar1 = pSVar5._value;
			pSVar9 = (String[])new string[1];
			if (pSVar9 != null) {
				if ((int)pSVar9.Length != 0) {
					pSVar9[0] = "titan.TitanDecapitationMinDamage";
					AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, "game-create-titans-decapitation-fields", bVar1, pSVar9);
					ui.Separator("game-create-titans-appearance-divider", null);
					ui.TextKey("GameCreate.Sandbox.Titans.Appearance", "header", "game-create-titans-appearance-title", null, null);
					pSVar9 = (String[])new string[2];
					if (pSVar9 == null) goto label_05883698;
					if ((int)pSVar9.Length != 0) {
						pSVar9[0] = "titan.TitanStandardModels";
						if ((pSVar9.Length & 0xfffffffe) != 0) {
							pSVar9[1] = "titan.TitanHeadMode";
							method_02 = (MethodInfo *)"game-create-titans-appearance-fields";
							AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, (String)method_02, true, pSVar9);
							AottgGameCreateScreen.BuildTitanHeadBounds(ui);
							ui.Separator("game-create-titans-behavior-divider", null);
							ui.TextKey("GameCreate.Sandbox.Titans.Behavior", "header", "game-create-titans-behavior-title", null, null);
							pSVar9 = (String[])new string[1];
							if (pSVar9 == null) goto label_05883698;
							if ((int)pSVar9.Length != 0) {
								pSVar9[0] = "titan.TitanSmartMovement";
								pSVar7 = "game-create-titans-behavior-fields";
								AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, pSVar7, true, pSVar9);
								return;
							}
						}
					}
				}
	label_0588369d: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_05883698: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x5784EA0", Offset = "0x5783EA0", VA = "0x5784EA0")]
	private static void BuildTitanHeadBounds(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHeadBounds): clean
		uint uVar1;
		int iVar2;
		InGameSet pSVar3;
		InGameTitanSettings pSVar4;
		IntSetting pSVar5;
		String[] fieldIds;

		if (Il2CppMethodInitialized_075451bd == false) {
			Il2CppMethodInitialized_075451bd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar3 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.Titan, pSVar4 != null)) &&(pSVar5 = pSVar4.TitanHeadMode, pSVar5 != null)) {
			iVar2 = pSVar5._value;
			fieldIds = (String[])new string[2];
			if (fieldIds != null) {
				if ((int)fieldIds.Length != 0) {
					fieldIds[0] = "titan.TitanHeadRandomMin";
					if ((fieldIds.Length & 0xfffffffe) != 0) {
						fieldIds[1] = "titan.TitanHeadRandomMax";
						AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, "game-create-titans-head-random-fields", iVar2 == 1, fieldIds);
						return;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x5785080", Offset = "0x5784080", VA = "0x5785080")]
	private static void BuildTitanHealthMode(AottgUi ui, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHealthMode): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass46_0 __this;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass46_0));
		__this = new Object();
		if (__this != null) {
			__this.enabled = enabled;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass46_0_BuildTitanHealthMode_b__0);
			layout = AottgGameCreateScreen.FieldRowLayout();
			if (ui != null) {
				ui.Panel("clear", __this_00, "game-create-titans-health-mode-row", layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x57851B0", Offset = "0x57841B0", VA = "0x57851B0")]
	private static void BuildTitanHealthEnabled(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHealthEnabled): 1 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		InGameSet pSVar3;
		InGameTitanSettings pSVar4;
		IntSetting pSVar5;
		String label;
		Action<bool> __this;

		label = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Titans.HealthEnabled");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar3 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar3 == null) ||(pSVar4 = pSVar3.Titan, pSVar4 == null)) ||(pSVar5 = pSVar4.TitanHealthMode, pSVar5 == null)) {
			throw new NullReferenceException();
		}
		iVar2 = pSVar5._value;
		__this = new Action<bool>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_SetTitanHealthEnabled);
		AottgGameCreateScreen.BuildTitanToggle(ui, label, "game-create-titans-health-enabled", iVar2 != 0, __this);
		return;
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x57854E0", Offset = "0x57844E0", VA = "0x57854E0")]
	private static void BuildTitanArmorEnabled(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanArmorEnabled): 1 lines keep C-only constructs
		bool enabled;
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BoolSetting pSVar4;
		object @object;
		String label;
		String pSVar5;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar6;
		Action<bool> __this;
		int local_3c;
		String local_38;

		label = AottgGameCreateSession.FieldLabel("titan.TitanArmorEnabled");
		local_3c = AottgGameCreateScreen.SandboxFieldIndex("titan.TitanArmorEnabled");
		pSVar5 = local_3c.ToString();
		pSVar5 = String.Concat("game-create-sandbox-field-", pSVar5);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanArmorEnabled, pSVar4 == null)) {
			throw new NullReferenceException();
		}
		enabled = pSVar4._value;
		if (((typeof(AottgGameCreateScreen.c))._2). cctor_finished_or_no_cctor == 0) {
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			__this = pGVar6.__9__48_0;
		}
		else {
			pGVar6 = (typeof(AottgGameCreateScreen.c)).static_fields;
			__this = pGVar6.__9__48_0;
		}
		if (__this == null) {
			local_38 = label;
			if (((typeof(AottgGameCreateScreen.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar6.__9;
			__this = new Action<bool>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanArmorEnabled_b__48_0);
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar6.__9__48_0 = __this;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			label = local_38;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateScreen.BuildTitanToggle(ui, label, pSVar5, enabled, __this);
		return;
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x5785880", Offset = "0x5784880", VA = "0x5785880")]
	private static void BuildTitanWardedEnabled(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanWardedEnabled): 1 lines keep C-only constructs
		bool enabled;
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BoolSetting pSVar4;
		object @object;
		String label;
		String pSVar5;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar6;
		Action<bool> __this;
		int local_3c;
		String local_38;

		label = AottgGameCreateSession.FieldLabel("titan.TitanWardedEnabled");
		local_3c = AottgGameCreateScreen.SandboxFieldIndex("titan.TitanWardedEnabled");
		pSVar5 = local_3c.ToString();
		pSVar5 = String.Concat("game-create-sandbox-field-", pSVar5);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanWardedEnabled, pSVar4 == null)) {
			throw new NullReferenceException();
		}
		enabled = pSVar4._value;
		if (((typeof(AottgGameCreateScreen.c))._2). cctor_finished_or_no_cctor == 0) {
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			__this = pGVar6.__9__49_0;
		}
		else {
			pGVar6 = (typeof(AottgGameCreateScreen.c)).static_fields;
			__this = pGVar6.__9__49_0;
		}
		if (__this == null) {
			local_38 = label;
			if (((typeof(AottgGameCreateScreen.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar6.__9;
			__this = new Action<bool>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanWardedEnabled_b__49_0);
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar6.__9__49_0 = __this;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			label = local_38;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateScreen.BuildTitanToggle(ui, label, pSVar5, enabled, __this);
		return;
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x5785370", Offset = "0x5784370", VA = "0x5785370")]
	private static void BuildTitanToggle(AottgUi ui, string label, string id, bool enabled, Action<bool> setEnabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanToggle): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass50_0 __this;
		Action<AottgUi> __this_00;
		String id_00;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass50_0));
		__this = new Object();
		if (__this != null) {
			__this.label = label;
			__this.id = id;
			__this.enabled = enabled;
			__this.setEnabled = setEnabled;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0_BuildTitanToggle_b__0);
			id_00 = String.Concat(__this.id, "-row");
			layout = AottgGameCreateScreen.FieldRowLayout();
			if (ui != null) {
				ui.Panel("clear", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x57848E0", Offset = "0x57838E0", VA = "0x57848E0")]
	private static void BuildSandboxMatrix(AottgUi ui, string key, string id, params string[] fieldIds)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxMatrix): clean
		uint uVar1;
		String key_00;
		String id_00;

		key_00 = String.Concat("GameCreate.Sandbox.Misc.", key);
		id_00 = String.Concat(id, "-title");
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.TextKey(key_00, "header", id_00, null, null);
		if (Il2CppMethodInitialized_075451c6 == false) {
			Il2CppMethodInitialized_075451c6 = true;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, id, true, fieldIds) ;
		return;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x5784190", Offset = "0x5783190", VA = "0x5784190")]
	private static void BuildSandboxSwitchById(AottgUi ui, string fieldId, bool enabled = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxSwitchById): 7 lines keep C-only constructs
		byte bVar1;
		BoolSetting pSVar2;
		BoolSetting pSVar3;
		int iVar4;
		AottgGameCreateScreen.c__DisplayClass52_0 __this;
		AottgSandboxField pGVar5;
		String pSVar6;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		BoolSetting* ppSVar7;
		MethodInfo pMVar8;
		MethodInfo pMVar9;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass52_0));
		pMVar8 = null;
		__this = new Object();
		if (__this == null) goto label_058843df;
		__this.enabled = enabled;
		pGVar5 = AottgGameCreateScreen.SandboxField(fieldId);
		__this.field = pGVar5;
		pSVar3 = typeof(BoolSetting);
		pGVar5 = __this.field;
		if (pGVar5 == null) {
			return;
		}
		pMVar8 = (MethodInfo)pGVar5._Setting_k__BackingField;
		if (pMVar8 == null) {
			__this.boolSetting = null;
	label_058842d7: ;
			ppSVar7 = &__this.boolSetting;
			pMVar9 = null;
			pSVar2 = *ppSVar7;
		}
		else {
			bVar1 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((((BoolSetting)pMVar8.methodPointer)._2).typeHierarchyDepth < bVar1) {
				pMVar9 = null;
			}
			else {
				pMVar9 = null;
				if ((((BoolSetting)pMVar8.methodPointer)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BoolSetting)) {
					pMVar9 = pMVar8;
				}
			}
			ppSVar7 = &__this.boolSetting;
			__this.boolSetting = (BoolSetting)pMVar9;
			if ((((BoolSetting)pMVar8.methodPointer)._2).typeHierarchyDepth < bVar1) goto label_058842d7;
			pMVar9 = null;
			if ((((BoolSetting)pMVar8.methodPointer)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pSVar3) {
				pMVar9 = pMVar8;
			}
			pSVar2 = *ppSVar7;
		}
		if (pSVar2 != null) {
			if (((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor == 0) {
			}
			iVar4 = AottgGameCreateScreen.SandboxFieldIndex(fieldId);
			__this.index = iVar4;
			pSVar6 = (__this.index).ToString();
			pSVar6 = String.Concat("game-create-sandbox-field-", pSVar6);
			__this.id = pSVar6;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0_BuildSandboxSwitchById_b__0);
			pMVar8 = (MethodInfo)__this.id;
			pSVar6 = String.Concat((String)pMVar8, "-row");
			layout = AottgGameCreateScreen.FieldRowLayout();
			if (ui == null) {
	label_058843df: ;
				throw new NullReferenceException();
			}
			ui.Panel("clear", __this_00, pSVar6, layout, null);
		}
		return;
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x5785B40", Offset = "0x5784B40", VA = "0x5785B40")]
	private static GisketchNodeDefinition FieldSwitch(AottgUi row, string id, bool value, Action<GisketchActionContext> action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldSwitch): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass53_0 __this;
		Action<AottgUi> __this_00;
		String id_00;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass53_0));
		__this = new Object();
		if (__this != null) {
			__this.id = id;
			__this.value = value;
			__this.action = action;
			__this.toggle = null;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_FieldSwitch_b__0);
			method_00 = (MethodInfo *)"-slot";
			id_00 = String.Concat(__this.id, "-slot");
			layout = AottgGameCreateScreen.FieldControlLayout(true);
			if (row != null) {
				row.Panel("clear", __this_00, id_00, layout, null);
				return __this.toggle;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x5784880", Offset = "0x5783880", VA = "0x5784880")]
	private static void BuildSandboxFieldsByIds(AottgUi ui, string id, params string[] fieldIds)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldsByIds): clean


		AottgGameCreateScreen.BuildSandboxFieldsByIds(ui, id, true, fieldIds);
		return;
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x5784B40", Offset = "0x5783B40", VA = "0x5784B40")]
	private static void BuildSandboxFieldsByIds(AottgUi ui, string id, bool enabled, params string[] fieldIds)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldsByIds): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int count;
		String id_00;
		List<AottgSandboxField> __this;
		AottgSandboxField[] pGVar3;
		MethodInfo pMVar4;
		AottgGameCreateScreen.c__DisplayClass55_0 __this_00;
		MethodInfo method_00;
		ulong uVar5;
		MethodInfo item;
		Action<T1, T2> __this_01;
		AottgGameCreateScreen.c__DisplayClass55_0 targetAddress;
		ulong uVar6;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateScreen.c__DisplayClass55_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.enabled = enabled;
			method_00 = new List<AottgSandboxField>();
			targetAddress = &__this_00.fields;
			__this_00 = (List<AottgSandboxField>)method_00;
			if (fieldIds != null) {
				if (0 < (int)fieldIds.Length) {
					uVar5 = fieldIds.Length & 0xffffffff;
					uVar6 = 0;
					do {
						if (uVar5 <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						id_00 = fieldIds[uVar6];
						if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
							item = (MethodInfo)AottgGameCreateScreen.SandboxField(id_00);
							pMVar4 = MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add;
						}
						else {
							item = (MethodInfo)AottgGameCreateScreen.SandboxField(id_00);
							pMVar4 = MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add;
						}
						MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add = pMVar4;
						if (item != null) {
							__this = targetAddress.fields;
							if (__this == null) goto label_05884da8;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pGVar3 = __this._items;
							if (pGVar3 == null) goto label_05884da8;
							uVar2 = __this._size;
							if (uVar2 < (uint)pGVar3.Length) {
								__this._size = uVar2 + 1;
								pGVar3[(int)uVar2] = (AottgSandboxField)item;
								method_00 = item;
							}
							else {
								__this.AddWithResize((object)item);
								method_00 = item;
							}
						}
						uVar6 = uVar6 + 1;
						uVar2 = (uint)fieldIds.Length;
						uVar5 = (ulong)uVar2;
					} while ((long)uVar6 < (long)(int)uVar2);
				}
				if (targetAddress.fields != null) {
					count = targetAddress._size;
					__this_01 = new Action<AottgUi, int>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass55_0_BuildSandboxFieldsByIds_b__0);
					AottgGameCreateScreen.BuildFieldColumns(ui, id, count, (Action<AottgUi, int>)__this_01);
					return;
				}
			}
		}
	label_05884da8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x5784A10", Offset = "0x5783A10", VA = "0x5784A10")]
	private static void BuildSandboxSwitchLine(AottgUi ui, string fieldId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxSwitchLine): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass56_0 __this;
		String pSVar1;
		Action<T1, T2> __this_00;
		int local_24;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass56_0));
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.fieldId = fieldId;
		pSVar1 = __this.fieldId;
		AottgGameCreateScreen.SandboxFieldIndex(pSVar1);
		pSVar1 = local_24.ToString();
		pSVar1 = String.Concat("game-create-sandbox-switch-", pSVar1);
		__this_00 = new Action<AottgUi, int>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass56_0_BuildSandboxSwitchLine_b__0);
		AottgGameCreateScreen.BuildFieldColumns(ui, pSVar1, 1, (Action<AottgUi, int>)__this_00);
		return;
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x5785DD0", Offset = "0x5784DD0", VA = "0x5785DD0")]
	private static void BuildFieldColumns(AottgUi ui, string id, int count, Action<AottgUi, int> build)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFieldColumns): 2 lines keep C-only constructs
		String id_00;
		AottgGameCreateScreen.c__DisplayClass57_0 __this;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass57_0));
		__this = new Object();
		if (__this != null) {
			__this.build = build;
			__this.id = id;
			__this.count = count;
			__this.split = (count - (count + 1 >> 0x1f)) + 1 >> 1;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__0);
			id_00 = __this.id;
			layout = AottgGameCreateScreen.FieldColumnsLayout();
			if (ui != null) {
				ui.Panel("clear", __this_00, id_00, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x5785F40", Offset = "0x5784F40", VA = "0x5785F40")]
	private static void BuildSandboxFieldById(AottgUi ui, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldById): clean
		uint uVar1;
		int index;
		AottgSandboxField field;

		if (Il2CppMethodInitialized_075451ca == false) {
			Il2CppMethodInitialized_075451ca = true;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			field = AottgGameCreateScreen.SandboxField(id);
		}
		else {
			field = AottgGameCreateScreen.SandboxField(id);
		}
		if (field == null) {
			return;
		}
		if (((typeof(AottgGameCreateScreen))._2).cctor_finished_or_no_cctor == 0) {
		}
		index = AottgGameCreateScreen.SandboxFieldIndex(id);
		AottgGameCreateScreen.BuildSandboxField(ui, field, index, true);
		return;
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x5784400", Offset = "0x5783400", VA = "0x5784400")]
	private static AottgSandboxField SandboxField(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxField): clean
		uint uVar1;
		List<AottgSandboxField> obj;
		uint uVar4;
		VirtualInvokeData pVVar5;
		AottgSandboxField pGVar6;

		if (Il2CppMethodInitialized_075451cb == false) {
			Il2CppMethodInitialized_075451cb = true;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			uVar4 = AottgGameCreateScreen.SandboxFieldIndex(id);
		}
		else {
			uVar4 = AottgGameCreateScreen.SandboxFieldIndex(id);
		}
		if ((int)uVar4 < 0) {
			return null;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452d8 == false) {
			Il2CppMethodInitialized_075452d8 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			obj = AottgGameCreateSession.SandboxFieldsInternal;
		}
		else {
			obj = *(List<AottgSandboxField>*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x10);
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		pGVar6 = (AottgSandboxField)obj.get_Item((ulong)uVar4, pVVar5.method);
		return pGVar6;
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x577A040", Offset = "0x5779040", VA = "0x577A040")]
	private static int SandboxFieldIndex(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldIndex): 1 lines keep C-only constructs
		uint uVar1;
		List<AottgSandboxField> obj;
		bool bVar4;
		int iVar5;
		object pIVar7;
		int iVar10;

		if (Il2CppMethodInitialized_075451cc == false) {
			Il2CppMethodInitialized_075451cc = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452d8 == false) {
			Il2CppMethodInitialized_075452d8 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			obj = AottgGameCreateSession.SandboxFieldsInternal;
		}
		else {
			obj = *(List<AottgSandboxField>*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x10);
		}
		if (obj == null) {
	label_0587a246: ;
			throw new NullReferenceException();
		}
		iVar10 = 0;
		do {
			iVar5 = obj.get_Item();
			if (iVar5 <= iVar10) {
				return -1;
			}
			pIVar7 = obj.get_Item(iVar10);
			if (pIVar7 == null) goto label_0587a246;
			bVar4 = String.Equals((String)pIVar7[1].klass, id, 5);
			if (bVar4) {
				return iVar10;
			}
			iVar10 = iVar10 + 1;
		} while(true);
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x57840B0", Offset = "0x57830B0", VA = "0x57840B0")]
	private static string SandboxFieldLabel(AottgSandboxField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldLabel): 2 lines keep C-only constructs
		sbyte cVar1;
		AottgSandboxField pGVar2;

		if (Il2CppMethodInitialized_075451cd == false) {
			Il2CppMethodInitialized_075451cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058840d3;
	label_0588412a: ;
			if (Il2CppMethodInitialized_075452d9 != false) goto label_058840dc;
	label_05884138: ;
			Il2CppMethodInitialized_075452d9 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058840e8;
	label_05884157: ;
			cVar1 = AottgGameCreateSession._showSandboxVariableNames;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588412a;
	label_058840d3: ;
			if (Il2CppMethodInitialized_075452d9 == false) goto label_05884138;
	label_058840dc: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05884157;
	label_058840e8: ;
			cVar1 = AottgGameCreateSession._showSandboxVariableNames;
		}
		if (cVar1 == false) {
			if (field == null) goto label_05884180;
			pGVar2 = (AottgSandboxField)&field._Label_k__BackingField;
		}
		else {
			if (field == null) {
	label_05884180: ;
				throw new NullReferenceException();
			}
			pGVar2 = &field.fields;
		}
		return pGVar2._Id_k__BackingField;
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x5781CE0", Offset = "0x5780CE0", VA = "0x5781CE0")]
	private static void BuildSandboxAddons(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxAddons): clean
		uint uVar1;
		String[] pSVar2;
		bool bVar3;
		CultureInfo provider;
		String pSVar4;
		object arg0;
		GisketchNodeDefinition pGVar5;
		GisketchLength width;
		GisketchLength minHeight;
		GisketchLayoutDefinition pGVar6;
		int index;
		int iVar7;
		Nullable<bool>[] local_38 = new Nullable<bool>[2];
		int local_34;

		if (Il2CppMethodInitialized_075451ce == false) {
			Il2CppMethodInitialized_075451ce = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452da == false) {
			Il2CppMethodInitialized_075452da = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._sandboxAddonNames;
		}
		else {
			pSVar2 = *(String[]*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x18);
		}
		if (pSVar2 != null) {
			if ((int)pSVar2.Length < 1) {
				iVar7 = 0;
			}
			else {
				index = 0;
				iVar7 = 0;
				do {
					bVar3 = AottgGameCreateSession.IsSandboxAddonSelected(index);
					iVar7 = iVar7 + (uint)bVar3;
					index = index + 1;
				} while (index < (int)pSVar2.Length);
			}
			if (ui != null) {
				ui.TextKey("GameCreate.Sandbox.Addons", "text", "game-create-sandbox-addons-title", null, null);
				provider = CultureInfo.CurrentCulture;
				pSVar4 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Addons.SelectedCount");
				local_34 = iVar7;
				arg0 = (object)local_34;
				pSVar4 = String.Format((IFormatProvider)provider, pSVar4, arg0);
				pGVar5 = ui.Button(1, pSVar4, "gameCreate.open.addonSelector", "game-create-sandbox-addons", null, null, "zoom");
				local_38[0].hasValue = false;
				local_38[0].value = false;
				local_38 = new Nullable<bool>((int)pSVar2.Length != 0);
				if (pGVar5 != null) {
					pGVar5.enabled = local_38[0];
					pSVar4 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Addons");
					pGVar5.formLabel = pSVar4;
					width = AottgUi.Points(330.0);
					minHeight = AottgUi.Points(52.0);
					pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, minHeight, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar5.layout = pGVar6;
					if (pSVar2.Length == 0) {
						ui.TextKey("GameCreate.Sandbox.Addons.Empty", "text", "game-create-sandbox-addons-empty", null, null);
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x57861D0", Offset = "0x57851D0", VA = "0x57861D0")]
	private static void BuildMultiplayerRoom(AottgUi ui, bool showHeader = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildMultiplayerRoom): 11 lines keep C-only constructs
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		int iVar4;
		AottgGameCreateScreen.c__DisplayClass63_0 __this;
		IReadOnlyList<AottgSandboxField> pSVar5;
		VirtualInvokeData pVVar6;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar7;
		Func<AottgSandboxField, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o pSVar8;
		Action<AottgUi> __this_01;
		GisketchLayoutDefinition layout;
		ulong uVar9;
		long lVar10;

		if (Il2CppMethodInitialized_075451cf == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_TakeWhile_AottgSandboxField) ;
			Il2CppMethodInitialized_075451cf = true;
		}
		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass63_0));
		__this = new Object();
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_0754526d == false) goto label_05886322;
	label_058862f9: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05886305;
	label_05886341: ;
			pSVar5 = AottgGameCreateSession.BuildMultiplayerFields();
		}
		else {
			if (g_data_0754526d != false) goto label_058862f9;
	label_05886322: ;
			g_data_0754526d = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05886341;
	label_05886305: ;
			pSVar5 = AottgGameCreateSession.BuildMultiplayerFields();
		}
		if (__this != null) {
			__this = pSVar5;
			pIVar1 = (object)__this;
			if (pIVar1 != null) {
				pIVar2 = pIVar1.klass;
				uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar9 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar10 = 0;
					do {
						if (*(IReadOnlyCollection<AottgSandboxField>*)((long)&pIVar3.interfaceType + lVar10) == typeof(IReadOnlyCollection<AottgSandboxField>)) {
							pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10);
							goto label_058863d1;
						}
						lVar10 = lVar10 + 0x10;
					} while (uVar9 * 0x10 != lVar10);
				}
				pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_058863d1: ;
				iVar4 = (*pVVar6.methodPtr)(pIVar1,pVVar6.method);
				if (iVar4 != 0) {
					if (showHeader) {
						if (ui == null) goto label_0588659f;
						ui.Separator("game-create-room-divider", null);
						ui.TextKey("GameCreate.Room.Title", "header", "game-create-room-title", null, null);
					}
					pSVar8 = (System_Collections_Generic_IEnumerable_TSource__o)__this;
					if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar7 = typeof(AottgGameCreateScreen.c).static_fields;
						__this_00 = pGVar7.__9__63_0;
					}
					else {
						pGVar7 = typeof(AottgGameCreateScreen.c).static_fields;
						__this_00 = pGVar7.__9__63_0;
					}
					if (__this_00 == null) {
						if (((typeof(AottgGameCreateScreen.c))._2). cctor_finished_or_no_cctor == 0) {
							pGVar7 = typeof(AottgGameCreateScreen.c).static_fields;
						}
						pIVar1 = (object)pGVar7.__9;
						__this_00 = new Func<AottgSandboxField, bool>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildMultiplayerRoom_b__63_0);
						pGVar7 = typeof(AottgGameCreateScreen.c).static_fields;
						pGVar7.__9__63_0 = __this_00;
					}
					pSVar8 = Enumerable.TakeWhile<AottgSandboxField>(pSVar8, (System_Func_TSource__bool__o)__this_00);
					iVar4 = Enumerable.Count<AottgSandboxField>(pSVar8);
					__this.split = iVar4;
					__this_01 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__1);
					layout = AottgGameCreateScreen.FieldColumnsLayout();
					if (ui == null) goto label_0588659f;
					ui.Panel("clear", __this_01, "game-create-room-fields", layout, null);
				}
				return;
			}
		}
	label_0588659f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x5786620", Offset = "0x5785620", VA = "0x5786620")]
	private static bool ShowRoomField(AottgSandboxField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$ShowRoomField): clean
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		IntSetting pSVar3;
		bool bVar4;

		if (field == null) goto label_05886744;
		bVar4 = (field._Id_k__BackingField != "misc.ProximityMinDistance");
		if ((bVar4) &&(bVar4 = (field._Id_k__BackingField != "misc.ProximityMaxDistance"))) {
			return true;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058866c3;
	label_058866ef: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058866cf;
	label_0588670e: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058866ef;
	label_058866c3: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588670e;
	label_058866cf: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(pSVar3 = pSVar2.VoiceChat, pSVar3 != null)) {
			return pSVar3._value == 1;
		}
	label_05886744: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x577AAA0", Offset = "0x5779AA0", VA = "0x577AAA0")]
	private static void BuildRoomSettings(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildRoomSettings): clean


		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.TextKey("GameCreate.Room.Title", "header", "game-create-room-page-title", null, null);
		ui.TextKey("GameCreate.Room.Description", "text", "game-create-room-description", null, null);
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgGameCreateScreen.BuildMultiplayerRoom(ui, false);
		return;
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x5786750", Offset = "0x5785750", VA = "0x5786750")]
	private static void BuildRoomField(AottgUi ui, AottgSandboxField field, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildRoomField): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass66_0 __this;
		String pSVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		int local_1c;

		local_1c = index;
		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass66_0));
		__this = new Object();
		if (__this != null) {
			__this.field = field;
			pSVar1 = local_1c.ToString();
			pSVar1 = String.Concat("game-create-room-field-", pSVar1);
			__this.id = pSVar1;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass66_0_BuildRoomField_b__0);
			pSVar1 = String.Concat(__this.id, "-row");
			layout = AottgGameCreateScreen.FieldRowLayout();
			if (ui != null) {
				ui.Panel("clear", __this_00, pSVar1, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x57868E0", Offset = "0x57858E0", VA = "0x57868E0")]
	private static string VoiceChatLabel(VoiceChatMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$VoiceChatLabel): 1 lines keep C-only constructs
		String* ppSVar1;

		if (mode == 1) {
			ppSVar1 = &"Proximity";
		}
		else {
			ppSVar1 = &"None";
			if (mode == 0) {
				ppSVar1 = &"Global";
			}
		}
		return *ppSVar1;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x5786940", Offset = "0x5785940", VA = "0x5786940")]
	private static GisketchChoiceOptionDefinition[] VoiceChatChoices()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$VoiceChatChoices): clean
		uint uVar1;
		String[] values;
		String[] pSVar2;
		String[] labels;
		GisketchChoiceOptionDefinition[] pGVar3;

		if (Il2CppMethodInitialized_075451d4 == false) {
			Il2CppMethodInitialized_075451d4 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05886969;
	label_05886abc: ;
			if (g_data_075452b3 != false) goto label_05886976;
	label_05886ace: ;
			g_data_075452b3 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05886abc;
	label_05886969: ;
			if (g_data_075452b3 == false) goto label_05886ace;
	label_05886976: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = UIManager.GetLocaleOptions("CreateGamePopup.Misc.VoiceChatOptions");
		values = AottgGameCreateScreen.VoiceChatValues;
		labels = (String[])new string[3];
		if (pSVar2 == null) {
	label_05886b13: ;
			throw new NullReferenceException();
		}
		if (2 < (uint)pSVar2.Length) {
			if (labels == null) goto label_05886b13;
			if ((int)labels.Length != 0) {
				labels[0] = pSVar2[2];
				if (((pSVar2.Length & 0xfffffffe) != 0) && ((labels.Length & 0xfffffffe) != 0)) {
					labels[1] = pSVar2[1];
					if (((int)pSVar2.Length != 0) && (2 < (uint)labels.Length)) {
						labels[2] = pSVar2[0];
						pGVar3 = AottgGameCreateScreen.ChoiceOptions(values, labels);
						return pGVar3;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x5786C70", Offset = "0x5785C70", VA = "0x5786C70")]
	private static GisketchChoiceOptionDefinition[] TitanHealthModeChoices()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$TitanHealthModeChoices): clean
		uint uVar1;
		String[] pSVar2;
		String[] values;
		String[] labels;
		GisketchChoiceOptionDefinition[] pGVar3;

		if (Il2CppMethodInitialized_075451d5 == false) {
			Il2CppMethodInitialized_075451d5 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05886c99;
	label_05886e33: ;
			if (g_data_075452b2 != false) goto label_05886ca6;
	label_05886e45: ;
			g_data_075452b2 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05886e33;
	label_05886c99: ;
			if (g_data_075452b2 == false) goto label_05886e45;
	label_05886ca6: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = UIManager.GetLocaleOptions("CreateGamePopup.Titans.HealthOptions");
		values = (String[])new string[2];
		if (values == null) goto label_05886e8a;
		if ((int)values.Length != 0) {
			values[0] = "Fixed";
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = "Scaled";
				labels = (String[])new string[2];
				if (pSVar2 == null) {
	label_05886e8a: ;
					throw new NullReferenceException();
				}
				if ((pSVar2.Length & 0xfffffffe) != 0) {
					if (labels == null) goto label_05886e8a;
					if ((int)labels.Length != 0) {
						labels[0] = pSVar2[1];
						if ((2 < (uint)pSVar2.Length) && ((labels.Length & 0xfffffffe) != 0)) {
							labels[1] = pSVar2[2];
							if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
							}
							pGVar3 = AottgGameCreateScreen.ChoiceOptions(values, labels);
							return pGVar3;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x5786B80", Offset = "0x5785B80", VA = "0x5786B80")]
	private static GisketchChoiceOptionDefinition[] ChoiceOptions(string[] values, string[] labels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$ChoiceOptions): 5 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass72_0 __this;
		Func<T1, T2, TResult> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		GisketchChoiceOptionDefinition[] pGVar1;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass72_0));
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.labels = labels;
		__this_00 = new Func<string, int, GisketchChoiceOptionDefinition>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass72_0_ChoiceOptions_b__0);
		source = Enumerable.Select<string, GisketchChoiceOptionDefinition>((System_Collections_Generic_IEnumerable_TSource__o)values, (System_Func_TSource__int__TResult__o)__this_00);
		pGVar1 = (GisketchChoiceOptionDefinition[])Enumerable.ToArray<GisketchChoiceOptionDefinition>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pGVar1;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x5781480", Offset = "0x5780480", VA = "0x5781480")]
	private static void BuildSandboxCustom(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxCustom): 3 lines keep C-only constructs
		object pIVar1;
		String pSVar2;
		Action<AottgUi> pSVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar6;

		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.TextKey("GameCreate.Sandbox.Custom.Content.Title", "header", "game-create-sandbox-custom-content-title", null, null);
		ui.TextKey("GameCreate.Sandbox.Custom.Content.Description", "text", "game-create-sandbox-custom-content-description", null, null);
		pSVar2 = "clear";
		pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar3 = pGVar6.__9__73_0;
		if (pSVar3 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar1 = (object)pGVar6.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_0);
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar6.__9__73_0 = pSVar3;
		}
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Layout("Row", null, null, null, "Wrap", 14.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		ui.Panel(pSVar2, pSVar3, "game-create-sandbox-custom-managers", pGVar5, null);
		ui.TextKey("GameCreate.Presets", "subheader", "game-create-sandbox-custom-presets-title", null, null);
		pSVar2 = "clear";
		pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar3 = pGVar6.__9__73_1;
		if (pSVar3 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar1 = (object)pGVar6.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_1);
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar6.__9__73_1 = pSVar3;
		}
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Layout("Row", null, null, null, "Wrap", 12.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		ui.Panel(pSVar2, pSVar3, "game-create-sandbox-custom-preset-actions", pGVar5, null);
		ui.TextKey("GameCreate.Sandbox.Custom.Folders.Title", "subheader", "game-create-sandbox-custom-folders-title", null, null);
		pSVar2 = "clear";
		pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar3 = pGVar6.__9__73_2;
		if (pSVar3 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar1 = (object)pGVar6.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_2);
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar6.__9__73_2 = pSVar3;
		}
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Layout("Row", null, null, null, "Wrap", 12.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		ui.Panel(pSVar2, pSVar3, "game-create-sandbox-custom-folder-actions", pGVar5, null);
		return;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x5786F00", Offset = "0x5785F00", VA = "0x5786F00")]
	private static void BuildFooter(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFooter): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "clear";
		pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
		__this = pGVar1.__9__74_0;
		if (__this == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildFooter_b__74_0);
			pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar1.__9__74_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this, "game-create-footer", layout, null);
		return;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x5787100", Offset = "0x5786100", VA = "0x5787100")]
	private static GisketchLayoutDefinition CardGrid()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CardGrid): clean
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar1;

		minWidth = AottgUi.Points(320.0);
		pGVar1 = AottgUi.Layout("Row", "Center", "Stretch", null, "Wrap", 20.0, null, null, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x577F950", Offset = "0x577E950", VA = "0x577F950")]
	private static void BuildLockedFields(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedFields): 10 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		ExperienceRuleField item;
		ExperienceRuleField[] pSVar4;
		object @object;
		String id;
		bool bVar5;
		uint uVar6;
		int iVar7;
		List<ExperienceRuleField> __this;
		ExperienceRuleField[] pSVar8;
		String pSVar9;
		String tooltip;
		GisketchNodeDefinition pGVar10;
		GisketchLength width;
		GisketchLayoutDefinition pGVar11;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar12;
		Action<GisketchActionContext> __this_00;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar13;
		uint uVar14;

		__this = new List<ExperienceRuleField>();
		pSVar8 = AottgGameCreateSession.LockedFields();
		if (pSVar8 == null) goto label_0588002c;
		uVar6 = (uint)pSVar8.Length;
		if (0 < (int)uVar6) {
			uVar14 = 0;
			do {
				if (uVar6 <= uVar14) {
					throw new IndexOutOfRangeException();
				}
				item = pSVar8[(int)uVar14];
				if (item == null) goto label_0588002c;
				pMVar13 = (MethodInfo)item.Id;
				iVar7 = Array.IndexOf<string>((Object[])AottgGameCreateScreen.CoreFieldIds, (object)pMVar13) ;
				if (iVar7 < 0) {
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						if (g_data_075452ce == false) goto label_0587fb96;
	label_0587fb63: ;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587fb6f;
	label_0587fbb8: ;
						cVar2 = AottgGameCreateSession._isMultiplayer;
					}
					else {
						if (g_data_075452ce != false) goto label_0587fb63;
	label_0587fb96: ;
						g_data_075452ce = true;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587fbb8;
	label_0587fb6f: ;
						cVar2 = AottgGameCreateSession._isMultiplayer;
					}
					if (cVar2 != false) {
						pSVar9 = item.Id;
						if (((typeof(AottgGameCreateScreen))._2). cctor_finished_or_no_cctor == 0) {
						}
						bVar5 = AottgGameCreateScreen.IsRoomSettingId(pSVar9);
						if (bVar5) goto label_0587faf0;
					}
					pMVar13 = MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add;
					if (__this == null) goto label_0588002c;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = __this._items;
					if (pSVar4 == null) goto label_0588002c;
					uVar6 = __this._size;
					if (uVar6 < (uint)pSVar4.Length) {
						__this._size = uVar6 + 1;
						pSVar4[(int)uVar6] = item;
					}
					else {
						__this.AddWithResize((object)item);
					}
				}
	label_0587faf0: ;
				uVar14 = uVar14 + 1;
				uVar6 = (uint)pSVar8.Length;
			} while ((int)uVar14 < (int)uVar6);
		}
		if (__this == null) goto label_0588002c;
		if (__this._size == 0) {
			return;
		}
		if (ui == null) goto label_0588002c;
		ui.Separator("game-create-locked-divider", null);
		pSVar9 = Aottg2GisketchLocale.Text("GameCreate.Configuration.ShowLocked");
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452db == false) goto label_0587ff00;
	label_0587fce3: ;
			uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452db != false) goto label_0587fce3;
	label_0587ff00: ;
			Il2CppMethodInitialized_075452db = true;
			uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar5 = AottgGameCreateSession._showLockedSettings;
		id = "game-create-show-locked";
		pGVar12 = typeof(AottgGameCreateScreen.c).static_fields;
		__this_00 = pGVar12.__9__77_0;
		if (__this_00 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar12 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar12.__9;
			__this_00 = new Action<GisketchActionContext>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildLockedFields_b__77_0);
			pGVar12 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar12.__9__77_0 = __this_00;
			uVar3 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		tooltip = Aottg2GisketchLocale.Text("GameCreate.Configuration.ShowLocked.Tooltip") ;
		pGVar10 = ui.Checkbox(id, pSVar9, bVar5, __this_00, null, tooltip);
		width = AottgUi.Points(300.0);
		pGVar11 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (pGVar10 != null) {
			pGVar10.layout = pGVar11;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452db == false) {
				Il2CppMethodInitialized_075452db = true;
				uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				cVar2 = AottgGameCreateSession._showLockedSettings;
			}
			else {
				cVar2 = *(sbyte)((long)(typeof(AottgGameCreateSession)). static_fields + 0x22);
			}
			if (cVar2 == false) {
				return;
			}
			ui.TextKey("GameCreate.Configuration.Locked", "header", "game-create-locked-title", null, null);
			pMVar13 = extraout_RDX;
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
				pMVar13 = extraout_RDX_00;
			}
			AottgGameCreateScreen.BuildLockedFieldColumns(ui, (IReadOnlyList<ExperienceRuleField>)__this);
			return;
		}
	label_0588002c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x5787600", Offset = "0x5786600", VA = "0x5787600")]
	private static void BuildLockedFieldColumns(AottgUi ui, IReadOnlyList<ExperienceRuleField> fields)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedFieldColumns): 6 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		AottgGameCreateScreen.c__DisplayClass78_0 __this;
		VirtualInvokeData pVVar4;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		ulong uVar5;
		long lVar6;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass78_0));
		__this = new Object();
		if (__this != null) {
			__this = fields;
			obj = (object)__this;
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar5 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar6 = 0;
					do {
						if (*(IReadOnlyCollection<ExperienceRuleField>*)((long)&pIVar2.interfaceType + lVar6) == typeof(IReadOnlyCollection<ExperienceRuleField>)) {
							pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar6);
							goto label_05887711;
						}
						lVar6 = lVar6 + 0x10;
					} while (uVar5 * 0x10 != lVar6);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<ExperienceRuleField>), 0);
	label_05887711: ;
				iVar3 = (*pVVar4.methodPtr)(obj,pVVar4.method);
				__this.split = (iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1;
				__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__0);
				layout = AottgGameCreateScreen.FieldColumnsLayout();
				if (ui != null) {
					ui.Panel("clear", __this_00, "game-create-locked-fields", layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x57877D0", Offset = "0x57867D0", VA = "0x57877D0")]
	private static void BuildLockedField(AottgUi ui, ExperienceRuleField field, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedField): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass79_0 __this;
		String pSVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		int local_1c;

		local_1c = index;
		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass79_0));
		__this = new Object();
		if (__this != null) {
			__this.field = field;
			pSVar1 = local_1c.ToString();
			pSVar1 = String.Concat("game-create-locked-field-", pSVar1);
			__this.id = pSVar1;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass79_0_BuildLockedField_b__0);
			pSVar1 = String.Concat(__this.id, "-row");
			layout = AottgGameCreateScreen.FieldRowLayout();
			if (ui != null) {
				ui.Panel("clear", __this_00, pSVar1, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x5787960", Offset = "0x5786960", VA = "0x5787960")]
	private static string LockedFieldTooltip(ExperienceRuleField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$LockedFieldTooltip): clean
		bool bVar1;
		String pSVar2;
		String value;

		pSVar2 = Aottg2GisketchLocale.Text("GameCreate.Configuration.LockedTooltip");
		value = AottgGameCreateScreen.FieldTooltip(field);
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return pSVar2;
		}
		pSVar2 = String.Concat(value, "\n", pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x577F140", Offset = "0x577E140", VA = "0x577F140")]
	private static void BuildExperienceFields(AottgUi ui, IReadOnlyList<ExperienceRuleField> fields, PresetDefinition experience)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceFields): 43 lines keep C-only constructs
		IReadOnlyList<ExperienceRuleField>* targetAddress;
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		String[] array;
		IReadOnlyList<ExperienceRuleField> pSVar4;
		String pSVar5;
		ExperienceRuleField[] pSVar6;
		Il2CppClass pIVar7;
		Il2CppRuntimeInterfaceOffsetPair pIVar8;
		bool bVar10;
		int iVar11;
		int iVar12;
		AottgGameCreateScreen.c__DisplayClass81_0 __this;
		List<ExperienceRuleField> pSVar13;
		ulong uVar14;
		ExperienceRuleField pSVar15;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		VirtualInvokeData pVVar16;
		object pIVar17;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar18;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		uint uVar19;
		long lVar20;
		ulong uVar21;
		System_Collections_Generic_List_ExperienceUISection__o sections;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass81_0));
		__this = new Object();
		if (__this != null) {
			targetAddress = &__this;
			__this = fields;
			array = AottgGameCreateScreen.CoreFieldIds;
			pSVar13 = new List<ExperienceRuleField>();
			__this.core = pSVar13;
			if (array != null) {
				if (0 < (int)array.Length) {
					uVar14 = array.Length & 0xffffffff;
					uVar21 = 0;
					pMVar18 = extraout_RDX;
					do {
						if (uVar14 <= uVar21) {
							throw new IndexOutOfRangeException();
						}
						pSVar4 = *targetAddress;
						pSVar5 = array[uVar21];
						if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
							pMVar18 = extraout_RDX_01;
						}
						pSVar15 = AottgGameCreateScreen.FindField(pSVar4, pSVar5);
						pMVar18 = extraout_RDX_02;
						if (pSVar15 != null) {
							pSVar13 = __this.core;
							if (pSVar13 == null) goto label_0587f939;
							piVar1 = &pSVar13._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = pSVar13._items;
							if (pSVar6 == null) goto label_0587f939;
							uVar19 = pSVar13._size;
							if (uVar19 < (uint)pSVar6.Length) {
								pSVar13._size = uVar19 + 1;
								pSVar6[(int)uVar19] = pSVar15;
								pMVar18 = extraout_RDX_03;
							}
							else {
								pSVar13.AddWithResize((object)pSVar15);
								pMVar18 = extraout_RDX_00;
							}
						}
						uVar21 = uVar21 + 1;
						uVar19 = (uint)array.Length;
						uVar14 = (ulong)uVar19;
					} while ((long)uVar21 < (long)(int)uVar19);
				}
				__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_0_BuildExperienceFields_b__0);
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Row", "SpaceBetween", "FlexStart", null, "Wrap", 32.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (ui != null) {
					uVar19 = 0;
					ui.Panel("clear", __this_00, "game-create-core-fields", layout, null);
					pSVar13 = new List<ExperienceRuleField>();
					pIVar17 = (object)*targetAddress;
					while (pIVar17 != null) {
						pIVar7 = pIVar17.klass;
						uVar14 = (ulong)(pIVar7._2).interface_offsets_count;
						if (uVar14 != 0) {
							pIVar8 = (pIVar7._1).interfaceOffsets;
							lVar20 = 0;
							do {
								if (*(Il2CppClass*)((long)&pIVar8.interfaceType + lVar20) ==typeof(IReadOnlyCollection<ExperienceRuleField>)) {
									pVVar16 = pIVar7.vtable + *(int)((long)&pIVar8.offset + lVar20);
									goto label_0587f593;
								}
								lVar20 = lVar20 + 0x10;
							} while (uVar14 * 0x10 != lVar20);
						}
						pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar17, (Il2CppClass)typeof(IReadOnlyCollection<ExperienceRuleField>), 0);
	label_0587f593: ;
						iVar11 = (*pVVar16.methodPtr)(pIVar17,pVVar16.method);
						if (iVar11 <= (int)uVar19) {
							if (pSVar13 != null) {
								if (pSVar13._size == 0) {
									return;
								}
								sections = null;
								ui.Separator("game-create-fields-divider", null);
								if (experience != null) {
									sections = experience.UISections;
								}
								pSVar4 = *targetAddress;
								AottgGameCreateScreen.BuildExperienceSections(ui, pSVar4, pSVar13, sections);
								return;
							}
							break;
						}
						pIVar17 = (object)*targetAddress;
						if (pIVar17 == null) break;
						pIVar7 = pIVar17.klass;
						uVar14 = (ulong)(pIVar7._2).interface_offsets_count;
						if (uVar14 != 0) {
							pIVar8 = (pIVar7._1).interfaceOffsets;
							lVar20 = 0;
							do {
								if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar8.interfaceType + lVar20) == typeof(IReadOnlyList<ExperienceRuleField>)) {
									pVVar16 = pIVar7.vtable + *(int)((long)&pIVar8.offset + lVar20);
									goto label_0587f603;
								}
								lVar20 = lVar20 + 0x10;
							} while (uVar14 * 0x10 != lVar20);
						}
						pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar17, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_0587f603: ;
						pIVar17 = (*pVVar16.methodPtr)(pIVar17,uVar19,pVVar16.method);
						if (pIVar17 == null) break;
						if (*(sbyte)&pIVar17[2].monitor != false) {
							pIVar17 = (object)*targetAddress;
							if (pIVar17 == null) break;
							pIVar7 = pIVar17.klass;
							uVar14 = (ulong)(pIVar7._2).interface_offsets_count;
							if (uVar14 != 0) {
								pIVar8 = (pIVar7._1).interfaceOffsets;
								lVar20 = 0;
								do {
									if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar8.interfaceType + lVar20) == typeof(IReadOnlyList<ExperienceRuleField>)) {
										pVVar16 = pIVar7.vtable + *(int)((long)&pIVar8.offset + lVar20);
										goto label_0587f681;
									}
									lVar20 = lVar20 + 0x10;
								} while (uVar14 * 0x10 != lVar20);
							}
							pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar17, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_0587f681: ;
							pIVar17 = (*pVVar16.methodPtr)(pIVar17,uVar19,pVVar16.method);
							if (pIVar17 == null) break;
							iVar12 = Array.IndexOf<string>((Object[])array, (object)pIVar17[1].klass);
							if (iVar12 < 0) {
								if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0 ) {
									if (g_data_075452ce != false) goto label_0587f6cf;
	label_0587f702: ;
									g_data_075452ce = true;
									if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0587f6db;
	label_0587f724: ;
									cVar2 = AottgGameCreateSession._isMultiplayer;
								}
								else {
									if (g_data_075452ce == false) goto label_0587f702;
	label_0587f6cf: ;
									if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0587f724;
	label_0587f6db: ;
									cVar2 = AottgGameCreateSession._isMultiplayer;
								}
								if (cVar2 != false) {
									pIVar17 = (object)*targetAddress;
									if (pIVar17 == null) break;
									pIVar7 = pIVar17.klass;
									uVar14 = (ulong)(pIVar7._2).interface_offsets_count;
									if (uVar14 != 0) {
										pIVar8 = (pIVar7._1).interfaceOffsets;
										lVar20 = 0;
										do {
											if (*(Il2CppClass*)((long)&pIVar8.interfaceType + lVar20) ==typeof(IReadOnlyList<ExperienceRuleField>)) {
												pVVar16 = pIVar7.vtable + *(int)((long)&pIVar8.offset + lVar20);
												goto label_0587f7a1;
											}
											lVar20 = lVar20 + 0x10;
										} while (uVar14 * 0x10 != lVar20);
									}
									pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar17, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_0587f7a1: ;
									pMVar18 = (MethodInfo)(ulong)uVar19;
									lVar20 = (*pVVar16.methodPtr)(pIVar17,pMVar18,pVVar16.method);
									if (lVar20 == 0) break;
									pSVar5 = *(String*)(lVar20 + 0x10);
									if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
										bVar10 = AottgGameCreateScreen.IsRoomSettingId(pSVar5);
									}
									else {
										bVar10 = AottgGameCreateScreen.IsRoomSettingId(pSVar5);
									}
									if (bVar10) goto label_0587f520;
								}
								pIVar17 = (object)*targetAddress;
								if (pIVar17 == null) break;
								pIVar7 = pIVar17.klass;
								uVar14 = (ulong)(pIVar7._2).interface_offsets_count;
								if (uVar14 != 0) {
									pIVar8 = (pIVar7._1).interfaceOffsets;
									lVar20 = 0;
									do {
										if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar8.interfaceType + lVar20) == typeof(IReadOnlyList<ExperienceRuleField>)) {
											pVVar16 = pIVar7.vtable + *(int)((long)&pIVar8.offset + lVar20);
											goto label_0587f851;
										}
										lVar20 = lVar20 + 0x10;
									} while (uVar14 * 0x10 != lVar20);
								}
								pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar17, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_0587f851: ;
								pSVar15 = (ExperienceRuleField)(*pVVar16.methodPtr)(pIVar17,uVar19,pVVar16.method);
								pMVar18 = MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add;
								if (pSVar13 == null) break;
								piVar1 = &pSVar13._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = pSVar13._items;
								if (pSVar6 == null) break;
								uVar3 = pSVar13._size;
								if (uVar3 < (uint)pSVar6.Length) {
									pSVar13._size = uVar3 + 1;
									pSVar6[(int)uVar3] = pSVar15;
								}
								else {
									pSVar13.AddWithResize((object)pSVar15);
								}
							}
						}
	label_0587f520: ;
						uVar19 = uVar19 + 1;
						pIVar17 = (object)*targetAddress;
					}
				}
			}
		}
	label_0587f939: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x5788120", Offset = "0x5787120", VA = "0x5788120")]
	private static void BuildExperienceModeField(AottgUi ui, ExperienceRuleField field, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceModeField): clean
		uint uVar1;
		MethodInfo pMVar2;
		String pSVar3;
		String[] pSVar4;
		String pSVar5;
		String tooltip;
		GisketchNodeDefinition pGVar6;
		GisketchLength width;
		GisketchLength minHeight;
		GisketchLayoutDefinition pGVar7;
		String icon;
		bool value;
		Nullable<bool>[] local_40 = new Nullable<bool>[2];
		int local_3c;
		String local_38;

		local_3c = index;
		pMVar2 = (MethodInfo)local_3c.ToString();
		pSVar3 = String.Concat("game-create-field-", (String)pMVar2);
		pSVar4 = AottgGameCreateSession.FieldOptions(field);
		if (field != null) {
			pMVar2 = (MethodInfo)AottgGameCreateSession.FieldLabel(field.Id);
			pSVar5 = String.Concat(pSVar3, "-label");
			if (ui != null) {
				value = false;
				ui.Text((String)pMVar2, "text", pSVar5, null, null);
				local_38 = pSVar3;
				if (field.Editable == false) {
					uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (pSVar4 == null) goto label_0588847d;
					value = 1 < (int)pSVar4.Length;
					uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pSVar3 = AottgGameCreateScreen.FieldValue(field);
				if (value == false) {
					uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
					pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
					pSVar5 = "gameCreate.open.modeSelector";
				}
				if (uVar1 == 0) {
				}
				tooltip = AottgGameCreateScreen.FieldTooltip(field);
				if (value == false) {
					icon = null;
				}
				else {
					icon = "zoom";
				}
				pGVar6 = ui.Button(1, pSVar3, pSVar5, local_38, tooltip, null, icon);
				local_40[0].hasValue = false;
				local_40[0].value = false;
				pMVar2 = (MethodInfo)(ulong)value;
				local_40 = new Nullable<bool>(value);
				if (pGVar6 != null) {
					pGVar6.enabled = local_40[0];
					pSVar3 = field.Id;
					pSVar3 = AottgGameCreateSession.FieldLabel(pSVar3);
					pGVar6.formLabel = pSVar3;
					width = AottgUi.Percent(100.0);
					minHeight = AottgUi.Points(52.0);
					pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, minHeight, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar6.layout = pGVar7;
					return;
				}
			}
		}
	label_0588847d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x5788490", Offset = "0x5787490", VA = "0x5788490")]
	private static void BuildExperienceScore(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceScore): 4 lines keep C-only constructs
		uint uVar1;
		ExperienceScoreStore __this;
		bool bVar2;
		String pSVar3;
		ExperienceScoreRecord pSVar4;
		CultureInfo provider;
		String* ppSVar5;

		if (Il2CppMethodInitialized_075451e0 == false) {
			Il2CppMethodInitialized_075451e0 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ExperienceIdentity.HasScoring(AottgGameCreateSession. _Working_k__BackingField);
		if (bVar2) {
			if (ui == null) {
				throw new NullReferenceException();
			}
			ui.TextKey("GameCreate.Configuration.Score", "subtext", "game-create-score-label", null, null);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar3 = ExperienceIdentity.GetId(AottgGameCreateSession. _Working_k__BackingField);
			__this = ExperienceScoreStore.Local;
			if (__this == null) {
				throw new NullReferenceException();
			}
			pSVar4 = __this.Get(pSVar3);
			if (pSVar4 == null) {
				ui.TextKey("GameCreate.Configuration.NoScore", "text", "game-create-score", null, null);
			}
			else {
				provider = CultureInfo.InvariantCulture;
				pSVar3 = (pSVar4.Score).ToString("0.##", (IFormatProvider)provider);
				pSVar3 = String.Concat(pSVar3, " ", pSVar4.Unit);
				ui.Text(pSVar3, "header", "game-create-score", null, null);
				if (pSVar4.LowerIsBetter == false) {
					ppSVar5 = &"GameCreate.Configuration.ScoreHigher";
				}
				else {
					ppSVar5 = &"GameCreate.Configuration.ScoreLower";
				}
				ui.TextKey(*ppSVar5, "subtext", "game-create-score-direction", null, null);
			}
		}
		return;
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x5788A80", Offset = "0x5787A80", VA = "0x5788A80")]
	private static void BuildVariantSelector(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildVariantSelector): 2 lines keep C-only constructs
		AottgGameCreateScreen.c__DisplayClass84_0 __this;
		String[] pSVar1;
		String pSVar2;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass84_0));
		__this = new Object();
		pSVar1 = AottgGameCreateSession.VariantNames;
		if (__this != null) {
			__this.variants = pSVar1;
			pSVar1 = __this.variants;
			if (pSVar1 != null) {
				if (pSVar1.Length != 0) {
					pSVar2 = AottgGameCreateSession.SelectedVariant;
					__this.selected = pSVar2;
					__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass84_0_BuildVariantSelector_b__0);
					layout = AottgGameCreateScreen.FieldRowLayout();
					if (ui == null) goto label_05888c05;
					ui.Panel("clear", __this_00, "game-create-variants-row", layout, null);
				}
				return;
			}
		}
	label_05888c05: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x57874B0", Offset = "0x57864B0", VA = "0x57874B0")]
	private static bool IsRoomSettingId(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$IsRoomSettingId): 2 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		String* ppSVar3;

		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(id);
		if (uVar2 < 0x9ab36970) {
			if (uVar2 < 0x33964669) {
				if (uVar2 == 0x28266215) {
					ppSVar3 = &"misc.Motd";
				}
				else {
					if (uVar2 != 0x33964668) {
						return false;
					}
					ppSVar3 = &"misc.AllowVoteKicking";
				}
			}
			else if (uVar2 == 0x9963f387) {
				ppSVar3 = &"misc.VoiceChat";
			}
			else {
				if (uVar2 != 0x9ab3696f) {
					return false;
				}
				ppSVar3 = &"misc.ProximityMaxDistance";
			}
		}
		else if (uVar2 < 0xca5439de) {
			if (uVar2 == 0xa8663a56) {
				ppSVar3 = &"general.Password";
			}
			else {
				if (uVar2 != 0xca5439dd) {
					return false;
				}
				ppSVar3 = &"misc.ProximityMinDistance";
			}
		}
		else if (uVar2 == 0xd1f8e235) {
			ppSVar3 = &"misc.AccountRequired";
		}
		else if (uVar2 == 0xeaf83b9f) {
			ppSVar3 = &"general.MaxPlayers";
		}
		else {
			if (uVar2 != 0xd6b630db) {
				return false;
			}
			ppSVar3 = &"general.RoomName";
		}
		bVar1 = (id == *ppSVar3);
		if (bVar1) {
			return true;
		}
		return false;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x5787C20", Offset = "0x5786C20", VA = "0x5787C20")]
	private static void BuildExperienceSections(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, List<ExperienceRuleField> remaining, List<ExperienceUISection> sections)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSections): 9 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		List<string> pSVar2;
		HashSet<object> __this;
		bool bVar3;
		AottgGameCreateScreen.c__DisplayClass86_0 __this_00;
		HashSet<string> __this_01;
		AottgGameCreateScreen.c__DisplayClass86_1 __this_02;
		ExperienceUISection pSVar4;
		Func<ExperienceRuleField, bool> pSVar5;
		System_Collections_Generic_IEnumerable_TSource__o pSVar6;
		System_Collections_Generic_List_TSource__o pSVar7;
		ExperienceRuleField pSVar8;
		String pSVar9;
		int iVar10;
		int iVar11;
		AottgGameCreateScreen.c__DisplayClass86_1 targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateScreen.c__DisplayClass86_0));
		__this_00 = new Object();
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_01 = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (__this_00 != null) {
			__this_00.assigned = __this_01;
			if ((sections != null) &&(0 < sections._size)) {
				iVar11 = 0;
				do {
					__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateScreen.c__DisplayClass86_1));
					__this_02 = new Object();
					pSVar4 = sections.get_Item(iVar11);
					if (__this_02 == null) goto label_05888110;
					targetAddress = &__this_02.fields;
					__this_02.section = pSVar4;
					pSVar4 = __this_02.section;
					if (((pSVar4 != null) &&(pSVar2 = pSVar4.Settings, pSVar2 != null)) && (pSVar2._size != 0)) {
						pSVar5 = new Func<ExperienceRuleField, bool>((object)__this_02, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_1_BuildExperienceSections_b__1);
						pSVar6 = Enumerable.Where<ExperienceRuleField>((System_Collections_Generic_IEnumerable_TSource__o)remaining, (System_Func_TSource__bool__o)pSVar5);
						pSVar7 = Enumerable.ToList<ExperienceRuleField>(pSVar6);
						if (pSVar7 == null) goto label_05888110;
						iVar10 = pSVar7._size;
						if (iVar10 != 0) {
							if (0 < iVar10) {
								iVar10 = 0;
								do {
									__this = (HashSet<object>)__this_00.assigned;
									pSVar8 = pSVar7.get_Item(iVar10);
									if ((pSVar8 == null) ||(__this == null)) goto label_05888110;
									__this.Add((object)pSVar8.Id);
									iVar10 = iVar10 + 1;
								} while (iVar10 < pSVar7._size);
							}
							if (targetAddress.section == null) goto label_05888110;
							bVar3 = String.IsNullOrWhiteSpace(targetAddress.section.Name) ;
							if (bVar3) {
								if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
								}
								pSVar9 = Aottg2GisketchLocale.Text("Common.Settings");
							}
							else {
								if (targetAddress.section == null) goto label_05888110;
								pSVar9 = targetAddress.section.Name;
							}
							AottgGameCreateScreen.BuildExperienceSection(ui, allFields, (IReadOnlyList<ExperienceRuleField>)pSVar7, pSVar9, iVar11);
						}
					}
					iVar11 = iVar11 + 1;
				} while (iVar11 < sections._size);
			}
			pSVar5 = new Func<ExperienceRuleField, bool>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_0_BuildExperienceSections_b__0);
			pSVar6 = Enumerable.Where<ExperienceRuleField>((System_Collections_Generic_IEnumerable_TSource__o)remaining, (System_Func_TSource__bool__o)pSVar5);
			pSVar7 = Enumerable.ToList<ExperienceRuleField>(pSVar6);
			if (pSVar7 != null) {
				if (pSVar7._size < 1) {
					return;
				}
				iVar11 = 0;
				pSVar9 = Aottg2GisketchLocale.Text("Common.Settings");
				if (sections != null) {
					iVar11 = sections._size;
				}
				AottgGameCreateScreen.BuildExperienceSection(ui, allFields, (IReadOnlyList<ExperienceRuleField>)pSVar7, pSVar9, iVar11);
				return;
			}
		}
	label_05888110: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x5788FB0", Offset = "0x5787FB0", VA = "0x5788FB0")]
	private static void BuildExperienceSection(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, IReadOnlyList<ExperienceRuleField> fields, string title, int sectionIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSection): clean
		String pSVar1;
		int local_2c;

		local_2c = sectionIndex;
		pSVar1 = local_2c.ToString();
		pSVar1 = String.Concat("game-create-section-", pSVar1, "-title") ;
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Text(title, "header", pSVar1, null, null);
		pSVar1 = local_2c.ToString();
		pSVar1 = String.Concat("game-create-section-", pSVar1);
		AottgGameCreateScreen.BuildFieldColumns(ui, allFields, fields, pSVar1);
		return;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x57890C0", Offset = "0x57880C0", VA = "0x57890C0")]
	private static void BuildFieldColumns(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, IReadOnlyList<ExperienceRuleField> fields, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFieldColumns): 6 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		AottgGameCreateScreen.c__DisplayClass88_0 __this;
		VirtualInvokeData pVVar4;
		Action<AottgUi> __this_00;
		String id_00;
		GisketchLayoutDefinition layout;
		ulong uVar5;
		long lVar6;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass88_0));
		__this = new Object();
		if (__this != null) {
			__this = fields;
			__this.allFields = allFields;
			__this.id = id;
			obj = (object)__this;
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar5 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar6 = 0;
					do {
						if (*(IReadOnlyCollection<ExperienceRuleField>*)((long)&pIVar2.interfaceType + lVar6) == typeof(IReadOnlyCollection<ExperienceRuleField>)) {
							pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar6);
							goto label_05889201;
						}
						lVar6 = lVar6 + 0x10;
					} while (uVar5 * 0x10 != lVar6);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<ExperienceRuleField>), 0);
	label_05889201: ;
				iVar3 = (*pVVar4.methodPtr)(obj,pVVar4.method);
				__this.split = (iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1;
				__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__0);
				id_00 = String.Concat(__this.id, "-fields");
				layout = AottgGameCreateScreen.FieldColumnsLayout();
				if (ui != null) {
					ui.Panel("clear", __this_00, id_00, layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x5787A40", Offset = "0x5786A40", VA = "0x5787A40")]
	private static ExperienceRuleField FindField(IReadOnlyList<ExperienceRuleField> fields, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FindField): 1 lines keep C-only constructs
		bool bVar3;
		int iVar4;
		object pIVar6;
		ExperienceRuleField pSVar7;
		int iVar10;

		if (fields == null) {
	label_05887c15: ;
			throw new NullReferenceException();
		}
		iVar10 = 0;
		do {
			iVar4 = fields.get_Item();
			if (iVar4 <= iVar10) {
				return null;
			}
			pIVar6 = fields.get_Item(iVar10);
			if (pIVar6 == null) goto label_05887c15;
			bVar3 = String.Equals((String)pIVar6[1].klass, id, 5);
			if (bVar3) break;
			iVar10 = iVar10 + 1;
		} while(true);
		return pSVar7;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x57892D0", Offset = "0x57882D0", VA = "0x57892D0")]
	private static int FieldIndex(IReadOnlyList<ExperienceRuleField> fields, ExperienceRuleField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldIndex): 4 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		ExperienceRuleField[] pSVar3;
		int iVar4;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075451e7 == false) {
			Il2CppMethodInitialized_075451e7 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (uVar1 == 0) {
			pSVar3 = AottgGameCreateSession.VisibleFields();
		}
		else {
			pSVar3 = AottgGameCreateSession.VisibleFields();
		}
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		iVar2 = (int)pSVar3.Length;
		if (0 < iVar2) {
			iVar4 = 0;
			do {
				if (pSVar3[iVar4] == field) {
					return iVar4;
				}
				iVar4 = iVar4 + 1;
			} while (iVar2 != iVar4);
		}
		return -1;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x57836B0", Offset = "0x57826B0", VA = "0x57836B0")]
	private static void BuildSandboxFieldColumns(AottgUi ui, IReadOnlyList<AottgSandboxField> fields)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldColumns): 6 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		AottgGameCreateScreen.c__DisplayClass91_0 __this;
		VirtualInvokeData pVVar4;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		ulong uVar5;
		long lVar6;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreateScreen.c__DisplayClass91_0));
		__this = new Object();
		if (__this != null) {
			__this = fields;
			obj = (object)__this;
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar5 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar6 = 0;
					do {
						if (*(IReadOnlyCollection<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar6) == typeof(IReadOnlyCollection<AottgSandboxField>)) {
							pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar6);
							goto label_058837c1;
						}
						lVar6 = lVar6 + 0x10;
					} while (uVar5 * 0x10 != lVar6);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_058837c1: ;
				iVar3 = (*pVVar4.methodPtr)(obj,pVVar4.method);
				__this.split = (iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1;
				__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__0);
				layout = AottgGameCreateScreen.FieldColumnsLayout();
				if (ui != null) {
					ui.Panel("clear", __this_00, "game-create-sandbox-fields", layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x5784DC0", Offset = "0x5783DC0", VA = "0x5784DC0")]
	private static GisketchLayoutDefinition FieldColumnsLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldColumnsLayout): clean
		GisketchLength width;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Row", null, "FlexStart", null, "Wrap", 32.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x5789620", Offset = "0x5788620", VA = "0x5789620")]
	private static GisketchLayoutDefinition FieldColumnLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldColumnLayout): clean
		GisketchLength width;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(47.0);
		minWidth = AottgUi.Points(360.0);
		pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 6.0, width, null, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x5789710", Offset = "0x5788710", VA = "0x5789710")]
	private static void FieldRowLabel(AottgUi row, string text, string style, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldRowLabel): clean
		GisketchNodeDefinition pGVar1;
		GisketchLength minWidth;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar2;

		if (row != null) {
			pGVar1 = row.Text(text, style, id, null, null);
			minWidth = AottgUi.Points(96.0);
			maxWidth = AottgUi.Percent(45.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, minWidth, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x5781390", Offset = "0x5780390", VA = "0x5781390")]
	private static GisketchLayoutDefinition FieldRowLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldRowLayout): clean
		GisketchLength width;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Row", "SpaceBetween", "Center", null, "Wrap", 14.0, width, null, null, null, null, null, 0.0, 0.0, 7.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x5789810", Offset = "0x5788810", VA = "0x5789810")]
	private static GisketchLayoutDefinition FieldControlLayout(GisketchNodeDefinition control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldControlLayout): clean
		bool leftAligned;
		GisketchLayoutDefinition pGVar1;
		MethodInfo method_00;

		if (control == null) {
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo *)"Checkbox";
		leftAligned = (control.type == "Checkbox");
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			return pGVar1;
		}
		return pGVar1;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x5785CD0", Offset = "0x5784CD0", VA = "0x5785CD0")]
	private static GisketchLayoutDefinition FieldControlLayout(bool leftAligned)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldControlLayout): 2 lines keep C-only constructs
		String justify;
		String direction;
		String* ppSVar1;
		GisketchLength width;
		GisketchLength minWidth;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar2;

		direction = "Row";
		ppSVar1 = &"Center";
		if (leftAligned) {
			ppSVar1 = &"FlexStart";
		}
		justify = *ppSVar1;
		width = AottgUi.Points(300.0);
		minWidth = AottgUi.Points(250.0);
		maxWidth = AottgUi.Percent(100.0);
		pGVar2 = AottgUi.Layout(direction, justify, "Center", null, null, 0.0, width, null, minWidth, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar2;
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x57795F0", Offset = "0x57785F0", VA = "0x57795F0")]
	private static AottgBrushSidePanel SidePanel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanel): clean
		AottgBrushSidePanelOption[] options;
		AottgBrushSidePanelOption[] footerOptions;
		AottgBrushSidePanel __this;

		options = AottgGameCreateScreen.SidePanelOptions();
		footerOptions = AottgGameCreateScreen.SidePanelFooterOptions();
		__this = new AottgBrushSidePanel("GameCreate.Title", options, footerOptions, 0.0);
		return __this;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x5789890", Offset = "0x5788890", VA = "0x5789890")]
	private static AottgBrushSidePanelOption[] SidePanelOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanelOptions): 6 lines keep C-only constructs
		uint uVar1;
		AottgBrushSidePanelOption[] pGVar2;
		AottgBrushSidePanelOption targetAddress;
		AottgBrushSidePanelOption local_a8;
		AottgBrushSidePanelOption local_58;

		if (Il2CppMethodInitialized_075451f0 == false) {
			Il2CppMethodInitialized_075451f0 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058898bc;
	label_05889af5: ;
			if (g_data_075452ce != false) goto label_058898c9;
	label_05889b07: ;
			g_data_075452ce = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05889af5;
	label_058898bc: ;
			if (g_data_075452ce == false) goto label_05889b07;
	label_058898c9: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (AottgGameCreateSession._isMultiplayer == false) {
			pGVar2 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[1];
			local_a8.Searchable = false;
			local_a8._49_7_ = 0;
			local_a8.Tooltip = null;
			local_a8.ActionId = null;
			local_a8.Action = null;
			local_a8.TextKey = null;
			local_a8.Icon = null;
			local_a8._text = null;
			local_a8.Id = null;
			local_a8.StackedOptions = null;
			local_a8 = new AottgBrushSidePanelOption("experiences", "GameCreate.GameSettings", "gameCreate.open.experiences", "menuList", false, null);
			if (pGVar2 == null) goto label_05889bf4;
			if ((int)pGVar2.Length != 0) {
				pGVar2[0].StackedOptions = local_a8.StackedOptions;
				pGVar2[0].Searchable = local_a8.Searchable;
				*(undefined7)&pGVar2[0].field_0x31 = local_a8._49_7_;
				pGVar2[0].Tooltip = local_a8.Tooltip;
				pGVar2[0].ActionId = local_a8.ActionId;
				pGVar2[0].Action = local_a8.Action;
				pGVar2[0].TextKey = local_a8.TextKey;
				pGVar2[0].Icon = local_a8.Icon;
				pGVar2[0]._text = local_a8._text;
				pGVar2[0].Id = local_a8.Id;
	label_05889bdc: ;
				return pGVar2;
			}
		}
		else {
			pGVar2 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[2];
			local_a8.Searchable = false;
			local_a8._49_7_ = 0;
			local_a8.Tooltip = null;
			local_a8.ActionId = null;
			local_a8.Action = null;
			local_a8.TextKey = null;
			local_a8.Icon = null;
			local_a8._text = null;
			local_a8.Id = null;
			local_a8.StackedOptions = null;
			local_a8 = new AottgBrushSidePanelOption("room", "GameCreate.Room.Title", "gameCreate.open.roomSettings", "multiplayer", false, null);
			if (pGVar2 == null) {
	label_05889bf4: ;
				throw new NullReferenceException();
			}
			if ((int)pGVar2.Length != 0) {
				pGVar2[0].StackedOptions = local_a8.StackedOptions;
				pGVar2[0].Searchable = local_a8.Searchable;
				*(undefined7)&pGVar2[0].field_0x31 = local_a8._49_7_;
				pGVar2[0].Tooltip = local_a8.Tooltip;
				pGVar2[0].ActionId = local_a8.ActionId;
				pGVar2[0].Action = local_a8.Action;
				pGVar2[0].TextKey = local_a8.TextKey;
				pGVar2[0].Icon = local_a8.Icon;
				pGVar2[0]._text = local_a8._text;
				pGVar2[0].Id = local_a8.Id;
				local_58.Searchable = false;
				local_58._49_7_ = 0;
				local_58.Tooltip = null;
				local_58.ActionId = null;
				local_58.Action = null;
				local_58.TextKey = null;
				local_58.Icon = null;
				local_58._text = null;
				local_58.Id = null;
				local_58.StackedOptions = null;
				local_58 = new AottgBrushSidePanelOption("experiences", "GameCreate.GameSettings", "gameCreate.open.experiences", "menuList", false, null);
				if ((pGVar2.Length & 0xfffffffe) != 0) {
					targetAddress = pGVar2.m_Items + 1;
					pGVar2[1].StackedOptions = local_58.StackedOptions;
					pGVar2[1].Searchable = local_58.Searchable;
					*(undefined7)&pGVar2[1].field_0x31 = local_58._49_7_;
					pGVar2[1].Tooltip = local_58.Tooltip;
					pGVar2[1].ActionId = local_58.ActionId;
					pGVar2[1].Action = local_58.Action;
					pGVar2[1].TextKey = local_58.TextKey;
					pGVar2[1].Icon = local_58.Icon;
					pGVar2[1]._text = local_58._text;
					pGVar2[1].Id = local_58.Id;
					goto label_05889bdc;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x5789C00", Offset = "0x5788C00", VA = "0x5789C00")]
	private static AottgBrushSidePanelOption[] SidePanelFooterOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanelFooterOptions): 2 lines keep C-only constructs
		AottgBrushSidePanelOption[] pGVar1;
		AottgBrushSidePanelOption local_58;

		pGVar1 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[1];
		local_58.Searchable = false;
		local_58._49_7_ = 0;
		local_58.Tooltip = null;
		local_58.ActionId = null;
		local_58.Action = null;
		local_58.TextKey = null;
		local_58.Icon = null;
		local_58._text = null;
		local_58.Id = null;
		local_58.StackedOptions = null;
		local_58 = new AottgBrushSidePanelOption("back", "Common.Back", "gameCreate.back", "exitLeft", false, null);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pGVar1[0].StackedOptions = local_58.StackedOptions;
		pGVar1[0].Searchable = local_58.Searchable;
		*(undefined7)&pGVar1[0].field_0x31 = local_58._49_7_;
		pGVar1[0].Tooltip = local_58.Tooltip;
		pGVar1[0].ActionId = local_58.ActionId;
		pGVar1[0].Action = local_58.Action;
		pGVar1[0].TextKey = local_58.TextKey;
		pGVar1[0].Icon = local_58.Icon;
		pGVar1[0]._text = local_58._text;
		pGVar1[0].Id = local_58.Id;
		return pGVar1;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x5789D20", Offset = "0x5788D20", VA = "0x5789D20")]
	private static void BreadcrumbLink(AottgUi ui, string label, string actionId, string id, [Optional] string icon, [Optional] string textKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BreadcrumbLink): clean
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;

		if (ui != null) {
			pGVar1 = ui.Button(3, label, actionId, id, null, null, icon);
			if (pGVar1 != null) {
				pGVar1.textKey = textKey;
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x5780EA0", Offset = "0x577FEA0", VA = "0x5780EA0")]
	private static string FieldTooltip(ExperienceRuleField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldTooltip): 2 lines keep C-only constructs
		uint uVar1;
		UIRule pSVar2;
		String pSVar3;
		Nullable<float> minimum;
		Nullable<float> maximum;

		if (field == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar3 = field.Id;
		pSVar3 = AottgGameCreateSession.FieldDescription(pSVar3);
		pSVar2 = field.Rule;
		if (pSVar2 == null) {
			maximum.hasValue = false;
			maximum._1_3_ = 0;
			maximum.value = 0.0;
			minimum.hasValue = false;
			minimum._1_3_ = 0;
			minimum.value = 0.0;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			minimum = pSVar2.Min;
			maximum = pSVar2.Max;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = AottgGameCreateScreen.RangeTooltip(pSVar3, (Nullable<float>)minimum, (Nullable<float>)maximum);
		return pSVar3;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x5783BC0", Offset = "0x5782BC0", VA = "0x5783BC0")]
	private static string FieldTooltip(AottgSandboxField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldTooltip): 9 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		int iVar3;
		uint uVar4;
		BaseSetting pSVar5;
		BaseSetting pSVar6;
		Nullable<float> in_RAX;
		String pSVar7;
		Nullable<float> maximum;
		Nullable<float> minimum;
		float fVar8;
		Nullable<float> local_28;

		local_28 = in_RAX;
		if (field == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar5 = field._Setting_k__BackingField;
		if (pSVar5 == null) {
	label_05883c6c: ;
			return field._Tooltip_k__BackingField;
		}
		pSVar6 = pSVar5.klass;
		bVar1 = (pSVar6._2).typeHierarchyDepth;
		bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
			bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting))) goto label_05883c6c;
			pSVar7 = field._Tooltip_k__BackingField;
			fVar8 = *(float)&(*(ulong)((sbyte)pSVar5 + 0x20));
			if ((fVar8 != -3.4028235e+38) || (NAN(fVar8))) {
				local_28.hasValue = false;
				local_28._1_3_ = 0;
				local_28.value = 0.0;
				local_28 = new Nullable<float>(fVar8);
				fVar8 = *(float)((long)&(*(ulong)((sbyte)pSVar5 + 0x20)) + 4);
				minimum = local_28;
			}
			else {
				minimum.hasValue = false;
				minimum._1_3_ = 0;
				minimum.value = 0.0;
				fVar8 = *(float)((long)&(*(ulong)((sbyte)pSVar5 + 0x20)) + 4);
			}
			if ((fVar8 == 3.4028235e+38) && (!NAN(fVar8))) goto label_05883d52;
		}
		else {
			pSVar7 = field._Tooltip_k__BackingField;
			if (*(int)&(*(ulong)((sbyte)pSVar5 + 0x20)) == -0x80000000) {
				minimum.hasValue = false;
				minimum._1_3_ = 0;
				minimum.value = 0.0;
				iVar3 = *(int)((long)&(*(ulong)((sbyte)pSVar5 + 0x20)) + 4);
			}
			else {
				local_28.hasValue = false;
				local_28._1_3_ = 0;
				local_28.value = 0.0;
				local_28 = new Nullable<float>((float)*(int)&(*(ulong)((sbyte)pSVar5 + 0x20)));
				iVar3 = *(int)((long)&(*(ulong)((sbyte)pSVar5 + 0x20)) + 4);
				minimum = local_28;
			}
			if (iVar3 == 0x7fffffff) {
	label_05883d52: ;
				maximum.hasValue = false;
				maximum._1_3_ = 0;
				maximum.value = 0.0;
				uVar4 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05883db5;
			}
			fVar8 = (float)iVar3;
		}
		local_28.hasValue = false;
		local_28._1_3_ = 0;
		local_28.value = 0.0;
		local_28 = new Nullable<float>(fVar8);
		uVar4 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		maximum = local_28;
	joined_r0x05883db5: ;
		if (uVar4 == 0) {
		}
		pSVar7 = AottgGameCreateScreen.RangeTooltip(pSVar7, (Nullable<float>)minimum, (Nullable<float>)maximum);
		return pSVar7;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x578A200", Offset = "0x5789200", VA = "0x578A200")]
	private static string RangeTooltip(string tooltip, float? minimum, float? maximum)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RangeTooltip): clean
		bool bVar1;
		CultureInfo pSVar2;
		String pSVar3;
		String arg1;
		String format;
		float local_34;
		Nullable<float> local_30;
		Nullable<float> local_28;

		local_30 = maximum;
		local_28 = minimum;
		local_34 = 0.0;
		if (minimum.hasValue == false) {
			if (maximum.hasValue == false) {
				if (tooltip == null) {
					return (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				return tooltip;
			}
			pSVar3 = null;
	label_0588a306: ;
			local_34 = local_30.Value;
			pSVar2 = CultureInfo.InvariantCulture;
			arg1 = local_34.ToString((IFormatProvider)pSVar2);
			if ((pSVar3 != null) && (arg1 != null)) {
				format = Aottg2GisketchLocale.Text("GameCreate.Range.Between");
				pSVar3 = String.Format(format, (object)pSVar3, (object)arg1);
				goto label_0588a402;
			}
			if (pSVar3 != null) goto label_0588a39b;
	label_0588a3cc: ;
			pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Range.Maximum");
		}
		else {
			local_34 = local_28.Value;
			pSVar2 = CultureInfo.InvariantCulture;
			pSVar3 = local_34.ToString((IFormatProvider)pSVar2);
			if (maximum.hasValue != false) goto label_0588a306;
			if (pSVar3 == null) {
				arg1 = null;
				goto label_0588a3cc;
			}
	label_0588a39b: ;
			arg1 = pSVar3;
			pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Range.Minimum");
		}
		pSVar3 = String.Format(pSVar3, (object)arg1);
	label_0588a402: ;
		bVar1 = String.IsNullOrEmpty(tooltip);
		if (!bVar1) {
			pSVar3 = String.Concat(tooltip, "\n", pSVar3);
		}
		return pSVar3;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x5780F70", Offset = "0x577FF70", VA = "0x5780F70")]
	private static string FieldValue(ExperienceRuleField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldValue): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		BaseSetting pSVar5;
		BaseSetting pSVar6;
		WeatherSettings pSVar7;
		SetSettingsContainer<WeatherSet> __this;
		bool bVar8;
		String[] pSVar9;
		ulong uVar10;
		CultureInfo pSVar11;
		String pSVar12;
		ulong uVar13;
		float local_2c;
		String local_28;

		local_28 = null;
		if (field != null) {
			pSVar5 = field.Setting;
			if (pSVar5 == null) {
	label_058810f7: ;
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pSVar6 = pSVar5.klass;
			bVar1 = (pSVar6._2).typeHierarchyDepth;
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting))) {
				pSVar12 = field.Id;
				bVar8 = String.Equals(pSVar12, "general.GameMode", 5);
				if (bVar8) {
					pSVar12 = ContentLocale.ModeName((*(ulong)((sbyte)pSVar5 + 0x20)));
					return pSVar12;
				}
				return (*(ulong)((sbyte)pSVar5 + 0x20));
			}
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
				bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
					bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
					if ((bVar2 <= bVar1) &&((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))) {
						local_2c = *(float)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 4);
						pSVar11 = CultureInfo.InvariantCulture;
						pSVar12 = local_2c.ToString((IFormatProvider)pSVar11);
						return pSVar12;
					}
					goto label_058810f7;
				}
				pSVar12 = field.Id;
				uVar3 = *(uint)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 4);
				bVar8 = ExperienceRuleEngine.TryGetValueName(pSVar12, uVar3, ref local_28);
				if (!bVar8) {
					bVar8 = WeatherSettings.IsWeatherSetting(field.Id);
					if ((bVar8) &&(pSVar7 = SettingsManager.WeatherSettings, pSVar7 != null)) {
						__this = pSVar7.WeatherSets;
						if (__this == null) goto label_0588137a;
						pSVar9 = __this.GetSetNames();
						uVar3 = *(uint)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 4);
						if (-1 < (int)uVar3) {
							if (pSVar9 == null) goto label_0588137a;
							uVar4 = (uint)pSVar9.Length;
							if ((int)uVar3 < (int)uVar4) {
								if (uVar3 < uVar4) {
									return pSVar9[uVar3];
								}
	label_0588137f: ;
								throw new IndexOutOfRangeException();
							}
						}
					}
					local_2c = *(float)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 4);
					pSVar11 = CultureInfo.InvariantCulture;
					pSVar12 = local_2c.ToString((IFormatProvider)pSVar11);
					return pSVar12;
				}
				pSVar9 = AottgGameCreateSession.FieldOptions(field);
				if (pSVar9 != null) {
					if (0 < (int)pSVar9.Length) {
						uVar10 = pSVar9.Length & 0xffffffff;
						uVar13 = 0;
						do {
							if (uVar10 <= uVar13) goto label_0588137f;
							bVar8 = String.Equals(pSVar9[uVar13], local_28, 5);
							if (bVar8) {
								if ((uint)uVar13 < (uint)pSVar9.Length) {
									return pSVar9[uVar13];
								}
								goto label_0588137f;
							}
							uVar13 = uVar13 + 1;
							uVar3 = (uint)pSVar9.Length;
							uVar10 = (ulong)uVar3;
						} while ((long)uVar13 < (long)(int)uVar3);
					}
					return local_28;
				}
			}
			else {
				local_2c = (float)CONCAT31(local_2c._1_3_, *(byte)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 1));
				pSVar12 = local_2c.ToString();
				if (pSVar12 != null) {
					pSVar12 = pSVar12.ToLowerInvariant();
					return pSVar12;
				}
			}
		}
	label_0588137a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x578A4E0", Offset = "0x57894E0", VA = "0x578A4E0")]
	private static string OptionLabel(string id, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$OptionLabel): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String[] pSVar4;
		MethodInfo method_00;
		uint local_1c;

		local_1c = 0;
		method_00 = (MethodInfo *)"general.MapCategory";
		bVar2 = String.Equals(id, "general.MapCategory", 5);
		if (bVar2) {
			return pSVar3;
		}
		pSVar4 = AottgGameCreateSession.SettingOptions(id);
		bVar2 = ExperienceRuleEngine.TryParseValueName(id, value, ref local_1c);
		if (bVar2) {
			if (-1 < (int)local_1c) {
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				uVar1 = (uint)pSVar4.Length;
				if ((int)local_1c < (int)uVar1) {
					if (uVar1 <= local_1c) {
						throw new IndexOutOfRangeException();
					}
					value = pSVar4[local_1c];
				}
			}
		}
		return value;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x578A460", Offset = "0x5789460", VA = "0x578A460")]
	private static string StringFieldValue(string id, StringSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$StringFieldValue): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.Equals(id, "general.GameMode", 5);
		if (bVar1) {
			if (setting != null) {
				return pSVar2;
			}
		}
		else if (setting != null) {
			return setting._value;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x5783DC0", Offset = "0x5782DC0", VA = "0x5783DC0")]
	private static string SandboxFieldValue(AottgSandboxField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldValue): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		BaseSetting pSVar4;
		String[] pSVar5;
		bool bVar6;
		CultureInfo pSVar7;
		String pSVar8;
		uint uVar9;
		bool local_19;
		float local_18;
		uint local_14;

		if (field != null) {
			pSVar3 = field._Setting_k__BackingField;
			if (pSVar3 == null) {
	label_05883f06: ;
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pSVar4 = pSVar3.klass;
			bVar1 = (pSVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting))) {
				pSVar8 = field._Id_k__BackingField;
				bVar6 = String.Equals(pSVar8, "general.GameMode", 5);
				if (bVar6) {
					pSVar8 = ContentLocale.ModeName((*(ulong)((sbyte)pSVar3 + 0x20)));
					return pSVar8;
				}
				return (*(ulong)((sbyte)pSVar3 + 0x20));
			}
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
				bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pSVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
					bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
					if ((bVar2 <= bVar1) &&((pSVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))) {
						local_18 = *(float)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
						pSVar7 = CultureInfo.InvariantCulture;
						pSVar8 = local_18.ToString((IFormatProvider)pSVar7);
						return pSVar8;
					}
					goto label_05883f06;
				}
				pSVar5 = field._Options_k__BackingField;
				if (pSVar5 != null) {
					local_14 = *(uint)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
					if (((pSVar5.Length != 0) && (-1 < (int)local_14)) &&(uVar9 = (uint)pSVar5.Length, (int)local_14 < (int)uVar9)) {
						if (uVar9 <= local_14) {
							throw new IndexOutOfRangeException();
						}
						return pSVar5[local_14];
					}
					pSVar7 = CultureInfo.InvariantCulture;
					pSVar8 = local_14.ToString((IFormatProvider)pSVar7);
					return pSVar8;
				}
			}
			else {
				local_19 = *(bool)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 1);
				pSVar8 = local_19.ToString();
				if (pSVar8 != null) {
					pSVar8 = pSVar8.ToLowerInvariant();
					return pSVar8;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x578A8C0", Offset = "0x57898C0", VA = "0x578A8C0")]
	private static void RefreshFrom(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshFrom): clean
		bool bVar1;
		GisketchUIRoot root;

		root = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x578A980", Offset = "0x5789980", VA = "0x578A980")]
	public AottgGameCreateScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c (Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass25_0$$.ctor: clean
	private void c__DisplayClass25_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass26_0$$.ctor: clean
	private void c__DisplayClass26_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass28_0$$.ctor: clean
	private void c__DisplayClass28_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$.ctor: clean
	private void c__DisplayClass29_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$.ctor: clean
	private void c__DisplayClass36_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$.ctor: clean
	private void c__DisplayClass37_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass40_0$$.ctor: clean
	private void c__DisplayClass40_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass41_0$$.ctor: clean
	private void c__DisplayClass41_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass46_0$$.ctor: clean
	private void c__DisplayClass46_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass50_0$$.ctor: clean
	private void c__DisplayClass50_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass52_0$$.ctor: clean
	private void c__DisplayClass52_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$.ctor: clean
	private void c__DisplayClass53_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass55_0$$.ctor: clean
	private void c__DisplayClass55_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass56_0$$.ctor: clean
	private void c__DisplayClass56_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$.ctor: clean
	private void c__DisplayClass57_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$.ctor: clean
	private void c__DisplayClass63_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass66_0$$.ctor: clean
	private void c__DisplayClass66_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass72_0$$.ctor: clean
	private void c__DisplayClass72_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$.ctor: clean
	private void c__DisplayClass78_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass79_0$$.ctor: clean
	private void c__DisplayClass79_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_0$$.ctor: clean
	private void c__DisplayClass81_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass84_0$$.ctor: clean
	private void c__DisplayClass84_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_0$$.ctor: clean
	private void c__DisplayClass86_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_1$$.ctor: clean
	private void c__DisplayClass86_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$.ctor: clean
	private void c__DisplayClass88_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$.ctor: clean
	private void c__DisplayClass91_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgGameCreateScreen.c();
		AottgGameCreateScreen.c.__9 =(AottgGameCreateScreen.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<.cctor>b__5_0: clean
	private bool c__cctor_b__5_0(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		LayoutElement pUVar1;

		if (go != null) {
			pUVar1 = go.AddComponent<LayoutElement>() ;
			if (pUVar1 != null) {
				pUVar1.set_ignoreLayout(true);
				go.AddComponent<AottgGameCreateDescriptionScrollLayout>();
				return true;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<RefreshImmediately>b__13_0: 4 lines keep C-only constructs
	private void c__RefreshImmediately_b__13_0(AottgUi ui)
	{
		uint uVar1;
		AottgBrushSidePanel component;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075451fd == false) {
			Il2CppMethodInitialized_075451fd = true;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)klass;
		if (uVar1 == 0) {
			component = AottgGameCreateScreen.SidePanel();
		}
		else {
			component = AottgGameCreateScreen.SidePanel();
		}
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)component);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildContent>b__14_0: 1 lines keep C-only constructs
	private void c__BuildContent_b__14_0(AottgUi content)
	{
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "clear";
		pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
		__this_00 = pGVar1.__9__14_1;
		if (__this_00 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_1);
			pGVar1 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar1.__9__14_1 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "FlexStart", null, "Wrap", 28.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel(style, __this_00, "game-create-body", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildContent>b__14_1: 1 lines keep C-only constructs
	private void c__BuildContent_b__14_1(AottgUi body)
	{
		Action<AottgUi> __this_00;
		GisketchLength minWidth;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildMain);
		minWidth = AottgUi.Points(0.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, null, null, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Panel("clear", __this_00, "game-create-main", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandbox>b__38_0: 1 lines keep C-only constructs
	private void c__BuildSandbox_b__38_0(GisketchActionContext context, String tabId)
	{
		int index;
		bool bVar1;
		CultureInfo provider;
		int iStack_c;

		iStack_c = 0;
		provider = CultureInfo.InvariantCulture;
		bVar1 = Int32.TryParse(tabId, 7, (IFormatProvider)provider, ref iStack_c);
		index = iStack_c;
		if (bVar1) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				bVar1 = AottgGameCreateSession.SelectSandboxSection(index);
				if (bVar1) goto label_0588af17;
			}
			else {
				bVar1 = AottgGameCreateSession.SelectSandboxSection(iStack_c);
				if (bVar1) {
	label_0588af17: ;
					AottgGameCreateScreen.RefreshFrom(context);
					return;
				}
			}
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxPresetActions>b__39_0: 5 lines keep C-only constructs
	private void c__BuildSandboxPresetActions_b__39_0(AottgUi actions)
	{
		uint uVar1;
		object @object;
		String id;
		bool bVar2;
		AottgGameCreateScreen.c__DisplayClass39_0 __this_00;
		GisketchNodeDefinition pGVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		String pSVar6;
		String tooltip;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar7;
		Action<GisketchActionContext> pSVar8;
		AottgGameCreateScreen.c__DisplayClass39_0 targetAddress;
		MethodInfo method_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateScreen.c__DisplayClass39_0));
		__this_00 = new Object();
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452dc != false) goto label_0588b392;
	label_0588b3b7: ;
			g_data_075452dc = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452dc == false) goto label_0588b3b7;
	label_0588b392: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (__this_00 == null) goto label_0588b943;
		targetAddress = &__this_00.fields;
		__this_00.presetName = *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x80);
		bVar2 = String.IsNullOrEmpty(__this_00.presetName);
		if (bVar2) {
			if (actions == null) goto label_0588b943;
		}
		else {
			if (actions == null) goto label_0588b943;
			method_00 = (MethodInfo)targetAddress.presetName;
			actions.Text((String)method_00, "text", "game-create-sandbox-preset-name", null, null);
			pSVar6 = targetAddress.presetName;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar2 = AottgGameCreateSession.IsFavoritePreset(pSVar6);
			pSVar8 = new Action<GisketchActionContext>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0_BuildSandboxPresetActions_b__1);
			AottgGameCreateChoiceTile.BuildFavoriteButton(actions, "game-create-sandbox-preset-favorite", bVar2, pSVar8);
		}
		pGVar3 = actions.ButtonKey(1, "GameCreate.Presets", "gameCreate.preset.load", "game-create-sandbox-load-preset", null, null, "open");
		pGVar4 = AottgUi.Points(180.0);
		pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (pGVar3 == null) goto label_0588b943;
		pGVar3.layout = pGVar5;
		pGVar3 = actions.ButtonKey(1, "Common.SavePreset", "gameCreate.preset.save", "game-create-sandbox-save-preset", null, null, "save");
		pGVar4 = AottgUi.Points(180.0);
		pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (pGVar3 == null) goto label_0588b943;
		pGVar3.layout = pGVar5;
		pSVar6 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.ShowVariableNames");
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452d9 != false) goto label_0588b71c;
	label_0588b888: ;
			Il2CppMethodInitialized_075452d9 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452d9 == false) goto label_0588b888;
	label_0588b71c: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = AottgGameCreateSession._showSandboxVariableNames;
		id = "game-create-sandbox-variable-names";
		pGVar7 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar8 = pGVar7.__9__39_2;
		if (pSVar8 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar7.__9;
			pSVar8 = new Action<GisketchActionContext>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxPresetActions_b__39_2);
			pGVar7 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar7.__9__39_2 = pSVar8;
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		tooltip = Aottg2GisketchLocale.Text("GameCreate.Sandbox.ShowVariableNames.Tooltip") ;
		pGVar3 = actions.Checkbox(id, pSVar6, bVar2, pSVar8, null, tooltip);
		pGVar4 = AottgUi.Points(260.0);
		pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (pGVar3 != null) {
			pGVar3.layout = pGVar5;
			return;
		}
	label_0588b943: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass39_0$$.ctor: clean
	private void c__DisplayClass39_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxPresetActions>b__39_2: 4 lines keep C-only constructs
	private void c__BuildSandboxPresetActions_b__39_2(GisketchActionContext context)
	{
		uint uVar1;
		bool bVar2;
		bool bVar3;
		Il2CppClass klass;

		if (context.Node == null) {
			bVar2 = false;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar2 = (((context.Node).fields).value == "true");
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07545286 == false) {
			Il2CppMethodInitialized_07545286 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588bafd;
	label_0588bb43: ;
			bVar3 = AottgGameCreateSession.IsSandbox;
			if (bVar3) {
	label_0588bb51: ;
				AottgGameCreateSession._showSandboxVariableNames = bVar2 ;
				uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
				klass = typeof(AottgGameCreateScreen);
				goto joined_r0x0588bb81;
			}
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588bb43;
	label_0588bafd: ;
			bVar3 = AottgGameCreateSession.IsSandbox;
			if (bVar3) goto label_0588bb51;
		}
		uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		klass = typeof(AottgGameCreateScreen);
	joined_r0x0588bb81: ;
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)klass;
		if (uVar1 == 0) {
			AottgGameCreateScreen.RefreshFrom(context);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxGeneral>b__41_2: clean
	private void c__BuildSandboxGeneral_b__41_2(AottgUi values)
	{


		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgGameCreateScreen.BuildSandboxFieldById(values, "general.Difficulty");
		AottgGameCreateScreen.BuildSandboxFieldById(values, "general.Weather");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_0: 1 lines keep C-only constructs
	private void c__BuildSandboxTitans_b__44_0(AottgUi row)
	{
		sbyte cVar1;
		uint uVar2;
		object @object;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar3;
		Action<AottgUi> __this_00;
		GisketchLength maxWidth;
		GisketchLayoutDefinition layout;
		String pSVar4;

		if (Il2CppMethodInitialized_07545204 == false) {
			Il2CppMethodInitialized_07545204 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_075452d9 == false) {
			Il2CppMethodInitialized_075452d9 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AottgGameCreateSession._showSandboxVariableNames;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AottgGameCreateSession)). static_fields + 0x21);
		}
		if (cVar1 == false) {
			if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar4 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Titans.SpawnDistribution");
		}
		else {
			pSVar4 = "titan.TitanSpawn*";
		}
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Text(pSVar4, "text", "game-create-titans-spawn-preset-label", null, null);
		pSVar4 = "clear";
		pGVar3 = typeof(AottgGameCreateScreen.c).static_fields;
		__this_00 = pGVar3.__9__44_2;
		if (__this_00 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar3.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_2);
			pGVar3 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar3.__9__44_2 = __this_00;
		}
		maxWidth = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "Center", null, null, 10.0, null, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		row.Panel(pSVar4, __this_00, "game-create-titans-spawn-controls", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_2: 2 lines keep C-only constructs
	private void c__BuildSandboxTitans_b__44_2(AottgUi controls)
	{
		String[] values;
		object pIVar1;
		String id;
		bool leftAligned;
		String pSVar2;
		String[] labels;
		GisketchChoiceOptionDefinition[] options;
		Action<GisketchActionContext> pSVar3;
		GisketchNodeDefinition pGVar4;
		GisketchLayoutDefinition pGVar5;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar6;
		GisketchLength width;
		MethodInfo method_01;

		pSVar2 = AottgGameCreateSession.TitanSpawnPreset();
		values = AottgGameCreateScreen.TitanSpawnPresets;
		labels = UIManager.GetLocaleOptions("GameCreate.Sandbox.Titans.SpawnPresetOptions");
		options = AottgGameCreateScreen.ChoiceOptions(values, labels);
		id = "game-create-titans-spawn-preset";
		pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar3 = pGVar6.__9__44_3;
		if (pSVar3 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar1 = (object)pGVar6.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_3);
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar6.__9__44_3 = pSVar3;
		}
		if (controls != null) {
			pGVar4 = controls.Dropdown(id, pSVar2, options, pSVar3, null, 8);
			method_01 = (MethodInfo *)"Checkbox";
			if (Il2CppMethodInitialized_075451ed == false) {
				Il2CppMethodInitialized_075451ed = true;
				method_01 = (MethodInfo *)"Checkbox";
			}
			"Checkbox" = (String)method_01;
			if (pGVar4 != null) {
				leftAligned = (pGVar4.type == (String)method_01);
				pGVar5 = AottgGameCreateScreen.FieldControlLayout(leftAligned) ;
				pGVar4.layout = pGVar5;
				pSVar2 = "GameCreate.Sandbox.Titans.Spawns.Config";
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
				pSVar3 = pGVar6.__9__44_4;
				if (pSVar3 == null) {
					if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
					}
					pIVar1 = (object)pGVar6.__9;
					pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_4);
					pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
					pGVar6.__9__44_4 = pSVar3;
				}
				pGVar4 = controls.ButtonKey(1, pSVar2, pSVar3, "game-create-titans-spawn-custom", null, null, "gear");
				width = AottgUi.Points(120.0);
				pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (pGVar4 != null) {
					pGVar4.layout = pGVar5;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_3: 2 lines keep C-only constructs
	private void c__BuildSandboxTitans_b__44_3(GisketchActionContext context)
	{
		String preset;
		bool bVar1;
		String* ppSVar2;

		if (context.Node == null) {
			ppSVar2 = &"Default";
		}
		else {
			ppSVar2 = &((context.Node).fields).value;
		}
		preset = *ppSVar2;
		AottgGameCreateSession.SetTitanSpawnPreset(preset);
		bVar1 = (preset == "Custom");
		if (bVar1) {
			AottgGameCreatePicker.OpenTitanSpawnAfterDropdown(context, "game-create-titans-spawn-custom");
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_4: clean
	private void c__BuildSandboxTitans_b__44_4(GisketchActionContext context)
	{


		AottgGameCreateSession.SetTitanSpawnPreset("Custom");
		AottgGameCreatePicker.OpenTitanSpawnAfterDropdown(context, "game-create-titans-spawn-custom");
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_1: 2 lines keep C-only constructs
	private void c__BuildSandboxTitans_b__44_1(AottgUi columns)
	{
		uint uVar1;
		object pIVar2;
		String pSVar3;
		GisketchLayoutDefinition pGVar4;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar5;
		Action<AottgUi> pSVar6;
		Il2CppClass pIVar7;

		pSVar3 = "clear";
		pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar6 = pGVar5.__9__44_5;
		if (pSVar6 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar2 = (object)pGVar5.__9;
			pSVar6 = new Action<AottgUi>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_5);
			pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar5.__9__44_5 = pSVar6;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar7 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar7 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar7;
		if (uVar1 == 0) {
			pGVar4 = AottgGameCreateScreen.FieldColumnLayout();
		}
		else {
			pGVar4 = AottgGameCreateScreen.FieldColumnLayout();
		}
		if (columns == null) {
			throw new NullReferenceException();
		}
		columns.Panel(pSVar3, pSVar6, "game-create-titans-armor", pGVar4, null);
		pSVar3 = "clear";
		pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar6 = pGVar5.__9__44_6;
		if (pSVar6 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			pIVar2 = (object)pGVar5.__9;
			pSVar6 = new Action<AottgUi>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_6);
			pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar5.__9__44_6 = pSVar6;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar7 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar7 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar7;
		if (uVar1 == 0) {
		}
		pGVar4 = AottgGameCreateScreen.FieldColumnLayout();
		columns.Panel(pSVar3, pSVar6, "game-create-titans-health", pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_5: clean
	private void c__BuildSandboxTitans_b__44_5(AottgUi armor)
	{
		bool bVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BoolSetting pSVar4;
		String[] pSVar5;
		MethodInfo pMVar6;

		AottgGameCreateScreen.BuildTitanArmorEnabled(armor);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0588d062;
	label_0588d033: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588d03f;
	label_0588d081: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0588d033;
	label_0588d062: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588d081;
	label_0588d03f: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanArmorEnabled, pSVar4 == null)) goto label_0588d219;
		bVar1 = pSVar4._value;
		pSVar5 = (String[])new string[2];
		if (pSVar5 == null) goto label_0588d219;
		if ((int)pSVar5.Length == 0) goto label_0588d21e;
		pSVar5[0] = "titan.TitanArmorCrawlerEnabled";
		if ((pSVar5.Length & 0xfffffffe) == 0) goto label_0588d21e;
		pSVar5[1] = "titan.TitanArmor";
		pMVar6 = (MethodInfo *)"game-create-titans-armor-fields";
		AottgGameCreateScreen.BuildSandboxFieldsByIds(armor, "game-create-titans-armor-fields", bVar1, pSVar5);
		AottgGameCreateScreen.BuildTitanWardedEnabled(armor);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588d191;
	label_0588d15d: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588d15d;
	label_0588d191: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Titan, pSVar3 != null)) &&(pSVar4 = pSVar3.TitanWardedEnabled, pSVar4 != null)) {
			bVar1 = pSVar4._value;
			pSVar5 = (String[])new string[1];
			if (pSVar5 != null) {
				if ((int)pSVar5.Length != 0) {
					pSVar5[0] = "titan.TitanChanceWarded";
					AottgGameCreateScreen.BuildSandboxFieldsByIds(armor, "game-create-titans-warded-fields", bVar1, pSVar5);
					return;
				}
	label_0588d21e: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_0588d219: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_6: clean
	private void c__BuildSandboxTitans_b__44_6(AottgUi health)
	{
		uint uVar1;
		int iVar2;
		InGameSet pSVar3;
		InGameTitanSettings pSVar4;
		IntSetting pSVar5;
		String[] fieldIds;

		AottgGameCreateScreen.BuildTitanHealthEnabled(health);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar3 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.Titan, pSVar4 != null)) &&(pSVar5 = pSVar4.TitanHealthMode, pSVar5 != null)) {
			iVar2 = pSVar5._value;
			AottgGameCreateScreen.BuildTitanHealthMode(health, iVar2 != 0);
			fieldIds = (String[])new string[2];
			if (fieldIds != null) {
				if ((int)fieldIds.Length != 0) {
					fieldIds[0] = "titan.TitanHealthMin";
					if ((fieldIds.Length & 0xfffffffe) != 0) {
						fieldIds[1] = "titan.TitanHealthMax";
						AottgGameCreateScreen.BuildSandboxFieldsByIds(health, "game-create-titans-health-fields", iVar2 != 0, fieldIds);
						return;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanHealthMode>b__46_1: clean
	private void c__BuildTitanHealthMode_b__46_1(GisketchActionContext context)
	{
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		IntSetting __this_00;
		bool bVar4;
		int value;

		if (Il2CppMethodInitialized_0754520b == false) {
			Il2CppMethodInitialized_0754520b = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.Titan, pSVar3 != null)) {
			__this_00 = pSVar3.TitanHealthMode;
			if (context.Node == null) {
				value = 1;
			}
			else {
				bVar4 = (((context.Node).fields).value == "Scaled");
				value = bVar4 + 1;
			}
			if (__this_00 != null) {
				__this_00.Value = value;
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					AottgGameCreateScreen.RefreshFrom(context);
					return;
				}
				AottgGameCreateScreen.RefreshFrom(context);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanArmorEnabled>b__48_0: clean
	private void c__BuildTitanArmorEnabled_b__48_0(bool enabled)
	{
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BoolSetting __this_00;

		if (Il2CppMethodInitialized_0754520c == false) {
			Il2CppMethodInitialized_0754520c = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(__this_00 = pSVar3.TitanArmorEnabled, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Value = enabled;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanWardedEnabled>b__49_0: clean
	private void c__BuildTitanWardedEnabled_b__49_0(bool enabled)
	{
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BoolSetting __this_00;

		if (Il2CppMethodInitialized_0754520d == false) {
			Il2CppMethodInitialized_0754520d = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(__this_00 = pSVar3.TitanWardedEnabled, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Value = enabled;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildMultiplayerRoom>b__63_0: clean
	private bool c__BuildMultiplayerRoom_b__63_0(AottgSandboxField field)
	{
		bool bVar1;

		if (field == null) {
			throw new NullReferenceException();
		}
		bVar1 = (field._Id_k__BackingField != "misc.VoiceChat");
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__73_0: 3 lines keep C-only constructs
	private void c__BuildSandboxCustom_b__73_0(AottgUi managers)
	{
		String pSVar1;
		String pSVar2;
		AottgGameCreateChoiceTile pGVar3;

		pSVar1 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Maps");
		pSVar2 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Maps.Description");
		pGVar3 = il2cpp_codegen_object_new(typeof(AottgGameCreateChoiceTile)) ;
		pGVar3 = new AottgGameCreateChoiceTile("game-create-root-custom-maps", pSVar1, pSVar2, "gameCreate.custom.openMapsManager", "menuGrid", 0, null, null, 0.0);
		if (managers == null) {
			throw new NullReferenceException();
		}
		managers.Component((AottgComponent)pGVar3);
		pSVar1 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Logic");
		pSVar2 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Logic.Description");
		pGVar3 = il2cpp_codegen_object_new(typeof(AottgGameCreateChoiceTile)) ;
		pGVar3 = new AottgGameCreateChoiceTile("game-create-root-custom-logic", pSVar1, pSVar2, "gameCreate.custom.openLogicManager", "wrench", 1, null, null, 0.0);
		managers.Component((AottgComponent)pGVar3);
		pSVar1 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Addons");
		pSVar2 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Addons.Description");
		pGVar3 = il2cpp_codegen_object_new(typeof(AottgGameCreateChoiceTile)) ;
		pGVar3 = new AottgGameCreateChoiceTile("game-create-root-custom-addons", pSVar1, pSVar2, "gameCreate.custom.openAddonsManager", "plus", 2, null, null, 0.0);
		managers.Component((AottgComponent)pGVar3);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__73_1: clean
	private void c__BuildSandboxCustom_b__73_1(AottgUi actions)
	{
		if (actions == null) {
			throw new NullReferenceException();
		}
		actions.ButtonKey(1, "Common.Import", "gameCreate.import", "game-create-sandbox-import", null, null, "import");
		actions.ButtonKey(1, "Common.Export", "gameCreate.export", "game-create-sandbox-export", null, null, "export");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__73_2: clean
	private void c__BuildSandboxCustom_b__73_2(AottgUi actions)
	{
		if (actions == null) {
			throw new NullReferenceException();
		}
		actions.ButtonKey(1, "GameCreate.Sandbox.Custom.OpenLogicFolder", "gameCreate.custom.openLogicFolder", "game-create-sandbox-open-logic-folder", null, null, "open");
		actions.ButtonKey(1, "GameCreate.Sandbox.Custom.OpenMapsFolder", "gameCreate.custom.openMapsFolder", "game-create-sandbox-open-maps-folder", null, null, "open");
		actions.ButtonKey(1, "GameCreate.Sandbox.Custom.OpenAddonsFolder", "gameCreate.custom.openAddonsFolder", "game-create-sandbox-open-addons-folder", null, null, "open");
		actions.ButtonKey(1, "GameCreate.Sandbox.Custom.OpenLogsFolder", "gameCreate.custom.openLogsFolder", "game-create-sandbox-open-logs-folder", null, null, "open");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildFooter>b__74_0: 4 lines keep C-only constructs
	private void c__BuildFooter_b__74_0(AottgUi footer)
	{
		uint uVar1;
		int iVar2;
		bool bVar3;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar4;
		GisketchNodeDefinition pGVar5;
		String* ppSVar6;
		String* ppSVar7;
		Nullable<bool>[] aSStack_38 = new Nullable<bool>[4];
		Nullable<bool>[] aSStack_30 = new Nullable<bool>[4];

		if (Il2CppMethodInitialized_07545212 == false) {
			Il2CppMethodInitialized_07545212 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588de61;
	label_0588dda0: ;
			bVar3 = AottgGameCreateSession.IsConfigured;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588dda0;
	label_0588de61: ;
			bVar3 = AottgGameCreateSession.IsConfigured;
		}
		if (!bVar3) {
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452dd == false) goto label_0588e0e6;
	label_0588de91: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452dd != false) goto label_0588de91;
	label_0588e0e6: ;
			g_data_075452dd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		iVar2 = AottgGameCreateSession. _LaunchContext_k__BackingField;
		width = AottgUi.Points(220.0);
		height = AottgUi.Points(64.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (iVar2 == 2) {
			if ((footer == null) ||(pGVar5 = footer.ButtonKey(1, "GameCreate.SaveAndClose", "gameCreate.save.nextRestart", "game-create-save-next-restart", null, null, null), pGVar5 == null)) goto label_0588e118;
			pGVar5.layout = pGVar4;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar3 = AottgGameCreateSession.CanStart;
			aSStack_30[0].hasValue = false;
			aSStack_30[0].value = false;
			aSStack_30 = new Nullable<bool>(bVar3);
			pGVar5.enabled = aSStack_30[0];
			ppSVar6 = &"gameCreate.restart";
			ppSVar7 = &"Common.Restart";
		}
		else {
			if (footer == null) goto label_0588e118;
			ppSVar6 = &"gameCreate.start";
			ppSVar7 = &"Common.Start";
		}
		pGVar5 = footer.ButtonKey(0, *ppSVar7, *ppSVar6, "game-create-start", null, null, null);
		bVar3 = AottgGameCreateSession.CanStart;
		aSStack_38[0].hasValue = false;
		aSStack_38[0].value = false;
		aSStack_38 = new Nullable<bool>(bVar3);
		if (pGVar5 != null) {
			pGVar5.enabled = aSStack_38[0];
			pGVar5.style = "brushSidePanelFooterPrimaryButton";
			pGVar5.layout = pGVar4;
			return;
		}
	label_0588e118: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildLockedFields>b__77_0: clean
	private void c__BuildLockedFields_b__77_0(GisketchActionContext context)
	{
		uint uVar1;
		bool bVar2;

		if (context.Node == null) {
			bVar2 = false;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar2 = (((context.Node).fields).value == "true");
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452de == false) {
			Il2CppMethodInitialized_075452de = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateSession._showLockedSettings = bVar2;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.RefreshFrom(context);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildVariantSelector>b__84_1: 2 lines keep C-only constructs
	private void c__BuildVariantSelector_b__84_1(GisketchActionContext context)
	{
		String variant;
		String* ppSVar1;

		if (context.Node == null) {
			ppSVar1 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			ppSVar1 = &((context.Node).fields).value;
		}
		variant = *ppSVar1;
		AottgGameCreateSession.SelectVariant(variant);
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.RefreshFrom(context);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass16_0__BuildCategories_b__0(AottgUi browser)
	{
		String[] pSVar1;
		il2cpp_array_size_t iVar2;
		String id;
		Action<AottgUi> __this_00;
		AottgGameCreateCategoryRow __this_01;

		id = "game-create-category-grid";
		pSVar1 = this.categories;
		if (pSVar1 != null) {
			__this_00 = this.__9__1;
			iVar2 = pSVar1.Length;
			if (__this_00 == null) {
				__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__1);
				this.__9__1 = __this_00;
			}
			__this_01 = new AottgGameCreateCategoryRow(id, (int)iVar2 + 1, 360.0, 14.0, __this_00, false, 0.0);
			if (browser != null) {
				browser.Component((AottgComponent)__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass16_0__BuildCategories_b__1(AottgUi choices)
	{
		uint uVar1;
		String category;
		String[] pSVar2;
		MethodInfo arg0;
		String pSVar3;
		String pSVar4;
		AottgGameCreateChoiceTile __this_00;
		Action<AottgUi> __this_01;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		uint uStack_44;
		String pSStack_40;
		MethodInfo pMStack_38;

		uStack_44 = 0;
		pSVar2 = this.categories;
		if (pSVar2 != null) {
			do {
				pSVar3 = "clear";
				uVar1 = (uint)pSVar2.Length;
				if ((int)uVar1 <= (int)uStack_44) {
					__this_01 = this.__9__2;
					if (__this_01 == null) {
						__this_01 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__2);
						this.__9__2 = __this_01;
					}
					width = AottgUi.Points(260.0);
					height = AottgUi.Points(360.0);
					layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					if (choices != null) {
						choices.Panel(pSVar3, __this_01, "game-create-root-featured-choices", layout, null);
						return;
					}
					break;
				}
				if (uVar1 <= uStack_44) {
	label_0588f117: ;
					throw new IndexOutOfRangeException();
				}
				arg0 = (MethodInfo)ContentLocale.ExperienceCategory(pSVar2[(int)uStack_44]);
				pSVar3 = uStack_44.ToString();
				pSVar3 = String.Concat("game-create-category-", pSVar3);
				pSVar4 = Aottg2GisketchLocale.Text("GameCreate.Categories.Browse");
				pSVar4 = String.Format(pSVar4, (object)arg0);
				uVar1 = uStack_44;
				pSVar2 = this.categories;
				if (pSVar2 == null) break;
				if ((uint)pSVar2.Length <= uStack_44) goto label_0588f117;
				category = pSVar2[(int)uStack_44];
				pSStack_40 = pSVar3;
				pMStack_38 = arg0;
				pSVar3 = AottgGameCreateScreen.CategoryPreview(category);
				__this_00 = new AottgGameCreateChoiceTile(pSStack_40, (String)pMStack_38, pSVar4, "gameCreate.select.category", "menuList", uVar1, pSVar3, null, 0.0);
				if (choices == null) break;
				choices.Component((AottgComponent)__this_00);
				uStack_44 = uStack_44 + 1;
				pSVar2 = this.categories;
			} while (pSVar2 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__2: clean
	private void c__DisplayClass16_0__BuildCategories_b__2(AottgUi featuredChoices)
	{
		String[] pSVar1;
		String pSVar2;
		String pSVar3;
		AottgGameCreateChoiceTile pGVar4;

		pSVar2 = Aottg2GisketchLocale.Text("GameCreate.Favorites");
		pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Favorites.ChoiceDescription");
		pSVar1 = this.categories;
		if (pSVar1 != null) {
			pGVar4 = new AottgGameCreateChoiceTile("game-create-root-favorites", pSVar2, pSVar3, "gameCreate.open.favorites", "star", (int32_t)pSVar1.Length, null, null, 173.0);
			if (featuredChoices != null) {
				featuredChoices.Component((AottgComponent)pGVar4);
				pSVar2 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Title");
				pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Description");
				pSVar1 = this.categories;
				if (pSVar1 != null) {
					pGVar4 = new AottgGameCreateChoiceTile("game-create-root-sandbox", pSVar2, pSVar3, "gameCreate.open.sandbox", "gear", (int)pSVar1.Length + 1, null, null, 173.0);
					featuredChoices.Component((AottgComponent)pGVar4);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass18_0$$<BuildSubcategories>b__0: clean
	private void c__DisplayClass18_0__BuildSubcategories_b__0(AottgUi grid)
	{
		String subcategory;
		uint index;
		AottgGameCreateScreen.c__DisplayClass18_0 pGVar1;
		String[] pSVar2;
		String pSVar3;
		String pSVar4;
		String pSVar5;
		MethodInfo method_00;
		AottgGameCreateChoiceTile __this_00;
		uint uStack_44;
		AottgGameCreateScreen.c__DisplayClass18_0 pGStack_40;
		String pSStack_38;

		uStack_44 = 0;
		pSVar2 = this.subcategories;
		if (pSVar2 != null) {
			pGStack_40 = this;
			do {
				pGVar1 = pGStack_40;
				if ((int)pSVar2.Length <= (int)uStack_44) {
					return;
				}
				pSVar3 = uStack_44.ToString();
				pSVar3 = String.Concat("game-create-subcategory-", pSVar3);
				pSVar2 = pGVar1.subcategories;
				if (pSVar2 == null) break;
				if ((uint)pSVar2.Length <= uStack_44) {
	label_0588f581: ;
					throw new IndexOutOfRangeException();
				}
				pSVar4 = ContentLocale.ExperienceSubcategory(pSVar2[(int)uStack_44]);
				pSVar5 = Aottg2GisketchLocale.Text("GameCreate.Subcategories.Browse");
				pSVar2 = pGVar1.subcategories;
				if (pSVar2 == null) break;
				if ((uint)pSVar2.Length <= uStack_44) goto label_0588f581;
				method_00 = (MethodInfo)ContentLocale.ExperienceSubcategory(pSVar2[(int)uStack_44]);
				pSVar5 = String.Format(pSVar5, (object)method_00);
				index = uStack_44;
				pSVar2 = pGVar1.subcategories;
				if (pSVar2 == null) break;
				if ((uint)pSVar2.Length <= uStack_44) goto label_0588f581;
				subcategory = pSVar2[(int)uStack_44];
				pSStack_38 = pSVar4;
				pSVar4 = AottgGameCreateScreen.SubcategoryPreview(subcategory);
				__this_00 = new AottgGameCreateChoiceTile(pSVar3, pSStack_38, pSVar5, "gameCreate.select.subcategory", "open", index, pSVar4, null, 0.0);
				if (grid == null) break;
				grid.Component((AottgComponent)__this_00);
				uStack_44 = uStack_44 + 1;
				pSVar2 = pGStack_40.subcategories;
			} while (pSVar2 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass20_0$$<BuildExperiences>b__0: clean
	private void c__DisplayClass20_0__BuildExperiences_b__0(AottgUi grid)
	{
		uint uVar1;
		Experience pMVar2;
		String pSVar3;
		Experience[] pMVar4;
		String pSVar5;
		String pSVar6;
		String pSVar7;
		AottgGameCreateChoiceTile pGVar8;
		uint uStack_44;
		AottgUi pGStack_40;
		AottgGameCreateScreen.c__DisplayClass20_0 pGStack_38;

		pGStack_40 = grid;
		pGStack_38 = this;
		uStack_44 = 0;
		pMVar4 = pGStack_38.experiences;
		if (pMVar4 != null) {
			if (pGStack_40 == null) {
				if ((int)pMVar4.Length < 1) {
					return;
				}
				pMVar2 = pMVar4[0];
				pSVar5 = uStack_44.ToString();
				pSVar5 = String.Concat("game-create-experience-", pSVar5);
				pSVar6 = ContentLocale.ExperienceName(pMVar2);
				pSVar7 = ContentLocale.ExperienceDescription(pMVar2);
				uVar1 = uStack_44;
				if (pMVar2 != null) {
					pSVar3 = pMVar2.Preview;
					pGVar8 = new AottgGameCreateChoiceTile(pSVar5, pSVar6, pSVar7, "gameCreate.select.experience", "buttonStart", uVar1, pSVar3, null, 0.0);
					throw new NullReferenceException();
				}
			}
			else {
				do {
					uVar1 = (uint)pMVar4.Length;
					if ((int)uVar1 <= (int)uStack_44) {
						return;
					}
					if (uVar1 <= uStack_44) {
						throw new IndexOutOfRangeException();
					}
					pMVar2 = pMVar4[(int)uStack_44];
					pSVar5 = uStack_44.ToString();
					pSVar5 = String.Concat("game-create-experience-", pSVar5);
					pSVar6 = ContentLocale.ExperienceName(pMVar2);
					pSVar7 = ContentLocale.ExperienceDescription(pMVar2);
					uVar1 = uStack_44;
					if (pMVar2 == null) break;
					pSVar3 = pMVar2.Preview;
					pGVar8 = new AottgGameCreateChoiceTile(pSVar5, pSVar6, pSVar7, "gameCreate.select.experience", "buttonStart", uVar1, pSVar3, null, 0.0);
					pGStack_40.Component((AottgComponent)pGVar8);
					uStack_44 = uStack_44 + 1;
					pMVar4 = pGStack_38.experiences;
				} while (pMVar4 != null);
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_0$$<BuildFavoriteChoices>b__0: 8 lines keep C-only constructs
	private void c__DisplayClass24_0__BuildFavoriteChoices_b__0(AottgUi grid)
	{
		uint uVar1;
		Experience pMVar2;
		Experience pMVar3;
		il2cpp_array_size_t iVar4;
		uint uVar5;
		AottgGameCreateScreen.c__DisplayClass24_0 pGVar6;
		bool bVar7;
		bool selected;
		Experience[] pMVar8;
		AottgGameCreateScreen.c__DisplayClass24_1 __this_00;
		String pSVar9;
		String pSVar10;
		Action pSVar11;
		String[] pSVar12;
		AottgGameCreateScreen.c__DisplayClass24_2 __this_01;
		uint uStack_5c;
		uint uStack_58;
		uint uStack_54;
		String pSStack_50;
		String pSStack_48;
		AottgGameCreateScreen.c__DisplayClass24_0 pGStack_40;
		AottgUi pGStack_38;

		pGStack_38 = grid;
		uStack_58 = 0;
		pMVar8 = this.experiences;
		if (pMVar8 != null) {
			pGStack_40 = this;
			do {
				pGVar6 = pGStack_40;
				if ((int)pMVar8.Length <= (int)uStack_58) {
					uStack_5c = 0;
					pSVar12 = pGStack_40.presets;
					if (pSVar12 != null) goto label_0588facb;
					break;
				}
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateScreen.c__DisplayClass24_1));
				__this_00 = new Object();
				pMVar8 = pGVar6.experiences;
				if (pMVar8 == null) break;
				if ((uint)pMVar8.Length <= uStack_58) goto label_0588fcd4;
				if (__this_00 == null) break;
				__this_00.experience = pMVar8[(int)uStack_58];
				pSVar9 = uStack_58.ToString();
				pSStack_48 = String.Concat("game-create-favorite-experience-", pSVar9);
				pSVar9 = ContentLocale.ExperienceName(__this_00.experience);
				pSVar10 = ContentLocale.ExperienceDescription(__this_00.experience);
				pMVar2 = __this_00.experience;
				if (pMVar2 == null) break;
				pSStack_50 = pMVar2.Preview;
				uStack_54 = uStack_58;
				bVar7 = pGVar6.compact;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075452d2 == false) goto label_0588fa2e;
	label_0588f9b5: ;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_075452d2 != false) goto label_0588f9b5;
	label_0588fa2e: ;
					Il2CppMethodInitialized_075452d2 = true;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pMVar3 = AottgGameCreateSession. _Experience_k__BackingField;
				pSVar11 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1_BuildFavoriteChoices_b__1);
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
				}
				AottgGameCreateScreen.BuildFavoriteChoice(pGStack_38, pSStack_48, pSVar9, pSVar10, pSStack_50, uStack_54, bVar7, pMVar2 == pMVar3, pSVar11);
				uStack_58 = uStack_58 + 1;
				pMVar8 = pGStack_40.experiences;
			} while (pMVar8 != null);
		}
		goto label_0588fccf;
	label_0588facb: ;
		do {
			pGVar6 = pGStack_40;
			if ((int)pSVar12.Length <= (int)uStack_5c) {
				return;
			}
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateScreen.c__DisplayClass24_2));
			__this_01 = new Object();
			pSVar12 = pGVar6.presets;
			if (pSVar12 == null) break;
			if ((uint)pSVar12.Length <= uStack_5c) {
	label_0588fcd4: ;
				throw new IndexOutOfRangeException();
			}
			if (__this_01 == null) break;
			__this_01.preset = pSVar12[(int)uStack_5c];
			pSVar9 = uStack_5c.ToString();
			pSStack_50 = String.Concat("game-create-favorite-preset-", pSVar9);
			pSStack_48 = __this_01.preset;
			pSVar9 = Aottg2GisketchLocale.Text("GameCreate.Favorites.SandboxPreset");
			uVar5 = uStack_5c;
			pMVar8 = pGVar6.experiences;
			if (pMVar8 == null) break;
			uStack_54 = CONCAT31(uStack_54._1_3_, pGVar6.compact);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar7 = AottgGameCreateSession.IsSandbox;
			iVar4 = pMVar8.Length;
			selected = false;
			if (bVar7) {
				pSVar10 = __this_01.preset;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_075452dc == false) goto label_0588fc87;
	label_0588fbf4: ;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_075452dc != false) goto label_0588fbf4;
	label_0588fc87: ;
					g_data_075452dc = true;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				selected = (pSVar10 == AottgGameCreateSession. _SelectedPresetName_k__BackingField);
			}
			pSVar11 = new Action((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2_BuildFavoriteChoices_b__2);
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			}
			AottgGameCreateScreen.BuildFavoriteChoice(pGStack_38, pSStack_50, pSStack_48, pSVar9, null, uVar5 + (int)iVar4, uStack_54._0_1_, selected, pSVar11);
			uStack_5c = uStack_5c + 1;
			pSVar12 = pGStack_40.presets;
		} while (pSVar12 != null);
	label_0588fccf: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_1$$.ctor: clean
	private void c__DisplayClass24_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_2$$.ctor: clean
	private void c__DisplayClass24_2__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_1$$<BuildFavoriteChoices>b__1: clean
	private void c__DisplayClass24_1__BuildFavoriteChoices_b__1()
	{
		Experience experience;

		experience = this.experience;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateSession.SelectExperience(experience);
			return;
		}
		AottgGameCreateSession.SelectExperience(experience);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_2$$<BuildFavoriteChoices>b__2: clean
	private void c__DisplayClass24_2__BuildFavoriteChoices_b__2()
	{
		bool bVar1;
		String pSVar2;

		pSVar2 = this.preset;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = AottgGameCreateSession.LoadPreset(pSVar2);
		}
		else {
			bVar1 = AottgGameCreateSession.LoadPreset(pSVar2);
		}
		if (bVar1) {
			return;
		}
		pSVar2 = String.Concat("Unable to load favorite game preset: ", this.preset);
		Debug.LogWarning((object)pSVar2);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass25_0$$<BuildFavoriteChoice>b__0: clean
	private void c__DisplayClass25_0__BuildFavoriteChoice_b__0(GisketchActionContext context)
	{
		Action pSVar1;

		pSVar1 = this.select;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.RefreshFrom(context);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass26_0$$<BuildCategorySelector>b__0: clean
	private void c__DisplayClass26_0__BuildCategorySelector_b__0(AottgUi selector)
	{
		uint uVar1;
		sbyte cVar2;
		uint uVar3;
		bool bVar4;
		String[] pSVar5;
		String pSVar6;
		String pSVar7;
		MethodInfo method_00;
		bool selected;
		uint uStack_3c;
		AottgUi pGStack_38;

		pGStack_38 = selector;
		uStack_3c = 0;
		pSVar5 = this.categories;
		if (pSVar5 != null) {
			do {
				uVar1 = (uint)pSVar5.Length;
				if ((int)uVar1 <= (int)uStack_3c) {
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar6 = Aottg2GisketchLocale.Text("GameCreate.Favorites");
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						if (g_data_075452d1 == false) goto label_058906ca;
	label_058905a0: ;
						uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (g_data_075452d1 != false) goto label_058905a0;
	label_058906ca: ;
						g_data_075452d1 = true;
						uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					bVar4 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
					AottgGameCreateScreen.BuildCollapsedFeatureChoice(pGStack_38, "star", pSVar6, bVar4, "gameCreate.open.favorites", "game-create-root-favorites");
					selected = false;
					method_00 = (MethodInfo *)"GameCreate.Sandbox.Title";
					pSVar7 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Title");
					bVar4 = AottgGameCreateSession.IsSandbox;
					pSVar6 = "gear";
					if (!bVar4) goto label_05890669;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						if (g_data_075452d1 == false) goto label_0589070e;
	label_05890649: ;
						uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (g_data_075452d1 != false) goto label_05890649;
	label_0589070e: ;
						g_data_075452d1 = true;
						uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					selected = AottgGameCreateSession. _ShowFavorites_k__BackingField == false;
	label_05890669: ;
					AottgGameCreateScreen.BuildCollapsedFeatureChoice(pGStack_38, pSVar6, pSVar7, selected, "gameCreate.open.sandbox", "game-create-root-sandbox");
					return;
				}
				if (uVar1 <= uStack_3c) goto label_05890745;
				pSVar6 = ContentLocale.ExperienceCategory(pSVar5[(int)uStack_3c]);
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_075452d1 == false) goto label_0589043e;
	label_058903ff: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589040c;
	label_0589045a: ;
					cVar2 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
				}
				else {
					if (g_data_075452d1 != false) goto label_058903ff;
	label_0589043e: ;
					g_data_075452d1 = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589045a;
	label_0589040c: ;
					cVar2 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
				}
				bVar4 = false;
				if (cVar2 == false) {
					pSVar5 = this.categories;
					if (pSVar5 == null) break;
					if ((uint)pSVar5.Length <= uStack_3c) {
	label_05890745: ;
						throw new IndexOutOfRangeException();
					}
					pSVar7 = pSVar5[(int)uStack_3c];
					if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_075452d4 == false) goto label_05890528;
	label_058904a8: ;
						uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (Il2CppMethodInitialized_075452d4 != false) goto label_058904a8;
	label_05890528: ;
						Il2CppMethodInitialized_075452d4 = true;
						uVar3 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					bVar4 = String.Equals(pSVar7, AottgGameCreateSession. _Category_k__BackingField, 5);
				}
				pSVar7 = uStack_3c.ToString();
				pSVar7 = String.Concat("game-create-category-", pSVar7);
				AottgGameCreateScreen.BuildCompactChoice(pGStack_38, pSVar6, bVar4, "gameCreate.select.category", pSVar7, 0, null);
				uStack_3c = uStack_3c + 1;
				pSVar5 = this.categories;
			} while (pSVar5 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass28_0$$<BuildExperienceSelector>b__0: clean
	private void c__DisplayClass28_0__BuildExperienceSelector_b__0(AottgUi row)
	{
		uint uVar1;
		uint uVar2;
		Experience pMVar3;
		Experience pMVar4;
		Experience[] pMVar5;
		String label;
		String pSVar6;
		GisketchNodeDefinition pGVar7;
		GisketchLayoutDefinition pGVar8;
		uint uStack_3c;
		MethodInfo pMStack_38;

		pMStack_38 = (MethodInfo)row;
		uStack_3c = 0;
		pMVar5 = this.experiences;
		if (pMVar5 != null) {
			do {
				uVar1 = (uint)pMVar5.Length;
				if ((int)uVar1 <= (int)uStack_3c) {
					return;
				}
				if (uVar1 <= uStack_3c) {
	label_05890952: ;
					throw new IndexOutOfRangeException();
				}
				label = ContentLocale.ExperienceName(pMVar5[(int)uStack_3c]);
				pMVar5 = this.experiences;
				if (pMVar5 == null) break;
				if ((uint)pMVar5.Length <= uStack_3c) goto label_05890952;
				pMVar3 = pMVar5[(int)uStack_3c];
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075452d2 != false) goto label_0589082e;
	label_05890912: ;
					Il2CppMethodInitialized_075452d2 = true;
					uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_075452d2 == false) goto label_05890912;
	label_0589082e: ;
					uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				pMVar4 = AottgGameCreateSession. _Experience_k__BackingField;
				pSVar6 = uStack_3c.ToString();
				pSVar6 = String.Concat("game-create-experience-", pSVar6);
				pGVar7 = AottgGameCreateScreen.BuildCompactChoice((AottgUi)pMStack_38, label, pMVar3 == pMVar4, "gameCreate.select.experience", pSVar6, 2, null);
				pGVar8 = AottgGameCreateScreen.CarouselButtonLayout();
				if (pGVar7 == null) break;
				pGVar7.layout = pGVar8;
				uStack_3c = uStack_3c + 1;
				pMVar5 = this.experiences;
			} while (pMVar5 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$<BuildCompactRow>b__0: clean
	private void c__DisplayClass29_0__BuildCompactRow_b__0(AottgUi row)
	{
		uint uVar1;
		int selectedVariant;
		String a;
		bool selected;
		String[] pSVar2;
		String str1;
		String pSVar3;
		GisketchNodeDefinition pGVar4;
		GisketchLayoutDefinition pGVar5;
		uint uStack_44;
		AottgUi pGStack_40;
		String pSStack_38;

		pGStack_40 = row;
		uStack_44 = 0;
		pSVar2 = this.values;
		if (pSVar2 != null) {
			do {
				uVar1 = (uint)pSVar2.Length;
				if ((int)uVar1 <= (int)uStack_44) {
					return;
				}
				if (uVar1 <= uStack_44) {
					throw new IndexOutOfRangeException();
				}
				a = pSVar2[(int)uStack_44];
				selected = String.Equals(a, this.selected, 5);
				pSStack_38 = this.actionId;
				pSVar3 = this.itemPrefix;
				str1 = uStack_44.ToString();
				pSVar3 = String.Concat(pSVar3, str1);
				selectedVariant = this.selectedVariant;
				pGVar4 = AottgGameCreateScreen.BuildCompactChoice(pGStack_40, a, selected, pSStack_38, pSVar3, selectedVariant, null);
				if (this.carousel != false) {
					pGVar5 = AottgGameCreateScreen.CarouselButtonLayout();
					if (pGVar4 == null) break;
					pGVar4.layout = pGVar5;
				}
				uStack_44 = uStack_44 + 1;
				pSVar2 = this.values;
			} while (pSVar2 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$<BuildCompactRow>b__1: clean
	private bool c__DisplayClass29_0__BuildCompactRow_b__1(String value)
	{
		bool bVar1;

		bVar1 = String.Equals(value, this.selected, 5);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass36_0__BuildExperienceContext_b__0(AottgUi context)
	{
		Experience experience;
		String style;
		bool bVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		String value;

		if (context == null) {
			throw new NullReferenceException();
		}
		context.TextKey("GameCreate.Configuration.Title", "subtext", "game-create-configuration-eyebrow", null, null);
		style = "clear";
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__1);
			this.__9__1 = __this_00;
		}
		value = null;
		layout = AottgUi.Layout("Row", null, "Center", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		context.Panel(style, __this_00, "game-create-configuration-heading", layout, null);
		experience = this.experience;
		if (experience != null) {
			value = ContentLocale.ExperienceDescription(experience);
		}
		bVar1 = String.IsNullOrEmpty(value);
		if (!bVar1) {
			context.Text(value, "text", "game-create-configuration-description", null, null);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass36_0__BuildExperienceContext_b__1(AottgUi heading)
	{
		uint uVar1;
		Experience pMVar2;
		String id;
		bool favorite;
		MethodInfo method_00;
		Action<GisketchActionContext> __this_00;

		pMVar2 = this.experience;
		if (pMVar2 == null) {
			method_00 = (MethodInfo)Aottg2GisketchLocale.Text("GameCreate.Configuration.Title");
		}
		else {
			method_00 = (MethodInfo)ContentLocale.ExperienceName(pMVar2);
		}
		if (heading == null) {
			throw new NullReferenceException();
		}
		heading.Text((String)method_00, "header", "game-create-configuration-title", null, null);
		pMVar2 = this.experience;
		if (pMVar2 == null) {
			return;
		}
		favorite = AottgGameCreateSession.IsFavorite(pMVar2);
		id = "game-create-configuration-favorite";
		__this_00 = this.__9__2;
		if (__this_00 == null) {
			__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__2);
			this.__9__2 = __this_00;
			uVar1 = (typeof(AottgGameCreateChoiceTile)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateChoiceTile)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateChoiceTile.BuildFavoriteButton(heading, id, favorite, __this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__2: clean
	private void c__DisplayClass36_0__BuildExperienceContext_b__2(GisketchActionContext actionContext)
	{
		Experience experience;

		experience = this.experience;
		AottgGameCreateSession.ToggleFavorite(experience);
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.RefreshFrom(actionContext);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(actionContext);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$<BuildField>b__0: 20 lines keep C-only constructs
	private void c__DisplayClass37_0__BuildField_b__0(AottgUi row)
	{
		byte bVar1;
		byte bVar2;
		String[] pSVar3;
		BaseSetting pSVar4;
		BaseSetting pSVar5;
		InspectorSettingMetadata pSVar6;
		bool bVar7;
		bool bVar8;
		String pSVar9;
		String pSVar10;
		System_Func_TSource__TResult__o __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		String[] labels;
		GisketchChoiceOptionDefinition[] options;
		ExperienceRuleField pSVar11;
		GisketchNodeDefinition pGVar12;
		GisketchLayoutDefinition pGVar13;
		int type;
		String* ppSVar14;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar15;
		float value;
		float min;
		float max;
		Nullable<bool>[] aSStack_48 = new Nullable<bool>[4];
		Nullable<bool>[] aSStack_40 = new Nullable<bool>[4];
		Func<string, string>* ppSStack_38;

		pMVar15 = (MethodInfo)row;
		pSVar11 = this.field;
		if (pSVar11 == null) goto label_05891a9b;
		pSVar9 = pSVar11.Id;
		pSVar9 = AottgGameCreateSession.FieldLabel(pSVar9);
		pSVar10 = String.Concat(this.id, "-label");
		AottgGameCreateScreen.FieldRowLabel(row, pSVar9, "text", pSVar10);
		pSVar11 = this.field;
		if (pSVar11 == null) goto label_05891a9b;
		pMVar15 = (MethodInfo *)"general.GameMode";
		bVar7 = (pSVar11.Id == "general.GameMode");
		if (bVar7) {
			pSVar11 = this.field;
			if (pSVar11 == null) goto label_05891a9b;
			if (pSVar11.Editable == false) {
				bVar7 = false;
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor != 0) goto label_0589137d;
	label_058916e3: ;
				pSVar9 = AottgGameCreateScreen.FieldValue(pSVar11);
				if (bVar7 != false) goto label_0589138e;
	label_058916f9: ;
				ppSVar14 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar3 = this.allowed;
				if (pSVar3 == null) goto label_05891a9b;
				bVar7 = 1 < (int)pSVar3.Length;
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) goto label_058916e3;
	label_0589137d: ;
				pSVar9 = AottgGameCreateScreen.FieldValue(pSVar11);
				if (bVar7 == false) goto label_058916f9;
	label_0589138e: ;
				ppSVar14 = &"gameCreate.open.modeSelector";
			}
			if (row == null) goto label_05891a9b;
			pSVar10 = null;
			if (bVar7 != false) {
				pSVar10 = "zoom";
			}
			pGVar12 = row.Button(1, pSVar9, *ppSVar14, this.id, null, null, pSVar10);
			aSStack_40[0].hasValue = false;
			aSStack_40[0].value = false;
			aSStack_40 = new Nullable<bool>(bVar7);
			if (pGVar12 == null) goto label_05891a9b;
			pGVar12.enabled = aSStack_40[0];
			pSVar11 = this.field;
		}
		else {
			pSVar3 = this.allowed;
			if ((pSVar3 == null) || (pSVar3.Length == 0)) {
				pSVar11 = this.field;
				if (pSVar11 == null) goto label_05891a9b;
				pSVar4 = pSVar11.Setting;
				if (pSVar4 == null) {
	label_0589155a: ;
					pSVar4 = pSVar11.Setting;
					if (pSVar4 != null) {
						bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
						if ((bVar1 <= (pSVar4.klass._2).typeHierarchyDepth) &&((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(FloatSetting))) {
							pSVar6 = pSVar4.InspectorMetadata;
							if (pSVar6 == null) goto label_05891a9b;
							if (pSVar6.HasSlider != false) {
								pSVar9 = pSVar11.Id;
								if (pSVar9 == null) goto label_05891a9b;
								bVar7 = pSVar9.StartsWith("titan.", 5);
								if (!bVar7) {
									if (row == null) goto label_05891a9b;
									max = *(float)((long)&(*(ulong)((sbyte)pSVar4 + 0x20)) + 4);
									value = *(float)((long)&(*(ulong)((sbyte)pSVar4 + 0x18)) + 4);
									min = *(float)&(*(ulong)((sbyte)pSVar4 + 0x20));
									pSVar9 = this.id;
									goto label_05891a73;
								}
								pSVar11 = this.field;
								if (pSVar11 == null) goto label_05891a9b;
							}
						}
					}
					pSVar4 = pSVar11.Setting;
					type = 2;
					if (pSVar4 != null) {
						bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
						if (((pSVar4.klass._2).typeHierarchyDepth < bVar1) ||((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
							bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
							if (bVar1 <= (pSVar4.klass._2).typeHierarchyDepth) {
								type = 2 - (uint)((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(IntSetting));
							}
						}
						else {
							type = 0;
						}
					}
					if (row == null) goto label_05891a9b;
					pMVar15 = (MethodInfo)this.id;
					pGVar12 = row.InputField((String)pMVar15, (String)**(ulong*)(g_data_07556758 + 0xb8), type, "inputField", null, null, null, 0.2, 0, null);
					pSVar11 = this.field;
					pSVar9 = AottgGameCreateScreen.FieldValue(pSVar11);
					if (pGVar12 == null) goto label_05891a9b;
					pGVar12.value = pSVar9;
					pGVar12.action = "gameCreate.change.field";
					ppSVar14 = &pGVar12.commitAction;
					pGVar12.commitAction = "gameCreate.change.field";
				}
				else {
					pSVar5 = pSVar4.klass;
					bVar1 = (pSVar5._2).typeHierarchyDepth;
					bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
						bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) goto label_0589155a;
						pSVar6 = pSVar4.InspectorMetadata;
						if (pSVar6 == null) goto label_05891a9b;
						if (pSVar6.HasSlider == false) goto label_0589155a;
						pSVar9 = pSVar11.Id;
						if (pSVar9 == null) goto label_05891a9b;
						bVar7 = pSVar9.StartsWith("titan.", 5);
						if (bVar7) {
							pSVar11 = this.field;
							if (pSVar11 == null) goto label_05891a9b;
							goto label_0589155a;
						}
						if (row == null) goto label_05891a9b;
						value = (float)*(int)((long)&(*(ulong)((sbyte)pSVar4 + 0x18)) + 4);
						pSVar9 = this.id;
						min = (float)*(int)&(*(ulong)((sbyte)pSVar4 + 0x20));
						max = (float)*(int)((long)&(*(ulong)((sbyte)pSVar4 + 0x20)) + 4);
	label_05891a73: ;
						pGVar12 = row.Slider(pSVar9, value, true, "gameCreate.change.field", "slider", min, max, null);
						pSVar11 = this.field;
						goto joined_r0x058914df;
					}
					if ((row == null) ||(pGVar12 = row.Checkbox(this.id, (String)**(ulong*)(g_data_07556758 + 0xb8), *(bool)((long)&(*(ulong)((sbyte)pSVar4 + 0x18)) + 1), null, null, null), pGVar12 == null)) goto label_05891a9b;
					ppSVar14 = &pGVar12.action;
					pGVar12.action = "gameCreate.change.field";
				}
				pSVar11 = this.field;
			}
			else {
				pSVar11 = this.field;
				pSVar9 = this.id;
				pSVar10 = AottgGameCreateScreen.FieldValue(pSVar11);
				pSVar3 = this.allowed;
				__this_00 = (System_Func_TSource__TResult__o)this.__9__1;
				if (__this_00 == null) {
					ppSStack_38 = &this.__9__1;
					__this_00 = new Func<string, string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__1);
					this.__9__1 = (Func<string, string>)__this_00;
				}
				source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, __this_00);
				labels = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
				pMVar15 = extraout_RDX;
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					pMVar15 = extraout_RDX_00;
				}
				options = AottgGameCreateScreen.ChoiceOptions(pSVar3, labels);
				if ((row == null) ||(pGVar12 = row.Dropdown(pSVar9, pSVar10, options, null, null, 8), pGVar12 == null)) goto label_05891a9b;
				pGVar12.action = "gameCreate.change.field";
				pSVar11 = this.field;
			}
		}
	joined_r0x058914df: ;
		if (pSVar11 != null) {
			if (pSVar11.Editable == false) {
				bVar7 = false;
			}
			else {
				bVar8 = (pSVar11.Id != "general.GameMode");
				bVar7 = true;
				if (!bVar8) {
					pSVar3 = this.allowed;
					if (pSVar3 == null) goto label_05891a9b;
					bVar7 = 1 < (int)pSVar3.Length;
				}
			}
			aSStack_48[0].hasValue = false;
			aSStack_48[0].value = false;
			pMVar15 = (MethodInfo)(ulong)bVar7;
			aSStack_48 = new Nullable<bool>(bVar7);
			if (pGVar12 != null) {
				pGVar12.enabled = aSStack_48[0];
				pSVar11 = this.field;
				if (pSVar11 != null) {
					pSVar9 = pSVar11.Id;
					pSVar9 = AottgGameCreateSession.FieldLabel(pSVar9);
					pGVar12.formLabel = pSVar9;
					pGVar12.tooltip = this.tooltip;
					pMVar15 = (MethodInfo *)"Checkbox";
					bVar7 = (pGVar12.type == "Checkbox");
					pGVar13 = AottgGameCreateScreen.FieldControlLayout(bVar7);
					pGVar12.layout = pGVar13;
					return;
				}
			}
		}
	label_05891a9b: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$<BuildField>b__1: clean
	private String c__DisplayClass37_0__BuildField_b__1(String value)
	{
		ExperienceRuleField pSVar1;
		String pSVar2;

		pSVar1 = this.field;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pSVar1.Id;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = AottgGameCreateScreen.OptionLabel(pSVar2, value);
		return pSVar2;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass39_0$$<BuildSandboxPresetActions>b__1: clean
	private void c__DisplayClass39_0__BuildSandboxPresetActions_b__1(GisketchActionContext context)
	{
		String id;
		UISettings pSVar1;
		ListSetting<StringSetting> favorites;

		id = this.presetName;
		pSVar1 = SettingsManager.UISettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		favorites = pSVar1.FavoriteSandboxPresets;
		AottgGameCreateSession.ToggleFavorite(favorites, id, 4);
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.RefreshFrom(context);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass40_0$$<BuildSandboxField>b__0: 7 lines keep C-only constructs
	private void c__DisplayClass40_0__BuildSandboxField_b__0(AottgUi row)
	{
		byte bVar1;
		byte bVar2;
		uint uVar3;
		String[] pSVar4;
		BaseSetting pSVar5;
		BaseSetting pSVar6;
		InspectorSettingMetadata pSVar7;
		bool bVar8;
		String pSVar9;
		String pSVar10;
		GisketchNodeDefinition pGVar11;
		GisketchLayoutDefinition pGVar12;
		int iVar13;
		String* ppSVar14;
		AottgSandboxField pGVar15;
		MethodInfo pMVar16;
		float value;
		float min;
		float max;
		Nullable<bool>[] aSStack_40 = new Nullable<bool>[4];
		Nullable<bool>[] aSStack_38 = new Nullable<bool>[4];

		pMVar16 = (MethodInfo)row;
		pGVar15 = this.field;
		pSVar9 = AottgGameCreateScreen.SandboxFieldLabel(pGVar15);
		pSVar10 = String.Concat(this.id, "-label");
		AottgGameCreateScreen.FieldRowLabel(row, pSVar9, "text", pSVar10);
		pGVar15 = this.field;
		if (pGVar15 == null) goto label_05892467;
		pMVar16 = (MethodInfo *)"general.GameMode";
		bVar8 = (pGVar15._Id_k__BackingField == "general.GameMode");
		pGVar15 = this.field;
		if (bVar8) {
			if (pGVar15 == null) goto label_05892467;
			pSVar4 = pGVar15._Options_k__BackingField;
			if (pSVar4 == null) goto label_05892467;
			iVar13 = (int)pSVar4.Length;
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
				pSVar9 = AottgGameCreateScreen.SandboxFieldValue(pGVar15);
				if (iVar13 < 2) goto label_05891f29;
	label_05891e68: ;
				ppSVar14 = &"gameCreate.open.modeSelector";
			}
			else {
				pSVar9 = AottgGameCreateScreen.SandboxFieldValue(pGVar15);
				if (1 < iVar13) goto label_05891e68;
	label_05891f29: ;
				ppSVar14 = *(String**)(g_data_07556758 + 0xb8);
			}
			if (row == null) goto label_05892467;
			pSVar10 = null;
			if (1 < iVar13) {
				pSVar10 = "zoom";
			}
			pGVar11 = row.Button(1, pSVar9, *ppSVar14, this.id, null, null, pSVar10);
			aSStack_38[0].hasValue = false;
			aSStack_38[0].value = false;
			bVar8 = (bool)(1 < iVar13 & this.enabled);
			pMVar16 = (MethodInfo)(ulong)bVar8;
			aSStack_38 = new Nullable<bool>(bVar8);
			if (pGVar11 == null) goto label_05892467;
			pGVar11.enabled = aSStack_38[0];
			pGVar15 = this.field;
			uVar3 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (pGVar15 == null) goto label_05892467;
			pSVar4 = pGVar15._Options_k__BackingField;
			if (pSVar4 == null) goto label_05892467;
			if (pSVar4.Length == 0) {
				pSVar5 = pGVar15._Setting_k__BackingField;
				if (pSVar5 != null) {
					pSVar6 = pSVar5.klass;
					bVar1 = (pSVar6._2).typeHierarchyDepth;
					bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
					if ((bVar2 <= bVar1) &&((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BoolSetting))) {
						if (row == null) goto label_05892467;
						pGVar11 = row.Checkbox(this.id, (String)**(ulong*)(g_data_07556758 + 0xb8), *(bool)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 1), null, null, null);
						pMVar16 = (MethodInfo *)"gameCreate.sandbox.change.field";
						goto joined_r0x05892329;
					}
					bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) goto label_0589204c;
					pSVar7 = pSVar5.InspectorMetadata;
					if (pSVar7 == null) goto label_05892467;
					if (pSVar7.HasSlider == false) goto label_0589204c;
					pSVar9 = pGVar15._Id_k__BackingField;
					if (pSVar9 == null) goto label_05892467;
					bVar8 = pSVar9.StartsWith("titan.", 5);
					if (bVar8) {
						pGVar15 = this.field;
						if (pGVar15 == null) goto label_05892467;
						goto label_0589204c;
					}
					if (row == null) goto label_05892467;
					value = (float)*(int)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 4);
					pMVar16 = (MethodInfo)this.id;
					min = (float)*(int)&(*(ulong)((sbyte)pSVar5 + 0x20));
					max = (float)*(int)((long)&(*(ulong)((sbyte)pSVar5 + 0x20)) + 4);
	label_05892432: ;
					pGVar11 = row.Slider((String)pMVar16, value, true, "gameCreate.sandbox.change.field", "slider", min, max, null);
					pGVar15 = this.field;
					uVar3 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
					goto joined_r0x0589245c;
				}
	label_0589204c: ;
				pSVar5 = pGVar15._Setting_k__BackingField;
				if (pSVar5 != null) {
					bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
					if ((bVar1 <= (pSVar5.klass._2).typeHierarchyDepth) &&((pSVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(FloatSetting))) {
						pSVar7 = pSVar5.InspectorMetadata;
						if (pSVar7 == null) goto label_05892467;
						if (pSVar7.HasSlider != false) {
							pSVar9 = pGVar15._Id_k__BackingField;
							if (pSVar9 == null) goto label_05892467;
							bVar8 = pSVar9.StartsWith("titan.", 5);
							if (!bVar8) {
								if (row == null) goto label_05892467;
								max = *(float)((long)&(*(ulong)((sbyte)pSVar5 + 0x20)) + 4);
								value = *(float)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 4);
								min = *(float)&(*(ulong)((sbyte)pSVar5 + 0x20));
								pMVar16 = (MethodInfo)this.id;
								goto label_05892432;
							}
							pGVar15 = this.field;
							if (pGVar15 == null) goto label_05892467;
						}
					}
				}
				bVar8 = (pGVar15._Id_k__BackingField == "general.Password");
				iVar13 = 3;
				if (!bVar8) {
					pGVar15 = this.field;
					if (pGVar15 == null) goto label_05892467;
					pSVar5 = pGVar15._Setting_k__BackingField;
					iVar13 = 2;
					if (pSVar5 != null) {
						pSVar6 = pSVar5.klass;
						bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
						if (bVar1 <= (pSVar6._2).typeHierarchyDepth) {
							iVar13 = (uint)((pSVar6._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting)) * 2;
						}
					}
				}
				if (row == null) goto label_05892467;
				pMVar16 = (MethodInfo)this.id;
				pGVar11 = row.InputField((String)pMVar16, (String)**(ulong*)(g_data_07556758 + 0xb8), iVar13, "inputField", null, null, null, 0.2, 0, null);
				pGVar15 = this.field;
				pSVar9 = AottgGameCreateScreen.SandboxFieldValue(pGVar15);
				if (pGVar11 == null) goto label_05892467;
				pGVar11.value = pSVar9;
				pGVar11.action = "gameCreate.sandbox.change.field";
				pMVar16 = (MethodInfo *)"gameCreate.sandbox.change.field";
				ppSVar14 = &pGVar11.commitAction;
				pGVar11.commitAction = "gameCreate.sandbox.change.field";
			}
			else {
				pSVar9 = this.id;
				pSVar10 = AottgGameCreateScreen.SandboxFieldValue(pGVar15);
				pGVar15 = this.field;
				if ((pGVar15 == null) ||(row == null)) goto label_05892467;
				pGVar11 = row.Dropdown(pSVar9, pSVar10, pGVar15._Options_k__BackingField, null, 8);
				pMVar16 = (MethodInfo *)"gameCreate.sandbox.change.field";
	joined_r0x05892329: ;
				"gameCreate.sandbox.change.field" = (String)pMVar16;
				if (pGVar11 == null) goto label_05892467;
				ppSVar14 = &pGVar11.action;
				pGVar11.action = (String)pMVar16;
			}
			pGVar15 = this.field;
			uVar3 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
	joined_r0x0589245c: ;
		if (uVar3 == 0) {
		}
		pSVar9 = AottgGameCreateScreen.SandboxFieldLabel(pGVar15);
		if (pGVar11 != null) {
			pGVar11.formLabel = pSVar9;
			pGVar11.tooltip = this.tooltip;
			if (this.enabled == false) {
				aSStack_40[0].hasValue = false;
				aSStack_40[0].value = false;
				aSStack_40 = new Nullable<bool>(false);
				pGVar11.enabled = aSStack_40[0];
				uVar3 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			pMVar16 = (MethodInfo *)"Checkbox";
			bVar8 = (pGVar11.type == "Checkbox");
			pGVar12 = AottgGameCreateScreen.FieldControlLayout(bVar8);
			pGVar11.layout = pGVar12;
			return;
		}
	label_05892467: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass41_0$$<BuildSandboxGeneral>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass41_0__BuildSandboxGeneral_b__0(AottgUi core)
	{
		object @object;
		String pSVar1;
		Action<AottgUi> pSVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar5;
		GisketchLength minWidth;
		GisketchLength maxWidth;

		pSVar1 = "clear";
		pSVar2 = this.__9__1;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0_BuildSandboxGeneral_b__1);
			this.__9__1 = pSVar2;
		}
		pGVar3 = AottgUi.Points(330.0);
		pGVar4 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (core == null) {
			throw new NullReferenceException();
		}
		core.Panel(pSVar1, pSVar2, "game-create-sandbox-core-selectors", pGVar4, null);
		pSVar1 = "clear";
		pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
		pSVar2 = pGVar5.__9__41_2;
		if (pSVar2 == null) {
			if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
			}
			@object = (object)pGVar5.__9;
			pSVar2 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxGeneral_b__41_2);
			pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
			pGVar5.__9__41_2 = pSVar2;
		}
		pGVar3 = AottgUi.Points(520.0);
		minWidth = AottgUi.Points(390.0);
		maxWidth = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Layout("Column", null, "Stretch", null, null, 6.0, pGVar3, null, minWidth, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		core.Panel(pSVar1, pSVar2, "game-create-sandbox-core-values", pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass41_0$$<BuildSandboxGeneral>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass41_0__BuildSandboxGeneral_b__1(AottgUi selectors)
	{
		String pSVar1;
		AottgSandboxField field;
		int iVar2;
		MethodInfo field_00;

		field_00 = (MethodInfo)this.map;
		if (field_00 != null) {
			pSVar1 = ((AottgSandboxField)&field_00.invoker_method). _Id_k__BackingField;
			iVar2 = AottgGameCreateScreen.SandboxFieldIndex(pSVar1);
			AottgGameCreateScreen.BuildSandboxField(selectors, (AottgSandboxField)field_00, iVar2, true);
		}
		field = this.mode;
		if (field == null) {
			return;
		}
		pSVar1 = field._Id_k__BackingField;
		iVar2 = AottgGameCreateScreen.SandboxFieldIndex(pSVar1);
		AottgGameCreateScreen.BuildSandboxModeField(selectors, field, iVar2);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass46_0$$<BuildTitanHealthMode>b__0: 7 lines keep C-only constructs
	private void c__DisplayClass46_0__BuildTitanHealthMode_b__0(AottgUi row)
	{
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		IntSetting pSVar3;
		String value;
		object @object;
		String id;
		bool leftAligned;
		String* ppSVar4;
		GisketchChoiceOptionDefinition[] options;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar5;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar6;
		GisketchLayoutDefinition pGVar7;
		MethodInfo method_00;
		Il2CppClass klass;
		Nullable<bool>[] aSStack_48 = new Nullable<bool>[4];
		AottgGameCreateScreen.c__DisplayClass46_0 pGStack_40;
		AottgUi pGStack_38;

		if (row == null) goto label_05892bbf;
		row.TextKey("GameCreate.Sandbox.Titans.HealthMode", "text", "game-create-titans-health-mode-label", null, null);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589295f;
	label_0589298e: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589296b;
	label_058929ad: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateScreen);
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589298e;
	label_0589295f: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058929ad;
	label_0589296b: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)klass;
		if (pSVar1 != null) {
			pSVar2 = pSVar1.Titan;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.TitanHealthMode, pSVar3 != null)) {
				if (pSVar3._value == 2) {
					ppSVar4 = &"Scaled";
				}
				else {
					ppSVar4 = &"Fixed";
				}
				value = *ppSVar4;
				pGStack_38 = row;
				options = AottgGameCreateScreen.TitanHealthModeChoices();
				id = "game-create-titans-health-mode";
				pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
				__this_00 = pGVar5.__9__46_1;
				if (__this_00 == null) {
					pGStack_40 = this;
					if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
					}
					@object = (object)pGVar5.__9;
					__this_00 = new Action<GisketchActionContext>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanHealthMode_b__46_1);
					pGVar5 = typeof(AottgGameCreateScreen.c).static_fields;
					pGVar5.__9__46_1 = __this_00;
					this = pGStack_40;
				}
				pGVar6 = pGStack_38.Dropdown(id, value, options, __this_00, null, 8);
				aSStack_48[0].hasValue = false;
				aSStack_48[0].value = false;
				aSStack_48 = new Nullable<bool>(this.enabled);
				if (pGVar6 != null) {
					pGVar6.enabled = aSStack_48[0];
					method_00 = (MethodInfo *)"Checkbox";
					leftAligned = (pGVar6.type == "Checkbox");
					pGVar7 = AottgGameCreateScreen.FieldControlLayout(leftAligned);
					pGVar6.layout = pGVar7;
					return;
				}
			}
		}
	label_05892bbf: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass50_0$$<BuildTitanToggle>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass50_0__BuildTitanToggle_b__0(AottgUi row)
	{
		bool value;
		uint uVar1;
		String pSVar2;
		String id;
		Action<GisketchActionContext> __this_00;

		pSVar2 = this.label;
		id = String.Concat(this.id, "-label");
		AottgGameCreateScreen.FieldRowLabel(row, pSVar2, "text", id);
		pSVar2 = this.id;
		value = this.enabled;
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0_BuildTitanToggle_b__1);
			this.__9__1 = __this_00;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateScreen.FieldSwitch(row, pSVar2, value, __this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass50_0$$<BuildTitanToggle>b__1: clean
	private void c__DisplayClass50_0__BuildTitanToggle_b__1(GisketchActionContext context)
	{
		Action<bool> pSVar1;
		bool bVar2;

		pSVar1 = this.setEnabled;
		if (context.Node == null) {
			bVar2 = false;
		}
		else {
			bVar2 = (((context.Node).fields).value == "true");
		}
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,bVar2,pSVar1.method);
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.RefreshFrom(context);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass52_0$$<BuildSandboxSwitchById>b__0: 4 lines keep C-only constructs
	private void c__DisplayClass52_0__BuildSandboxSwitchById_b__0(AottgUi row)
	{
		bool value;
		uint uVar1;
		AottgSandboxField field;
		BoolSetting pSVar2;
		ulong in_RAX;
		String pSVar3;
		String id;
		GisketchNodeDefinition pGVar4;
		MethodInfo pMVar5;
		Action<GisketchActionContext> __this_00;
		ulong uStack_38;

		pMVar5 = (MethodInfo)row;
		uStack_38 = in_RAX;
		field = this.field;
		pSVar3 = AottgGameCreateScreen.SandboxFieldLabel(field);
		id = String.Concat(this.id, "-label");
		AottgGameCreateScreen.FieldRowLabel(row, pSVar3, "text", id);
		pSVar2 = this.boolSetting;
		if (pSVar2 != null) {
			pMVar5 = (MethodInfo)this.id;
			value = pSVar2._value;
			__this_00 = this.__9__1;
			if (__this_00 == null) {
				__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0_BuildSandboxSwitchById_b__1);
				this.__9__1 = __this_00;
				uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pGVar4 = AottgGameCreateScreen.FieldSwitch(row, (String)pMVar5, value, __this_00);
			pMVar5 = (MethodInfo)AottgGameCreateScreen.SandboxFieldLabel(this.field);
			if (pGVar4 != null) {
				pGVar4.formLabel = (String)pMVar5;
				pSVar3 = AottgGameCreateScreen.FieldTooltip(this.field);
				pGVar4.tooltip = pSVar3;
				uStack_38 = uStack_38 & 0xffffffffffff0000;
				uStack_38 = new Nullable<bool>(this.enabled);
				pGVar4.enabled = uStack_38._0_2_;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass52_0$$<BuildSandboxSwitchById>b__1: 2 lines keep C-only constructs
	private void c__DisplayClass52_0__BuildSandboxSwitchById_b__1(GisketchActionContext context)
	{
		int index;
		String value;
		bool bVar1;
		String* ppSVar2;

		index = this.index;
		if (context.Node != null) {
			ppSVar2 = &"true";
			bVar1 = (((context.Node).fields).value == "true");
			if (bVar1) goto label_05893048;
		}
		ppSVar2 = &"false";
	label_05893048: ;
		value = *ppSVar2;
		AottgGameCreateSession.ChangeSandboxField(index, value, null) ;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.RefreshFrom(context);
			return;
		}
		AottgGameCreateScreen.RefreshFrom(context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$<FieldSwitch>b__0: clean
	private void c__DisplayClass53_0__FieldSwitch_b__0(AottgUi slot)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;

		if (slot != null) {
			pGVar1 = slot.Switch(this.id, this.value, this.action);
			this.toggle = pGVar1;
			pGVar1 = this.toggle;
			width = AottgUi.Points(58.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass55_0$$<BuildSandboxFieldsByIds>b__0: clean
	private void c__DisplayClass55_0__BuildSandboxFieldsByIds_b__0(AottgUi column, int i)
	{
		List<AottgSandboxField> pSVar1;
		String id;
		int index;
		AottgSandboxField field;
		AottgSandboxField pGVar2;

		pSVar1 = this;
		if (pSVar1 != null) {
			field = pSVar1.get_Item(i);
			pSVar1 = this;
			if (pSVar1 != null) {
				pGVar2 = pSVar1.get_Item(i);
				if (pGVar2 != null) {
					id = pGVar2._Id_k__BackingField;
					index = AottgGameCreateScreen.SandboxFieldIndex(id);
					AottgGameCreateScreen.BuildSandboxField(column, field, index, this.enabled);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass56_0$$<BuildSandboxSwitchLine>b__0: clean
	private void c__DisplayClass56_0__BuildSandboxSwitchLine_b__0(AottgUi column, int __)
	{
		String fieldId;

		fieldId = this.fieldId;
		AottgGameCreateScreen.BuildSandboxSwitchById(column, fieldId, true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$<BuildFieldColumns>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass57_0__BuildFieldColumns_b__0(AottgUi columns)
	{
		String pSVar1;
		Action<AottgUi> pSVar2;
		String pSVar3;
		GisketchLayoutDefinition pGVar4;

		pSVar1 = "clear";
		pSVar2 = this.__9__1;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__1);
			this.__9__1 = pSVar2;
		}
		pSVar3 = String.Concat(this.id, "-left");
		pGVar4 = AottgGameCreateScreen.FieldColumnLayout();
		if (columns == null) {
			throw new NullReferenceException();
		}
		columns.Panel(pSVar1, pSVar2, pSVar3, pGVar4, null);
		pSVar1 = "clear";
		pSVar2 = this.__9__2;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__2);
			this.__9__2 = pSVar2;
		}
		pSVar3 = String.Concat(this.id, "-right");
		pGVar4 = AottgGameCreateScreen.FieldColumnLayout();
		columns.Panel(pSVar1, pSVar2, pSVar3, pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$<BuildFieldColumns>b__1: clean
	private void c__DisplayClass57_0__BuildFieldColumns_b__1(AottgUi column)
	{
		Action<AottgUi, int> pSVar1;
		int iVar2;

		if (0 < this.split) {
			iVar2 = 0;
			do {
				pSVar1 = this.build;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code,column,iVar2,pSVar1.method);
				iVar2 = iVar2 + 1;
			} while (iVar2 < this.split);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$<BuildFieldColumns>b__2: clean
	private void c__DisplayClass57_0__BuildFieldColumns_b__2(AottgUi column)
	{
		Action<AottgUi, int> pSVar1;
		int iVar2;

		iVar2 = this.split;
		if (iVar2 < this.count) {
			do {
				pSVar1 = this.build;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code,column,iVar2,pSVar1.method);
				iVar2 = iVar2 + 1;
			} while (iVar2 < this.count);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$<BuildMultiplayerRoom>b__1: 2 lines keep C-only constructs
	private void c__DisplayClass63_0__BuildMultiplayerRoom_b__1(AottgUi columns)
	{
		uint uVar1;
		String pSVar2;
		GisketchLayoutDefinition pGVar3;
		Action<AottgUi> pSVar4;
		Il2CppClass pIVar5;

		pSVar2 = "clear";
		pSVar4 = this.__9__2;
		if (pSVar4 == null) {
			pSVar4 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__2);
			this.__9__2 = pSVar4;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar5;
		if (uVar1 == 0) {
			pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		}
		else {
			pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		}
		if (columns == null) {
			throw new NullReferenceException();
		}
		columns.Panel(pSVar2, pSVar4, "game-create-room-left", pGVar3, null);
		pSVar2 = "clear";
		pSVar4 = this.__9__3;
		if (pSVar4 == null) {
			pSVar4 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__3);
			this.__9__3 = pSVar4;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar5;
		if (uVar1 == 0) {
		}
		pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		columns.Panel(pSVar2, pSVar4, "game-create-room-right", pGVar3, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$<BuildMultiplayerRoom>b__2: 8 lines keep C-only constructs
	private void c__DisplayClass63_0__BuildMultiplayerRoom_b__2(AottgUi column)
	{
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		AottgSandboxField pGVar6;
		MethodInfo pMVar7;
		ulong uVar8;
		long lVar9;
		uint index;

		if (0 < this.split) {
			index = 0;
			do {
				pIVar1 = (object)this;
				if (pIVar1 == null) goto label_05893c5a;
				pIVar2 = pIVar1.klass;
				uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar9 = 0;
					do {
						if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyList<AottgSandboxField>)) {
							pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
							goto label_05893b63;
						}
						lVar9 = lVar9 + 0x10;
					} while (uVar8 * 0x10 != lVar9);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_05893b63: ;
				pMVar7 = (MethodInfo)(ulong)index;
				pGVar6 = (AottgSandboxField)(*pVVar5.methodPtr)(pIVar1,index,pVVar5.method) ;
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					bVar4 = AottgGameCreateScreen.ShowRoomField(pGVar6);
					if (bVar4) goto label_05893bb5;
				}
				else {
					bVar4 = AottgGameCreateScreen.ShowRoomField(pGVar6);
					if (bVar4) {
	label_05893bb5: ;
						pIVar1 = (object)this;
						if (pIVar1 == null) {
	label_05893c5a: ;
							throw new NullReferenceException();
						}
						pIVar2 = pIVar1.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar9 = 0;
							do {
								if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyList<AottgSandboxField>)) {
									pMVar7 = (MethodInfo)(pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9));
									goto label_05893c21;
								}
								lVar9 = lVar9 + 0x10;
							} while (uVar8 * 0x10 != lVar9);
						}
						pMVar7 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_05893c21: ;
						pGVar6 = (AottgSandboxField)(*pMVar7.methodPointer)(pIVar1,index,(MethodInfo)pMVar7.virtualMethodPointer);
						AottgGameCreateScreen.BuildRoomField(column, pGVar6, index);
					}
				}
				index = index + 1;
			} while ((int)index < this.split);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$<BuildMultiplayerRoom>b__3: 12 lines keep C-only constructs
	private void c__DisplayClass63_0__BuildMultiplayerRoom_b__3(AottgUi column)
	{
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		int iVar4;
		VirtualInvokeData pVVar5;
		AottgSandboxField pGVar6;
		MethodInfo pMVar7;
		ulong uVar8;
		object pIVar9;
		uint index;
		long lVar10;

		pIVar9 = (object)this;
		if (pIVar9 != null) {
			index = this.split;
			do {
				pIVar1 = pIVar9.klass;
				uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar10 = 0;
					do {
						if (*(IReadOnlyCollection<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyCollection<AottgSandboxField>)) {
							pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
							goto label_05893d43;
						}
						lVar10 = lVar10 + 0x10;
					} while (uVar8 * 0x10 != lVar10);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_05893d43: ;
				iVar4 = (*pVVar5.methodPtr)(pIVar9,pVVar5.method);
				if (iVar4 <= (int)index) {
					return;
				}
				pIVar9 = (object)this;
				if (pIVar9 == null) break;
				pIVar1 = pIVar9.klass;
				uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar10 = 0;
					do {
						if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyList<AottgSandboxField>)) {
							pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
							goto label_05893dc3;
						}
						lVar10 = lVar10 + 0x10;
					} while (uVar8 * 0x10 != lVar10);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_05893dc3: ;
				pMVar7 = (MethodInfo)(ulong)index;
				pGVar6 = (AottgSandboxField)(*pVVar5.methodPtr)(pIVar9,index,pVVar5.method) ;
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = AottgGameCreateScreen.ShowRoomField(pGVar6);
					if (bVar3) goto label_05893e05;
				}
				else {
					bVar3 = AottgGameCreateScreen.ShowRoomField(pGVar6);
					if (bVar3) {
	label_05893e05: ;
						pIVar9 = (object)this;
						if (pIVar9 == null) break;
						pIVar1 = pIVar9.klass;
						uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar2 = (pIVar1._1).interfaceOffsets;
							lVar10 = 0;
							do {
								if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyList<AottgSandboxField>)) {
									pMVar7 = (MethodInfo)(pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10));
									goto label_05893e71;
								}
								lVar10 = lVar10 + 0x10;
							} while (uVar8 * 0x10 != lVar10);
						}
						pMVar7 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_05893e71: ;
						pGVar6 = (AottgSandboxField)(*pMVar7.methodPointer)(pIVar9,index,(MethodInfo)pMVar7.virtualMethodPointer);
						AottgGameCreateScreen.BuildRoomField(column, pGVar6, index);
					}
				}
				index = index + 1;
				pIVar9 = (object)this;
			} while (pIVar9 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass66_0$$<BuildRoomField>b__0: 7 lines keep C-only constructs
	private void c__DisplayClass66_0__BuildRoomField_b__0(AottgUi row)
	{
		byte bVar1;
		byte bVar2;
		int iVar3;
		AottgSandboxField pGVar4;
		BaseSetting pSVar5;
		BaseSetting pSVar6;
		bool bVar7;
		String id;
		String* ppSVar8;
		GisketchNodeDefinition pGVar9;
		GisketchChoiceOptionDefinition[] pGVar10;
		String pSVar11;
		GisketchLayoutDefinition pGVar12;
		int type;
		String[] options;
		MethodInfo pMVar13;
		Nullable<bool>[] aSStack_38 = new Nullable<bool>[4];

		pGVar4 = this.field;
		if (pGVar4 == null) goto label_0589443a;
		pSVar11 = pGVar4._Label_k__BackingField;
		id = String.Concat(this.id, "-label");
		AottgGameCreateScreen.FieldRowLabel(row, pSVar11, "text", id);
		pGVar4 = this.field;
		if (pGVar4 == null) goto label_0589443a;
		bVar7 = (pGVar4._Id_k__BackingField == "misc.VoiceChat");
		if (bVar7) {
			pGVar4 = this.field;
			if ((pGVar4 == null) ||(pSVar5 = pGVar4._Setting_k__BackingField, pSVar5 == null)) goto label_0589443a;
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((pSVar5.klass._2).typeHierarchyDepth < bVar1) ||((pSVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) {
				throw new InvalidCastException();
			}
			pSVar11 = this.id;
			iVar3 = *(int)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 4);
			if (row == null) goto label_0589443a;
			if (iVar3 == 1) {
				ppSVar8 = &"Proximity";
				options = AottgGameCreateScreen.VoiceChatValues;
			}
			else {
				ppSVar8 = &"None";
				options = AottgGameCreateScreen.VoiceChatValues;
				if (iVar3 == 0) {
					ppSVar8 = &"Global";
				}
			}
			pGVar9 = row.Dropdown(pSVar11, *ppSVar8, options, null, 8);
			pGVar10 = AottgGameCreateScreen.VoiceChatChoices();
			if (pGVar9 == null) goto label_0589443a;
			pGVar9.choiceOptions = pGVar10;
	label_058942f4: ;
			ppSVar8 = &pGVar9.action;
			pGVar9.action = "gameCreate.room.change.field";
		}
		else {
			pGVar4 = this.field;
			if (pGVar4 == null) goto label_0589443a;
			pSVar5 = pGVar4._Setting_k__BackingField;
			if (pSVar5 != null) {
				bVar1 = (typeof(BoolSetting)._2).typeHierarchyDepth;
				if ((bVar1 <= (pSVar5.klass._2).typeHierarchyDepth) &&((pSVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BoolSetting)) ) {
					if ((row == null) ||(pGVar9 = row.Checkbox(this.id, (String)**(ulong*)(g_data_07556758 + 0xb8), *(bool)((long)&(*(ulong)((sbyte)pSVar5 + 0x18)) + 1), null, null, null), pGVar9 == null)) goto label_0589443a;
					goto label_058942f4;
				}
			}
			bVar7 = (pGVar4._Id_k__BackingField == "general.Password");
			type = 3;
			if (!bVar7) {
				pGVar4 = this.field;
				if (pGVar4 == null) goto label_0589443a;
				pSVar5 = pGVar4._Setting_k__BackingField;
				type = 2;
				if (pSVar5 != null) {
					pSVar6 = pSVar5.klass;
					bVar1 = (pSVar6._2).typeHierarchyDepth;
					bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
						bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
						if (bVar2 <= bVar1) {
							type = 2 - (uint)((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(IntSetting));
						}
					}
					else {
						type = 0;
					}
				}
			}
			if (row == null) goto label_0589443a;
			pGVar9 = row.InputField(this.id, (String)**(ulong*)(g_data_07556758 + 0xb8), type, "inputField", null, null, null, 0.2, 0, null);
			aSStack_38[0].hasValue = false;
			aSStack_38[0].value = false;
			pMVar13 = null;
			aSStack_38 = new Nullable<bool>(false);
			if (pGVar9 == null) goto label_0589443a;
			pGVar9.richText = aSStack_38[0];
			pGVar4 = this.field;
			pSVar11 = AottgGameCreateScreen.SandboxFieldValue(pGVar4);
			pGVar9.value = pSVar11;
			pGVar9.action = "gameCreate.room.change.field";
			ppSVar8 = &pGVar9.commitAction;
			pGVar9.commitAction = "gameCreate.room.change.field";
		}
		pGVar4 = this.field;
		if (pGVar4 != null) {
			pMVar13 = (MethodInfo)pGVar4._Label_k__BackingField;
			pGVar9.formLabel = (String)pMVar13;
			pGVar4 = this.field;
			pSVar11 = AottgGameCreateScreen.FieldTooltip(pGVar4);
			pGVar9.tooltip = pSVar11;
			pMVar13 = (MethodInfo *)"Checkbox";
			bVar7 = (pGVar9.type == "Checkbox");
			pGVar12 = AottgGameCreateScreen.FieldControlLayout(bVar7);
			pGVar9.layout = pGVar12;
			return;
		}
	label_0589443a: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass72_0$$<ChoiceOptions>b__0: clean
	private GisketchChoiceOptionDefinition c__DisplayClass72_0__ChoiceOptions_b__0(String value, int index)
	{
		String[] pSVar1;
		GisketchChoiceOptionDefinition __this_00;

		__this_00 = new GisketchChoiceOptionDefinition();
		if (__this_00 != null) {
			__this_00.value = value;
			pSVar1 = this.labels;
			if (pSVar1 != null) {
				if ((uint)pSVar1.Length <= (uint)index) {
					throw new IndexOutOfRangeException();
				}
				__this_00.text = pSVar1[index];
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$<BuildLockedFieldColumns>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass78_0__BuildLockedFieldColumns_b__0(AottgUi columns)
	{
		uint uVar1;
		String pSVar2;
		GisketchLayoutDefinition pGVar3;
		Action<AottgUi> pSVar4;
		Il2CppClass pIVar5;

		pSVar2 = "clear";
		pSVar4 = this.__9__1;
		if (pSVar4 == null) {
			pSVar4 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__1);
			this.__9__1 = pSVar4;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar5;
		if (uVar1 == 0) {
			pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		}
		else {
			pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		}
		if (columns == null) {
			throw new NullReferenceException();
		}
		columns.Panel(pSVar2, pSVar4, "game-create-locked-fields-left", pGVar3, null);
		pSVar2 = "clear";
		pSVar4 = this.__9__2;
		if (pSVar4 == null) {
			pSVar4 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__2);
			this.__9__2 = pSVar4;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar5;
		if (uVar1 == 0) {
		}
		pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		columns.Panel(pSVar2, pSVar4, "game-create-locked-fields-right", pGVar3, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$<BuildLockedFieldColumns>b__1: 4 lines keep C-only constructs
	private void c__DisplayClass78_0__BuildLockedFieldColumns_b__1(AottgUi column)
	{
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		MethodInfo method_00;
		ExperienceRuleField field;
		ulong uVar3;
		long lVar4;
		int index;

		if (0 < this.split) {
			index = 0;
			do {
				obj = (object)this;
				if (obj == null) {
					throw new NullReferenceException();
				}
				pIVar1 = obj.klass;
				uVar3 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar3 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar4 = 0;
					do {
						if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar2.interfaceType + lVar4) == typeof(IReadOnlyList<ExperienceRuleField>)) {
							method_00 = (MethodInfo)(pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar4));
							goto label_058947e3;
						}
						lVar4 = lVar4 + 0x10;
					} while (uVar3 * 0x10 != lVar4);
				}
				method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_058947e3: ;
				field = (ExperienceRuleField)(*method_00.methodPointer)(obj,index,(MethodInfo)method_00.virtualMethodPointer);
				AottgGameCreateScreen.BuildLockedField(column, field, index);
				index = index + 1;
			} while (index < this.split);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$<BuildLockedFieldColumns>b__2: 8 lines keep C-only constructs
	private void c__DisplayClass78_0__BuildLockedFieldColumns_b__2(AottgUi column)
	{
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		VirtualInvokeData pVVar4;
		MethodInfo method_00;
		ExperienceRuleField field;
		ulong uVar5;
		object pIVar6;
		int index;
		long lVar7;

		pIVar6 = (object)this;
		if (pIVar6 != null) {
			index = this.split;
			do {
				pIVar1 = pIVar6.klass;
				uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar5 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar7 = 0;
					do {
						if (*(IReadOnlyCollection<ExperienceRuleField>*)((long)&pIVar2.interfaceType + lVar7) == typeof(IReadOnlyCollection<ExperienceRuleField>)) {
							pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7);
							goto label_05894913;
						}
						lVar7 = lVar7 + 0x10;
					} while (uVar5 * 0x10 != lVar7);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IReadOnlyCollection<ExperienceRuleField>), 0);
	label_05894913: ;
				iVar3 = (*pVVar4.methodPtr)(pIVar6,pVVar4.method);
				if (iVar3 <= index) {
					return;
				}
				pIVar6 = (object)this;
				if (pIVar6 == null) break;
				pIVar1 = pIVar6.klass;
				uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar5 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar7 = 0;
					do {
						if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar2.interfaceType + lVar7) == typeof(IReadOnlyList<ExperienceRuleField>)) {
							method_00 = (MethodInfo)(pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7));
							goto label_05894993;
						}
						lVar7 = lVar7 + 0x10;
					} while (uVar5 * 0x10 != lVar7);
				}
				method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_05894993: ;
				field = (ExperienceRuleField)(*method_00.methodPointer)(pIVar6,index,(MethodInfo)method_00.virtualMethodPointer);
				AottgGameCreateScreen.BuildLockedField(column, field, index);
				index = index + 1;
				pIVar6 = (object)this;
			} while (pIVar6 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass79_0$$<BuildLockedField>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass79_0__BuildLockedField_b__0(AottgUi row)
	{
		byte bVar1;
		byte bVar2;
		ExperienceRuleField pSVar3;
		BaseSetting pSVar4;
		BaseSetting pSVar5;
		bool leftAligned;
		String pSVar6;
		String id;
		GisketchNodeDefinition pGVar7;
		MethodInfo pMVar8;
		GisketchLayoutDefinition pGVar9;
		int type;
		Nullable<bool>[] aSStack_38 = new Nullable<bool>[4];

		pMVar8 = (MethodInfo)row;
		pSVar3 = this.field;
		if (pSVar3 == null) goto label_05894dc5;
		pSVar6 = pSVar3.Id;
		pSVar6 = AottgGameCreateSession.FieldLabel(pSVar6);
		id = String.Concat(this.id, "-label");
		AottgGameCreateScreen.FieldRowLabel(row, pSVar6, "subtext", id);
		pSVar3 = this.field;
		if (pSVar3 == null) goto label_05894dc5;
		pSVar4 = pSVar3.Setting;
		if (pSVar4 == null) {
			pMVar8 = (MethodInfo)this.id;
			pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			type = 2;
	label_05894be6: ;
			if (row == null) goto label_05894dc5;
			pGVar7 = row.InputField((String)pMVar8, pSVar6, type, "inputField", null, null, null, 0.2, 0, null);
			pSVar3 = this.field;
			pSVar6 = AottgGameCreateScreen.FieldValue(pSVar3);
			if (pGVar7 == null) goto label_05894dc5;
			pGVar7.value = pSVar6;
		}
		else {
			pSVar5 = pSVar4.klass;
			bVar1 = (pSVar5._2).typeHierarchyDepth;
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
				pMVar8 = (MethodInfo)this.id;
				pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||(type = 0,(pSVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
					bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
					type = 2;
					if (bVar1 <= (pSVar4.klass._2).typeHierarchyDepth) {
						type = 2 - (uint)((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(IntSetting));
					}
				}
				goto label_05894be6;
			}
			if (row == null) goto label_05894dc5;
			pGVar7 = row.Checkbox(this.id, (String)**(ulong*)(g_data_07556758 + 0xb8), *(bool)((long)&(*(ulong)((sbyte)pSVar4 + 0x18)) + 1), null, null, null);
		}
		aSStack_38[0].hasValue = false;
		aSStack_38[0].value = false;
		pMVar8 = null;
		aSStack_38 = new Nullable<bool>(false);
		if (pGVar7 != null) {
			pGVar7.enabled = aSStack_38[0];
			pSVar3 = this.field;
			if (pSVar3 != null) {
				pSVar6 = pSVar3.Id;
				pMVar8 = (MethodInfo)AottgGameCreateSession.FieldLabel(pSVar6);
				pGVar7.formLabel = (String)pMVar8;
				pSVar3 = this.field;
				pSVar6 = AottgGameCreateScreen.LockedFieldTooltip(pSVar3);
				pGVar7.tooltip = pSVar6;
				pMVar8 = (MethodInfo *)"Checkbox";
				leftAligned = (pGVar7.type == "Checkbox");
				pGVar9 = AottgGameCreateScreen.FieldControlLayout(leftAligned);
				pGVar7.layout = pGVar9;
				return;
			}
		}
	label_05894dc5: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_0$$<BuildExperienceFields>b__0: 5 lines keep C-only constructs
	private void c__DisplayClass81_0__BuildExperienceFields_b__0(AottgUi corePanel)
	{
		uint uVar1;
		List<ExperienceRuleField> fields;
		SandboxGameCreateConfiguration pSVar2;
		AottgGameCreateScreen.c__DisplayClass81_1 __this_00;
		ExperienceRuleField pSVar3;
		Action<AottgUi> pSVar4;
		GisketchLength pGVar5;
		GisketchLayoutDefinition pGVar6;
		String pSVar7;
		GisketchLength minWidth;
		GisketchLength maxWidth;
		GisketchLength height;
		GisketchLayoutDefinition contentLayout;
		MethodInfo pMVar8;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateScreen.c__DisplayClass81_1));
		__this_00 = new Object();
		if (__this_00 == null) goto label_05895395;
		__this_00.CS___8__locals1 = this;
		fields = this.core;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar3 = AottgGameCreateScreen.FindField((IReadOnlyList<ExperienceRuleField>)fields, "general.MapName");
		__this_00.map = pSVar3;
		pSVar3 = AottgGameCreateScreen.FindField((IReadOnlyList<ExperienceRuleField>)this.core, "general.GameMode");
		__this_00.mode = pSVar3;
		pSVar4 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__1);
		pGVar5 = AottgUi.Points(330.0);
		pGVar6 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, pGVar5, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (corePanel == null) goto label_05895395;
		corePanel.Panel("clear", pSVar4, "game-create-core-map", pGVar6, null);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545263 != false) goto label_0589505f;
	label_05895365: ;
			g_data_07545263 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07545263 == false) goto label_05895365;
	label_0589505f: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = AottgGameCreateSession.SandboxConfiguration;
		if (pSVar2 != null) {
			pMVar8 = (MethodInfo)&__this_00.mapDescription;
			__this_00.mapDescription = pSVar2._MapDescription_k__BackingField;
			pSVar7 = AottgGameCreateSession.ModeDescription;
			__this_00.modeDescription = pSVar7;
			pSVar4 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__2);
			pGVar5 = AottgUi.Points(200.0);
			minWidth = AottgUi.Points(200.0);
			maxWidth = AottgUi.Percent(100.0);
			height = AottgUi.Points(330.0);
			pGVar6 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, pGVar5, height, minWidth, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			pGVar5 = AottgUi.Percent(100.0);
			contentLayout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, pGVar5, null, null, null, null, null, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			corePanel.ScrollView("default", pSVar4, "game-create-core-descriptions", pGVar6, contentLayout, null);
			pSVar4 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__3);
			pGVar5 = AottgUi.Points(330.0);
			pGVar6 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, pGVar5, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			corePanel.Panel("clear", pSVar4, "game-create-core-controls", pGVar6, null);
			return;
		}
	label_05895395: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$.ctor: clean
	private void c__DisplayClass81_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$<BuildExperienceFields>b__1: 4 lines keep C-only constructs
	private void c__DisplayClass81_1__BuildExperienceFields_b__1(AottgUi mapColumn)
	{
		uint uVar1;
		uint uVar2;
		ExperienceRuleField field;
		ExperienceRuleField[] pSVar3;
		uint index;
		uint uVar4;
		Il2CppClass klass;

		field = this.map;
		if (field == null) {
			return;
		}
		if (this.CS___8__locals1 ==null) goto label_0589567b;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075451e7 == false) goto label_05895646;
	label_058955e7: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if (Il2CppMethodInitialized_075451e7 != false) goto label_058955e7;
	label_05895646: ;
			Il2CppMethodInitialized_075451e7 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (uVar1 == 0) {
			pSVar3 = AottgGameCreateSession.VisibleFields();
		}
		else {
			pSVar3 = AottgGameCreateSession.VisibleFields();
		}
		if (pSVar3 != null) {
			uVar2 = (uint)pSVar3.Length;
			index = 0xffffffff;
			if (0 < (int)uVar2) {
				uVar4 = 0;
				do {
					if (pSVar3[(int)uVar4] == field) {
						index = uVar4;
						break;
					}
					uVar4 = uVar4 + 1;
				} while (uVar2 != uVar4);
			}
			AottgGameCreateScreen.BuildField(mapColumn, field, index) ;
			return;
		}
	label_0589567b: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$<BuildExperienceFields>b__2: clean
	private void c__DisplayClass81_1__BuildExperienceFields_b__2(AottgUi descriptions)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;
		GisketchLength height;

		if (descriptions != null) {
			descriptions.TextKey("GameCreate.Map.Description", "text", "game-create-map-description-label", null, null);
			pGVar1 = descriptions.Text(this.mapDescription, "text", "game-create-map-description", null, null);
			pGVar2 = AottgUi.Percent(100.0);
			pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar3;
				descriptions.TextKey("GameCreate.Mode.Description", "text", "game-create-mode-description-label", null, null);
				pGVar1 = descriptions.Text(this.modeDescription, "text", "game-create-mode-description", null, null);
				pGVar2 = AottgUi.Percent(100.0);
				pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (pGVar1 != null) {
					pGVar1.layout = pGVar3;
					pGVar1 = new GisketchNodeDefinition();
					if (pGVar1 != null) {
						pGVar1.type = "GameCreateDescriptionScrollLayout";
						pGVar1.id = "game-create-description-scroll-layout";
						pGVar2 = AottgUi.Points(0.0);
						height = AottgUi.Points(0.0);
						pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						pGVar1.layout = pGVar3;
						descriptions.Add(pGVar1);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$<BuildExperienceFields>b__3: 7 lines keep C-only constructs
	private void c__DisplayClass81_1__BuildExperienceFields_b__3(AottgUi controls)
	{
		uint uVar1;
		AottgGameCreateScreen.c__DisplayClass81_0 pGVar2;
		List<ExperienceRuleField> __this_00;
		object field;
		bool bVar3;
		ExperienceRuleField[] pSVar4;
		uint uVar5;
		uint uVar6;
		MethodInfo field_00;
		byte[] auStack_60 = new byte[16];
		ExperienceRuleField pSStack_50;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		AottgGameCreateScreen.BuildExperienceScore(controls);
		field_00 = (MethodInfo)this.mode;
		if (field_00 != null) {
			if (this.CS___8__locals1 ==null) goto label_05895d26;
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_075451e7 == false) goto label_05895b54;
	label_05895b24: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05895b37;
	label_05895b7a: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar4 = AottgGameCreateSession.VisibleFields();
			}
			else {
				if (Il2CppMethodInitialized_075451e7 != false) goto label_05895b24;
	label_05895b54: ;
				Il2CppMethodInitialized_075451e7 = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05895b7a;
	label_05895b37: ;
				pSVar4 = AottgGameCreateSession.VisibleFields();
			}
			if (pSVar4 == null) goto label_05895d26;
			uVar1 = (uint)pSVar4.Length;
			uVar5 = 0xffffffff;
			if (0 < (int)uVar1) {
				uVar6 = 0;
				do {
					if ((MethodInfo)pSVar4[(int)uVar6] == field_00) {
						uVar5 = uVar6;
						break;
					}
					uVar6 = uVar6 + 1;
				} while (uVar1 != uVar6);
			}
			AottgGameCreateScreen.BuildExperienceModeField(controls, (ExperienceRuleField)field_00, uVar5);
		}
		AottgGameCreateScreen.BuildVariantSelector(controls);
		pGVar2 = this.CS___8__locals1;
		if ((pGVar2 != null) &&(__this_00 = pGVar2.core, __this_00 != null)) {
			auStack_60.GetEnumerator((List<object>)__this_00);
			SStack_48._current = (object)pSStack_50;
			SStack_48._list = (List<T>)auStack_60._0_8_;
			SStack_48._index = auStack_60._8_4_;
			SStack_48._version = auStack_60._12_4_;
			auStack_60._0_8_ = null;
			auStack_60._8_8_ = &SStack_48;
			do {
				do {
					bVar3 = SStack_48.MoveNext() ;
					field = SStack_48._current;
					if (!bVar3) {
						SStack_48.Dispose();
						return;
					}
				} while (((ExperienceRuleField)SStack_48._current == this.map) ||((ExperienceRuleField)SStack_48._current == this.mode));
				if (this.CS___8__locals1 ==null) {
					throw new NullReferenceException();
				}
				pSVar4 = AottgGameCreateSession.VisibleFields();
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				uVar1 = (uint)pSVar4.Length;
				uVar5 = 0xffffffff;
				if (0 < (int)uVar1) {
					uVar6 = 0;
					do {
						uVar5 = uVar6;
						if (pSVar4[(int)uVar6] == (ExperienceRuleField)field) break;
						uVar6 = uVar6 + 1;
						uVar5 = 0xffffffff;
					} while (uVar1 != uVar6);
				}
				AottgGameCreateScreen.BuildField(controls, (ExperienceRuleField)field, uVar5);
			} while(true);
		}
	label_05895d26: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass84_0$$<BuildVariantSelector>b__0: 9 lines keep C-only constructs
	private void c__DisplayClass84_0__BuildVariantSelector_b__0(AottgUi row)
	{
		ulong puVar1;
		String[] values;
		object @object;
		String id;
		bool leftAligned;
		Func<@object, @object> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		String[] labels;
		GisketchChoiceOptionDefinition[] options;
		Action<GisketchActionContext> __this_01;
		GisketchNodeDefinition pGVar2;
		String pSVar3;
		GisketchLayoutDefinition pGVar4;
		MethodInfo pMVar5;
		Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields pGVar6;
		GisketchLayoutDefinition* ppGVar7;

		if (row != null) {
			row.TextKey("GameCreate.Configuration.Variants", "text", "game-create-variants-label", null, null);
			pSVar3 = this.selected;
			values = this.variants;
			__this_00 = new Func<string, string>(null, (intptr_t)MethodInfo_UI_ContentLocale_ExperienceVariant);
			source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)values, (System_Func_TSource__TResult__o)__this_00);
			labels = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			}
			options = AottgGameCreateScreen.ChoiceOptions(values, labels);
			id = "game-create-variants";
			pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
			__this_01 = pGVar6.__9__84_1;
			if (__this_01 == null) {
				if ((typeof(AottgGameCreateScreen.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
				}
				@object = (object)pGVar6.__9;
				__this_01 = new Action<GisketchActionContext>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildVariantSelector_b__84_1);
				pGVar6 = typeof(AottgGameCreateScreen.c).static_fields;
				pGVar6.__9__84_1 = __this_01;
			}
			pGVar2 = row.Dropdown(id, pSVar3, options, __this_01, null, 8);
			pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Configuration.Variants");
			if (pGVar2 != null) {
				pGVar2.formLabel = pSVar3;
				pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Configuration.Variants.Tooltip");
				pGVar2.tooltip = pSVar3;
				pMVar5 = (MethodInfo *)"Checkbox";
				leftAligned = (pGVar2.type == "Checkbox");
				pGVar4 = AottgGameCreateScreen.FieldControlLayout(leftAligned);
				ppGVar7 = &pGVar2.layout;
				pGVar2.layout = pGVar4;
				if (g_data_07769410 != 0) {
					LOCK();
					puVar1 = (ulong)((long)&g_data_0759d3f0 + (ulong)((uint)((ulong)ppGVar7 >> 0xf) & 0x3fff8));
					*puVar1 = *puVar1 | 1L << ((byte)((ulong)ppGVar7 >> 0xc) & 0x3f);
					UNLOCK();
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_0$$<BuildExperienceSections>b__0: 1 lines keep C-only constructs
	private bool c__DisplayClass86_0__BuildExperienceSections_b__0(ExperienceRuleField field)
	{
		HashSet<object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_07545241 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07545241 = true;
		}
		if ((field == null) ||(__this_00 = (HashSet<object>)this.assigned, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Contains((object)field.Id);
		return !bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_1$$<BuildExperienceSections>b__1: 1 lines keep C-only constructs
	private bool c__DisplayClass86_1__BuildExperienceSections_b__1(ExperienceRuleField field)
	{
		uint uVar1;
		ExperienceUISection pSVar2;
		List<string> source;
		String value;
		bool bVar3;

		pSVar2 = this.section;
		if ((pSVar2 == null) || (field == null)) {
			throw new NullReferenceException();
		}
		source = pSVar2.Settings;
		value = field.Id;
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (object)value, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		return bVar3;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$<BuildFieldColumns>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass88_0__BuildFieldColumns_b__0(AottgUi columns)
	{
		String pSVar1;
		Action<AottgUi> pSVar2;
		String pSVar3;
		GisketchLayoutDefinition pGVar4;

		pSVar1 = "clear";
		pSVar2 = this.__9__1;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__1);
			this.__9__1 = pSVar2;
		}
		pSVar3 = String.Concat(this.id, "-left");
		pGVar4 = AottgGameCreateScreen.FieldColumnLayout();
		if (columns == null) {
			throw new NullReferenceException();
		}
		columns.Panel(pSVar1, pSVar2, pSVar3, pGVar4, null);
		pSVar1 = "clear";
		pSVar2 = this.__9__2;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__2);
			this.__9__2 = pSVar2;
		}
		pSVar3 = String.Concat(this.id, "-right");
		pGVar4 = AottgGameCreateScreen.FieldColumnLayout();
		columns.Panel(pSVar1, pSVar2, pSVar3, pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$<BuildFieldColumns>b__1: 8 lines keep C-only constructs
	private void c__DisplayClass88_0__BuildFieldColumns_b__1(AottgUi column)
	{
		uint uVar1;
		object pIVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		VirtualInvokeData pVVar5;
		ExperienceRuleField field;
		ExperienceRuleField pSVar6;
		ExperienceRuleField[] pSVar7;
		ulong uVar8;
		uint index;
		int iVar9;
		uint uVar10;
		long lVar11;

		if (0 < this.split) {
			iVar9 = 0;
			do {
				pIVar2 = (object)this;
				if (pIVar2 == null) goto label_05896658;
				pIVar3 = pIVar2.klass;
				uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar11 = 0;
					do {
						if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar4.interfaceType + lVar11) == typeof(IReadOnlyList<ExperienceRuleField>)) {
							pVVar5 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar11);
							goto label_05896513;
						}
						lVar11 = lVar11 + 0x10;
					} while (uVar8 * 0x10 != lVar11);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_05896513: ;
				field = (ExperienceRuleField)(*pVVar5.methodPtr)(pIVar2,iVar9,pVVar5.method);
				pIVar2 = (object)this;
				if (pIVar2 == null) goto label_05896658;
				pIVar3 = pIVar2.klass;
				uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar11 = 0;
					do {
						if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar4.interfaceType + lVar11) == typeof(IReadOnlyList<ExperienceRuleField>)) {
							pVVar5 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar11);
							goto label_05896583;
						}
						lVar11 = lVar11 + 0x10;
					} while (uVar8 * 0x10 != lVar11);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_05896583: ;
				pSVar6 = (ExperienceRuleField)(*pVVar5.methodPtr)(pIVar2,iVar9,pVVar5.method);
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075451e7 == false) goto label_058965de;
	label_058965ad: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058965c0;
	label_05896604: ;
					pSVar7 = AottgGameCreateSession.VisibleFields();
				}
				else {
					if (Il2CppMethodInitialized_075451e7 != false) goto label_058965ad;
	label_058965de: ;
					Il2CppMethodInitialized_075451e7 = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05896604;
	label_058965c0: ;
					pSVar7 = AottgGameCreateSession.VisibleFields();
				}
				if (pSVar7 == null) {
	label_05896658: ;
					throw new NullReferenceException();
				}
				uVar1 = (uint)pSVar7.Length;
				index = 0xffffffff;
				if (0 < (int)uVar1) {
					uVar10 = 0;
					do {
						index = uVar10;
						if (pSVar7[(int)uVar10] == pSVar6) break;
						uVar10 = uVar10 + 1;
						index = 0xffffffff;
					} while (uVar1 != uVar10);
				}
				AottgGameCreateScreen.BuildField(column, field, index);
				iVar9 = iVar9 + 1;
			} while (iVar9 < this.split);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$<BuildFieldColumns>b__2: 12 lines keep C-only constructs
	private void c__DisplayClass88_0__BuildFieldColumns_b__2(AottgUi column)
	{
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		int iVar4;
		VirtualInvokeData pVVar5;
		ExperienceRuleField field;
		ExperienceRuleField pSVar6;
		ExperienceRuleField[] pSVar7;
		ulong uVar8;
		uint index;
		object pIVar9;
		int iVar10;
		uint uVar11;
		long lVar12;

		pIVar9 = (object)this;
		if (pIVar9 != null) {
			iVar10 = this.split;
			do {
				pIVar2 = pIVar9.klass;
				uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IReadOnlyCollection<ExperienceRuleField>*)((long)&pIVar3.interfaceType + lVar12) == typeof(IReadOnlyCollection<ExperienceRuleField>)) {
							pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar12);
							goto label_05896753;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar8 * 0x10 != lVar12);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyCollection<ExperienceRuleField>), 0);
	label_05896753: ;
				iVar4 = (*pVVar5.methodPtr)(pIVar9,pVVar5.method);
				if (iVar4 <= iVar10) {
					return;
				}
				pIVar9 = (object)this;
				if (pIVar9 == null) break;
				pIVar2 = pIVar9.klass;
				uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar3.interfaceType + lVar12) == typeof(IReadOnlyList<ExperienceRuleField>)) {
							pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar12);
							goto label_058967d3;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar8 * 0x10 != lVar12);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_058967d3: ;
				field = (ExperienceRuleField)(*pVVar5.methodPtr)(pIVar9,iVar10,pVVar5.method);
				pIVar9 = (object)this;
				if (pIVar9 == null) break;
				pIVar2 = pIVar9.klass;
				uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IReadOnlyList<ExperienceRuleField>*)((long)&pIVar3.interfaceType + lVar12) == typeof(IReadOnlyList<ExperienceRuleField>)) {
							pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar12);
							goto label_05896843;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar8 * 0x10 != lVar12);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyList<ExperienceRuleField>), 0);
	label_05896843: ;
				pSVar6 = (ExperienceRuleField)(*pVVar5.methodPtr)(pIVar9,iVar10,pVVar5.method);
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075451e7 == false) goto label_0589689e;
	label_0589686d: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05896880;
	label_058968c4: ;
					pSVar7 = AottgGameCreateSession.VisibleFields();
				}
				else {
					if (Il2CppMethodInitialized_075451e7 != false) goto label_0589686d;
	label_0589689e: ;
					Il2CppMethodInitialized_075451e7 = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058968c4;
	label_05896880: ;
					pSVar7 = AottgGameCreateSession.VisibleFields();
				}
				if (pSVar7 == null) break;
				uVar1 = (uint)pSVar7.Length;
				index = 0xffffffff;
				if (0 < (int)uVar1) {
					uVar11 = 0;
					do {
						index = uVar11;
						if (pSVar7[(int)uVar11] == pSVar6) break;
						uVar11 = uVar11 + 1;
						index = 0xffffffff;
					} while (uVar1 != uVar11);
				}
				AottgGameCreateScreen.BuildField(column, field, index);
				iVar10 = iVar10 + 1;
				pIVar9 = (object)this;
			} while (pIVar9 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$<BuildSandboxFieldColumns>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass91_0__BuildSandboxFieldColumns_b__0(AottgUi columns)
	{
		uint uVar1;
		String pSVar2;
		GisketchLayoutDefinition pGVar3;
		Action<AottgUi> pSVar4;
		Il2CppClass pIVar5;

		pSVar2 = "clear";
		pSVar4 = this.__9__1;
		if (pSVar4 == null) {
			pSVar4 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__1);
			this.__9__1 = pSVar4;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar5;
		if (uVar1 == 0) {
			pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		}
		else {
			pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		}
		if (columns == null) {
			throw new NullReferenceException();
		}
		columns.Panel(pSVar2, pSVar4, "game-create-sandbox-fields-left", pGVar3, null);
		pSVar2 = "clear";
		pSVar4 = this.__9__2;
		if (pSVar4 == null) {
			pSVar4 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__2);
			this.__9__2 = pSVar4;
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		else {
			uVar1 = (typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(AottgGameCreateScreen);
		}
		typeof(AottgGameCreateScreen) =(AottgGameCreateScreen)pIVar5;
		if (uVar1 == 0) {
		}
		pGVar3 = AottgGameCreateScreen.FieldColumnLayout();
		columns.Panel(pSVar2, pSVar4, "game-create-sandbox-fields-right", pGVar3, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$<BuildSandboxFieldColumns>b__1: 4 lines keep C-only constructs
	private void c__DisplayClass91_0__BuildSandboxFieldColumns_b__1(AottgUi column)
	{
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		VirtualInvokeData pVVar3;
		AottgSandboxField field;
		ulong uVar4;
		long lVar5;
		int index;

		if (0 < this.split) {
			index = 0;
			do {
				obj = (object)this;
				if (obj == null) {
					throw new NullReferenceException();
				}
				pIVar1 = obj.klass;
				uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar4 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar5 = 0;
					do {
						if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar5) == typeof(IReadOnlyList<AottgSandboxField>)) {
							pVVar3 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar5);
							goto label_05896c13;
						}
						lVar5 = lVar5 + 0x10;
					} while (uVar4 * 0x10 != lVar5);
				}
				pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_05896c13: ;
				field = (AottgSandboxField)(*pVVar3.methodPtr)(obj,index,pVVar3.method);
				AottgGameCreateScreen.BuildSandboxField(column, field, index, true);
				index = index + 1;
			} while (index < this.split);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$<BuildSandboxFieldColumns>b__2: 8 lines keep C-only constructs
	private void c__DisplayClass91_0__BuildSandboxFieldColumns_b__2(AottgUi column)
	{
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		VirtualInvokeData pVVar4;
		AottgSandboxField field;
		ulong uVar5;
		object pIVar6;
		int index;
		long lVar7;

		pIVar6 = (object)this;
		if (pIVar6 != null) {
			index = this.split;
			do {
				pIVar1 = pIVar6.klass;
				uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar5 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar7 = 0;
					do {
						if (*(IReadOnlyCollection<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar7) == typeof(IReadOnlyCollection<AottgSandboxField>)) {
							pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7);
							goto label_05896d53;
						}
						lVar7 = lVar7 + 0x10;
					} while (uVar5 * 0x10 != lVar7);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_05896d53: ;
				iVar3 = (*pVVar4.methodPtr)(pIVar6,pVVar4.method);
				if (iVar3 <= index) {
					return;
				}
				pIVar6 = (object)this;
				if (pIVar6 == null) break;
				pIVar1 = pIVar6.klass;
				uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar5 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar7 = 0;
					do {
						if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar7) == typeof(IReadOnlyList<AottgSandboxField>)) {
							pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7);
							goto label_05896dd3;
						}
						lVar7 = lVar7 + 0x10;
					} while (uVar5 * 0x10 != lVar7);
				}
				pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_05896dd3: ;
				field = (AottgSandboxField)(*pVVar4.methodPtr)(pIVar6,index,pVVar4.method);
				AottgGameCreateScreen.BuildSandboxField(column, field, index, true);
				index = index + 1;
				pIVar6 = (object)this;
			} while (pIVar6 != null);
		}
		throw new NullReferenceException();
	}
}
