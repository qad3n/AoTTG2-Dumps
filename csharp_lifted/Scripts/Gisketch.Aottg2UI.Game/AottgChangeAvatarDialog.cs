// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000313")]
[AottgDialog("profile-change-avatar")]
public sealed class AottgChangeAvatarDialog : AottgDialog
{
	[Token(Token = "0x4000F8F")]
	public const string Id = "profile-change-avatar";

	[Token(Token = "0x4000F90")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000F91")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x17000214")]
	protected override string Title
	{
		[Token(Token = "0x6001333")]
		[Address(RVA = "0x57FB550", Offset = "0x57FA550", VA = "0x57FB550", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.ChangeAvatar");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000215")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001334")]
		[Address(RVA = "0x57FB5B0", Offset = "0x57FA5B0", VA = "0x57FB5B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_TitleIcon): clean
			return "material-icons/edit";
		}
	}

	[Token(Token = "0x17000216")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001335")]
		[Address(RVA = "0x57FB5E0", Offset = "0x57FA5E0", VA = "0x57FB5E0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_RootStyle): clean
			return "clear";
		}
	}

	[Token(Token = "0x17000217")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6001336")]
		[Address(RVA = "0x57FB610", Offset = "0x57FA610", VA = "0x57FB610", Slot = "8")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_BodyStyle): clean
			return "clear";
		}
	}

	[Token(Token = "0x17000218")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6001337")]
		[Address(RVA = "0x57FB640", Offset = "0x57FA640", VA = "0x57FB640", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000219")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x6001338")]
		[Address(RVA = "0x57FB650", Offset = "0x57FA650", VA = "0x57FB650", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_GuardUnsavedChanges): clean
			return true;
		}
	}

	[Token(Token = "0x1700021A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x57FB660", Offset = "0x57FA660", VA = "0x57FB660", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_RootLayout): clean
			GisketchLayoutDefinition pGVar1;

			return pGVar1;
		}
	}

	[Token(Token = "0x1700021B")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x600133A")]
		[Address(RVA = "0x57FB730", Offset = "0x57FA730", VA = "0x57FB730", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Row", null, "FlexStart", null, null, 24.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x57FB890", Offset = "0x57FA890", VA = "0x57FB890", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$BuildBody): 8 lines keep C-only constructs
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
		pGVar1 = AottgChangeAvatarDialog.Avatars;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		iStack_84 = (int32_t)pGVar1.Length;
		pSVar4 = iStack_84.ToString();
		pGVar1 = AottgChangeAvatarDialog.Banners;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		iStack_84 = (int32_t)pGVar1.Length;
		pSVar5 = iStack_84.ToString();
		pSVar4 = String.Concat("avatars=", pSVar4, " banners=", pSVar5);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GStack_50 = GisketchUiPerfLog.Time("Dialog.ChangeAvatar.BuildBody", pSVar4);
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
		body.FormDraft("profile-avatar-key", AottgProfileDialogSelection.AvatarKey, "Avatar", null);
		pSVar4 = this.get_Title();
		pSVar5 = this.get_TitleIcon();
		pGStack_80 = body;
		items = ProfileDialogUi.GridItems(AottgChangeAvatarDialog.Avatars);
		pSVar6 = Aottg2GisketchLocale.Text("MainMenu.Profile.SearchAvatars");
		__this_01 = new Action<GisketchActionContext, GisketchGridPickerItem>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_ProfileDialogUi_SelectAvatar);
		__this_02 = new GisketchGridPicker("avatar-picker", items, 4, 132.0, 164.0, 104.0, 104.0, pSVar6, __this_01, 420.0, true, false, true);
		pSVar3 = "profile.save.avatar";
		pSVar6 = "profile-avatar-picker-dialog";
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

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x57FC100", Offset = "0x57FB100", VA = "0x57FC100", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$BuildHeader): clean
		return;
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x57FC110", Offset = "0x57FB110", VA = "0x57FC110")]
	public AottgChangeAvatarDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c (Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c.

	// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$.cctor: 2 lines keep C-only constructs
	static AottgChangeAvatarDialog()
	{
		AottgProfilePreset[] pGVar2;
		AottgChangeAvatarDialog* ppGVar3;

		if (g_data_07545601 == false) {
			ppGVar3 = &typeof(AottgChangeAvatarDialog);
			g_data_07545601 = true;
		}
		pGVar2 = AottgProfilePresetCatalog.Avatars();
		AottgChangeAvatarDialog.Avatars = pGVar2;
		pGVar2 = AottgProfilePresetCatalog.Banners();
		AottgChangeAvatarDialog.Banners = pGVar2;
		return;
	}
}
