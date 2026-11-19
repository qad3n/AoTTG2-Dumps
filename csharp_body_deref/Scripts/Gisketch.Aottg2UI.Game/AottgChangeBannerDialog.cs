// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeBannerDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001340")]
		[Address(RVA = "0x57FD350", Offset = "0x57FC350", VA = "0x57FD350", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021E")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001341")]
		[Address(RVA = "0x57FD380", Offset = "0x57FC380", VA = "0x57FD380", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6001342")]
		[Address(RVA = "0x57FD3B0", Offset = "0x57FC3B0", VA = "0x57FD3B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000220")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6001343")]
		[Address(RVA = "0x57FD3E0", Offset = "0x57FC3E0", VA = "0x57FD3E0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000221")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x6001344")]
		[Address(RVA = "0x57FD3F0", Offset = "0x57FC3F0", VA = "0x57FD3F0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000222")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001345")]
		[Address(RVA = "0x57FD400", Offset = "0x57FC400", VA = "0x57FD400", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000223")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001346")]
		[Address(RVA = "0x57FD410", Offset = "0x57FC410", VA = "0x57FD410", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x57FD4C0", Offset = "0x57FC4C0", VA = "0x57FD4C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x57FD9F0", Offset = "0x57FC9F0", VA = "0x57FD9F0", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x57FDA00", Offset = "0x57FCA00", VA = "0x57FDA00")]
	public AottgChangeBannerDialog()
	{
	}
}
