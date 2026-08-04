// ==================== AoTTG2 cross-reference ====================
// Type: UI.LeaderboardPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LeaderboardPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000698")]
internal class LeaderboardPopup : BasePopup
{
	[Token(Token = "0x4002046")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting CurrentCategory;

	[Token(Token = "0x4002047")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CurrentSubcategory;

	[Token(Token = "0x17000C9C")]
	protected override string Title
	{
		[Token(Token = "0x60041D1")]
		[Address(RVA = "0x4305590", Offset = "0x4305590", VA = "0x4305590", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C9D")]
	protected override float Width
	{
		[Token(Token = "0x60041D2")]
		[Address(RVA = "0x4305630", Offset = "0x4305630", VA = "0x4305630", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9E")]
	protected override float Height
	{
		[Token(Token = "0x60041D3")]
		[Address(RVA = "0x4305640", Offset = "0x4305640", VA = "0x4305640", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9F")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60041D4")]
		[Address(RVA = "0x4305650", Offset = "0x4305650", VA = "0x4305650", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CA0")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60041D5")]
		[Address(RVA = "0x4305660", Offset = "0x4305660", VA = "0x4305660", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CA1")]
	protected override bool UseSound
	{
		[Token(Token = "0x60041D6")]
		[Address(RVA = "0x4305690", Offset = "0x4305690", VA = "0x4305690", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60041D7")]
	[Address(RVA = "0x43056A0", Offset = "0x43056A0", VA = "0x43056A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60041D8")]
	[Address(RVA = "0x4305820", Offset = "0x4305820", VA = "0x4305820", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60041D9")]
	[Address(RVA = "0x43058C0", Offset = "0x43058C0", VA = "0x43058C0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60041DA")]
	[Address(RVA = "0x4305930", Offset = "0x4305930", VA = "0x4305930")]
	public LeaderboardPopup()
	{
	}
}
