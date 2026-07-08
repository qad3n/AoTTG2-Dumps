using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000655")]
internal class MultiplayerMapPopup : BasePopup
{
	[Token(Token = "0x4001F16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected MultiplayerSettingsPopup _multiplayerSettingsPopup;

	[Token(Token = "0x4001F17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected MultiplayerLanPopup _lanPopup;

	[Token(Token = "0x17000C3D")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003FC3")]
		[Address(RVA = "0x3FF6370", Offset = "0x3FF6370", VA = "0x3FF6370", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C3E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003FC4")]
		[Address(RVA = "0x3FF63A0", Offset = "0x3FF63A0", VA = "0x3FF63A0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C3F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003FC5")]
		[Address(RVA = "0x3FF63B0", Offset = "0x3FF63B0", VA = "0x3FF63B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C40")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003FC6")]
		[Address(RVA = "0x3FF63C0", Offset = "0x3FF63C0", VA = "0x3FF63C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C41")]
	protected override string Title
	{
		[Token(Token = "0x6003FC7")]
		[Address(RVA = "0x3FF63D0", Offset = "0x3FF63D0", VA = "0x3FF63D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C42")]
	protected override bool HasPremadeContent
	{
		[Token(Token = "0x6003FC8")]
		[Address(RVA = "0x3FF6470", Offset = "0x3FF6470", VA = "0x3FF6470", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C43")]
	protected override float Width
	{
		[Token(Token = "0x6003FC9")]
		[Address(RVA = "0x3FF6480", Offset = "0x3FF6480", VA = "0x3FF6480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C44")]
	protected override float Height
	{
		[Token(Token = "0x6003FCA")]
		[Address(RVA = "0x3FF6490", Offset = "0x3FF6490", VA = "0x3FF6490", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C45")]
	protected override bool UseSound
	{
		[Token(Token = "0x6003FCB")]
		[Address(RVA = "0x3FF64A0", Offset = "0x3FF64A0", VA = "0x3FF64A0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003FCC")]
	[Address(RVA = "0x3FF64B0", Offset = "0x3FF64B0", VA = "0x3FF64B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FCD")]
	[Address(RVA = "0x3FF6B60", Offset = "0x3FF6B60", VA = "0x3FF6B60", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003FCE")]
	[Address(RVA = "0x3FF6D40", Offset = "0x3FF6D40", VA = "0x3FF6D40")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003FCF")]
	[Address(RVA = "0x3FF7050", Offset = "0x3FF7050", VA = "0x3FF7050")]
	public MultiplayerMapPopup()
	{
	}
}
