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

[Token(Token = "0x200062F")]
internal class CustomPopup : BasePopup
{
	[Token(Token = "0x4001DC7")]
	[FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _items;

	[Token(Token = "0x4001DC8")]
	[FieldOffset(Offset = "0xB0")]
	protected ElementStyle _style;

	[Token(Token = "0x4001DC9")]
	[FieldOffset(Offset = "0xB8")]
	protected float _width;

	[Token(Token = "0x4001DCA")]
	[FieldOffset(Offset = "0xBC")]
	protected float _height;

	[Token(Token = "0x17000BC5")]
	protected override string Title
	{
		[Token(Token = "0x6003E2F")]
		[Address(RVA = "0x42BB0B0", Offset = "0x42BB0B0", VA = "0x42BB0B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BC6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003E30")]
		[Address(RVA = "0x42BB0D0", Offset = "0x42BB0D0", VA = "0x42BB0D0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC7")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003E31")]
		[Address(RVA = "0x42BB0E0", Offset = "0x42BB0E0", VA = "0x42BB0E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003E32")]
	[Address(RVA = "0x42BB0F0", Offset = "0x42BB0F0", VA = "0x42BB0F0")]
	public void Setup(BasePanel parent, string title, float width, float height)
	{
	}

	[Token(Token = "0x6003E33")]
	[Address(RVA = "0x42BB290", Offset = "0x42BB290", VA = "0x42BB290")]
	public void AddBottomButton(string name, string title)
	{
	}

	[Token(Token = "0x6003E34")]
	[Address(RVA = "0x42BB3B0", Offset = "0x42BB3B0", VA = "0x42BB3B0", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6003E35")]
	[Address(RVA = "0x42BB3C0", Offset = "0x42BB3C0", VA = "0x42BB3C0", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003E36")]
	[Address(RVA = "0x42BB3D0", Offset = "0x42BB3D0", VA = "0x42BB3D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6003E37")]
	[Address(RVA = "0x42BB580", Offset = "0x42BB580", VA = "0x42BB580")]
	public void AddLabel(string label)
	{
	}

	[Token(Token = "0x6003E38")]
	[Address(RVA = "0x42BB640", Offset = "0x42BB640", VA = "0x42BB640")]
	public void AddButton(string name, string title)
	{
	}

	[Token(Token = "0x6003E39")]
	[Address(RVA = "0x42BB7C0", Offset = "0x42BB7C0", VA = "0x42BB7C0")]
	public void AddButtons(List<object> names, List<object> titles)
	{
	}

	[Token(Token = "0x6003E3A")]
	[Address(RVA = "0x42BB8C0", Offset = "0x42BB8C0", VA = "0x42BB8C0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003E3B")]
	[Address(RVA = "0x42BB990", Offset = "0x42BB990", VA = "0x42BB990")]
	public CustomPopup()
	{
	}
}
