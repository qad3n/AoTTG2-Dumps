// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterChangePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterChangePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterChangePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000766")]
internal class CharacterChangePopup : CharacterPopup
{
	[Token(Token = "0x17000CEA")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x60047ED")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x60047EE")]
	[Address(RVA = "0x221E6E0", Offset = "0x221CCE0", VA = "0x18221E6E0", Slot = "62")]
	protected override void SetAllowedCategories()
	{
	}

	[Token(Token = "0x60047EF")]
	[Address(RVA = "0x221E790", Offset = "0x221CD90", VA = "0x18221E790", Slot = "63")]
	protected override void SetupBottomButtons()
	{
	}

	[Token(Token = "0x60047F0")]
	[Address(RVA = "0x221E290", Offset = "0x221C890", VA = "0x18221E290", Slot = "64")]
	public override void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60047F1")]
	[Address(RVA = "0x221E8F0", Offset = "0x221CEF0", VA = "0x18221E8F0")]
	public CharacterChangePopup()
	{
	}
}
