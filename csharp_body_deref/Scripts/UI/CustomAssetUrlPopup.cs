using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005E3")]
internal class CustomAssetUrlPopup : PromptPopup
{
	[Token(Token = "0x4001C86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x4001C87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x4001C88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public bool Done;

	[Token(Token = "0x4001C89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB9")]
	public bool Confirmed;

	[Token(Token = "0x17000B47")]
	protected override string Title
	{
		[Token(Token = "0x6003BD9")]
		[Address(RVA = "0x3FA8990", Offset = "0x3FA8990", VA = "0x3FA8990", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B48")]
	protected override float Width
	{
		[Token(Token = "0x6003BDA")]
		[Address(RVA = "0x3FA89F0", Offset = "0x3FA89F0", VA = "0x3FA89F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B49")]
	protected override float Height
	{
		[Token(Token = "0x6003BDB")]
		[Address(RVA = "0x3FA8A00", Offset = "0x3FA8A00", VA = "0x3FA8A00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4A")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003BDC")]
		[Address(RVA = "0x3FA8A10", Offset = "0x3FA8A10", VA = "0x3FA8A10", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B4B")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003BDD")]
		[Address(RVA = "0x3FA8A20", Offset = "0x3FA8A20", VA = "0x3FA8A20", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B4C")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003BDE")]
		[Address(RVA = "0x3FA8A30", Offset = "0x3FA8A30", VA = "0x3FA8A30", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003BDF")]
	[Address(RVA = "0x3FA8A40", Offset = "0x3FA8A40", VA = "0x3FA8A40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003BE0")]
	[Address(RVA = "0x3FA8D70", Offset = "0x3FA8D70", VA = "0x3FA8D70")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x6003BE1")]
	[Address(RVA = "0x3FA8E10", Offset = "0x3FA8E10", VA = "0x3FA8E10")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003BE2")]
	[Address(RVA = "0x3FA8E80", Offset = "0x3FA8E80", VA = "0x3FA8E80")]
	public CustomAssetUrlPopup()
	{
	}
}
