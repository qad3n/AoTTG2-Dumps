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

[Token(Token = "0x20007FE")]
internal class MultiplayerPasswordPopup : PromptPopup
{
	[Token(Token = "0x4002843")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected StringSetting _enteredPassword;

	[Token(Token = "0x4002844")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected string _actualPasswordHash;

	[Token(Token = "0x4002845")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected string _passwordSalt;

	[Token(Token = "0x4002846")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected string _roomName;

	[Token(Token = "0x4002847")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected string _roomId;

	[Token(Token = "0x4002848")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected GameObject _incorrectPasswordLabel;

	[Token(Token = "0x17000E06")]
	protected override string Title
	{
		[Token(Token = "0x6004D26")]
		[Address(RVA = "0x2292FA0", Offset = "0x22915A0", VA = "0x182292FA0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E07")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004D27")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E08")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004D28")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E09")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004D29")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E0A")]
	protected override float Width
	{
		[Token(Token = "0x6004D2A")]
		[Address(RVA = "0x21C1230", Offset = "0x21BF830", VA = "0x1821C1230", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E0B")]
	protected override float Height
	{
		[Token(Token = "0x6004D2B")]
		[Address(RVA = "0x2182BD0", Offset = "0x21811D0", VA = "0x182182BD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E0C")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004D2C")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004D2D")]
	[Address(RVA = "0x2292A40", Offset = "0x2291040", VA = "0x182292A40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D2E")]
	[Address(RVA = "0x2292DD0", Offset = "0x22913D0", VA = "0x182292DD0")]
	public void Show(string actualPasswordHash, string passwordSalt, string roomId, string roomName)
	{
	}

	[Token(Token = "0x6004D2F")]
	[Address(RVA = "0x2292870", Offset = "0x2290E70", VA = "0x182292870")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D30")]
	[Address(RVA = "0x2292F00", Offset = "0x2291500", VA = "0x182292F00")]
	public MultiplayerPasswordPopup()
	{
	}
}
