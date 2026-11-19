// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterChangePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterChangePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterChangePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200080E")]
internal class CharacterChangePopup : CharacterPopup
{
	[Token(Token = "0x17000D66")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004D09")]
		[Address(RVA = "0x5BFDCC0", Offset = "0x5BFCCC0", VA = "0x5BFDCC0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x6004D0A")]
	[Address(RVA = "0x5BFDCD0", Offset = "0x5BFCCD0", VA = "0x5BFDCD0", Slot = "62")]
	protected override void SetAllowedCategories()
	{
	}

	[Token(Token = "0x6004D0B")]
	[Address(RVA = "0x5BFDD70", Offset = "0x5BFCD70", VA = "0x5BFDD70", Slot = "63")]
	protected override void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004D0C")]
	[Address(RVA = "0x5BFDEA0", Offset = "0x5BFCEA0", VA = "0x5BFDEA0", Slot = "64")]
	public override void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D0D")]
	[Address(RVA = "0x5BFE2E0", Offset = "0x5BFD2E0", VA = "0x5BFE2E0")]
	public CharacterChangePopup()
	{
	}
}
