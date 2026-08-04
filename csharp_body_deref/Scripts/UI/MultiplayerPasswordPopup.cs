// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiplayerPasswordPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiplayerPasswordPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerPasswordPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006A3")]
internal class MultiplayerPasswordPopup : PromptPopup
{
	[Token(Token = "0x400206F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected StringSetting _enteredPassword;

	[Token(Token = "0x4002070")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected string _actualPasswordHash;

	[Token(Token = "0x4002071")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected string _passwordSalt;

	[Token(Token = "0x4002072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected string _roomName;

	[Token(Token = "0x4002073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected string _roomId;

	[Token(Token = "0x4002074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected GameObject _incorrectPasswordLabel;

	[Token(Token = "0x17000CC0")]
	protected override string Title
	{
		[Token(Token = "0x6004232")]
		[Address(RVA = "0x430B490", Offset = "0x430B490", VA = "0x430B490", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CC1")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004233")]
		[Address(RVA = "0x430B4F0", Offset = "0x430B4F0", VA = "0x430B4F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CC2")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004234")]
		[Address(RVA = "0x430B500", Offset = "0x430B500", VA = "0x430B500", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CC3")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004235")]
		[Address(RVA = "0x430B510", Offset = "0x430B510", VA = "0x430B510", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC4")]
	protected override float Width
	{
		[Token(Token = "0x6004236")]
		[Address(RVA = "0x430B520", Offset = "0x430B520", VA = "0x430B520", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC5")]
	protected override float Height
	{
		[Token(Token = "0x6004237")]
		[Address(RVA = "0x430B530", Offset = "0x430B530", VA = "0x430B530", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC6")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004238")]
		[Address(RVA = "0x430B540", Offset = "0x430B540", VA = "0x430B540", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004239")]
	[Address(RVA = "0x430B550", Offset = "0x430B550", VA = "0x430B550", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600423A")]
	[Address(RVA = "0x430B8C0", Offset = "0x430B8C0", VA = "0x430B8C0")]
	public void Show(string actualPasswordHash, string passwordSalt, string roomId, string roomName)
	{
	}

	[Token(Token = "0x600423B")]
	[Address(RVA = "0x430B960", Offset = "0x430B960", VA = "0x430B960")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600423C")]
	[Address(RVA = "0x430BBD0", Offset = "0x430BBD0", VA = "0x430BBD0")]
	public MultiplayerPasswordPopup()
	{
	}
}
