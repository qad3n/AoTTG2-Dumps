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

[Token(Token = "0x20006A1")]
internal class MultiplayerMapPopup : BasePopup
{
	[Token(Token = "0x400206B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected MultiplayerSettingsPopup _multiplayerSettingsPopup;

	[Token(Token = "0x400206C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected MultiplayerLanPopup _lanPopup;

	[Token(Token = "0x17000CB7")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004220")]
		[Address(RVA = "0x430A6B0", Offset = "0x430A6B0", VA = "0x430A6B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CB8")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004221")]
		[Address(RVA = "0x430A6E0", Offset = "0x430A6E0", VA = "0x430A6E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CB9")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004222")]
		[Address(RVA = "0x430A6F0", Offset = "0x430A6F0", VA = "0x430A6F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CBA")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004223")]
		[Address(RVA = "0x430A700", Offset = "0x430A700", VA = "0x430A700", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CBB")]
	protected override string Title
	{
		[Token(Token = "0x6004224")]
		[Address(RVA = "0x430A710", Offset = "0x430A710", VA = "0x430A710", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CBC")]
	protected override bool HasPremadeContent
	{
		[Token(Token = "0x6004225")]
		[Address(RVA = "0x430A7B0", Offset = "0x430A7B0", VA = "0x430A7B0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CBD")]
	protected override float Width
	{
		[Token(Token = "0x6004226")]
		[Address(RVA = "0x430A7C0", Offset = "0x430A7C0", VA = "0x430A7C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CBE")]
	protected override float Height
	{
		[Token(Token = "0x6004227")]
		[Address(RVA = "0x430A7D0", Offset = "0x430A7D0", VA = "0x430A7D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CBF")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004228")]
		[Address(RVA = "0x430A7E0", Offset = "0x430A7E0", VA = "0x430A7E0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004229")]
	[Address(RVA = "0x430A7F0", Offset = "0x430A7F0", VA = "0x430A7F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600422A")]
	[Address(RVA = "0x430AEA0", Offset = "0x430AEA0", VA = "0x430AEA0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x600422B")]
	[Address(RVA = "0x430B080", Offset = "0x430B080", VA = "0x430B080")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600422C")]
	[Address(RVA = "0x430B390", Offset = "0x430B390", VA = "0x430B390")]
	public MultiplayerMapPopup()
	{
	}
}
