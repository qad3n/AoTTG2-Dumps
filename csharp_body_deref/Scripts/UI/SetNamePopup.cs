// ==================== AoTTG2 cross-reference ====================
// Type: UI.SetNamePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SetNamePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SetNamePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20007A9")]
internal class SetNamePopup : PromptPopup
{
	[Token(Token = "0x40026A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x40026A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x40026A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting NameSetting;

	[Token(Token = "0x40026A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string _initialValue;

	[Token(Token = "0x40026A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string _defaultFieldLabel;

	[Token(Token = "0x40026A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _previewLabel;

	[Token(Token = "0x40026A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private NameEffectController _previewEffect;

	[Token(Token = "0x17000CCE")]
	protected override string Title
	{
		[Token(Token = "0x60049E6")]
		[Address(RVA = "0x5BC7690", Offset = "0x5BC6690", VA = "0x5BC7690", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CCF")]
	protected override float Width
	{
		[Token(Token = "0x60049E7")]
		[Address(RVA = "0x5BC76B0", Offset = "0x5BC66B0", VA = "0x5BC76B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD0")]
	protected override float Height
	{
		[Token(Token = "0x60049E8")]
		[Address(RVA = "0x5BC76C0", Offset = "0x5BC66C0", VA = "0x5BC76C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD1")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60049E9")]
		[Address(RVA = "0x5BC76D0", Offset = "0x5BC66D0", VA = "0x5BC76D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60049EA")]
	[Address(RVA = "0x5BC76E0", Offset = "0x5BC66E0", VA = "0x5BC76E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60049EB")]
	[Address(RVA = "0x5BC7A50", Offset = "0x5BC6A50", VA = "0x5BC7A50")]
	public void Show(string initialValue, UnityAction onSave, string title, [Optional] string fieldLabel)
	{
	}

	[Token(Token = "0x60049EC")]
	[Address(RVA = "0x5BC7B60", Offset = "0x5BC6B60", VA = "0x5BC7B60")]
	private void SetFieldLabel(string label)
	{
	}

	[Token(Token = "0x60049ED")]
	[Address(RVA = "0x5BC7CA0", Offset = "0x5BC6CA0", VA = "0x5BC7CA0")]
	private void RefreshPreview()
	{
	}

	[Token(Token = "0x60049EE")]
	[Address(RVA = "0x5BC7F20", Offset = "0x5BC6F20", VA = "0x5BC7F20")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60049EF")]
	[Address(RVA = "0x5BC8040", Offset = "0x5BC7040", VA = "0x5BC8040")]
	public SetNamePopup()
	{
	}
}
