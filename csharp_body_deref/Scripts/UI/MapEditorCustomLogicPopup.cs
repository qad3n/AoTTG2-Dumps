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

[Token(Token = "0x2000825")]
internal class MapEditorCustomLogicPopup : PromptPopup
{
	[Token(Token = "0x40028D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _logic;

	[Token(Token = "0x40028DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _logicInput;

	[Token(Token = "0x40028DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x40028DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _error;

	[Token(Token = "0x17000E79")]
	protected override string Title
	{
		[Token(Token = "0x6004EA6")]
		[Address(RVA = "0x22AD410", Offset = "0x22ABA10", VA = "0x1822AD410", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E7A")]
	protected override float Width
	{
		[Token(Token = "0x6004EA7")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E7B")]
	protected override float Height
	{
		[Token(Token = "0x6004EA8")]
		[Address(RVA = "0x21C1EA0", Offset = "0x21C04A0", VA = "0x1821C1EA0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E7C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004EA9")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E7D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004EAA")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004EAB")]
	[Address(RVA = "0x22ACDB0", Offset = "0x22AB3B0", VA = "0x1822ACDB0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004EAC")]
	[Address(RVA = "0x22AD000", Offset = "0x22AB600", VA = "0x1822AD000", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004EAD")]
	[Address(RVA = "0x22AC970", Offset = "0x22AAF70", VA = "0x1822AC970")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004EAE")]
	[Address(RVA = "0x22AD370", Offset = "0x22AB970", VA = "0x1822AD370")]
	public MapEditorCustomLogicPopup()
	{
	}
}
