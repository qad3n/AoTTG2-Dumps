// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomAssetVideoUrlPopup
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/CustomAssetVideoUrlPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200062E")]
internal class CustomAssetVideoUrlPopup : PromptPopup
{
	[Token(Token = "0x4001DC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4001DC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x4001DC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	public VideoUrlPopupResult Result;

	[Token(Token = "0x17000BBE")]
	protected override string Title
	{
		[Token(Token = "0x6003E21")]
		[Address(RVA = "0x42BA7F0", Offset = "0x42BA7F0", VA = "0x42BA7F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BBF")]
	protected override float Width
	{
		[Token(Token = "0x6003E22")]
		[Address(RVA = "0x42BA850", Offset = "0x42BA850", VA = "0x42BA850", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC0")]
	protected override float Height
	{
		[Token(Token = "0x6003E23")]
		[Address(RVA = "0x42BA860", Offset = "0x42BA860", VA = "0x42BA860", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC1")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003E24")]
		[Address(RVA = "0x42BA870", Offset = "0x42BA870", VA = "0x42BA870", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BC2")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003E25")]
		[Address(RVA = "0x42BA880", Offset = "0x42BA880", VA = "0x42BA880", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BC3")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003E26")]
		[Address(RVA = "0x42BA890", Offset = "0x42BA890", VA = "0x42BA890", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000BC4")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003E27")]
		[Address(RVA = "0x42BA8A0", Offset = "0x42BA8A0", VA = "0x42BA8A0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003E28")]
	[Address(RVA = "0x42BA8B0", Offset = "0x42BA8B0", VA = "0x42BA8B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E29")]
	[Address(RVA = "0x42BAC10", Offset = "0x42BAC10", VA = "0x42BAC10")]
	public void Show(List<string> urls)
	{
	}

	[Token(Token = "0x6003E2A")]
	[Address(RVA = "0x42BAF10", Offset = "0x42BAF10", VA = "0x42BAF10")]
	private void OnButtonClick(VideoUrlPopupResult result)
	{
	}

	[Token(Token = "0x6003E2B")]
	[Address(RVA = "0x42BAF90", Offset = "0x42BAF90", VA = "0x42BAF90")]
	public CustomAssetVideoUrlPopup()
	{
	}
}
