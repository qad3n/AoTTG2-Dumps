using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000573")]
internal class CreateGameCustomPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x4001AF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected static IntSetting SelectedMap;

	[Token(Token = "0x4001AF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	protected static IntSetting SelectedLogic;

	[Token(Token = "0x4001AF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected string[] CurrentMapNames;

	[Token(Token = "0x4001AF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected string[] CurrentLogicNames;

	[Token(Token = "0x6003912")]
	[Address(RVA = "0x3F62000", Offset = "0x3F62000", VA = "0x3F62000", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003913")]
	[Address(RVA = "0x3F630E0", Offset = "0x3F630E0", VA = "0x3F630E0")]
	private void OnCustomButtonClick(string name, bool isMap)
	{
	}

	[Token(Token = "0x6003914")]
	[Address(RVA = "0x3F635A0", Offset = "0x3F635A0", VA = "0x3F635A0")]
	private void OnCustomOperationFinish(string name, bool isMap)
	{
	}

	[Token(Token = "0x6003915")]
	[Address(RVA = "0x3F641C0", Offset = "0x3F641C0", VA = "0x3F641C0")]
	public CreateGameCustomPanel()
	{
	}
}
