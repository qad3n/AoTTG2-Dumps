// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameMiscPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameMiscPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameMiscPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005C2")]
internal class CreateGameMiscPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x17000B5E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003B3F")]
		[Address(RVA = "0x42740F0", Offset = "0x42740F0", VA = "0x42740F0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B5F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003B40")]
		[Address(RVA = "0x4274100", Offset = "0x4274100", VA = "0x4274100", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003B41")]
	[Address(RVA = "0x4274110", Offset = "0x4274110", VA = "0x4274110", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B42")]
	[Address(RVA = "0x42755B0", Offset = "0x42755B0", VA = "0x42755B0")]
	public CreateGameMiscPanel()
	{
	}
}
