// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorCustomLogicPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorCustomLogicPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomLogicPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008A3")]
internal class MapEditorCustomLogicPopup : PromptPopup
{
	[Token(Token = "0x4002B92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _logic;

	[Token(Token = "0x4002B93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _logicInput;

	[Token(Token = "0x4002B94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002B95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _error;

	[Token(Token = "0x17000E7A")]
	protected override string Title
	{
		[Token(Token = "0x6005243")]
		[Address(RVA = "0x5C70CC0", Offset = "0x5C6FCC0", VA = "0x5C70CC0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E7B")]
	protected override float Width
	{
		[Token(Token = "0x6005244")]
		[Address(RVA = "0x5C70D60", Offset = "0x5C6FD60", VA = "0x5C70D60", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E7C")]
	protected override float Height
	{
		[Token(Token = "0x6005245")]
		[Address(RVA = "0x5C70D70", Offset = "0x5C6FD70", VA = "0x5C70D70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E7D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005246")]
		[Address(RVA = "0x5C70D80", Offset = "0x5C6FD80", VA = "0x5C70D80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E7E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005247")]
		[Address(RVA = "0x5C70D90", Offset = "0x5C6FD90", VA = "0x5C70D90", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6005248")]
	[Address(RVA = "0x5C70DA0", Offset = "0x5C6FDA0", VA = "0x5C70DA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005249")]
	[Address(RVA = "0x5C70FF0", Offset = "0x5C6FFF0", VA = "0x5C70FF0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600524A")]
	[Address(RVA = "0x5C71290", Offset = "0x5C70290", VA = "0x5C71290")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600524B")]
	[Address(RVA = "0x5C71680", Offset = "0x5C70680", VA = "0x5C71680")]
	public MapEditorCustomLogicPopup()
	{
	}
}
