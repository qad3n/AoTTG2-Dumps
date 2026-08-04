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

[Token(Token = "0x20006C7")]
internal class MapEditorCustomLogicPopup : PromptPopup
{
	[Token(Token = "0x40020F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _logic;

	[Token(Token = "0x40020F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _logicInput;

	[Token(Token = "0x40020F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x40020F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _error;

	[Token(Token = "0x17000D31")]
	protected override string Title
	{
		[Token(Token = "0x600439A")]
		[Address(RVA = "0x4325B80", Offset = "0x4325B80", VA = "0x4325B80", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D32")]
	protected override float Width
	{
		[Token(Token = "0x600439B")]
		[Address(RVA = "0x4325BB0", Offset = "0x4325BB0", VA = "0x4325BB0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D33")]
	protected override float Height
	{
		[Token(Token = "0x600439C")]
		[Address(RVA = "0x4325BC0", Offset = "0x4325BC0", VA = "0x4325BC0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D34")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600439D")]
		[Address(RVA = "0x4325BD0", Offset = "0x4325BD0", VA = "0x4325BD0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D35")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600439E")]
		[Address(RVA = "0x4325BE0", Offset = "0x4325BE0", VA = "0x4325BE0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600439F")]
	[Address(RVA = "0x4325BF0", Offset = "0x4325BF0", VA = "0x4325BF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60043A0")]
	[Address(RVA = "0x4325E40", Offset = "0x4325E40", VA = "0x4325E40", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60043A1")]
	[Address(RVA = "0x43260E0", Offset = "0x43260E0", VA = "0x43260E0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60043A2")]
	[Address(RVA = "0x43264C0", Offset = "0x43264C0", VA = "0x43264C0")]
	public MapEditorCustomLogicPopup()
	{
	}
}
