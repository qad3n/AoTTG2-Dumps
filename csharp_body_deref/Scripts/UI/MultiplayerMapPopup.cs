// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiplayerMapPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiplayerMapPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerMapPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007FC")]
internal class MultiplayerMapPopup : BasePopup
{
	[Token(Token = "0x400283F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected MultiplayerSettingsPopup _multiplayerSettingsPopup;

	[Token(Token = "0x4002840")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected MultiplayerLanPopup _lanPopup;

	[Token(Token = "0x17000DFD")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004D14")]
		[Address(RVA = "0x22927A0", Offset = "0x2290DA0", VA = "0x1822927A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DFE")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004D15")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DFF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004D16")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E00")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004D17")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E01")]
	protected override string Title
	{
		[Token(Token = "0x6004D18")]
		[Address(RVA = "0x22927D0", Offset = "0x2290DD0", VA = "0x1822927D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E02")]
	protected override bool HasPremadeContent
	{
		[Token(Token = "0x6004D19")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E03")]
	protected override float Width
	{
		[Token(Token = "0x6004D1A")]
		[Address(RVA = "0x225AC00", Offset = "0x2259200", VA = "0x18225AC00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E04")]
	protected override float Height
	{
		[Token(Token = "0x6004D1B")]
		[Address(RVA = "0x2278770", Offset = "0x2276D70", VA = "0x182278770", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E05")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004D1C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004D1D")]
	[Address(RVA = "0x22920B0", Offset = "0x22906B0", VA = "0x1822920B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D1E")]
	[Address(RVA = "0x2291ED0", Offset = "0x22904D0", VA = "0x182291ED0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004D1F")]
	[Address(RVA = "0x2291BC0", Offset = "0x22901C0", VA = "0x182291BC0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D20")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public MultiplayerMapPopup()
	{
	}
}
