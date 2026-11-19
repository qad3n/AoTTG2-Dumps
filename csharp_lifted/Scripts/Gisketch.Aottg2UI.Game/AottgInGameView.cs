// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgInGameView
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000285")]
internal sealed class AottgInGameView
{
	[Token(Token = "0x2000286")]
	private sealed class Actions : IGisketchActionHandler
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x57B2640", Offset = "0x57B1640", VA = "0x57B2640", Slot = "4")]
		public void HandleAction(string id, GisketchActionContext context)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView.Actions$$HandleAction): clean
			AottgGameUiActions.HandleInGameAction(id, context);
			return;
		}

		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x57B1A80", Offset = "0x57B0A80", VA = "0x57B1A80")]
		public Actions()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView.Actions$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x4000CF9")]
	private const string StyleOverridePrefix = "inGame.";

	[Token(Token = "0x4000CFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x4000CFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Color? _lightBackground;

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x57B1900", Offset = "0x57B0900", VA = "0x57B1900")]
	static AottgInGameView()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$.cctor): 3 lines keep C-only constructs
		GisketchComponentRegistry pGVar1;
		object pIVar2;
		GisketchComponentFactory pGVar3;

		if (Il2CppMethodInitialized_07545328 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07545328 = true;
		}
		pGVar1 = GisketchComponentRegistry.Default;
		pIVar2 = (object)AottgInGameView.c.__9;
		pGVar3 = new GisketchComponentFactory(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c_cctor_b__2_0);
		if (pGVar1 != null) {
			pGVar1.Register("InGameTexture", pGVar3);
			pGVar1 = GisketchComponentRegistry.Default;
			pIVar2 = (object)AottgInGameView.c.__9;
			pGVar3 = new GisketchComponentFactory(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgInGameView_c_cctor_b__2_1);
			if (pGVar1 != null) {
				pGVar1.Register("InGamePlayerName", pGVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x57AF980", Offset = "0x57AE980", VA = "0x57AF980")]
	public AottgInGameView()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$.ctor): 17 lines keep C-only constructs
		AottgInGameView targetAddress;
		byte bVar1;
		uint uVar2;
		UISettings pSVar3;
		StringSetting pSVar4;
		GisketchStyleDefinition pGVar5;
		System_Nullable_Color__o pSVar6;
		AottgInGameView pGVar7;
		MethodInfo pMVar8;
		bool bVar9;
		String* ppSVar10;
		Object x;
		String pSVar11;
		GisketchThemeDefinition __this_00;
		Il2CppClass pIVar12;
		ulong uVar13;
		GisketchTheme pGVar14;
		IGisketchLocalizer localizer;
		object __this_01;
		GisketchUIState __this_02;
		GisketchBuildContext pGVar15;
		GisketchStyleDefinition targetAddress_00;
		ulong uVar16;
		GisketchStyleDefinition[] pGVar17;
		Color UVar18;
		System_Nullable_Color__Fields local_58;
		AottgInGameView local_38;

		base();
		pSVar3 = SettingsManager.UISettings;
		if (pSVar3 == null) {
	label_058afad0: ;
			ppSVar10 = &"UI/Themes/Aottg2Dark";
		}
		else {
			pSVar4 = pSVar3.UITheme;
			if (pSVar4 == null) goto label_058afe09;
			bVar9 = (pSVar4._value == "Light");
			if (!bVar9) goto label_058afad0;
			ppSVar10 = &"UI/Themes/Aottg2Light";
		}
		x = (Object)Resources.Load<TextAsset>(*ppSVar10);
		bVar9 = (x != null);
		if (bVar9) {
			if (x == null) goto label_058afe09;
			pSVar11 = x.text;
			__this_00 = GisketchThemeDefinition.FromJson(pSVar11);
		}
		else {
			__this_00 = new GisketchThemeDefinition();
		}
		pMVar8 = MethodInfo_System_Array_Empty_GisketchStyleDefinition;
		if (__this_00 == null) goto label_058afe09;
		pGVar17 = __this_00.styles;
		if (pGVar17 == null) {
			if ((MethodInfo_System_Array_Empty_GisketchStyleDefinition.field7_0x38).methodMetadataHandle ==null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_GisketchStyleDefinition);
				pIVar12 = *(Il2CppClass*)((long)(pMVar8.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar12._2).bitflags1 & 1) == 0) goto label_058afb88;
	label_058afbdc: ;
				if ((pIVar12._2).cctor_finished_or_no_cctor == 0) goto label_058afb99;
	label_058afbe5: ;
				pIVar12 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar12._2).bitflags1;
			}
			else {
				pIVar12 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_GisketchStyleDefinition.field7_0x38). methodMetadataHandle + 0x10);
				if (((pIVar12._2).bitflags1 & 1) != 0) goto label_058afbdc;
	label_058afb88: ;
				pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
				if ((pIVar12._2).cctor_finished_or_no_cctor != 0) goto label_058afbe5;
	label_058afb99: ;
				pIVar12 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar12._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
				pGVar17 = *(GisketchStyleDefinition[]*)pIVar12.static_fields;
			}
			else {
				pGVar17 = *(GisketchStyleDefinition[]*)pIVar12.static_fields;
			}
			if (pGVar17 == null) goto label_058afe09;
		}
		if (0 < (int)pGVar17.Length) {
			uVar13 = pGVar17.Length & 0xffffffff;
			uVar16 = 0;
			do {
				if (uVar13 <= uVar16) {
					throw new IndexOutOfRangeException();
				}
				pGVar5 = pGVar17[uVar16];
				if (((pGVar5 != null) &&(pSVar11 = pGVar5.name, pSVar11 != null)) &&(bVar9 = pSVar11.StartsWith("inGame.", 4)) ) {
					if ("inGame." == null) goto label_058afe09;
					targetAddress_00 = &pGVar5.fields;
					if (targetAddress_00.name == null) goto label_058afe09;
					pSVar11 = (targetAddress_00.name).Substring(("inGame.".fields)._stringLength);
					targetAddress_00.name = pSVar11;
				}
				uVar16 = uVar16 + 1;
				uVar2 = (uint)pGVar17.Length;
				uVar13 = (ulong)uVar2;
			} while ((long)uVar16 < (long)(int)uVar2);
		}
		local_38 = this;
		pGVar14 = GisketchTheme.FromDefinition(__this_00);
		localizer = new Aottg2GisketchLocalizer();
		__this_01 = new AottgInGameView.Actions();
		__this_02 = new GisketchUIState();
		pGVar15 = il2cpp_codegen_object_new(typeof(GisketchBuildContext)) ;
		pGVar15 = new GisketchBuildContext(null, pGVar14, localizer, (IGisketchActionHandler)__this_01, __this_02, null, null);
		pGVar7 = local_38;
		targetAddress = &local_38.fields;
		local_38._context = pGVar15;
		bVar9 = (__this_00.mode == "light");
		if (bVar9) {
			pGVar15 = targetAddress._context;
			if ((pGVar15 == null) ||(pGVar14 = pGVar15.Theme, pGVar14 == null)) {
	label_058afe09: ;
				throw new NullReferenceException();
			}
			UVar18.b = 1.0;
			UVar18.a = 1.0;
			UVar18.r = 1.0;
			UVar18.g = 1.0;
			UVar18 = pGVar14.GetColor("inputBg", UVar18);
			local_58.hasValue = false;
			local_58._1_3_ = 0;
			local_58.value.r = 0.0;
			local_58.value.g = 0.0;
			local_58.value.b = 0.0;
			local_58.value.a = 0.0;
			local_58 = new Nullable<Color>(UVar18);
			pGVar7._lightBackground.value.a = local_58.value.a;
			pGVar7._lightBackground.hasValue = local_58.hasValue;
			*(undefined3)&pGVar7._lightBackground.field_0x1 = local_58._1_3_;
			pGVar7._lightBackground.value.r = local_58.value.r;
			pSVar6 = &pGVar7._lightBackground;
			pSVar6.value.g = local_58.value.g;
			pSVar6.value.b = local_58.value.b;
		}
		return;
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x57B1A90", Offset = "0x57B0A90", VA = "0x57B1A90")]
	public Color ThemeColor(string token)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$ThemeColor): clean
		GisketchBuildContext pGVar1;
		GisketchTheme __this_00;
		Color UVar2;
		Color fallback;

		pGVar1 = this._context;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Theme, __this_00 == null)) {
			throw new NullReferenceException();
		}
		fallback.b = 1.0;
		fallback.a = 1.0;
		fallback.r = 1.0;
		fallback.g = 1.0;
		UVar2 = (Color)__this_00.GetColor(token, fallback);
		return (Color)UVar2;
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x57B1AC0", Offset = "0x57B0AC0", VA = "0x57B1AC0")]
	public string Readable(string richText)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$Readable): clean
		String pSVar1;
		Color background;

		if (this._lightBackground.hasValue == false) {
			return richText;
		}
		pSVar1 = EffectText.WithPresetColors(richText);
		background = (this._lightBackground).Value;
		pSVar1 = ReadableColors.Darken(pSVar1, background);
		return pSVar1;
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x57B15E0", Offset = "0x57B05E0", VA = "0x57B15E0")]
	public RawImage RawImage(Transform parent, float width, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$RawImage): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		GisketchLength width_00;
		GisketchLength height_00;
		GisketchLayoutDefinition pGVar1;
		GameObject __this_01;
		RawImage pUVar2;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "InGameTexture";
			__this_00.style = "clear";
			width_00 = AottgUi.Points(width);
			height_00 = AottgUi.Points(height);
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width_00, height_00, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar1;
			__this_01 = this.Build(parent, __this_00);
			if (__this_01 != null) {
				pUVar2 = __this_01.GetComponent<RawImage>();
				return pUVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x57B1BA0", Offset = "0x57B0BA0", VA = "0x57B1BA0")]
	public EffectText PlayerName(Transform parent, float width)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$PlayerName): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		GisketchLength width_00;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;
		GameObject __this_01;
		EffectText pPVar2;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "InGamePlayerName";
			__this_00.style = "clear";
			width_00 = AottgUi.Points(width);
			height = AottgUi.Points(48.0);
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width_00, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar1;
			__this_01 = this.Build(parent, __this_00);
			if (__this_01 != null) {
				pPVar2 = __this_01.GetComponent<EffectText>();
				return pPVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x57B0790", Offset = "0x57AF790", VA = "0x57B0790")]
	public GameObject Build(Transform parent, GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$Build): 1 lines keep C-only constructs
		GisketchBuildContext context;
		GisketchLayoutDefinition pGVar1;
		GisketchView __this_00;
		GameObject __this_01;
		RectTransform __this_02;
		GisketchLength pGVar2;

		context = this._context;
		__this_00 = new GisketchView();
		__this_01 = GisketchScreenBuilder.BuildNodeInto(node, parent, context, __this_00);
		if (__this_01 != null) {
			__this_02 = (RectTransform)__this_01.transform;
			if ((__this_02 != null) &&(__this_02.klass != typeof(RectTransform))) {
				throw new InvalidCastException();
			}
			if (node != null) {
				pGVar1 = node.layout;
				if (pGVar1 != null) {
					pGVar2 = pGVar1.width;
					if (pGVar2 == null) {
						pGVar2 = pGVar1.height;
						if (pGVar2 == null) {
							return __this_01;
						}
						if (__this_02 == null) goto label_058b08c6;
					}
					else {
						if (__this_02 == null) goto label_058b08c6;
						__this_02.SetSizeWithCurrentAnchors(0, pGVar2.value);
						pGVar1 = node.layout;
						if (pGVar1 == null) {
							return __this_01;
						}
						pGVar2 = pGVar1.height;
						if (pGVar2 == null) {
							return __this_01;
						}
					}
					__this_02.SetSizeWithCurrentAnchors(1, pGVar2.value);
				}
				return __this_01;
			}
		}
	label_058b08c6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x57B1D40", Offset = "0x57B0D40", VA = "0x57B1D40")]
	public GisketchView Dialog(Transform parent, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$Dialog): clean
		GisketchBuildContext context;
		AottgActionRegistry __this_00;
		GisketchOverlayDefinition overlay;
		GisketchView pGVar1;

		__this_00 = new AottgActionRegistry();
		overlay = AottgCodeManifestBuilder.BuildDialog(id, __this_00);
		context = this._context;
		pGVar1 = GisketchScreenBuilder.BuildOverlay(overlay, parent, context);
		return pGVar1;
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x57B1DE0", Offset = "0x57B0DE0", VA = "0x57B1DE0")]
	public void SetButtonSelected(Button button, bool selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$SetButtonSelected): 2 lines keep C-only constructs
		GisketchBuildContext pGVar1;
		GisketchTheme pGVar2;
		bool bVar3;
		String* ppSVar4;
		GisketchStyleDefinition pGVar5;
		Transform pUVar6;
		Image pUVar7;
		TMP_Text __this_00;
		Color UVar8;
		Color fallback;

		pGVar1 = this._context;
		if ((pGVar1 != null) &&(pGVar2 = pGVar1.Theme, pGVar2 != null)) {
			if (selected) {
				ppSVar4 = &"inGameSelectedTab";
			}
			else {
				ppSVar4 = &"buttonQuiet";
			}
			pGVar5 = pGVar2.GetStyle(*ppSVar4);
			if (button != null) {
				pUVar6 = button.transform;
				if (pUVar6 != null) {
					pUVar6 = pUVar6.Find("AoTTG Button Face");
					bVar3 = ((Object)pUVar6 != null);
					if (bVar3) {
						if (pUVar6 == null) goto label_058b1fc2;
						pUVar7 = pUVar6.GetComponent<Image>();
					}
					else {
						pUVar7 = (Image)button.m_TargetGraphic;
					}
					pGVar1 = this._context;
					if (((pGVar1 != null) &&(pGVar5 != null)) &&(pGVar2 = pGVar1.Theme, pGVar2 != null)) {
						UVar8.b = 1.0;
						UVar8.a = 1.0;
						UVar8.r = 1.0;
						UVar8.g = 1.0;
						UVar8 = pGVar2.GetColor(pGVar5.background, UVar8);
						if (pUVar7 != null) {
							pUVar7.set_color(UVar8);
							__this_00 = button.GetComponentInChildren<TMP_Text>();
							pGVar1 = this._context;
							if ((pGVar1 != null) &&(pGVar2 = pGVar1.Theme, pGVar2 != null)) {
								fallback.b = 1.0;
								fallback.a = 1.0;
								fallback.r = 1.0;
								fallback.g = 1.0;
								UVar8 = pGVar2.GetColor(pGVar5.textColor, fallback);
								if (__this_00 != null) {
									__this_00.set_color(UVar8);
									__this_00.fontStyle = 0;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_058b1fc2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x57B1FD0", Offset = "0x57B0FD0", VA = "0x57B1FD0")]
	public void SetState(string key, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$SetState): clean
		GisketchBuildContext pGVar1;
		GisketchUIState __this_00;

		pGVar1 = this._context;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.State, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Set(key, value);
		return;
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x57B1FF0", Offset = "0x57B0FF0", VA = "0x57B1FF0")]
	public GisketchOverlayManager CreateOverlayManager(Transform layer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$CreateOverlayManager): clean
		GisketchBuildContext context;
		GisketchOverlayManager __this_00;

		context = this._context;
		__this_00 = new GisketchOverlayManager(layer, context);
		return __this_00;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x57B2050", Offset = "0x57B1050", VA = "0x57B2050")]
	public static AottgInGameView ScaledPopupShell(Transform host, float width, float height, float headerHeight, float footerHeight, out Transform header, out Transform footer, string headerStyle = "inGameFooter")
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$ScaledPopupShell): 2 lines keep C-only constructs
		Vector2 value;
		GameObject __this;
		AottgInGameView __this_00;

		if (Il2CppMethodInitialized_07545331 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ViewportScaler) ;
			Il2CppMethodInitialized_07545331 = true;
		}
		if (host != null) {
			if ((RectTransform)host.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			value.y = height;
			value.x = width;
			host.sizeDelta = value;
			__this = host.gameObject;
			if (__this != null) {
				__this.AddComponent<ViewportScaler>();
				AottgInGameView.HidePrefab(host);
				__this_00 = new AottgInGameView();
				if (__this_00 != null) {
					__this_00.PopupShell(host, width, height, headerHeight, footerHeight, header, footer, headerStyle);
					return __this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x57B0160", Offset = "0x57AF160", VA = "0x57B0160")]
	public void PopupShell(Transform parent, float width, float height, float headerHeight, float footerHeight, out Transform header, out Transform footer, string headerStyle = "inGameFooter")
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$PopupShell): 2 lines keep C-only constructs
		Vector2 position;
		Transform transform;
		MethodInfo pMVar1;

		pMVar1 = (MethodInfo)parent;
		transform = this.Panel(parent, "inGameSurface", width, height, false, (Nullable<float>)0x0);
		position = (Vector2.zeroVector);
		AottgInGameView.Position(transform, (Vector2)position);
		pMVar1 = (MethodInfo)this.Panel(parent, headerStyle, width, headerHeight, true, (Nullable<float>)0x0);
		*header = (Transform)pMVar1;
		AottgInGameView.Position(*header, (Vector2)((ulong)(uint)((height - headerHeight) * 0.5) << 0x20));
		pMVar1 = (MethodInfo)this.Panel(parent, "inGameFooter", width, footerHeight, true, (Nullable<float>)0x0);
		*footer = (Transform)pMVar1;
		AottgInGameView.Position(*footer, (Vector2)((ulong)(uint)((height - footerHeight) * -0.5) << 0x20));
		return;
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x57B2190", Offset = "0x57B1190", VA = "0x57B2190")]
	public RectTransform ProgressBar(Transform parent, float width, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$ProgressBar): 1 lines keep C-only constructs
		Vector2 value;
		Transform parent_00;
		RectTransform __this_00;
		FlexLayout __this_01;

		parent_00 = this.Panel(parent, "sliderTrack", width, height, false, (Nullable<float>)0x0);
		__this_00 = (RectTransform)this.Panel(parent_00, "sliderFill", width, height, false, (Nullable<float>)0x0);
		if (__this_00 != null) {
			if (__this_00.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			__this_01 = __this_00.GetComponent<FlexLayout>();
			if (__this_01 != null) {
				__this_01.enabled = false;
				__this_00.anchorMin = (Vector2)(Vector2.zeroVector);
				__this_00.anchorMax = (Vector2)(Vector2.oneVector);
				value = (Vector2.zeroVector);
				__this_00.offsetMax = (Vector2)value;
				__this_00.offsetMin = (Vector2)value;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x57B2350", Offset = "0x57B1350", VA = "0x57B2350")]
	public static void SetProgress(RectTransform fill, float progress)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$SetProgress): clean
		Vector2 value;
		float fVar1;

		if (fill == null) {
			throw new NullReferenceException();
		}
		fVar1 = 1.0;
		if (progress <= 1.0) {
			fVar1 = progress;
		}
		value.y = 1.0;
		value.x = (float)(-(uint)(0.0 <= progress) & (uint)fVar1);
		fill.anchorMax = value;
		return;
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x57AFE10", Offset = "0x57AEE10", VA = "0x57AFE10")]
	public Transform Panel(Transform parent, string style, float width, float height, [Optional][DefaultParameterValue(false)] bool row, [Optional] float? gap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$Panel): 3 lines keep C-only constructs
		String direction;
		GisketchBuildContext pGVar1;
		GisketchTheme __this_00;
		String justify;
		GisketchNodeDefinition __this_01;
		String* ppSVar2;
		GisketchLength width_00;
		GisketchLength height_00;
		GisketchStyleDefinition pGVar3;
		GisketchLayoutDefinition pGVar4;
		GameObject __this_02;
		LayoutElement pUVar5;
		Transform pUVar6;
		float gap_00;

		__this_01 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_01 = new GisketchNodeDefinition();
		if (__this_01 == null) goto label_058b00ca;
		__this_01.type = "Panel";
		__this_01.style = style;
		if (row) {
			ppSVar2 = &"Row";
		}
		else {
			ppSVar2 = &"Column";
		}
		direction = *ppSVar2;
		width_00 = AottgUi.Points(width);
		height_00 = AottgUi.Points(height);
		justify = "Center";
		if (gap.hasValue == false) {
			pGVar1 = this._context;
			if ((pGVar1 == null) ||(__this_00 = pGVar1.Theme, __this_00 == null)) goto label_058b00ca;
			pGVar3 = __this_00.GetStyle(style);
			if (pGVar3 == null) goto label_058b00ca;
			gap_00 = pGVar3.gap.value;
		}
		else {
			gap_00 = gap.value;
		}
		pGVar4 = AottgUi.Layout(direction, justify, justify, null, null, gap_00, width_00, height_00, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		__this_01.layout = pGVar4;
		if (this != null) {
			__this_02 = this.Build(parent, __this_01);
			if (__this_02 != null) {
				pUVar5 = __this_02.GetComponent<LayoutElement>();
				if (pUVar5 == null) {
					pUVar5 = __this_02.AddComponent<LayoutElement>();
					if (pUVar5 == null) goto label_058b00ca;
				}
				pUVar5.set_preferredWidth(width);
				pUVar5.set_preferredHeight(height);
				return pUVar6;
			}
		}
	label_058b00ca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x57B0310", Offset = "0x57AF310", VA = "0x57B0310")]
	public TMP_Text Text(Transform parent, string text, float width, float height = 40f, string style = "inGameText")
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$Text): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		GisketchLength width_00;
		GisketchLength height_00;
		GisketchLayoutDefinition pGVar1;
		GameObject __this_01;
		TMP_Text pTVar2;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "Text";
			__this_00.text = text;
			__this_00.style = style;
			width_00 = AottgUi.Points(width);
			height_00 = AottgUi.Points(height);
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width_00, height_00, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar1;
			__this_01 = this.Build(parent, __this_00);
			if (__this_01 != null) {
				pTVar2 = __this_01.GetComponent<TMP_Text>();
				return pTVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x57B2390", Offset = "0x57B1390", VA = "0x57B2390")]
	public static float FitTextHeight(TMP_Text label, float minimumHeight = 40f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$FitTextHeight): clean
		Vector2 UVar1;
		String text;
		RectTransform __this;
		Transform target;
		float fVar2;
		Rect UVar3;
		float fStack_24;

		if (label != null) {
			label.textWrappingMode = 1;
			label.overflowMode = 0;
			text = label.get_text();
			__this = label.rectTransform;
			if (__this != null) {
				UVar3 = __this.rect;
				UVar1 = label.GetPreferredValues(text, UVar3.m_Width, INFINITY);
				target = label.transform;
				fStack_24 = UVar1.y;
				fVar2 = ceilf(fStack_24);
				if (minimumHeight <= fVar2) {
					minimumHeight = fVar2;
				}
				AottgInGameView.SetHeight(target, minimumHeight);
				return minimumHeight;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x57B24C0", Offset = "0x57B14C0", VA = "0x57B24C0")]
	public static void SetHeight(Transform target, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$SetHeight): 1 lines keep C-only constructs
		bool bVar1;
		FlexLayout __this;
		YGValue value;
		LayoutElement pUVar2;
		GameObject __this_00;

		if (target != null) {
			if ((RectTransform)target.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			target.SetSizeWithCurrentAnchors(1, height);
			__this = target.GetComponent<FlexLayout>();
			bVar1 = ((Object)__this != null);
			if (bVar1) {
				value = ((YGValue)height);
				if (__this == null) goto label_058b262a;
				__this.Height = value;
			}
			pUVar2 = target.GetComponent<LayoutElement>();
			if (pUVar2 != null) {
	label_058b2607: ;
				pUVar2.set_preferredHeight(height);
				return;
			}
			__this_00 = target.gameObject;
			if (__this_00 != null) {
				pUVar2 = __this_00.AddComponent<LayoutElement>();
				if (pUVar2 != null) goto label_058b2607;
			}
		}
	label_058b262a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x57B04C0", Offset = "0x57AF4C0", VA = "0x57B04C0")]
	public Button Button(Transform parent, string text, string action, string value, float width, float height = 44f, AottgButtonVariant variant = AottgButtonVariant.Quiet)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$Button): 2 lines keep C-only constructs
		bool bVar1;
		GisketchNodeDefinition __this_00;
		String pSVar2;
		GisketchLength width_00;
		GisketchLength height_00;
		GisketchLayoutDefinition pGVar3;
		GameObject __this_01;
		Button __this_02;
		TMP_Text __this_03;
		Enum local_48;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "Button";
			bVar1 = String.IsNullOrEmpty(text);
			if (bVar1) {
				text = " ";
			}
			__this_00.text = text;
			__this_00.action = action;
			__this_00.value = value;
			local_48.klass = (Enum)typeof(AottgButtonVariant);
			local_48.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = local_48.ToString();
			pSVar2 = String.Concat("button", pSVar2);
			__this_00.style = pSVar2;
			width_00 = AottgUi.Points(width);
			height_00 = AottgUi.Points(height);
			pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width_00, height_00, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar3;
			if (this != null) {
				__this_01 = this.Build(parent, __this_00);
				if (__this_01 != null) {
					__this_02 = __this_01.GetComponent<Button>();
					if (__this_02 != null) {
						__this_03 = __this_02.GetComponentInChildren<TMP_Text>(true);
						if (__this_03 != null) {
							__this_03.enableAutoSizing = true;
							__this_03.fontSizeMin = 14.0;
							__this_03.fontSizeMax = 20.0;
							__this_03.textWrappingMode = 1;
							return __this_02;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x57B00D0", Offset = "0x57AF0D0", VA = "0x57B00D0")]
	public static void Position(Transform transform, Vector2 position)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$Position): 1 lines keep C-only constructs
		if (transform == null) {
			throw new NullReferenceException();
		}
		if ((RectTransform)transform.klass != typeof(RectTransform)) {
			throw new InvalidCastException();
		}
		transform.pivot = (Vector2)0x3f0000003f000000;
		transform.anchorMax = (Vector2)0x3f0000003f000000;
		transform.anchorMin = (Vector2)0x3f0000003f000000;
		transform.anchoredPosition = position;
		return;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x57AF6B0", Offset = "0x57AE6B0", VA = "0x57AF6B0")]
	public static void HidePrefab(Transform host)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c (Gisketch.Aottg2UI.Game.AottgInGameView$$HidePrefab): 9 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		Component __this;
		GameObject __this_00;
		object pIVar6;
		ulong uVar7;
		long lVar8;
		object local_48;
		object local_40;
		byte local_30;
		object* local_28;

		local_40 = null;
		if (host == null) {
			throw new NullReferenceException();
		}
		local_48 = (object)host.GetEnumerator();
		local_30 = (byte)&local_48;
		local_28 = &local_40;
		do {
			pIVar6 = local_48;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_48.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			bVar4 = pIVar6.Dispose();
			pIVar6 = local_48;
			if (!bVar4) {
				pIVar6 = (local_48 as IDisposable);
				if (pIVar6 == null) {
					return;
				}
				pIVar2 = pIVar6.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				local_40 = pIVar6;
				if (uVar7 == 0) goto label_058af91f;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar8 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_48.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			__this = (Component)pIVar6.Dispose();
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Transform))) {
				throw new InvalidCastException();
			}
			__this_00 = __this.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(false);
		} while(true);
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
				goto label_058af93d;
			}
		}
	label_058af91f: ;
	label_058af93d: ;
		pIVar6.Dispose();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameView.c.

	// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgInGameView.c();
		AottgInGameView.c.__9 =(AottgInGameView.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$<.cctor>b__2_0: clean
	private bool c__cctor_b__2_0(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		RawImage pUVar1;

		if (go != null) {
			pUVar1 = go.AddComponent<RawImage>();
			if (pUVar1 != null) {
				pUVar1.set_raycastTarget(false);
				return true;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgInGameView.<>c$$<.cctor>b__2_1: clean
	private bool c__cctor_b__2_1(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		GisketchTheme __this_00;
		VerticalLayoutGroup __this_01;
		EffectText __this_02;
		TMP_FontAsset value;
		Color UVar1;

		if (go != null) {
			__this_01 = go.AddComponent<VerticalLayoutGroup>();
			if (__this_01 != null) {
				__this_01.childAlignment = 3;
				__this_01.childForceExpandWidth = false;
				__this_01.childForceExpandHeight = false;
				__this_02 = go.AddComponent<EffectText>();
				if (__this_02 != null) {
					__this_02.fontSize = 22.0;
					if ((context != null) &&(__this_00 = context.Theme, __this_00 != null )) {
						UVar1.b = 1.0;
						UVar1.a = 1.0;
						UVar1.r = 1.0;
						UVar1.g = 1.0;
						UVar1 = __this_00.GetColor("text", UVar1);
						__this_02.color = UVar1;
						value = GisketchTypography.Resolve("text", 400, null);
						__this_02.font = value;
						return true;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
