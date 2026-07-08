using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200053B")]
internal class MessagePopup : PromptPopup
{
	[Token(Token = "0x4001A28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4001A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _button;

	[Token(Token = "0x17000A65")]
	protected override string Title
	{
		[Token(Token = "0x600371E")]
		[Address(RVA = "0x3F26080", Offset = "0x3F26080", VA = "0x3F26080", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A66")]
	protected override float Width
	{
		[Token(Token = "0x600371F")]
		[Address(RVA = "0x3F260A0", Offset = "0x3F260A0", VA = "0x3F260A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A67")]
	protected override float Height
	{
		[Token(Token = "0x6003720")]
		[Address(RVA = "0x3F260B0", Offset = "0x3F260B0", VA = "0x3F260B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A68")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003721")]
		[Address(RVA = "0x3F260C0", Offset = "0x3F260C0", VA = "0x3F260C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A69")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003722")]
		[Address(RVA = "0x3F260D0", Offset = "0x3F260D0", VA = "0x3F260D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A6A")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003723")]
		[Address(RVA = "0x3F260E0", Offset = "0x3F260E0", VA = "0x3F260E0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000A6B")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x6003724")]
		[Address(RVA = "0x3F260F0", Offset = "0x3F260F0", VA = "0x3F260F0", Slot = "59")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003725")]
	[Address(RVA = "0x3F26100", Offset = "0x3F26100", VA = "0x3F26100", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003726")]
	[Address(RVA = "0x3F263E0", Offset = "0x3F263E0", VA = "0x3F263E0")]
	public void Show(string message, bool allowDismiss = true)
	{
	}

	[Token(Token = "0x6003727")]
	[Address(RVA = "0x3F26440", Offset = "0x3F26440", VA = "0x3F26440")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003728")]
	[Address(RVA = "0x3F26460", Offset = "0x3F26460", VA = "0x3F26460")]
	public MessagePopup()
	{
	}
}
