using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005C2")]
internal class GalleryMenu : BaseMenu
{
	[Token(Token = "0x4001BD3")]
	[FieldOffset(Offset = "0x98")]
	private GalleryMainPanel _mainPanel;

	[Token(Token = "0x4001BD4")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _picture;

	[Token(Token = "0x4001BD5")]
	[FieldOffset(Offset = "0xA8")]
	private int _backgroundCount;

	[Token(Token = "0x4001BD6")]
	[FieldOffset(Offset = "0xAC")]
	private int _profileCount;

	[Token(Token = "0x4001BD7")]
	[FieldOffset(Offset = "0xB0")]
	public int TotalBackgroundCount;

	[Token(Token = "0x6003AE9")]
	[Address(RVA = "0x3F8D140", Offset = "0x3F8D140", VA = "0x3F8D140", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003AEA")]
	[Address(RVA = "0x3F8CE90", Offset = "0x3F8CE90", VA = "0x3F8CE90")]
	public void LoadGallery(int index)
	{
	}

	[Token(Token = "0x6003AEB")]
	[Address(RVA = "0x3F8D350", Offset = "0x3F8D350", VA = "0x3F8D350")]
	public void SetBackground(string image)
	{
	}

	[Token(Token = "0x6003AEC")]
	[Address(RVA = "0x3F8D6D0", Offset = "0x3F8D6D0", VA = "0x3F8D6D0")]
	public GalleryMenu()
	{
	}
}
