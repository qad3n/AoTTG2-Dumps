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

[Token(Token = "0x2000607")]
internal class GalleryMenu : BaseMenu
{
	[Token(Token = "0x4001CE6")]
	[FieldOffset(Offset = "0x98")]
	private GalleryMainPanel _mainPanel;

	[Token(Token = "0x4001CE7")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _picture;

	[Token(Token = "0x4001CE8")]
	[FieldOffset(Offset = "0xA8")]
	private int _backgroundCount;

	[Token(Token = "0x4001CE9")]
	[FieldOffset(Offset = "0xAC")]
	private int _profileCount;

	[Token(Token = "0x4001CEA")]
	[FieldOffset(Offset = "0xB0")]
	public int TotalBackgroundCount;

	[Token(Token = "0x6003CF9")]
	[Address(RVA = "0x429B0B0", Offset = "0x429B0B0", VA = "0x429B0B0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003CFA")]
	[Address(RVA = "0x429AE00", Offset = "0x429AE00", VA = "0x429AE00")]
	public void LoadGallery(int index)
	{
	}

	[Token(Token = "0x6003CFB")]
	[Address(RVA = "0x429B2C0", Offset = "0x429B2C0", VA = "0x429B2C0")]
	public void SetBackground(string image)
	{
	}

	[Token(Token = "0x6003CFC")]
	[Address(RVA = "0x429B640", Offset = "0x429B640", VA = "0x429B640")]
	public GalleryMenu()
	{
	}
}
