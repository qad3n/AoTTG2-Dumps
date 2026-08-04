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

[Token(Token = "0x200069E")]
internal class ModLoginPopup : PromptPopup
{
	[Token(Token = "0x17000CA7")]
	protected override string Title
	{
		[Token(Token = "0x6004203")]
		[Address(RVA = "0x43087F0", Offset = "0x43087F0", VA = "0x43087F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CA8")]
	protected override float Width
	{
		[Token(Token = "0x6004204")]
		[Address(RVA = "0x4308820", Offset = "0x4308820", VA = "0x4308820", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA9")]
	protected override float Height
	{
		[Token(Token = "0x6004205")]
		[Address(RVA = "0x4308830", Offset = "0x4308830", VA = "0x4308830", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CAA")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004206")]
		[Address(RVA = "0x4308840", Offset = "0x4308840", VA = "0x4308840", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CAB")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004207")]
		[Address(RVA = "0x4308850", Offset = "0x4308850", VA = "0x4308850", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004208")]
	[Address(RVA = "0x4308860", Offset = "0x4308860", VA = "0x4308860", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004209")]
	[Address(RVA = "0x4308AE0", Offset = "0x4308AE0", VA = "0x4308AE0")]
	protected void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x600420A")]
	[Address(RVA = "0x4308B50", Offset = "0x4308B50", VA = "0x4308B50")]
	public ModLoginPopup()
	{
	}
}
