using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000531")]
internal class ConfirmPopup : PromptPopup
{
	[Token(Token = "0x4001A01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x4001A02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x4001A03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000A33")]
	protected override string Title
	{
		[Token(Token = "0x60036B3")]
		[Address(RVA = "0x3F21740", Offset = "0x3F21740", VA = "0x3F21740", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A34")]
	protected override float Width
	{
		[Token(Token = "0x60036B4")]
		[Address(RVA = "0x3F217A0", Offset = "0x3F217A0", VA = "0x3F217A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A35")]
	protected override float Height
	{
		[Token(Token = "0x60036B5")]
		[Address(RVA = "0x3F217B0", Offset = "0x3F217B0", VA = "0x3F217B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A36")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60036B6")]
		[Address(RVA = "0x3F217C0", Offset = "0x3F217C0", VA = "0x3F217C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A37")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60036B7")]
		[Address(RVA = "0x3F217D0", Offset = "0x3F217D0", VA = "0x3F217D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A38")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60036B8")]
		[Address(RVA = "0x3F217E0", Offset = "0x3F217E0", VA = "0x3F217E0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60036B9")]
	[Address(RVA = "0x3F217F0", Offset = "0x3F217F0", VA = "0x3F217F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60036BA")]
	[Address(RVA = "0x3F21B10", Offset = "0x3F21B10", VA = "0x3F21B10")]
	public void Show(string message, UnityAction onConfirm, [Optional] string title)
	{
	}

	[Token(Token = "0x60036BB")]
	[Address(RVA = "0x3F21C60", Offset = "0x3F21C60", VA = "0x3F21C60")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60036BC")]
	[Address(RVA = "0x3F21CE0", Offset = "0x3F21CE0", VA = "0x3F21CE0")]
	public ConfirmPopup()
	{
	}
}
