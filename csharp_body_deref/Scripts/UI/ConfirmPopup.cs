// ==================== AoTTG2 cross-reference ====================
// Type: UI.ConfirmPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ConfirmPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ConfirmPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006E8")]
internal class ConfirmPopup : PromptPopup
{
	[Token(Token = "0x40022C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40022CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000BF2")]
	protected override string Title
	{
		[Token(Token = "0x60043E7")]
		[Address(RVA = "0x21C11D0", Offset = "0x21BF7D0", VA = "0x1821C11D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BF3")]
	protected override float Width
	{
		[Token(Token = "0x60043E8")]
		[Address(RVA = "0x21C1230", Offset = "0x21BF830", VA = "0x1821C1230", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF4")]
	protected override float Height
	{
		[Token(Token = "0x60043E9")]
		[Address(RVA = "0x21C11B0", Offset = "0x21BF7B0", VA = "0x1821C11B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF5")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60043EA")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BF6")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60043EB")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BF7")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60043EC")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000BF8")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x60043ED")]
		[Address(RVA = "0x21C11C0", Offset = "0x21BF7C0", VA = "0x1821C11C0", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60043EE")]
	[Address(RVA = "0x21C0D10", Offset = "0x21BF310", VA = "0x1821C0D10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60043EF")]
	[Address(RVA = "0x21C1060", Offset = "0x21BF660", VA = "0x1821C1060")]
	public void Show(string message, UnityAction onConfirm, [Optional] string title)
	{
	}

	[Token(Token = "0x60043F0")]
	[Address(RVA = "0x21C0C90", Offset = "0x21BF290", VA = "0x1821C0C90")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60043F1")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public ConfirmPopup()
	{
	}
}
