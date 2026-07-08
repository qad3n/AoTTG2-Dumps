using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200017F")]
[AottgDialog("profile-change-banner")]
public sealed class AottgChangeBannerDialog : AottgDialog
{
	[Token(Token = "0x4000894")]
	public const string Id = "profile-change-banner";

	[Token(Token = "0x4000895")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000896")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x17000101")]
	protected override string Title
	{
		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x40EFA10", Offset = "0x40EFA10", VA = "0x40EFA10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000102")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x40EFA40", Offset = "0x40EFA40", VA = "0x40EFA40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000103")]
	protected override string RootStyle
	{
		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x40EFA70", Offset = "0x40EFA70", VA = "0x40EFA70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	protected override string BodyStyle
	{
		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x40EFAA0", Offset = "0x40EFAA0", VA = "0x40EFAA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000105")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x40EFAD0", Offset = "0x40EFAD0", VA = "0x40EFAD0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60008BF")]
		[Address(RVA = "0x40EFAE0", Offset = "0x40EFAE0", VA = "0x40EFAE0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000107")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60008C0")]
		[Address(RVA = "0x40EFAF0", Offset = "0x40EFAF0", VA = "0x40EFAF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x40EFBB0", Offset = "0x40EFBB0", VA = "0x40EFBB0", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x40F00B0", Offset = "0x40F00B0", VA = "0x40F00B0", Slot = "17")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x40F00C0", Offset = "0x40F00C0", VA = "0x40F00C0")]
	public AottgChangeBannerDialog()
	{
	}
}
