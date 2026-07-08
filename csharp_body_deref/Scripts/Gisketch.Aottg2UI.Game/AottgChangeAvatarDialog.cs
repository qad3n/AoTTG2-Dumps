using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200017E")]
[AottgDialog("profile-change-avatar")]
public sealed class AottgChangeAvatarDialog : AottgDialog
{
	[Token(Token = "0x4000891")]
	public const string Id = "profile-change-avatar";

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x170000FA")]
	protected override string Title
	{
		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x40EDA80", Offset = "0x40EDA80", VA = "0x40EDA80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FB")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x40EDAB0", Offset = "0x40EDAB0", VA = "0x40EDAB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	protected override string RootStyle
	{
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x40EDAE0", Offset = "0x40EDAE0", VA = "0x40EDAE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	protected override string BodyStyle
	{
		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x40EDB10", Offset = "0x40EDB10", VA = "0x40EDB10", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x40EDB40", Offset = "0x40EDB40", VA = "0x40EDB40", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x40EDB50", Offset = "0x40EDB50", VA = "0x40EDB50", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x40EDC30", Offset = "0x40EDC30", VA = "0x40EDC30", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x40EDDB0", Offset = "0x40EDDB0", VA = "0x40EDDB0", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x40EE380", Offset = "0x40EE380", VA = "0x40EE380", Slot = "17")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x40EE390", Offset = "0x40EE390", VA = "0x40EE390")]
	public AottgChangeAvatarDialog()
	{
	}
}
