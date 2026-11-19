// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeBannerDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000314")]
[AottgDialog("profile-change-banner")]
public sealed class AottgChangeBannerDialog : AottgDialog
{
	[Token(Token = "0x4000F92")]
	public const string Id = "profile-change-banner";

	[Token(Token = "0x4000F93")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000F94")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x1700021C")]
	protected override string Title
	{
		[Token(Token = "0x600133F")]
		[Address(RVA = "0x57FD2F0", Offset = "0x57FC2F0", VA = "0x57FD2F0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.ChangeBanner");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700021D")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001340")]
		[Address(RVA = "0x57FD350", Offset = "0x57FC350", VA = "0x57FD350", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_TitleIcon): clean
			return "material-icons/edit";
		}
	}

	[Token(Token = "0x1700021E")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001341")]
		[Address(RVA = "0x57FD380", Offset = "0x57FC380", VA = "0x57FD380", Slot = "6")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_RootStyle): clean
			return "clear";
		}
	}

	[Token(Token = "0x1700021F")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6001342")]
		[Address(RVA = "0x57FD3B0", Offset = "0x57FC3B0", VA = "0x57FD3B0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyStyle): clean
			return "clear";
		}
	}

	[Token(Token = "0x17000220")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6001343")]
		[Address(RVA = "0x57FD3E0", Offset = "0x57FC3E0", VA = "0x57FD3E0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000221")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x6001344")]
		[Address(RVA = "0x57FD3F0", Offset = "0x57FC3F0", VA = "0x57FD3F0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_GuardUnsavedChanges): clean
			return true;
		}
	}

	[Token(Token = "0x17000222")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001345")]
		[Address(RVA = "0x57FD400", Offset = "0x57FC400", VA = "0x57FD400", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_RootLayout): clean
			GisketchLayoutDefinition pGVar1;

			return pGVar1;
		}
	}

	[Token(Token = "0x17000223")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001346")]
		[Address(RVA = "0x57FD410", Offset = "0x57FC410", VA = "0x57FD410", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Row", null, "FlexStart", null, null, 24.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x57FD4C0", Offset = "0x57FC4C0", VA = "0x57FD4C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$BuildBody): 8 lines keep C-only constructs
		AottgProfilePreset[] pGVar1;
		String pSVar3;
		AottgUi __this_00;
		String pSVar4;
		String pSVar5;
		GisketchGridPickerItem[] items;
		String pSVar6;
		Action<GisketchActionContext, GisketchGridPickerItem> __this_01;
		GisketchGridPicker __this_02;
		AottgProfilePickerPanel __this_03;
		AottgProfilePreviewPanel __this_04;
		int iStack_84;
		AottgUi pGStack_80;
		GisketchUiPerfLog.Scope GStack_78;
		GisketchUiPerfLog.Scope GStack_50;

		GStack_78._startMs._0_4_ = 0;
		GStack_78._startMs._4_2_ = 0;
		GStack_78._startMs._6_2_ = 0;
		GStack_78._enabled = false;
		GStack_78._hotLoop = false;
		GStack_78._26_6_ = 0;
		GStack_78._area = null;
		GStack_78._detail = null;
		pGVar1 = AottgChangeBannerDialog.Avatars;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		iStack_84 = (int32_t)pGVar1.Length;
		pSVar4 = iStack_84.ToString();
		pGVar1 = AottgChangeBannerDialog.Banners;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		iStack_84 = (int32_t)pGVar1.Length;
		pSVar5 = iStack_84.ToString();
		pSVar4 = String.Concat("avatars=", pSVar4, " banners=", pSVar5);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GStack_50 = GisketchUiPerfLog.Time("Dialog.ChangeBanner.BuildBody", pSVar4);
		GStack_78._startMs = GStack_50._startMs;
		GStack_78._enabled = GStack_50._enabled;
		GStack_78._hotLoop = GStack_50._hotLoop;
		GStack_78._26_6_ = GStack_50._26_6_;
		GStack_78._area = GStack_50._area;
		GStack_78._detail = GStack_50._detail;
		GStack_50._area = null;
		GStack_50._detail = (String)&GStack_78;
		pSVar4 = AottgActiveProfile.AvatarKey();
		AottgProfileDialogSelection.AvatarKey = pSVar4;
		pSVar4 = AottgActiveProfile.BannerKey();
		AottgProfileDialogSelection.BannerKey = pSVar4;
		if (body == null) {
			throw new NullReferenceException();
		}
		body.FormDraft("profile-banner-key", AottgProfileDialogSelection.BannerKey, "Banner", null);
		pSVar4 = this.get_Title();
		pSVar5 = this.get_TitleIcon();
		pGStack_80 = body;
		items = ProfileDialogUi.GridItems(AottgChangeBannerDialog.Banners);
		pSVar6 = Aottg2GisketchLocale.Text("MainMenu.Profile.SearchBanners");
		__this_01 = new Action<GisketchActionContext, GisketchGridPickerItem>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_ProfileDialogUi_SelectBanner);
		__this_02 = new GisketchGridPicker("banner-picker", items, 2, 254.0, 154.0, 220.0, 92.0, pSVar6, __this_01, 420.0, true, false, true);
		pSVar3 = "profile.save.banner";
		pSVar6 = "profile-banner-picker-dialog";
		__this_03 = new AottgProfilePickerPanel();
		__this_03._id = pSVar6;
		__this_03._title = pSVar4;
		__this_03._titleIcon = pSVar5;
		__this_03._picker = (AottgComponent)__this_02;
		__this_03._saveActionId = pSVar3;
		pGStack_80.Component((AottgComponent)__this_03);
		pSVar4 = AottgActiveProfile.AvatarSprite();
		pSVar5 = AottgActiveProfile.BannerSprite();
		__this_00 = pGStack_80;
		__this_04 = new AottgProfilePreviewPanel();
		__this_04._avatarSprite = pSVar4;
		__this_04._bannerSprite = pSVar5;
		__this_00.Component((AottgComponent)__this_04);
		GStack_78.Dispose();
		return;
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x57FD9F0", Offset = "0x57FC9F0", VA = "0x57FD9F0", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$BuildHeader): clean
		return;
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x57FDA00", Offset = "0x57FCA00", VA = "0x57FDA00")]
	public AottgChangeBannerDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c.

	// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$.cctor: 2 lines keep C-only constructs
	static AottgChangeBannerDialog()
	{
		AottgProfilePreset[] pGVar2;
		AottgChangeBannerDialog* ppGVar3;

		if (g_data_07545607 == false) {
			ppGVar3 = &typeof(AottgChangeBannerDialog);
			g_data_07545607 = true;
		}
		pGVar2 = AottgProfilePresetCatalog.Avatars();
		AottgChangeBannerDialog.Avatars = pGVar2;
		pGVar2 = AottgProfilePresetCatalog.Banners();
		AottgChangeBannerDialog.Banners = pGVar2;
		return;
	}
}
