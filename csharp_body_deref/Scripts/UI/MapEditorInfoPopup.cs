// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorInfoPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorInfoPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInfoPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20006CC")]
internal class MapEditorInfoPopup : PromptPopup
{
	[Token(Token = "0x400210C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _description;

	[Token(Token = "0x400210D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x400210E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<BaseSettingElement> _inputs;

	[Token(Token = "0x17000D42")]
	protected override string Title
	{
		[Token(Token = "0x60043C5")]
		[Address(RVA = "0x4328D30", Offset = "0x4328D30", VA = "0x4328D30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D43")]
	protected override float Width
	{
		[Token(Token = "0x60043C6")]
		[Address(RVA = "0x4328D60", Offset = "0x4328D60", VA = "0x4328D60", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D44")]
	protected override float Height
	{
		[Token(Token = "0x60043C7")]
		[Address(RVA = "0x4328D70", Offset = "0x4328D70", VA = "0x4328D70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D45")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60043C8")]
		[Address(RVA = "0x4328D80", Offset = "0x4328D80", VA = "0x4328D80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60043C9")]
	[Address(RVA = "0x4328D90", Offset = "0x4328D90", VA = "0x4328D90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60043CA")]
	[Address(RVA = "0x4329060", Offset = "0x4329060", VA = "0x4329060", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60043CB")]
	[Address(RVA = "0x43292D0", Offset = "0x43292D0", VA = "0x43292D0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60043CC")]
	[Address(RVA = "0x4329440", Offset = "0x4329440", VA = "0x4329440")]
	public MapEditorInfoPopup()
	{
	}
}
