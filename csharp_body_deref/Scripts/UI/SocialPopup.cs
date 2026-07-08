using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000663")]
internal class SocialPopup : BasePopup
{
	[Token(Token = "0x17000C6B")]
	protected override string Title
	{
		[Token(Token = "0x600403B")]
		[Address(RVA = "0x3FFEC20", Offset = "0x3FFEC20", VA = "0x3FFEC20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C6C")]
	protected override float Width
	{
		[Token(Token = "0x600403C")]
		[Address(RVA = "0x3FFEC80", Offset = "0x3FFEC80", VA = "0x3FFEC80", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C6D")]
	protected override float Height
	{
		[Token(Token = "0x600403D")]
		[Address(RVA = "0x3FFEC90", Offset = "0x3FFEC90", VA = "0x3FFEC90", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C6E")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x600403E")]
		[Address(RVA = "0x3FFECA0", Offset = "0x3FFECA0", VA = "0x3FFECA0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C6F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600403F")]
		[Address(RVA = "0x3FFECB0", Offset = "0x3FFECB0", VA = "0x3FFECB0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C70")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004040")]
		[Address(RVA = "0x3FFECC0", Offset = "0x3FFECC0", VA = "0x3FFECC0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000C71")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004041")]
		[Address(RVA = "0x3FFECD0", Offset = "0x3FFECD0", VA = "0x3FFECD0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004042")]
	[Address(RVA = "0x3FFECE0", Offset = "0x3FFECE0", VA = "0x3FFECE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004043")]
	[Address(RVA = "0x3FFF0E0", Offset = "0x3FFF0E0", VA = "0x3FFF0E0")]
	private void CreateLink(ElementStyle style, string title, string link, string about)
	{
	}

	[Token(Token = "0x6004044")]
	[Address(RVA = "0x3FFF260", Offset = "0x3FFF260", VA = "0x3FFF260")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004045")]
	[Address(RVA = "0x3FFF2D0", Offset = "0x3FFF2D0", VA = "0x3FFF2D0")]
	public SocialPopup()
	{
	}
}
