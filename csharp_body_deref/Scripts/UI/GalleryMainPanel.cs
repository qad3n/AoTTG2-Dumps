// ==================== AoTTG2 cross-reference ====================
// Type: UI.GalleryMainPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/GalleryMainPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMainPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200075C")]
internal class GalleryMainPanel : HeadedPanel
{
	[Token(Token = "0x4002478")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private GalleryMenu _menu;

	[Token(Token = "0x4002479")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Text _indexLabel;

	[Token(Token = "0x400247A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _index;

	[Token(Token = "0x17000CD6")]
	protected override string Title
	{
		[Token(Token = "0x60047A3")]
		[Address(RVA = "0x2236E30", Offset = "0x2235430", VA = "0x182236E30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CD7")]
	protected override float Width
	{
		[Token(Token = "0x60047A4")]
		[Address(RVA = "0x2236ED0", Offset = "0x22354D0", VA = "0x182236ED0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD8")]
	protected override float Height
	{
		[Token(Token = "0x60047A5")]
		[Address(RVA = "0x21C11C0", Offset = "0x21BF7C0", VA = "0x1821C11C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD9")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60047A6")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDA")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60047A7")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDB")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60047A8")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDC")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60047A9")]
		[Address(RVA = "0x846F60", Offset = "0x845560", VA = "0x180846F60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CDD")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60047AA")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60047AB")]
	[Address(RVA = "0x2236900", Offset = "0x2234F00", VA = "0x182236900", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60047AC")]
	[Address(RVA = "0x22367F0", Offset = "0x2234DF0", VA = "0x1822367F0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60047AD")]
	[Address(RVA = "0x2236D70", Offset = "0x2235370", VA = "0x182236D70")]
	private void UpdateIndexLabel()
	{
	}

	[Token(Token = "0x60047AE")]
	[Address(RVA = "0x21D6E20", Offset = "0x21D5420", VA = "0x1821D6E20")]
	public GalleryMainPanel()
	{
	}
}
