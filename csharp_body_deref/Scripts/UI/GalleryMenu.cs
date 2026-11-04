// ==================== AoTTG2 cross-reference ====================
// Type: UI.GalleryMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/GalleryMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200075D")]
internal class GalleryMenu : BaseMenu
{
	[Token(Token = "0x400247B")]
	[FieldOffset(Offset = "0x98")]
	private GalleryMainPanel _mainPanel;

	[Token(Token = "0x400247C")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _picture;

	[Token(Token = "0x400247D")]
	[FieldOffset(Offset = "0xA8")]
	private int _backgroundCount;

	[Token(Token = "0x400247E")]
	[FieldOffset(Offset = "0xAC")]
	private int _profileCount;

	[Token(Token = "0x400247F")]
	[FieldOffset(Offset = "0xB0")]
	public int TotalBackgroundCount;

	[Token(Token = "0x60047B2")]
	[Address(RVA = "0x2237330", Offset = "0x2235930", VA = "0x182237330", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60047B3")]
	[Address(RVA = "0x2236EE0", Offset = "0x22354E0", VA = "0x182236EE0")]
	public void LoadGallery(int index)
	{
	}

	[Token(Token = "0x60047B4")]
	[Address(RVA = "0x2237090", Offset = "0x2235690", VA = "0x182237090")]
	public void SetBackground(string image)
	{
	}

	[Token(Token = "0x60047B5")]
	[Address(RVA = "0x21DA7E0", Offset = "0x21D8DE0", VA = "0x1821DA7E0")]
	public GalleryMenu()
	{
	}
}
