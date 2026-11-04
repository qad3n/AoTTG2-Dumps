// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiplayerSettingsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiplayerSettingsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerSettingsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000801")]
internal class MultiplayerSettingsPopup : PromptPopup
{
	[Token(Token = "0x17000E13")]
	protected override string Title
	{
		[Token(Token = "0x6004D54")]
		[Address(RVA = "0x2296E80", Offset = "0x2295480", VA = "0x182296E80", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E14")]
	protected override float Width
	{
		[Token(Token = "0x6004D55")]
		[Address(RVA = "0x2291050", Offset = "0x228F650", VA = "0x182291050", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E15")]
	protected override float Height
	{
		[Token(Token = "0x6004D56")]
		[Address(RVA = "0x2296E70", Offset = "0x2295470", VA = "0x182296E70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E16")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004D57")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E17")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004D58")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004D59")]
	[Address(RVA = "0x2296930", Offset = "0x2294F30", VA = "0x182296930", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D5A")]
	[Address(RVA = "0x22968C0", Offset = "0x2294EC0", VA = "0x1822968C0")]
	protected void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x6004D5B")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	public MultiplayerSettingsPopup()
	{
	}
}
