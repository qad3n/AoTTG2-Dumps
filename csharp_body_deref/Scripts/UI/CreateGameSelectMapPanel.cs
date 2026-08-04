// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameSelectMapPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameSelectMapPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameSelectMapPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005CA")]
internal class CreateGameSelectMapPanel : CategoryPanel
{
	[Token(Token = "0x4001C2B")]
	protected const int Columns = 4;

	[Token(Token = "0x4001C2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool IsCustom;

	[Token(Token = "0x17000B68")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003B72")]
		[Address(RVA = "0x427D490", Offset = "0x427D490", VA = "0x427D490", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B69")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003B73")]
		[Address(RVA = "0x427D4A0", Offset = "0x427D4A0", VA = "0x427D4A0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B6A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003B74")]
		[Address(RVA = "0x427D4B0", Offset = "0x427D4B0", VA = "0x427D4B0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B6B")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003B75")]
		[Address(RVA = "0x427D4C0", Offset = "0x427D4C0", VA = "0x427D4C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B6C")]
	protected virtual float CustomListButtonHeight
	{
		[Token(Token = "0x6003B76")]
		[Address(RVA = "0x427D4D0", Offset = "0x427D4D0", VA = "0x427D4D0", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003B77")]
	[Address(RVA = "0x427D4E0", Offset = "0x427D4E0", VA = "0x427D4E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B78")]
	[Address(RVA = "0x427E360", Offset = "0x427E360", VA = "0x427E360", Slot = "36")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x6003B79")]
	[Address(RVA = "0x427DA80", Offset = "0x427DA80", VA = "0x427DA80")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x6003B7A")]
	[Address(RVA = "0x427E650", Offset = "0x427E650", VA = "0x427E650", Slot = "37")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x6003B7B")]
	[Address(RVA = "0x427E690", Offset = "0x427E690", VA = "0x427E690", Slot = "38")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x6003B7C")]
	[Address(RVA = "0x427D870", Offset = "0x427D870", VA = "0x427D870")]
	protected void CreateCustomTextList(List<string> items)
	{
	}

	[Token(Token = "0x6003B7D")]
	[Address(RVA = "0x427E8E0", Offset = "0x427E8E0", VA = "0x427E8E0")]
	private void CreateCustomTextRow(ElementStyle style, string item, float width)
	{
	}

	[Token(Token = "0x6003B7E")]
	[Address(RVA = "0x427F170", Offset = "0x427F170", VA = "0x427F170")]
	private Color DarkenColor(Color color, float amount)
	{
		return default(Color);
	}

	[Token(Token = "0x6003B7F")]
	[Address(RVA = "0x427F1B0", Offset = "0x427F1B0", VA = "0x427F1B0")]
	public CreateGameSelectMapPanel()
	{
	}
}
