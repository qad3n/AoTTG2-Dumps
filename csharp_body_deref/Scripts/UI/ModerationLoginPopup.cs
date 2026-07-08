using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005FD")]
internal class ModerationLoginPopup : PromptPopup
{
	[Token(Token = "0x4001D96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _usernameSetting;

	[Token(Token = "0x4001D97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly StringSetting _passwordSetting;

	[Token(Token = "0x17000B91")]
	protected override string Title
	{
		[Token(Token = "0x6003D15")]
		[Address(RVA = "0x3FC4AE0", Offset = "0x3FC4AE0", VA = "0x3FC4AE0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B92")]
	protected override float Width
	{
		[Token(Token = "0x6003D16")]
		[Address(RVA = "0x3FC4B10", Offset = "0x3FC4B10", VA = "0x3FC4B10", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B93")]
	protected override float Height
	{
		[Token(Token = "0x6003D17")]
		[Address(RVA = "0x3FC4B20", Offset = "0x3FC4B20", VA = "0x3FC4B20", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B94")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003D18")]
		[Address(RVA = "0x3FC4B30", Offset = "0x3FC4B30", VA = "0x3FC4B30", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B95")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003D19")]
		[Address(RVA = "0x3FC4B40", Offset = "0x3FC4B40", VA = "0x3FC4B40", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B96")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003D1A")]
		[Address(RVA = "0x3FC4B50", Offset = "0x3FC4B50", VA = "0x3FC4B50", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003D1B")]
	[Address(RVA = "0x3FC4B60", Offset = "0x3FC4B60", VA = "0x3FC4B60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D1C")]
	[Address(RVA = "0x3FC4E70", Offset = "0x3FC4E70", VA = "0x3FC4E70")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003D1D")]
	[Address(RVA = "0x3FC4E90", Offset = "0x3FC4E90", VA = "0x3FC4E90")]
	public ModerationLoginPopup()
	{
	}
}
