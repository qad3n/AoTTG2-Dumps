// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileCard
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200030D")]
internal sealed class AottgProfileCard : AottgComponent
{
	[Token(Token = "0x4000F7A")]
	private const string EditIcon = "material-icons/edit";

	[Token(Token = "0x4000F7B")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _isMine;

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x57F8120", Offset = "0x57F7120", VA = "0x57F8120")]
	public AottgProfileCard(bool isMine = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$.ctor): clean
		base();
		this._isMine = isMine;
		return;
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x57F8140", Offset = "0x57F7140", VA = "0x57F8140", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$Build): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_0);
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("profileCard", __this_00, "profile-card", layout, null);
		return;
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x57F8290", Offset = "0x57F7290", VA = "0x57F8290")]
	private static void BuildIdentity(AottgUi body, bool isMine)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildIdentity): 1 lines keep C-only constructs
		AottgProfileCard.c__DisplayClass4_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this = new AottgProfileCard.c__DisplayClass4_0();
		if (__this != null) {
			__this.isMine = isMine;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__0);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", null, "FlexStart", null, null, 24.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (body != null) {
				body.Panel("default", __this_00, "profile-card-identity", layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x57F8430", Offset = "0x57F7430", VA = "0x57F8430")]
	private static void BuildDetails(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildDetails): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "default";
		pGVar1 = typeof(AottgProfileCard.c).static_fields;
		__this = pGVar1.__9__5_0;
		if (__this == null) {
			if ((typeof(AottgProfileCard.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileCard.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_0);
			pGVar1 = typeof(AottgProfileCard.c).static_fields;
			pGVar1.__9__5_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", "SpaceBetween", "FlexStart", null, null, 48.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 56.0, 0.0, 1.0);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Panel(style, __this, "profile-card-columns", layout, null);
		return;
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x57F8620", Offset = "0x57F7620", VA = "0x57F8620")]
	private static void Social(AottgUi ui, int index, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$Social): 1 lines keep C-only constructs
		AottgProfileCard.c__DisplayClass6_0 __this;
		Action<AottgUi> __this_00;
		String pSVar1;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_01;

		__this = new AottgProfileCard.c__DisplayClass6_0();
		if (__this != null) {
			__this.index = index;
			__this.value = value;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__0);
			pSVar1 = (__this.index).ToString();
			pSVar1 = String.Concat("profile-card-social-", pSVar1);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", null, "Center", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (ui != null) {
				pGVar2 = ui.Panel("default", __this_00, pSVar1, layout, null);
				__this_01 = new GisketchUIBindingDefinition();
				pSVar1 = AottgProfileStateKeys.SocialVisible(__this.index);
				if (__this_01 != null) {
					__this_01.visible = pSVar1;
					if (pGVar2 != null) {
						pGVar2.bind = __this_01;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x57F8870", Offset = "0x57F7870", VA = "0x57F8870")]
	private static void BoundProfileText(AottgUi ui, string value, string style, string id, string textKey, string skeletonId, GisketchLayoutDefinition skeletonLayout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$BoundProfileText): clean
		GisketchNodeDefinition pGVar1;
		GisketchMotionDefinition pGVar2;
		GisketchUIBindingDefinition __this;

		if (ui != null) {
			pGVar1 = ui.Text(value, style, id, null, null);
			if (pGVar1 != null) {
				pGVar1.active = false;
				pGVar2 = AottgUi.Motion("fade", null, 0.14, 0.0, 0.0, 0);
				pGVar1.enter = pGVar2;
				__this = new GisketchUIBindingDefinition();
				if (__this != null) {
					__this.text = textKey;
					__this.visible = "profile.identity.ready";
					pGVar1.bind = __this;
					ui.Skeleton(skeletonId, skeletonLayout, "skeleton", "profile.identity.loading", null, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x57F8A60", Offset = "0x57F7A60", VA = "0x57F8A60")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$Visible): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.visible = key;
		return __this;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x57F8AD0", Offset = "0x57F7AD0", VA = "0x57F8AD0")]
	private static void AddEditOverlay(AottgUi ui, string id, string item, string dialogId, bool isMine, float offsetX = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$AddEditOverlay): 1 lines keep C-only constructs
		String id_00;
		AottgProfileCard.c__DisplayClass9_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this = new AottgProfileCard.c__DisplayClass9_0();
		if (__this == null) {
	label_058f8cc9: ;
			throw new NullReferenceException();
		}
		__this.dialogId = dialogId;
		__this.id = id;
		__this.item = item;
		if (isMine) {
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0_AddEditOverlay_b__0);
			id_00 = __this.id;
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(44.0);
			layout = AottgUi.Layout("Column", null, "FlexEnd", "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 8.0, 8.0, 0.0, offsetX, 0.0, 0.0, 1.0);
			if (ui == null) goto label_058f8cc9;
			ui.Panel("default", __this_00, id_00, layout, null);
		}
		return;
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x57F8A10", Offset = "0x57F7A10", VA = "0x57F8A10")]
	private static GisketchMotionDefinition RevealMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c (Gisketch.Aottg2UI.Game.AottgProfileCard$$RevealMotion): clean
		GisketchMotionDefinition pGVar1;

		pGVar1 = AottgUi.Motion("fade", null, 0.14, 0.0, 0.0, 0);
		return pGVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileCard.c.

	// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_0: 2 lines keep C-only constructs
	private void Build_b__3_0(AottgUi card)
	{
		Action<AottgUi> pSVar1;
		GisketchLength pGVar2;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		GisketchNodeDefinition pGVar4;

		pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_1);
		pGVar2 = AottgUi.Percent(100.0);
		height = AottgUi.Points(250.0);
		pGVar3 = AottgUi.Layout("Column", "Center", "Center", null, null, 0.0, pGVar2, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar4 = card.Panel("profileCardBanner", pSVar1, "profile-card-banner", pGVar3, null);
			if (pGVar4 != null) {
				pGVar4.clip = true;
				pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_2);
				pGVar2 = AottgUi.Percent(100.0);
				pGVar3 = AottgUi.Layout("Column", null, null, null, null, 24.0, pGVar2, null, null, null, null, null, 0.0, 36.0, 0.0, 0.0, 0.0, 0.0, 32.0, 0.0, 0.0, 0.0, 1.0);
				card.Panel("profileCardBody", pSVar1, "profile-card-body", pGVar3, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_1: clean
	private void Build_b__3_1(AottgUi banner)
	{
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;
		String sprite;
		GisketchNodeDefinition pGVar4;
		GisketchMotionDefinition pGVar5;
		GisketchUIBindingDefinition __this_00;

		pGVar1 = AottgUi.Percent(100.0);
		pGVar2 = AottgUi.Points(250.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (banner != null) {
			banner.Skeleton("profile-card-banner-skeleton", pGVar3, "skeleton", "profile.identity.loading", null, null);
			sprite = AottgActiveProfile.BannerSprite();
			pGVar1 = AottgUi.Percent(100.0);
			pGVar2 = AottgUi.Points(250.0);
			pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			pGVar4 = banner.Image(sprite, "profileCardBannerImage", "profile-card-banner-image", pGVar3, null);
			if (pGVar4 != null) {
				pGVar4.active = false;
				pGVar5 = AottgUi.Motion("fade", null, 0.14, 0.0, 0.0, 0);
				pGVar4.enter = pGVar5;
				__this_00 = new GisketchUIBindingDefinition();
				if (__this_00 != null) {
					__this_00.sprite = "profile.bannerSprite";
					__this_00.visible = "profile.identity.ready";
					pGVar4.bind = __this_00;
					AottgProfileCard.AddEditOverlay(banner, "profile-card-banner-edit", "ChangeBanner", "profile-change-banner", this._isMine, 0.0);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_2: clean
	private void Build_b__3_2(AottgUi body)
	{
		bool isMine;

		AottgProfileCard.AddEditOverlay(body, "profile-card-details-edit", "EditDetails", "profile-edit-details", this._isMine, 72.0);
		isMine = this._isMine;
		AottgProfileCard.BuildIdentity(body, isMine);
		AottgProfileCard.BuildDetails(body);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgProfileCard.c();
		AottgProfileCard.c.__9 =(AottgProfileCard.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_2: 1 lines keep C-only constructs
	private void c__BuildIdentity_b__4_2(AottgUi names)
	{
		object @object;
		String pSVar1;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields pGVar5;
		Action<AottgUi> __this_00;

		pSVar1 = AottgActiveProfile.CharacterName();
		pGVar2 = AottgUi.Points(300.0);
		pGVar3 = AottgUi.Points(48.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		AottgProfileCard.BoundProfileText(names, pSVar1, "profileCardName", "profile-card-player-name", "profile.characterName", "profile-card-player-name-skeleton", pGVar4);
		pSVar1 = "default";
		pGVar5 = typeof(AottgProfileCard.c).static_fields;
		__this_00 = pGVar5.__9__4_4;
		if (__this_00 == null) {
			if ((typeof(AottgProfileCard.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgProfileCard.c).static_fields;
			}
			@object = (object)pGVar5.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_4);
			pGVar5 = typeof(AottgProfileCard.c).static_fields;
			pGVar5.__9__4_4 = __this_00;
		}
		pGVar2 = AottgUi.Percent(100.0);
		pGVar3 = AottgUi.Points(26.0);
		pGVar4 = AottgUi.Layout("Row", null, "Center", null, null, 6.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (names == null) {
			throw new NullReferenceException();
		}
		names.Panel(pSVar1, __this_00, "profile-card-handle-row", pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_4: clean
	private void c__BuildIdentity_b__4_4(AottgUi handle)
	{
		AottgBadgeIconRow __this_00;
		String value;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition skeletonLayout;

		__this_00 = new AottgBadgeIconRow("profile-card-badges", 20.0, 4.0, "profile.characterInfoJson", "profile.identity.ready");
		if (handle == null) {
			throw new NullReferenceException();
		}
		handle.Component((AottgComponent)__this_00);
		value = AottgActiveProfile.AccountName();
		width = AottgUi.Points(180.0);
		height = AottgUi.Points(24.0);
		skeletonLayout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		AottgProfileCard.BoundProfileText(handle, value, "profileCardHandle", "profile-card-auth-handle", "profile.accountName", "profile-card-auth-handle-skeleton", skeletonLayout);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_0: 2 lines keep C-only constructs
	private void c__BuildDetails_b__5_0(AottgUi columns)
	{
		object pIVar1;
		String pSVar2;
		Action<AottgUi> pSVar3;
		GisketchLength pGVar4;
		GisketchLength pGVar5;
		GisketchLayoutDefinition pGVar6;
		Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields pGVar7;

		pSVar2 = "default";
		pGVar7 = typeof(AottgProfileCard.c).static_fields;
		pSVar3 = pGVar7.__9__5_1;
		if (pSVar3 == null) {
			if ((typeof(AottgProfileCard.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgProfileCard.c).static_fields;
			}
			pIVar1 = (object)pGVar7.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_1);
			pGVar7 = typeof(AottgProfileCard.c).static_fields;
			pGVar7.__9__5_1 = pSVar3;
		}
		pGVar4 = AottgUi.Points(300.0);
		pGVar5 = AottgUi.Points(520.0);
		pGVar6 = AottgUi.Layout("Column", null, null, null, null, 6.0, null, null, pGVar4, null, pGVar5, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (columns == null) {
			throw new NullReferenceException();
		}
		columns.Panel(pSVar2, pSVar3, "profile-card-about", pGVar6, null);
		pSVar2 = "default";
		pGVar7 = typeof(AottgProfileCard.c).static_fields;
		pSVar3 = pGVar7.__9__5_2;
		if (pSVar3 == null) {
			if ((typeof(AottgProfileCard.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgProfileCard.c).static_fields;
			}
			pIVar1 = (object)pGVar7.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_2);
			pGVar7 = typeof(AottgProfileCard.c).static_fields;
			pGVar7.__9__5_2 = pSVar3;
		}
		pGVar4 = AottgUi.Points(300.0);
		pGVar5 = AottgUi.Points(300.0);
		pGVar6 = AottgUi.Layout("Column", null, null, null, null, 10.0, pGVar4, null, null, null, pGVar5, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		columns.Panel(pSVar2, pSVar3, "profile-card-socials", pGVar6, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_1: clean
	private void c__BuildDetails_b__5_1(AottgUi about)
	{
		String value;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition skeletonLayout;

		value = AottgActiveProfile.Bio();
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(86.0);
		skeletonLayout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		AottgProfileCard.BoundProfileText(about, value, "profileCardBodyText", "profile-card-bio", "profile.bio", "profile-card-bio-skeleton", skeletonLayout);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_2: 3 lines keep C-only constructs
	private void c__BuildDetails_b__5_2(AottgUi socials)
	{
		object pIVar1;
		String pSVar2;
		Action<AottgUi> pSVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		GisketchNodeDefinition pGVar6;
		GisketchMotionDefinition pGVar7;
		GisketchUIBindingDefinition pGVar8;
		Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields pGVar9;

		pSVar2 = "default";
		pGVar9 = typeof(AottgProfileCard.c).static_fields;
		pSVar3 = pGVar9.__9__5_3;
		if (pSVar3 == null) {
			if ((typeof(AottgProfileCard.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar9 = typeof(AottgProfileCard.c).static_fields;
			}
			pIVar1 = (object)pGVar9.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_3);
			pGVar9 = typeof(AottgProfileCard.c).static_fields;
			pGVar9.__9__5_3 = pSVar3;
		}
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Layout("Column", null, null, null, null, 10.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (socials != null) {
			pGVar6 = socials.Panel(pSVar2, pSVar3, "profile-card-socials-ready", pGVar5, null);
			if (pGVar6 != null) {
				pGVar6.active = false;
				pGVar7 = AottgProfileCard.RevealMotion();
				pGVar6.enter = pGVar7;
				pGVar8 = AottgProfileCard.Visible("profile.identity.ready");
				pGVar6.bind = pGVar8;
				pSVar2 = "default";
				pGVar9 = typeof(AottgProfileCard.c).static_fields;
				pSVar3 = pGVar9.__9__5_4;
				if (pSVar3 == null) {
					if ((typeof(AottgProfileCard.c)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(AottgProfileCard.c)) ;
						pGVar9 = typeof(AottgProfileCard.c).static_fields;
					}
					pIVar1 = (object)pGVar9.__9;
					pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_4);
					pGVar9 = typeof(AottgProfileCard.c).static_fields;
					pGVar9.__9__5_4 = pSVar3;
				}
				pGVar4 = AottgUi.Percent(100.0);
				pGVar5 = AottgUi.Layout("Column", null, null, null, null, 10.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pGVar6 = socials.Panel(pSVar2, pSVar3, "profile-card-socials-skeletons", pGVar5, null);
				if (pGVar6 != null) {
					pGVar6.active = false;
					pGVar7 = AottgProfileCard.RevealMotion();
					pGVar6.enter = pGVar7;
					pGVar8 = AottgProfileCard.Visible("profile.identity.loading");
					pGVar6.bind = pGVar8;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_3: 9 lines keep C-only constructs
	private void c__BuildDetails_b__5_3(AottgUi readySocials)
	{
		uint uVar1;
		String[] pSVar2;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;
		String* ppSVar4;

		pSVar2 = AottgActiveProfile.SocialLinks();
		if (readySocials == null) {
	label_058fa440: ;
			throw new NullReferenceException();
		}
		pGVar3 = readySocials.TextKey("MainMenu.Profile.NoSocialLinks", "profileCardBodyText", null, null, null);
		__this_00 = new GisketchUIBindingDefinition();
		if (__this_00 == null) goto label_058fa440;
		__this_00.visible = "profile.socials.empty";
		if (pGVar3 == null) goto label_058fa440;
		pGVar3.bind = __this_00;
		if (pSVar2 == null) goto label_058fa440;
		if ((int)pSVar2.Length < 1) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if ((pSVar2.Length & 0xffffffff) == 0) goto label_058fa445;
			ppSVar4 = pSVar2.m_Items;
		}
		AottgProfileCard.Social(readySocials, 0, *ppSVar4);
		if ((int)pSVar2.Length < 2) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if ((pSVar2.Length & 0xfffffffe) == 0) goto label_058fa445;
			ppSVar4 = pSVar2.m_Items + 1;
		}
		AottgProfileCard.Social(readySocials, 1, *ppSVar4);
		uVar1 = (uint)pSVar2.Length;
		if ((int)uVar1 < 3) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if (uVar1 < 3) goto label_058fa445;
			ppSVar4 = pSVar2.m_Items + 2;
		}
		AottgProfileCard.Social(readySocials, 2, *ppSVar4);
		if ((int)pSVar2.Length < 4) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if ((pSVar2.Length & 0xfffffffc) == 0) goto label_058fa445;
			ppSVar4 = pSVar2.m_Items + 3;
		}
		AottgProfileCard.Social(readySocials, 3, *ppSVar4);
		uVar1 = (uint)pSVar2.Length;
		if ((int)uVar1 < 5) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if (uVar1 < 5) goto label_058fa445;
			ppSVar4 = pSVar2.m_Items + 4;
		}
		AottgProfileCard.Social(readySocials, 4, *ppSVar4);
		uVar1 = (uint)pSVar2.Length;
		if ((int)uVar1 < 6) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if ((uVar1 & 0xfffffffe) < 6) goto label_058fa445;
			ppSVar4 = pSVar2.m_Items + 5;
		}
		AottgProfileCard.Social(readySocials, 5, *ppSVar4);
		uVar1 = (uint)pSVar2.Length;
		if ((int)uVar1 < 7) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if (uVar1 < 7) goto label_058fa445;
			ppSVar4 = pSVar2.m_Items + 6;
		}
		AottgProfileCard.Social(readySocials, 6, *ppSVar4);
		if ((int)pSVar2.Length < 8) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			if ((pSVar2.Length & 0xfffffff8) == 0) {
	label_058fa445: ;
				throw new IndexOutOfRangeException();
			}
			ppSVar4 = pSVar2.m_Items + 7;
		}
		AottgProfileCard.Social(readySocials, 7, *ppSVar4);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_4: clean
	private void c__BuildDetails_b__5_4(AottgUi loadingSocials)
	{
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;

		pGVar1 = AottgUi.Points(300.0);
		pGVar2 = AottgUi.Points(24.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (loadingSocials == null) {
			throw new NullReferenceException();
		}
		loadingSocials.Skeleton("profile-card-socials-skeleton-0", pGVar3, "skeleton", null, null, null);
		pGVar1 = AottgUi.Points(240.0);
		pGVar2 = AottgUi.Points(24.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		loadingSocials.Skeleton("profile-card-socials-skeleton-1", pGVar3, "skeleton", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass4_0__BuildIdentity_b__0(AottgUi row)
	{
		object @object;
		String pSVar1;
		Action<AottgUi> pSVar2;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields pGVar4;

		pSVar1 = "profileCardAvatarFrame";
		pSVar2 = this.__9__1;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__1);
			this.__9__1 = pSVar2;
		}
		width = AottgUi.Points(172.0);
		height = AottgUi.Points(172.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 86.0, 0.0, 0.0);
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Panel(pSVar1, pSVar2, "profile-card-avatar-frame", pGVar3, null);
		pSVar1 = "default";
		pGVar4 = typeof(AottgProfileCard.c).static_fields;
		pSVar2 = pGVar4.__9__4_2;
		if (pSVar2 == null) {
			if ((typeof(AottgProfileCard.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgProfileCard.c).static_fields;
			}
			@object = (object)pGVar4.__9;
			pSVar2 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_2);
			pGVar4 = typeof(AottgProfileCard.c).static_fields;
			pGVar4.__9__4_2 = pSVar2;
		}
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 2.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 22.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		row.Panel(pSVar1, pSVar2, "profile-card-name-stack", pGVar3, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass4_0__BuildIdentity_b__1(AottgUi frame)
	{
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		style = "profileCardAvatarBg";
		__this_00 = this.__9__3;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__3);
			this.__9__3 = __this_00;
		}
		width = AottgUi.Points(156.0);
		height = AottgUi.Points(156.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (frame == null) {
			throw new NullReferenceException();
		}
		frame.Panel(style, __this_00, "profile-card-avatar-bg", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__3: clean
	private void c__DisplayClass4_0__BuildIdentity_b__3(AottgUi bg)
	{
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;
		String sprite;
		GisketchNodeDefinition pGVar4;
		GisketchMotionDefinition pGVar5;
		GisketchUIBindingDefinition __this_00;

		pGVar1 = AottgUi.Points(156.0);
		pGVar2 = AottgUi.Points(156.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (bg != null) {
			bg.Skeleton("profile-card-avatar-skeleton", pGVar3, "skeleton", "profile.identity.loading", null, null);
			sprite = AottgActiveProfile.AvatarSprite();
			pGVar1 = AottgUi.Points(156.0);
			pGVar2 = AottgUi.Points(156.0);
			pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar4 = bg.Image(sprite, "profileCardAvatarImage", "profile-card-avatar", pGVar3, null);
			if (pGVar4 != null) {
				pGVar4.active = false;
				pGVar5 = AottgProfileCard.RevealMotion();
				pGVar4.enter = pGVar5;
				__this_00 = new GisketchUIBindingDefinition();
				if (__this_00 != null) {
					__this_00.sprite = "profile.avatarSprite";
					__this_00.visible = "profile.identity.ready";
					pGVar4.bind = __this_00;
					AottgProfileCard.AddEditOverlay(bg, "profile-card-avatar-edit", "ChangeAvatar", "profile-change-avatar", this.isMine, 0.0);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$.ctor: clean
	private void c__DisplayClass6_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass6_0__Social_b__0(AottgUi row)
	{
		String pSVar1;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		Action<AottgUi> __this_00;
		String pSVar5;
		GisketchLength minWidth;

		pSVar1 = (this.index).ToString();
		pSVar1 = String.Concat("profile-card-social-icon-", pSVar1);
		pGVar2 = AottgUi.Points(24.0);
		pGVar3 = AottgUi.Points(24.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (row == null) {
			throw new NullReferenceException();
		}
		row.Image("Icons/kenney-icons/share2", "profileCardSocialIcon", pSVar1, pGVar4, null);
		pSVar1 = "default";
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__1);
			this.__9__1 = __this_00;
		}
		pSVar5 = (this.index).ToString();
		pSVar5 = String.Concat("profile-card-social-label-", pSVar5);
		pGVar2 = AottgUi.Points(264.0);
		pGVar3 = AottgUi.Points(264.0);
		minWidth = AottgUi.Points(0.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, null, minWidth, null, pGVar3, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		row.Panel(pSVar1, __this_00, pSVar5, pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__1: clean
	private void c__DisplayClass6_0__Social_b__1(AottgUi label)
	{
		String text;
		String pSVar1;
		String pSVar2;
		int iStack_24;

		text = this.value;
		pSVar1 = (this.index).ToString();
		pSVar1 = String.Concat("profile-card-social-text-", pSVar1);
		iStack_24 = this.index;
		pSVar2 = iStack_24.ToString();
		pSVar2 = String.Concat("profile.social.", pSVar2);
		if (label == null) {
			throw new NullReferenceException();
		}
		label.Text(text, "profileCardSocialText", pSVar1, pSVar2, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$<AddEditOverlay>b__0: clean
	private void c__DisplayClass9_0__AddEditOverlay_b__0(AottgUi overlay)
	{
		String pSVar1;
		String id;
		String pSVar2;
		GisketchNodeDefinition node;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		String pSVar4;

		pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar1 = String.Concat("dialog.", this.dialogId);
		id = String.Concat(this.id, "-button");
		pSVar2 = String.Concat("MainMenu.Profile.", this.item, "Tooltip");
		pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
		if (overlay != null) {
			node = overlay.Button(5, pSVar4, pSVar1, id, pSVar2, null, "material-icons/edit");
			width = AottgUi.Points(36.0);
			height = AottgUi.Points(36.0);
			pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (node != null) {
				node.layout = pGVar3;
				pSVar4 = String.Concat("MainMenu.Profile.", this.item);
				pSVar4 = Aottg2GisketchLocale.Text(pSVar4);
				pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.Account");
				AottgSearchableExtensions.Searchable(node, pSVar4, null, "material-icons/edit", null, "account", pSVar1, false);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
