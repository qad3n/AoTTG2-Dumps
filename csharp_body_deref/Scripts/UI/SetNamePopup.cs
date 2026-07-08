using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000548")]
internal class SetNamePopup : PromptPopup
{
	[Token(Token = "0x4001A59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4001A5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x4001A5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting NameSetting;

	[Token(Token = "0x4001A5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string _initialValue;

	[Token(Token = "0x4001A5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string _defaultFieldLabel;

	[Token(Token = "0x4001A5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _previewLabel;

	[Token(Token = "0x4001A5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private NameEffectController _previewEffect;

	[Token(Token = "0x17000A89")]
	protected override string Title
	{
		[Token(Token = "0x6003785")]
		[Address(RVA = "0x3F2BC80", Offset = "0x3F2BC80", VA = "0x3F2BC80", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A8A")]
	protected override float Width
	{
		[Token(Token = "0x6003786")]
		[Address(RVA = "0x3F2BCA0", Offset = "0x3F2BCA0", VA = "0x3F2BCA0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A8B")]
	protected override float Height
	{
		[Token(Token = "0x6003787")]
		[Address(RVA = "0x3F2BCB0", Offset = "0x3F2BCB0", VA = "0x3F2BCB0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A8C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003788")]
		[Address(RVA = "0x3F2BCC0", Offset = "0x3F2BCC0", VA = "0x3F2BCC0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003789")]
	[Address(RVA = "0x3F2BCD0", Offset = "0x3F2BCD0", VA = "0x3F2BCD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600378A")]
	[Address(RVA = "0x3F2C040", Offset = "0x3F2C040", VA = "0x3F2C040")]
	public void Show(string initialValue, UnityAction onSave, string title, [Optional] string fieldLabel)
	{
	}

	[Token(Token = "0x600378B")]
	[Address(RVA = "0x3F2C150", Offset = "0x3F2C150", VA = "0x3F2C150")]
	private void SetFieldLabel(string label)
	{
	}

	[Token(Token = "0x600378C")]
	[Address(RVA = "0x3F2C290", Offset = "0x3F2C290", VA = "0x3F2C290")]
	private void RefreshPreview()
	{
	}

	[Token(Token = "0x600378D")]
	[Address(RVA = "0x3F2C510", Offset = "0x3F2C510", VA = "0x3F2C510")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600378E")]
	[Address(RVA = "0x3F2C630", Offset = "0x3F2C630", VA = "0x3F2C630")]
	public SetNamePopup()
	{
	}
}
