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

[Token(Token = "0x2000831")]
internal class MapEditorInfoPopup : PromptPopup
{
	[Token(Token = "0x400292B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _description;

	[Token(Token = "0x400292C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x400292D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<BaseSettingElement> _inputs;

	[Token(Token = "0x17000E8B")]
	protected override string Title
	{
		[Token(Token = "0x6004F36")]
		[Address(RVA = "0x22BA330", Offset = "0x22B8930", VA = "0x1822BA330", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E8C")]
	protected override float Width
	{
		[Token(Token = "0x6004F37")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E8D")]
	protected override float Height
	{
		[Token(Token = "0x6004F38")]
		[Address(RVA = "0x1DA8B00", Offset = "0x1DA7100", VA = "0x181DA8B00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E8E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004F39")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004F3A")]
	[Address(RVA = "0x22B9CA0", Offset = "0x22B82A0", VA = "0x1822B9CA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F3B")]
	[Address(RVA = "0x22B9F80", Offset = "0x22B8580", VA = "0x1822B9F80", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004F3C")]
	[Address(RVA = "0x22B9B20", Offset = "0x22B8120", VA = "0x1822B9B20")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004F3D")]
	[Address(RVA = "0x22BA250", Offset = "0x22B8850", VA = "0x1822BA250")]
	public MapEditorInfoPopup()
	{
	}
}
