// ==================== AoTTG2 cross-reference ====================
// Type: UI.ConfirmPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000576")]
internal class ConfirmPopup : PromptPopup
{
	[Token(Token = "0x4001B14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x4001B15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x4001B16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000A9D")]
	protected override string Title
	{
		[Token(Token = "0x60038C1")]
		[Address(RVA = "0x424AEF0", Offset = "0x424AEF0", VA = "0x424AEF0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A9E")]
	protected override float Width
	{
		[Token(Token = "0x60038C2")]
		[Address(RVA = "0x424AF50", Offset = "0x424AF50", VA = "0x424AF50", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A9F")]
	protected override float Height
	{
		[Token(Token = "0x60038C3")]
		[Address(RVA = "0x424AF60", Offset = "0x424AF60", VA = "0x424AF60", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AA0")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60038C4")]
		[Address(RVA = "0x424AF70", Offset = "0x424AF70", VA = "0x424AF70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AA1")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60038C5")]
		[Address(RVA = "0x424AF80", Offset = "0x424AF80", VA = "0x424AF80", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AA2")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60038C6")]
		[Address(RVA = "0x424AF90", Offset = "0x424AF90", VA = "0x424AF90", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60038C7")]
	[Address(RVA = "0x424AFA0", Offset = "0x424AFA0", VA = "0x424AFA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60038C8")]
	[Address(RVA = "0x424B2C0", Offset = "0x424B2C0", VA = "0x424B2C0")]
	public void Show(string message, UnityAction onConfirm, [Optional] string title)
	{
	}

	[Token(Token = "0x60038C9")]
	[Address(RVA = "0x424B410", Offset = "0x424B410", VA = "0x424B410")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60038CA")]
	[Address(RVA = "0x424B490", Offset = "0x424B490", VA = "0x424B490")]
	public ConfirmPopup()
	{
	}
}
