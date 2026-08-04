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

[Token(Token = "0x2000606")]
internal class GalleryMainPanel : HeadedPanel
{
	[Token(Token = "0x4001CE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private GalleryMenu _menu;

	[Token(Token = "0x4001CE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Text _indexLabel;

	[Token(Token = "0x4001CE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _index;

	[Token(Token = "0x17000B91")]
	protected override string Title
	{
		[Token(Token = "0x6003CEA")]
		[Address(RVA = "0x429A7C0", Offset = "0x429A7C0", VA = "0x429A7C0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B92")]
	protected override float Width
	{
		[Token(Token = "0x6003CEB")]
		[Address(RVA = "0x429A860", Offset = "0x429A860", VA = "0x429A860", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B93")]
	protected override float Height
	{
		[Token(Token = "0x6003CEC")]
		[Address(RVA = "0x429A870", Offset = "0x429A870", VA = "0x429A870", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B94")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003CED")]
		[Address(RVA = "0x429A880", Offset = "0x429A880", VA = "0x429A880", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B95")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003CEE")]
		[Address(RVA = "0x429A890", Offset = "0x429A890", VA = "0x429A890", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B96")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003CEF")]
		[Address(RVA = "0x429A8A0", Offset = "0x429A8A0", VA = "0x429A8A0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B97")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003CF0")]
		[Address(RVA = "0x429A8B0", Offset = "0x429A8B0", VA = "0x429A8B0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B98")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003CF1")]
		[Address(RVA = "0x429A8C0", Offset = "0x429A8C0", VA = "0x429A8C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003CF2")]
	[Address(RVA = "0x429A8D0", Offset = "0x429A8D0", VA = "0x429A8D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003CF3")]
	[Address(RVA = "0x429ACF0", Offset = "0x429ACF0", VA = "0x429ACF0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003CF4")]
	[Address(RVA = "0x429AC40", Offset = "0x429AC40", VA = "0x429AC40")]
	private void UpdateIndexLabel()
	{
	}

	[Token(Token = "0x6003CF5")]
	[Address(RVA = "0x429AFE0", Offset = "0x429AFE0", VA = "0x429AFE0")]
	public GalleryMainPanel()
	{
	}
}
