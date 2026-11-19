// ==================== AoTTG2 cross-reference ====================
// Type: UI.GalleryMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/GalleryMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000804")]
internal class GalleryMenu : ViewerMenu
{
	[Token(Token = "0x40027E9")]
	private const float MaxWidth = 1280f;

	[Token(Token = "0x40027EA")]
	private const float MaxHeight = 900f;

	[Token(Token = "0x40027EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color FrameColor;

	[Token(Token = "0x40027EC")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _picture;

	[Token(Token = "0x40027ED")]
	[FieldOffset(Offset = "0xA8")]
	private int _backgroundCount;

	[Token(Token = "0x17000D59")]
	protected override int Count
	{
		[Token(Token = "0x6004CC5")]
		[Address(RVA = "0x5BF9E20", Offset = "0x5BF8E20", VA = "0x5BF9E20", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004CC6")]
	[Address(RVA = "0x5BF9EA0", Offset = "0x5BF8EA0", VA = "0x5BF9EA0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004CC7")]
	[Address(RVA = "0x5BF9FE0", Offset = "0x5BF8FE0", VA = "0x5BF9FE0", Slot = "9")]
	protected override void Load(int index)
	{
	}

	[Token(Token = "0x6004CC8")]
	[Address(RVA = "0x5BFA1B0", Offset = "0x5BF91B0", VA = "0x5BFA1B0")]
	private void SetPicture(string image)
	{
	}

	[Token(Token = "0x6004CC9")]
	[Address(RVA = "0x5BFA620", Offset = "0x5BF9620", VA = "0x5BFA620")]
	public GalleryMenu()
	{
	}
}
