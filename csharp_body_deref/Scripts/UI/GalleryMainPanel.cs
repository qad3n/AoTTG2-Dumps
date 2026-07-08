using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005C1")]
internal class GalleryMainPanel : HeadedPanel
{
	[Token(Token = "0x4001BD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private GalleryMenu _menu;

	[Token(Token = "0x4001BD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Text _indexLabel;

	[Token(Token = "0x4001BD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _index;

	[Token(Token = "0x17000B27")]
	protected override string Title
	{
		[Token(Token = "0x6003ADA")]
		[Address(RVA = "0x3F8C850", Offset = "0x3F8C850", VA = "0x3F8C850", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B28")]
	protected override float Width
	{
		[Token(Token = "0x6003ADB")]
		[Address(RVA = "0x3F8C8F0", Offset = "0x3F8C8F0", VA = "0x3F8C8F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B29")]
	protected override float Height
	{
		[Token(Token = "0x6003ADC")]
		[Address(RVA = "0x3F8C900", Offset = "0x3F8C900", VA = "0x3F8C900", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2A")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003ADD")]
		[Address(RVA = "0x3F8C910", Offset = "0x3F8C910", VA = "0x3F8C910", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2B")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003ADE")]
		[Address(RVA = "0x3F8C920", Offset = "0x3F8C920", VA = "0x3F8C920", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2C")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003ADF")]
		[Address(RVA = "0x3F8C930", Offset = "0x3F8C930", VA = "0x3F8C930", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003AE0")]
		[Address(RVA = "0x3F8C940", Offset = "0x3F8C940", VA = "0x3F8C940", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B2E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003AE1")]
		[Address(RVA = "0x3F8C950", Offset = "0x3F8C950", VA = "0x3F8C950", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003AE2")]
	[Address(RVA = "0x3F8C960", Offset = "0x3F8C960", VA = "0x3F8C960", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003AE3")]
	[Address(RVA = "0x3F8CD80", Offset = "0x3F8CD80", VA = "0x3F8CD80")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003AE4")]
	[Address(RVA = "0x3F8CCD0", Offset = "0x3F8CCD0", VA = "0x3F8CCD0")]
	private void UpdateIndexLabel()
	{
	}

	[Token(Token = "0x6003AE5")]
	[Address(RVA = "0x3F8D070", Offset = "0x3F8D070", VA = "0x3F8D070")]
	public GalleryMainPanel()
	{
	}
}
