// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewCard
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewCard.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000321")]
internal sealed class AottgProfilePreviewCard : AottgComponent
{
	[Token(Token = "0x4000FB7")]
	public const string AvatarImageId = "profile-preview-avatar-image";

	[Token(Token = "0x4000FB8")]
	public const string BannerImageId = "profile-preview-banner-image";

	[Token(Token = "0x4000FB9")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _avatarSprite;

	[Token(Token = "0x4000FBA")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _bannerSprite;

	[Token(Token = "0x60013A6")]
	[Address(RVA = "0x5804820", Offset = "0x5803820", VA = "0x5804820")]
	public AottgProfilePreviewCard(string avatarSprite, string bannerSprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewCard.c (Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$.ctor): clean
		base();
		this._avatarSprite = avatarSprite;
		this._bannerSprite = bannerSprite;
		return;
	}

	[Token(Token = "0x60013A7")]
	[Address(RVA = "0x5805030", Offset = "0x5804030", VA = "0x5805030", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewCard.c (Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$Build): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_0);
		width = AottgUi.Points(480.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("profilePreviewCard", __this_00, "profile-preview-card", layout, null);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewCard.c.

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_0: 2 lines keep C-only constructs
	private void Build_b__5_0(AottgUi card)
	{
		Action<AottgUi> pSVar1;
		GisketchLength pGVar2;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;
		GisketchNodeDefinition pGVar4;

		pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_1);
		pGVar2 = AottgUi.Percent(100.0);
		height = AottgUi.Points(154.0);
		pGVar3 = AottgUi.Layout("Column", "Center", "Center", null, null, 0.0, pGVar2, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar4 = card.Panel("profilePreviewBannerFrame", pSVar1, "profile-preview-banner-frame", pGVar3, null);
			if (pGVar4 != null) {
				pGVar4.clip = true;
				pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_2);
				pGVar2 = AottgUi.Percent(100.0);
				pGVar3 = AottgUi.Layout("Row", null, "Center", null, null, 14.0, pGVar2, null, null, null, null, null, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				card.Panel("profilePreviewBody", pSVar1, "profile-preview-body", pGVar3, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_1: clean
	private void Build_b__5_1(AottgUi banner)
	{
		String sprite;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		sprite = this._bannerSprite;
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(270.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (banner == null) {
			throw new NullReferenceException();
		}
		banner.Image(sprite, "profilePreviewBanner", "profile-preview-banner-image", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_2: 2 lines keep C-only constructs
	private void Build_b__5_2(AottgUi body)
	{
		object @object;
		String style;
		Action<AottgUi> pSVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;
		Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_StaticFields pGVar3;

		pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_3);
		width = AottgUi.Points(104.0);
		height = AottgUi.Points(104.0);
		pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 28.0, 0.0, 0.0);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Panel("profilePreviewAvatarFrame", pSVar1, "profile-preview-avatar-frame", pGVar2, null);
		style = "default";
		pGVar3 = typeof(AottgProfilePreviewCard.c).static_fields;
		pSVar1 = pGVar3.__9__5_4;
		if (pSVar1 == null) {
			if ((typeof(AottgProfilePreviewCard.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgProfilePreviewCard.c).static_fields;
			}
			@object = (object)pGVar3.__9;
			pSVar1 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c_Build_b__5_4);
			pGVar3 = typeof(AottgProfilePreviewCard.c).static_fields;
			pGVar3.__9__5_4 = pSVar1;
		}
		pGVar2 = AottgUi.Layout("Column", null, null, null, null, 2.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		body.Panel(style, pSVar1, "profile-preview-names", pGVar2, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_3: 1 lines keep C-only constructs
	private void Build_b__5_3(AottgUi frame)
	{
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_5);
		width = AottgUi.Points(92.0);
		height = AottgUi.Points(92.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (frame == null) {
			throw new NullReferenceException();
		}
		frame.Panel("profileCardAvatarBg", __this_00, "profile-preview-avatar-bg", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_5: clean
	private void Build_b__5_5(AottgUi bg)
	{
		String sprite;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		sprite = this._avatarSprite;
		width = AottgUi.Points(92.0);
		height = AottgUi.Points(92.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (bg == null) {
			throw new NullReferenceException();
		}
		bg.Image(sprite, "profilePreviewAvatar", "profile-preview-avatar-image", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgProfilePreviewCard.c)) ;
		__this = new Object();
		AottgProfilePreviewCard.c.__9 =(AottgProfilePreviewCard.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$<Build>b__5_4: clean
	private void c__Build_b__5_4(AottgUi names)
	{
		String pSVar1;

		pSVar1 = AottgActiveProfile.CharacterName();
		if (names == null) {
			throw new NullReferenceException();
		}
		names.Text(pSVar1, "profilePreviewName", null, "profile.characterName", null);
		pSVar1 = AottgActiveProfile.AccountName();
		names.Text(pSVar1, "profilePreviewHandle", null, "profile.accountName", null);
		return;
	}
}
