using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000533")]
internal class ExternalLinkPopup : PromptPopup
{
	[Token(Token = "0x4001A06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x4001A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x4001A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _url;

	[Token(Token = "0x17000A3E")]
	protected override string Title
	{
		[Token(Token = "0x60036C9")]
		[Address(RVA = "0x3F22380", Offset = "0x3F22380", VA = "0x3F22380", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A3F")]
	protected override float Width
	{
		[Token(Token = "0x60036CA")]
		[Address(RVA = "0x3F223E0", Offset = "0x3F223E0", VA = "0x3F223E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A40")]
	protected override float Height
	{
		[Token(Token = "0x60036CB")]
		[Address(RVA = "0x3F223F0", Offset = "0x3F223F0", VA = "0x3F223F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A41")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60036CC")]
		[Address(RVA = "0x3F22400", Offset = "0x3F22400", VA = "0x3F22400", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A42")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60036CD")]
		[Address(RVA = "0x3F22410", Offset = "0x3F22410", VA = "0x3F22410", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A43")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60036CE")]
		[Address(RVA = "0x3F22420", Offset = "0x3F22420", VA = "0x3F22420", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60036CF")]
	[Address(RVA = "0x3F22430", Offset = "0x3F22430", VA = "0x3F22430", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60036D0")]
	[Address(RVA = "0x3F22780", Offset = "0x3F22780", VA = "0x3F22780")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x60036D1")]
	[Address(RVA = "0x3F22890", Offset = "0x3F22890", VA = "0x3F22890")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60036D2")]
	[Address(RVA = "0x3F22920", Offset = "0x3F22920", VA = "0x3F22920")]
	public ExternalLinkPopup()
	{
	}
}
