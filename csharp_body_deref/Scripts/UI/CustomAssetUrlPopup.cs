// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomAssetUrlPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CustomAssetUrlPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomAssetUrlPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000832")]
internal class CustomAssetUrlPopup : PromptPopup
{
	[Token(Token = "0x40028E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40028E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x40028E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB1")]
	public bool Confirmed;

	[Token(Token = "0x17000D82")]
	protected override string Title
	{
		[Token(Token = "0x6004E27")]
		[Address(RVA = "0x5C1BBD0", Offset = "0x5C1ABD0", VA = "0x5C1BBD0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D83")]
	protected override float Width
	{
		[Token(Token = "0x6004E28")]
		[Address(RVA = "0x5C1BC30", Offset = "0x5C1AC30", VA = "0x5C1BC30", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D84")]
	protected override float Height
	{
		[Token(Token = "0x6004E29")]
		[Address(RVA = "0x5C1BC40", Offset = "0x5C1AC40", VA = "0x5C1BC40", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D85")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E2A")]
		[Address(RVA = "0x5C1BC50", Offset = "0x5C1AC50", VA = "0x5C1BC50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D86")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E2B")]
		[Address(RVA = "0x5C1BC60", Offset = "0x5C1AC60", VA = "0x5C1BC60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D87")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E2C")]
		[Address(RVA = "0x5C1BC70", Offset = "0x5C1AC70", VA = "0x5C1BC70", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000D88")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E2D")]
		[Address(RVA = "0x5C1BC80", Offset = "0x5C1AC80", VA = "0x5C1BC80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D89")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004E2E")]
		[Address(RVA = "0x5C1BC90", Offset = "0x5C1AC90", VA = "0x5C1BC90", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004E2F")]
	[Address(RVA = "0x5C1BCA0", Offset = "0x5C1ACA0", VA = "0x5C1BCA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E30")]
	[Address(RVA = "0x5C1BF90", Offset = "0x5C1AF90", VA = "0x5C1BF90")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x6004E31")]
	[Address(RVA = "0x5C1C120", Offset = "0x5C1B120", VA = "0x5C1C120", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004E32")]
	[Address(RVA = "0x5C1C140", Offset = "0x5C1B140", VA = "0x5C1C140")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004E33")]
	[Address(RVA = "0x5C1C1B0", Offset = "0x5C1B1B0", VA = "0x5C1C1B0")]
	public CustomAssetUrlPopup()
	{
	}
}
