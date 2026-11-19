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

[Token(Token = "0x2000835")]
internal class CustomPopup : BasePopup
{
	[Token(Token = "0x40028ED")]
	[FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _items;

	[Token(Token = "0x40028EE")]
	[FieldOffset(Offset = "0xB0")]
	protected ElementStyle _style;

	[Token(Token = "0x40028EF")]
	[FieldOffset(Offset = "0xB8")]
	protected float _width;

	[Token(Token = "0x40028F0")]
	[FieldOffset(Offset = "0xBC")]
	protected float _height;

	[Token(Token = "0x17000D92")]
	protected override string Title
	{
		[Token(Token = "0x6004E46")]
		[Address(RVA = "0x5C1CC20", Offset = "0x5C1BC20", VA = "0x5C1CC20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D93")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004E47")]
		[Address(RVA = "0x5C1CC40", Offset = "0x5C1BC40", VA = "0x5C1CC40", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D94")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E48")]
		[Address(RVA = "0x5C1CC50", Offset = "0x5C1BC50", VA = "0x5C1CC50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004E49")]
	[Address(RVA = "0x5C1CC60", Offset = "0x5C1BC60", VA = "0x5C1CC60")]
	public void Setup(BasePanel parent, string title, float width, float height)
	{
	}

	[Token(Token = "0x6004E4A")]
	[Address(RVA = "0x5C1CE00", Offset = "0x5C1BE00", VA = "0x5C1CE00")]
	public void AddBottomButton(string name, string title)
	{
	}

	[Token(Token = "0x6004E4B")]
	[Address(RVA = "0x5C1CF20", Offset = "0x5C1BF20", VA = "0x5C1CF20", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004E4C")]
	[Address(RVA = "0x5C1CF30", Offset = "0x5C1BF30", VA = "0x5C1CF30", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004E4D")]
	[Address(RVA = "0x5C1CF40", Offset = "0x5C1BF40", VA = "0x5C1CF40")]
	public void Clear()
	{
	}

	[Token(Token = "0x6004E4E")]
	[Address(RVA = "0x5C1D0E0", Offset = "0x5C1C0E0", VA = "0x5C1D0E0")]
	public void AddLabel(string label)
	{
	}

	[Token(Token = "0x6004E4F")]
	[Address(RVA = "0x5C1D1A0", Offset = "0x5C1C1A0", VA = "0x5C1D1A0")]
	public void AddButton(string name, string title)
	{
	}

	[Token(Token = "0x6004E50")]
	[Address(RVA = "0x5C1D320", Offset = "0x5C1C320", VA = "0x5C1D320")]
	public void AddButtons(List<object> names, List<object> titles)
	{
	}

	[Token(Token = "0x6004E51")]
	[Address(RVA = "0x5C1D420", Offset = "0x5C1C420", VA = "0x5C1D420")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004E52")]
	[Address(RVA = "0x5C1D4F0", Offset = "0x5C1C4F0", VA = "0x5C1D4F0")]
	public CustomPopup()
	{
	}
}
