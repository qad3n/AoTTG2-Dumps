// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameModePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameModePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameModePanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005C3")]
internal class CreateGameModePanel : CreateGameCategoryPanel
{
	[Token(Token = "0x17000B60")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003B43")]
		[Address(RVA = "0x42755C0", Offset = "0x42755C0", VA = "0x42755C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003B44")]
	[Address(RVA = "0x42755D0", Offset = "0x42755D0", VA = "0x42755D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B45")]
	[Address(RVA = "0x42797A0", Offset = "0x42797A0", VA = "0x42797A0")]
	public CreateGameModePanel()
	{
	}
}
