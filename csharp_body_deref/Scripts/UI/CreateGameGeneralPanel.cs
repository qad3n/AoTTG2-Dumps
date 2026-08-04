// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameGeneralPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameGeneralPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameGeneralPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20005BE")]
internal class CreateGameGeneralPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x4001C12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly StringSetting AddonSelection;

	[Token(Token = "0x17000B5D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003B32")]
		[Address(RVA = "0x4272210", Offset = "0x4272210", VA = "0x4272210", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003B33")]
	[Address(RVA = "0x4272220", Offset = "0x4272220", VA = "0x4272220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B34")]
	[Address(RVA = "0x4273D60", Offset = "0x4273D60", VA = "0x4273D60")]
	private static void RemoveAddon(ListSetting<StringSetting> addons, string addonName)
	{
	}

	[Token(Token = "0x6003B35")]
	[Address(RVA = "0x4273B30", Offset = "0x4273B30", VA = "0x4273B30")]
	public static void SetDefaultMisc()
	{
	}

	[Token(Token = "0x6003B36")]
	[Address(RVA = "0x4273E60", Offset = "0x4273E60", VA = "0x4273E60")]
	public CreateGameGeneralPanel()
	{
	}
}
