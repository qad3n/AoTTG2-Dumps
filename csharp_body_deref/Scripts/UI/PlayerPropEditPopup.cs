using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000601")]
internal class PlayerPropEditPopup : PromptPopup
{
	[Token(Token = "0x4001DAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _keySetting;

	[Token(Token = "0x4001DAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly StringSetting _valueSetting;

	[Token(Token = "0x4001DAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Action<string> _onSave;

	[Token(Token = "0x4001DB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Action<string, string> _onAdd;

	[Token(Token = "0x4001DB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _addMode;

	[Token(Token = "0x4001DB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private InputField _keyInputField;

	[Token(Token = "0x4001DB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Text _statusLabel;

	[Token(Token = "0x17000B9C")]
	protected override string Title
	{
		[Token(Token = "0x6003D42")]
		[Address(RVA = "0x3FC6F30", Offset = "0x3FC6F30", VA = "0x3FC6F30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B9D")]
	protected override float Width
	{
		[Token(Token = "0x6003D43")]
		[Address(RVA = "0x3FC6F80", Offset = "0x3FC6F80", VA = "0x3FC6F80", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9E")]
	protected override float Height
	{
		[Token(Token = "0x6003D44")]
		[Address(RVA = "0x3FC6F90", Offset = "0x3FC6F90", VA = "0x3FC6F90", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003D45")]
		[Address(RVA = "0x3FC6FA0", Offset = "0x3FC6FA0", VA = "0x3FC6FA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BA0")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003D46")]
		[Address(RVA = "0x3FC6FB0", Offset = "0x3FC6FB0", VA = "0x3FC6FB0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BA1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003D47")]
		[Address(RVA = "0x3FC6FC0", Offset = "0x3FC6FC0", VA = "0x3FC6FC0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003D48")]
	[Address(RVA = "0x3FC6FD0", Offset = "0x3FC6FD0", VA = "0x3FC6FD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D49")]
	[Address(RVA = "0x3FC7370", Offset = "0x3FC7370", VA = "0x3FC7370")]
	public void ShowEdit(string key, string currentValue, Action<string> onSave)
	{
	}

	[Token(Token = "0x6003D4A")]
	[Address(RVA = "0x3FC74F0", Offset = "0x3FC74F0", VA = "0x3FC74F0")]
	public void ShowAdd(Action<string, string> onAdd)
	{
	}

	[Token(Token = "0x6003D4B")]
	[Address(RVA = "0x3FC7660", Offset = "0x3FC7660", VA = "0x3FC7660")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003D4C")]
	[Address(RVA = "0x3FC78B0", Offset = "0x3FC78B0", VA = "0x3FC78B0")]
	public PlayerPropEditPopup()
	{
	}
}
