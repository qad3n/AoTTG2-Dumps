// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationLoginPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ModerationLoginPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007A5")]
internal class ModerationLoginPopup : PromptPopup
{
	[Token(Token = "0x40026A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _usernameSetting;

	[Token(Token = "0x40026A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly StringSetting _passwordSetting;

	[Token(Token = "0x17000D5E")]
	protected override string Title
	{
		[Token(Token = "0x6004A63")]
		[Address(RVA = "0x225DFE0", Offset = "0x225C5E0", VA = "0x18225DFE0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D5F")]
	protected override float Width
	{
		[Token(Token = "0x6004A64")]
		[Address(RVA = "0x21C2520", Offset = "0x21C0B20", VA = "0x1821C2520", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D60")]
	protected override float Height
	{
		[Token(Token = "0x6004A65")]
		[Address(RVA = "0x21DDA70", Offset = "0x21DC070", VA = "0x1821DDA70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D61")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A66")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D62")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A67")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D63")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004A68")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004A69")]
	[Address(RVA = "0x225DB30", Offset = "0x225C130", VA = "0x18225DB30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A6A")]
	[Address(RVA = "0xA37400", Offset = "0xA35A00", VA = "0x180A37400")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004A6B")]
	[Address(RVA = "0x225DF00", Offset = "0x225C500", VA = "0x18225DF00")]
	public ModerationLoginPopup()
	{
	}
}
