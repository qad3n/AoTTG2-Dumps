// ==================== AoTTG2 cross-reference ====================
// Type: UI.LeaderboardPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/LeaderboardPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200087F")]
internal class LeaderboardPopup : BasePopup
{
	[Token(Token = "0x17000E27")]
	protected override string Title
	{
		[Token(Token = "0x60050FA")]
		[Address(RVA = "0x5C56D80", Offset = "0x5C55D80", VA = "0x5C56D80", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E28")]
	protected override float Width
	{
		[Token(Token = "0x60050FB")]
		[Address(RVA = "0x5C56E20", Offset = "0x5C55E20", VA = "0x5C56E20", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E29")]
	protected override float Height
	{
		[Token(Token = "0x60050FC")]
		[Address(RVA = "0x5C56E30", Offset = "0x5C55E30", VA = "0x5C56E30", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E2A")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60050FD")]
		[Address(RVA = "0x5C56E40", Offset = "0x5C55E40", VA = "0x5C56E40", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E2B")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60050FE")]
		[Address(RVA = "0x5C56E50", Offset = "0x5C55E50", VA = "0x5C56E50", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E2C")]
	protected override bool UseSound
	{
		[Token(Token = "0x60050FF")]
		[Address(RVA = "0x5C56E80", Offset = "0x5C55E80", VA = "0x5C56E80", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005100")]
	[Address(RVA = "0x5C56E90", Offset = "0x5C55E90", VA = "0x5C56E90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005101")]
	[Address(RVA = "0x5C57010", Offset = "0x5C56010", VA = "0x5C57010", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6005102")]
	[Address(RVA = "0x5C570B0", Offset = "0x5C560B0", VA = "0x5C570B0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6005103")]
	[Address(RVA = "0x5C57120", Offset = "0x5C56120", VA = "0x5C57120")]
	public LeaderboardPopup()
	{
	}
}
