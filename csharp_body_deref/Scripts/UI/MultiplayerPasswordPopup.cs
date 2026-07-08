using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000657")]
internal class MultiplayerPasswordPopup : PromptPopup
{
	[Token(Token = "0x4001F1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected StringSetting _enteredPassword;

	[Token(Token = "0x4001F1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected string _actualPasswordHash;

	[Token(Token = "0x4001F1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected string _passwordSalt;

	[Token(Token = "0x4001F1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected string _roomName;

	[Token(Token = "0x4001F1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected string _roomId;

	[Token(Token = "0x4001F1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected GameObject _incorrectPasswordLabel;

	[Token(Token = "0x17000C46")]
	protected override string Title
	{
		[Token(Token = "0x6003FD5")]
		[Address(RVA = "0x3FF7150", Offset = "0x3FF7150", VA = "0x3FF7150", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C47")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003FD6")]
		[Address(RVA = "0x3FF71B0", Offset = "0x3FF71B0", VA = "0x3FF71B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C48")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003FD7")]
		[Address(RVA = "0x3FF71C0", Offset = "0x3FF71C0", VA = "0x3FF71C0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C49")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003FD8")]
		[Address(RVA = "0x3FF71D0", Offset = "0x3FF71D0", VA = "0x3FF71D0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4A")]
	protected override float Width
	{
		[Token(Token = "0x6003FD9")]
		[Address(RVA = "0x3FF71E0", Offset = "0x3FF71E0", VA = "0x3FF71E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4B")]
	protected override float Height
	{
		[Token(Token = "0x6003FDA")]
		[Address(RVA = "0x3FF71F0", Offset = "0x3FF71F0", VA = "0x3FF71F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4C")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003FDB")]
		[Address(RVA = "0x3FF7200", Offset = "0x3FF7200", VA = "0x3FF7200", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003FDC")]
	[Address(RVA = "0x3FF7210", Offset = "0x3FF7210", VA = "0x3FF7210", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FDD")]
	[Address(RVA = "0x3FF7580", Offset = "0x3FF7580", VA = "0x3FF7580")]
	public void Show(string actualPasswordHash, string passwordSalt, string roomId, string roomName)
	{
	}

	[Token(Token = "0x6003FDE")]
	[Address(RVA = "0x3FF7620", Offset = "0x3FF7620", VA = "0x3FF7620")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003FDF")]
	[Address(RVA = "0x3FF7890", Offset = "0x3FF7890", VA = "0x3FF7890")]
	public MultiplayerPasswordPopup()
	{
	}
}
