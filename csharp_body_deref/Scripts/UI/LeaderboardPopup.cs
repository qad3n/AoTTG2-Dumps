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

[Token(Token = "0x20007F3")]
internal class LeaderboardPopup : BasePopup
{
	[Token(Token = "0x400281E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting CurrentCategory;

	[Token(Token = "0x400281F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CurrentSubcategory;

	[Token(Token = "0x17000DE2")]
	protected override string Title
	{
		[Token(Token = "0x6004CC6")]
		[Address(RVA = "0x228D440", Offset = "0x228BA40", VA = "0x18228D440", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DE3")]
	protected override float Width
	{
		[Token(Token = "0x6004CC7")]
		[Address(RVA = "0x21BB440", Offset = "0x21B9A40", VA = "0x1821BB440", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DE4")]
	protected override float Height
	{
		[Token(Token = "0x6004CC8")]
		[Address(RVA = "0x228D430", Offset = "0x228BA30", VA = "0x18228D430", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DE5")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004CC9")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DE6")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004CCA")]
		[Address(RVA = "0x228D400", Offset = "0x228BA00", VA = "0x18228D400", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DE7")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004CCB")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004CCC")]
	[Address(RVA = "0x228D0F0", Offset = "0x228B6F0", VA = "0x18228D0F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004CCD")]
	[Address(RVA = "0x228D050", Offset = "0x228B650", VA = "0x18228D050", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004CCE")]
	[Address(RVA = "0x228CFF0", Offset = "0x228B5F0", VA = "0x18228CFF0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004CCF")]
	[Address(RVA = "0x228D320", Offset = "0x228B920", VA = "0x18228D320")]
	public LeaderboardPopup()
	{
	}
}
