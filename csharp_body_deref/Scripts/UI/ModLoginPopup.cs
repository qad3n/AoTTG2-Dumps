// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModLoginPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ModLoginPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007F9")]
internal class ModLoginPopup : PromptPopup
{
	[Token(Token = "0x17000DED")]
	protected override string Title
	{
		[Token(Token = "0x6004CF7")]
		[Address(RVA = "0x2291020", Offset = "0x228F620", VA = "0x182291020", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DEE")]
	protected override float Width
	{
		[Token(Token = "0x6004CF8")]
		[Address(RVA = "0x2291050", Offset = "0x228F650", VA = "0x182291050", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DEF")]
	protected override float Height
	{
		[Token(Token = "0x6004CF9")]
		[Address(RVA = "0x21C1230", Offset = "0x21BF830", VA = "0x1821C1230", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DF0")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004CFA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DF1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004CFB")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004CFC")]
	[Address(RVA = "0x2290D40", Offset = "0x228F340", VA = "0x182290D40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004CFD")]
	[Address(RVA = "0x2290CD0", Offset = "0x228F2D0", VA = "0x182290CD0")]
	protected void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x6004CFE")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	public ModLoginPopup()
	{
	}
}
