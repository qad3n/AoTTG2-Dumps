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

[Token(Token = "0x2000648")]
internal class ModerationLoginPopup : PromptPopup
{
	[Token(Token = "0x4001EDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _usernameSetting;

	[Token(Token = "0x4001EDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly StringSetting _passwordSetting;

	[Token(Token = "0x17000C09")]
	protected override string Title
	{
		[Token(Token = "0x6003F62")]
		[Address(RVA = "0x42D6FD0", Offset = "0x42D6FD0", VA = "0x42D6FD0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C0A")]
	protected override float Width
	{
		[Token(Token = "0x6003F63")]
		[Address(RVA = "0x42D7000", Offset = "0x42D7000", VA = "0x42D7000", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C0B")]
	protected override float Height
	{
		[Token(Token = "0x6003F64")]
		[Address(RVA = "0x42D7010", Offset = "0x42D7010", VA = "0x42D7010", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C0C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003F65")]
		[Address(RVA = "0x42D7020", Offset = "0x42D7020", VA = "0x42D7020", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C0D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003F66")]
		[Address(RVA = "0x42D7030", Offset = "0x42D7030", VA = "0x42D7030", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C0E")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003F67")]
		[Address(RVA = "0x42D7040", Offset = "0x42D7040", VA = "0x42D7040", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003F68")]
	[Address(RVA = "0x42D7050", Offset = "0x42D7050", VA = "0x42D7050", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F69")]
	[Address(RVA = "0x42D7360", Offset = "0x42D7360", VA = "0x42D7360")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F6A")]
	[Address(RVA = "0x42D7380", Offset = "0x42D7380", VA = "0x42D7380")]
	public ModerationLoginPopup()
	{
	}
}
