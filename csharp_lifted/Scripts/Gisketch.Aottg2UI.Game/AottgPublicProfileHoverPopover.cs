// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000337")]
[AottgPopover("public-profile-hover", DismissOnBackdrop = false)]
public sealed class AottgPublicProfileHoverPopover : AottgPopover
{
	[Token(Token = "0x4001010")]
	public const string Id = "public-profile-hover";

	[Token(Token = "0x17000234")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001424")]
		[Address(RVA = "0x580DC50", Offset = "0x580CC50", VA = "0x580DC50", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootStyle): clean
			return "profileHoverDialog";
		}
	}

	[Token(Token = "0x17000235")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001425")]
		[Address(RVA = "0x580DC80", Offset = "0x580CC80", VA = "0x580DC80", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(400.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x580DD40", Offset = "0x580CD40", VA = "0x580DD40", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$Build): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "profilePreviewCard";
		pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		__this_00 = pGVar1.__9__5_0;
		if (__this_00 == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_Build_b__5_0);
			pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar1.__9__5_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "public-profile-hover-card", layout, null);
		return;
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x580DF10", Offset = "0x580CF10", VA = "0x580DF10")]
	private static void BuildLoading(AottgUi card)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildLoading): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		__this = pGVar1.__9__6_0;
		if (__this == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_0);
			pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar1.__9__6_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar2 = card.Panel(style, __this, "public-profile-hover-loading", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "publicProfile.hover.loading";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x580E150", Offset = "0x580D150", VA = "0x580E150")]
	private static void BuildReady(AottgUi card)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildReady): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		__this = pGVar1.__9__7_0;
		if (__this == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_0);
			pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar1.__9__7_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar2 = card.Panel(style, __this, "public-profile-hover-ready", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "publicProfile.hover.ready";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x580E390", Offset = "0x580D390", VA = "0x580E390")]
	private static void BuildError(AottgUi card)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildError): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "profilePreviewBody";
		pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		__this = pGVar1.__9__8_0;
		if (__this == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildError_b__8_0);
			pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar1.__9__8_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "Center", null, null, 10.0, width, null, null, null, null, null, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar2 = card.Panel(style, __this, "public-profile-hover-error", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "publicProfile.hover.error";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x580E5F0", Offset = "0x580D5F0", VA = "0x580E5F0")]
	public AottgPublicProfileHoverPopover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c.

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgPublicProfileHoverPopover.c();
		AottgPublicProfileHoverPopover.c.__9 =(AottgPublicProfileHoverPopover.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<Build>b__5_0: clean
	private void c__Build_b__5_0(AottgUi card)
	{


		AottgPublicProfileHoverPopover.BuildLoading(card);
		AottgPublicProfileHoverPopover.BuildReady(card);
		AottgPublicProfileHoverPopover.BuildError(card);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_0: 1 lines keep C-only constructs
	private void c__BuildLoading_b__6_0(AottgUi body)
	{
		object @object;
		String style;
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar4;
		Action<AottgUi> __this_00;

		pGVar1 = AottgUi.Percent(100.0);
		pGVar2 = AottgUi.Points(120.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Skeleton("public-profile-hover-loading-banner", pGVar3, "skeleton", null, null, null);
		style = "profilePreviewBody";
		pGVar4 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		__this_00 = pGVar4.__9__6_1;
		if (__this_00 == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar4 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			@object = (object)pGVar4.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_1);
			pGVar4 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar4.__9__6_1 = __this_00;
		}
		pGVar1 = AottgUi.Percent(100.0);
		pGVar3 = AottgUi.Layout("Row", null, "Center", null, null, 14.0, pGVar1, null, null, null, null, null, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		body.Panel(style, __this_00, "public-profile-hover-loading-body", pGVar3, null);
		pGVar1 = AottgUi.Percent(100.0);
		pGVar2 = AottgUi.Points(48.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		body.Skeleton("public-profile-hover-loading-bio", pGVar3, "skeleton", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_1: 1 lines keep C-only constructs
	private void c__BuildLoading_b__6_1(AottgUi row)
	{
		object @object;
		String style;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;

		width = AottgUi.Points(92.0);
		height = AottgUi.Points(92.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Skeleton("public-profile-hover-loading-avatar", pGVar1, "skeleton", null, null, null);
		style = "default";
		pGVar2 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		__this_00 = pGVar2.__9__6_2;
		if (__this_00 == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar2 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_2);
			pGVar2 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar2.__9__6_2 = __this_00;
		}
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 8.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		row.Panel(style, __this_00, "public-profile-hover-loading-lines", pGVar1, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_2: clean
	private void c__BuildLoading_b__6_2(AottgUi names)
	{
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;

		pGVar1 = AottgUi.Points(210.0);
		pGVar2 = AottgUi.Points(30.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (names == null) {
			throw new NullReferenceException();
		}
		names.Skeleton("public-profile-hover-loading-name", pGVar3, "skeleton", null, null, null);
		pGVar1 = AottgUi.Points(250.0);
		pGVar2 = AottgUi.Points(22.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		names.Skeleton("public-profile-hover-loading-display-name", pGVar3, "skeleton", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_0: 4 lines keep C-only constructs
	private void c__BuildReady_b__7_0(AottgUi body)
	{
		object pIVar1;
		String pSVar2;
		Action<AottgUi> pSVar3;
		GisketchLength pGVar4;
		GisketchLength pGVar5;
		GisketchLayoutDefinition pGVar6;
		GisketchNodeDefinition pGVar7;
		GisketchUIBindingDefinition pGVar8;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar9;

		pSVar2 = "profilePreviewBannerFrame";
		pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		pSVar3 = pGVar9.__9__7_1;
		if (pSVar3 == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			pIVar1 = (object)pGVar9.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_1);
			pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar9.__9__7_1 = pSVar3;
		}
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Points(112.0);
		pGVar6 = AottgUi.Layout("Column", "Center", "Center", null, null, 0.0, pGVar4, pGVar5, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (body != null) {
			pGVar7 = body.Panel(pSVar2, pSVar3, "public-profile-hover-banner-frame", pGVar6, null);
			if (pGVar7 != null) {
				pGVar7.clip = true;
				pSVar2 = "profilePreviewBody";
				pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
				pSVar3 = pGVar9.__9__7_2;
				if (pSVar3 == null) {
					if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
					}
					pIVar1 = (object)pGVar9.__9;
					pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_2);
					pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
					pGVar9.__9__7_2 = pSVar3;
				}
				pGVar4 = AottgUi.Percent(100.0);
				pGVar5 = AottgUi.Points(64.0);
				pGVar6 = AottgUi.Layout("Row", null, "Center", null, null, 14.0, pGVar4, pGVar5, null, null, null, null, 0.0, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				body.Panel(pSVar2, pSVar3, "public-profile-hover-body", pGVar6, null);
				pSVar2 = "default";
				pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
				pSVar3 = pGVar9.__9__7_3;
				if (pSVar3 == null) {
					if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
					}
					pIVar1 = (object)pGVar9.__9;
					pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_3);
					pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
					pGVar9.__9__7_3 = pSVar3;
				}
				pGVar4 = AottgUi.Percent(100.0);
				pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, null, null, null, null, null, 0.0, 16.0, 0.0, 0.0, 0.0, 0.0, 16.0, 0.0, 0.0, 0.0, 0.0);
				pGVar7 = body.Panel(pSVar2, pSVar3, "public-profile-hover-bio-row", pGVar6, null);
				pGVar8 = new GisketchUIBindingDefinition();
				if (pGVar8 != null) {
					pGVar8.visible = "publicProfile.hover.hasBio";
					if (pGVar7 != null) {
						pGVar7.bind = pGVar8;
						if ((typeof(AottgPublicProfileHoverPopover.c)._2). cctor_finished_or_no_cctor == 0) {
						}
						pSVar2 = "default";
						pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
						pSVar3 = pGVar9.__9__7_4;
						if (pSVar3 == null) {
							if ((typeof(AottgPublicProfileHoverPopover.c)._2). cctor_finished_or_no_cctor == 0) {
								pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
							}
							pIVar1 = (object)pGVar9.__9;
							pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_4);
							pGVar9 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
							pGVar9.__9__7_4 = pSVar3;
						}
						pGVar4 = AottgUi.Percent(100.0);
						pGVar6 = AottgUi.Layout("Row", null, "Center", null, null, 0.0, pGVar4, null, null, null, null, null, 0.0, 16.0, 0.0, 0.0, 0.0, 0.0, 16.0, 0.0, 0.0, 0.0, 0.0);
						pGVar7 = body.Panel(pSVar2, pSVar3, "public-profile-hover-footer", pGVar6, null);
						pGVar8 = new GisketchUIBindingDefinition();
						if (pGVar8 != null) {
							pGVar8.visible = "publicProfile.hover.hasBadges";
							if (pGVar7 != null) {
								pGVar7.bind = pGVar8;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_1: 1 lines keep C-only constructs
	private void c__BuildReady_b__7_1(AottgUi banner)
	{
		AottgProfilePreset[] presets;
		String pSVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;
		String* method_00;

		if (Il2CppMethodInitialized_075456a5 == false) {
			method_00 = &"publicProfile.hover.bannerSprite";
			Il2CppMethodInitialized_075456a5 = true;
		}
		if (Il2CppMethodInitialized_0754564a == false) {
			method_00 = &"UI/Backgrounds/";
			Il2CppMethodInitialized_0754564a = true;
		}
		presets = AottgProfilePresetCatalog.Banners();
		pSVar1 = AottgProfilePresetCatalog.AllowedKey(null, presets, "MainBackground2Texture");
		pSVar1 = String.Concat("UI/Backgrounds/", pSVar1);
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(190.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (banner != null) {
			pGVar2 = banner.Image(pSVar1, "profilePreviewBanner", "public-profile-hover-banner", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.sprite = "publicProfile.hover.bannerSprite";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_2: 2 lines keep C-only constructs
	private void c__BuildReady_b__7_2(AottgUi row)
	{
		object pIVar1;
		String pSVar2;
		Action<AottgUi> pSVar3;
		GisketchLength pGVar4;
		GisketchLength height;
		GisketchLayoutDefinition pGVar5;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar6;

		pSVar2 = "profilePreviewAvatarFrame";
		pGVar6 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		pSVar3 = pGVar6.__9__7_5;
		if (pSVar3 == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar6 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			pIVar1 = (object)pGVar6.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_5);
			pGVar6 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar6.__9__7_5 = pSVar3;
		}
		pGVar4 = AottgUi.Points(104.0);
		height = AottgUi.Points(104.0);
		pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 35.0, 0.0, 0.0);
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Panel(pSVar2, pSVar3, "public-profile-hover-avatar-frame", pGVar5, null);
		pSVar2 = "default";
		pGVar6 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		pSVar3 = pGVar6.__9__7_6;
		if (pSVar3 == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar6 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			pIVar1 = (object)pGVar6.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_6);
			pGVar6 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar6.__9__7_6 = pSVar3;
		}
		pGVar4 = AottgUi.Points(0.0);
		pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, pGVar4, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		row.Panel(pSVar2, pSVar3, "public-profile-hover-names", pGVar5, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_5: 1 lines keep C-only constructs
	private void c__BuildReady_b__7_5(AottgUi frame)
	{
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		style = "profileCardAvatarBg";
		pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
		__this_00 = pGVar1.__9__7_7;
		if (__this_00 == null) {
			if ((typeof(AottgPublicProfileHoverPopover.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_7);
			pGVar1 = typeof(AottgPublicProfileHoverPopover.c).static_fields;
			pGVar1.__9__7_7 = __this_00;
		}
		width = AottgUi.Points(92.0);
		height = AottgUi.Points(92.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (frame == null) {
			throw new NullReferenceException();
		}
		frame.Panel(style, __this_00, "public-profile-hover-avatar-bg", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_7: 1 lines keep C-only constructs
	private void c__BuildReady_b__7_7(AottgUi bg)
	{
		AottgProfilePreset[] presets;
		String pSVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;
		String* method_00;

		if (Il2CppMethodInitialized_075456a8 == false) {
			method_00 = &"public-profile-hover-avatar";
			Il2CppMethodInitialized_075456a8 = true;
		}
		if (Il2CppMethodInitialized_07545649 == false) {
			method_00 = &"UI/Icons/Profile/";
			Il2CppMethodInitialized_07545649 = true;
		}
		presets = AottgProfilePresetCatalog.Avatars();
		pSVar1 = AottgProfilePresetCatalog.AllowedKey(null, presets, "Gisketch1");
		pSVar1 = String.Concat("UI/Icons/Profile/", pSVar1, "Icon") ;
		width = AottgUi.Points(92.0);
		height = AottgUi.Points(92.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (bg != null) {
			pGVar2 = bg.Image(pSVar1, "profilePreviewAvatar", "public-profile-hover-avatar", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.sprite = "publicProfile.hover.avatarSprite";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_6: clean
	private void c__BuildReady_b__7_6(AottgUi names)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;

		if (names != null) {
			pGVar1 = names.TextKey("MainMenu.Profile.Character", "profilePreviewName", "public-profile-hover-character-name", "publicProfile.hover.characterName", null);
			pGVar2 = AottgUi.Percent(100.0);
			pGVar3 = AottgUi.Points(36.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar4;
				pGVar1 = names.TextKey("MainMenu.Profile.Contributor", "profilePreviewHandle", "public-profile-hover-display-name", "publicProfile.hover.displayName", null);
				pGVar2 = AottgUi.Percent(100.0);
				pGVar3 = AottgUi.Points(22.0);
				pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (pGVar1 != null) {
					pGVar1.layout = pGVar4;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_3: clean
	private void c__BuildReady_b__7_3(AottgUi bio)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		if (bio != null) {
			pGVar1 = bio.Text((String)**(ulong*)(g_data_07556758 + 0xb8), "profileHoverBio", "public-profile-hover-bio", "publicProfile.hover.bio", null);
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(24.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_4: clean
	private void c__BuildReady_b__7_4(AottgUi badges)
	{
		AottgBadgeIconRow __this_00;

		__this_00 = new AottgBadgeIconRow("public-profile-hover-badges", 18.0, 4.0, "publicProfile.hover.badgesJson", "publicProfile.hover.hasBadges");
		if (badges == null) {
			throw new NullReferenceException();
		}
		badges.Component((AottgComponent)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildError>b__8_0: clean
	private void c__BuildError_b__8_0(AottgUi body)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		if (body != null) {
			pGVar1 = body.Icon("warning", "icon", "public-profile-hover-error-icon");
			width = AottgUi.Points(24.0);
			height = AottgUi.Points(24.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				body.TextKey("MainMenu.Profile.Unavailable", "profileCardBodyText", "public-profile-hover-error-text", "publicProfile.hover.errorText", null);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
