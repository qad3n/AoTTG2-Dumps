// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExternalLinkPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ExternalLinkPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006EA")]
internal class ExternalLinkPopup : PromptPopup
{
	[Token(Token = "0x40022D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x40022D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x40022D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _url;

	[Token(Token = "0x17000BFE")]
	protected override string Title
	{
		[Token(Token = "0x6004400")]
		[Address(RVA = "0x21C24C0", Offset = "0x21C0AC0", VA = "0x1821C24C0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BFF")]
	protected override float Width
	{
		[Token(Token = "0x6004401")]
		[Address(RVA = "0x21C2520", Offset = "0x21C0B20", VA = "0x1821C2520", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C00")]
	protected override float Height
	{
		[Token(Token = "0x6004402")]
		[Address(RVA = "0x2182BD0", Offset = "0x21811D0", VA = "0x182182BD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C01")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004403")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C02")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004404")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C03")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004405")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004406")]
	[Address(RVA = "0x21C1FB0", Offset = "0x21C05B0", VA = "0x1821C1FB0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004407")]
	[Address(RVA = "0x21C2310", Offset = "0x21C0910", VA = "0x1821C2310")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x6004408")]
	[Address(RVA = "0x21C1F10", Offset = "0x21C0510", VA = "0x1821C1F10")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004409")]
	[Address(RVA = "0x21C24A0", Offset = "0x21C0AA0", VA = "0x1821C24A0")]
	public ExternalLinkPopup()
	{
	}
}
