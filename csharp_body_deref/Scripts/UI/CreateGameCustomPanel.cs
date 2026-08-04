// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameCustomPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameCustomPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameCustomPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20005B8")]
internal class CreateGameCustomPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x4001C03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected static IntSetting SelectedMap;

	[Token(Token = "0x4001C04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	protected static IntSetting SelectedLogic;

	[Token(Token = "0x4001C05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected string[] CurrentMapNames;

	[Token(Token = "0x4001C06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected string[] CurrentLogicNames;

	[Token(Token = "0x6003B21")]
	[Address(RVA = "0x426FE80", Offset = "0x426FE80", VA = "0x426FE80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B22")]
	[Address(RVA = "0x4270F60", Offset = "0x4270F60", VA = "0x4270F60")]
	private void OnCustomButtonClick(string name, bool isMap)
	{
	}

	[Token(Token = "0x6003B23")]
	[Address(RVA = "0x4271420", Offset = "0x4271420", VA = "0x4271420")]
	private void OnCustomOperationFinish(string name, bool isMap)
	{
	}

	[Token(Token = "0x6003B24")]
	[Address(RVA = "0x4272040", Offset = "0x4272040", VA = "0x4272040")]
	public CreateGameCustomPanel()
	{
	}
}
