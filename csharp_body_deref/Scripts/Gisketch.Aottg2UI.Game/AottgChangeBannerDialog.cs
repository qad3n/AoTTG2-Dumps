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

[Token(Token = "0x20001B0")]
[AottgDialog("profile-change-banner")]
public sealed class AottgChangeBannerDialog : AottgDialog
{
	[Token(Token = "0x4000956")]
	public const string Id = "profile-change-banner";

	[Token(Token = "0x4000957")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000958")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x17000157")]
	protected override string Title
	{
		[Token(Token = "0x6000A2F")]
		[Address(RVA = "0x4420CD0", Offset = "0x4420CD0", VA = "0x4420CD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000158")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000A30")]
		[Address(RVA = "0x4420D00", Offset = "0x4420D00", VA = "0x4420D00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000159")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000A31")]
		[Address(RVA = "0x4420D30", Offset = "0x4420D30", VA = "0x4420D30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x4420D60", Offset = "0x4420D60", VA = "0x4420D60", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x4420D90", Offset = "0x4420D90", VA = "0x4420D90", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015C")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000A34")]
		[Address(RVA = "0x4420DA0", Offset = "0x4420DA0", VA = "0x4420DA0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x4420DB0", Offset = "0x4420DB0", VA = "0x4420DB0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x4420E70", Offset = "0x4420E70", VA = "0x4420E70", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x4421370", Offset = "0x4421370", VA = "0x4421370", Slot = "18")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x4421380", Offset = "0x4421380", VA = "0x4421380")]
	public AottgChangeBannerDialog()
	{
	}
}
