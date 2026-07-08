using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000532")]
internal class ExportPopup : PromptPopup
{
	[Token(Token = "0x4001A04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private GameObject _element;

	[Token(Token = "0x4001A05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting ExportSetting;

	[Token(Token = "0x17000A39")]
	protected override string Title
	{
		[Token(Token = "0x60036BF")]
		[Address(RVA = "0x3F21E30", Offset = "0x3F21E30", VA = "0x3F21E30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A3A")]
	protected override float Width
	{
		[Token(Token = "0x60036C0")]
		[Address(RVA = "0x3F21E90", Offset = "0x3F21E90", VA = "0x3F21E90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A3B")]
	protected override float Height
	{
		[Token(Token = "0x60036C1")]
		[Address(RVA = "0x3F21EA0", Offset = "0x3F21EA0", VA = "0x3F21EA0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A3C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60036C2")]
		[Address(RVA = "0x3F21EB0", Offset = "0x3F21EB0", VA = "0x3F21EB0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A3D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60036C3")]
		[Address(RVA = "0x3F21EC0", Offset = "0x3F21EC0", VA = "0x3F21EC0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60036C4")]
	[Address(RVA = "0x3F21ED0", Offset = "0x3F21ED0", VA = "0x3F21ED0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60036C5")]
	[Address(RVA = "0x3F22010", Offset = "0x3F22010", VA = "0x3F22010")]
	public void Show(string value)
	{
	}

	[Token(Token = "0x60036C6")]
	[Address(RVA = "0x3F22200", Offset = "0x3F22200", VA = "0x3F22200")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60036C7")]
	[Address(RVA = "0x3F22270", Offset = "0x3F22270", VA = "0x3F22270")]
	public ExportPopup()
	{
	}
}
