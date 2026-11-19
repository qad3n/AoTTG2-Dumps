// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomAssetVideoUrlPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000834")]
internal class CustomAssetVideoUrlPopup : PromptPopup
{
	[Token(Token = "0x40028EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40028EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x40028EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	public VideoUrlPopupResult Result;

	[Token(Token = "0x17000D8A")]
	protected override string Title
	{
		[Token(Token = "0x6004E36")]
		[Address(RVA = "0x5C1C2E0", Offset = "0x5C1B2E0", VA = "0x5C1C2E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D8B")]
	protected override float Width
	{
		[Token(Token = "0x6004E37")]
		[Address(RVA = "0x5C1C340", Offset = "0x5C1B340", VA = "0x5C1C340", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8C")]
	protected override float Height
	{
		[Token(Token = "0x6004E38")]
		[Address(RVA = "0x5C1C350", Offset = "0x5C1B350", VA = "0x5C1C350", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E39")]
		[Address(RVA = "0x5C1C360", Offset = "0x5C1B360", VA = "0x5C1C360", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D8E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E3A")]
		[Address(RVA = "0x5C1C370", Offset = "0x5C1B370", VA = "0x5C1C370", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D8F")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E3B")]
		[Address(RVA = "0x5C1C380", Offset = "0x5C1B380", VA = "0x5C1C380", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000D90")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E3C")]
		[Address(RVA = "0x5C1C390", Offset = "0x5C1B390", VA = "0x5C1C390", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D91")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004E3D")]
		[Address(RVA = "0x5C1C3A0", Offset = "0x5C1B3A0", VA = "0x5C1C3A0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004E3E")]
	[Address(RVA = "0x5C1C3B0", Offset = "0x5C1B3B0", VA = "0x5C1C3B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E3F")]
	[Address(RVA = "0x5C1C710", Offset = "0x5C1B710", VA = "0x5C1C710")]
	public void Show(List<string> urls)
	{
	}

	[Token(Token = "0x6004E40")]
	[Address(RVA = "0x5C1CA60", Offset = "0x5C1BA60", VA = "0x5C1CA60", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004E41")]
	[Address(RVA = "0x5C1CA80", Offset = "0x5C1BA80", VA = "0x5C1CA80")]
	private void OnButtonClick(VideoUrlPopupResult result)
	{
	}

	[Token(Token = "0x6004E42")]
	[Address(RVA = "0x5C1CB00", Offset = "0x5C1BB00", VA = "0x5C1CB00")]
	public CustomAssetVideoUrlPopup()
	{
	}
}
