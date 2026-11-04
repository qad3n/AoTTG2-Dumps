// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CustomPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200078A")]
internal class CustomPopup : BasePopup
{
	[Token(Token = "0x400257C")]
	[FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _items;

	[Token(Token = "0x400257D")]
	[FieldOffset(Offset = "0xB0")]
	protected ElementStyle _style;

	[Token(Token = "0x400257E")]
	[FieldOffset(Offset = "0xB8")]
	protected float _width;

	[Token(Token = "0x400257F")]
	[FieldOffset(Offset = "0xBC")]
	protected float _height;

	[Token(Token = "0x17000D16")]
	protected override string Title
	{
		[Token(Token = "0x6004920")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D17")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004921")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D18")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004922")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004923")]
	[Address(RVA = "0x2240F50", Offset = "0x223F550", VA = "0x182240F50")]
	public void Setup(BasePanel parent, string title, float width, float height)
	{
	}

	[Token(Token = "0x6004924")]
	[Address(RVA = "0x22406F0", Offset = "0x223ECF0", VA = "0x1822406F0")]
	public void AddBottomButton(string name, string title)
	{
	}

	[Token(Token = "0x6004925")]
	[Address(RVA = "0x1D981F0", Offset = "0x1D967F0", VA = "0x181D981F0", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004926")]
	[Address(RVA = "0x1D98200", Offset = "0x1D96800", VA = "0x181D98200", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004927")]
	[Address(RVA = "0x2240D10", Offset = "0x223F310", VA = "0x182240D10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6004928")]
	[Address(RVA = "0x2240C30", Offset = "0x223F230", VA = "0x182240C30")]
	public void AddLabel(string label)
	{
	}

	[Token(Token = "0x6004929")]
	[Address(RVA = "0x2240800", Offset = "0x223EE00", VA = "0x182240800")]
	public void AddButton(string name, string title)
	{
	}

	[Token(Token = "0x600492A")]
	[Address(RVA = "0x2240990", Offset = "0x223EF90", VA = "0x182240990")]
	public void AddButtons(List<object> names, List<object> titles)
	{
	}

	[Token(Token = "0x600492B")]
	[Address(RVA = "0x2240EA0", Offset = "0x223F4A0", VA = "0x182240EA0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600492C")]
	[Address(RVA = "0x2241140", Offset = "0x223F740", VA = "0x182241140")]
	public CustomPopup()
	{
	}
}
