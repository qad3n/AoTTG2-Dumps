// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExternalLinkPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ExternalLinkPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000793")]
internal class ExternalLinkPopup : PromptPopup
{
	[Token(Token = "0x400264A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x400264B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x400264C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _url;

	[Token(Token = "0x17000C82")]
	protected override string Title
	{
		[Token(Token = "0x6004925")]
		[Address(RVA = "0x5BBD8A0", Offset = "0x5BBC8A0", VA = "0x5BBD8A0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C83")]
	protected override float Width
	{
		[Token(Token = "0x6004926")]
		[Address(RVA = "0x5BBD900", Offset = "0x5BBC900", VA = "0x5BBD900", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C84")]
	protected override float Height
	{
		[Token(Token = "0x6004927")]
		[Address(RVA = "0x5BBD910", Offset = "0x5BBC910", VA = "0x5BBD910", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C85")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004928")]
		[Address(RVA = "0x5BBD920", Offset = "0x5BBC920", VA = "0x5BBD920", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C86")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004929")]
		[Address(RVA = "0x5BBD930", Offset = "0x5BBC930", VA = "0x5BBD930", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C87")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600492A")]
		[Address(RVA = "0x5BBD940", Offset = "0x5BBC940", VA = "0x5BBD940", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600492B")]
	[Address(RVA = "0x5BBD950", Offset = "0x5BBC950", VA = "0x5BBD950", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600492C")]
	[Address(RVA = "0x5BBDCA0", Offset = "0x5BBCCA0", VA = "0x5BBDCA0")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x600492D")]
	[Address(RVA = "0x5BBDDE0", Offset = "0x5BBCDE0", VA = "0x5BBDDE0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600492E")]
	[Address(RVA = "0x5BBDE70", Offset = "0x5BBCE70", VA = "0x5BBDE70")]
	public ExternalLinkPopup()
	{
	}
}
