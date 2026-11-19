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

[Token(Token = "0x20008AF")]
internal class MapEditorInfoPopup : PromptPopup
{
	[Token(Token = "0x4002BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _description;

	[Token(Token = "0x4002BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<BaseSettingElement> _inputs;

	[Token(Token = "0x17000E8C")]
	protected override string Title
	{
		[Token(Token = "0x60052D4")]
		[Address(RVA = "0x5C7DE90", Offset = "0x5C7CE90", VA = "0x5C7DE90", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E8D")]
	protected override float Width
	{
		[Token(Token = "0x60052D5")]
		[Address(RVA = "0x5C7DF30", Offset = "0x5C7CF30", VA = "0x5C7DF30", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E8E")]
	protected override float Height
	{
		[Token(Token = "0x60052D6")]
		[Address(RVA = "0x5C7DF40", Offset = "0x5C7CF40", VA = "0x5C7DF40", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E8F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60052D7")]
		[Address(RVA = "0x5C7DF50", Offset = "0x5C7CF50", VA = "0x5C7DF50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60052D8")]
	[Address(RVA = "0x5C7DF60", Offset = "0x5C7CF60", VA = "0x5C7DF60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60052D9")]
	[Address(RVA = "0x5C7E270", Offset = "0x5C7D270", VA = "0x5C7E270", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60052DA")]
	[Address(RVA = "0x5C7E4D0", Offset = "0x5C7D4D0", VA = "0x5C7E4D0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60052DB")]
	[Address(RVA = "0x5C7E640", Offset = "0x5C7D640", VA = "0x5C7E640")]
	public MapEditorInfoPopup()
	{
	}
}
