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

[Token(Token = "0x200058D")]
internal class SetNamePopup : PromptPopup
{
	[Token(Token = "0x4001B6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4001B6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x4001B6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting NameSetting;

	[Token(Token = "0x4001B6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string _initialValue;

	[Token(Token = "0x4001B70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string _defaultFieldLabel;

	[Token(Token = "0x4001B71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _previewLabel;

	[Token(Token = "0x4001B72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private NameEffectController _previewEffect;

	[Token(Token = "0x17000AF3")]
	protected override string Title
	{
		[Token(Token = "0x6003994")]
		[Address(RVA = "0x4255460", Offset = "0x4255460", VA = "0x4255460", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AF4")]
	protected override float Width
	{
		[Token(Token = "0x6003995")]
		[Address(RVA = "0x4255480", Offset = "0x4255480", VA = "0x4255480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF5")]
	protected override float Height
	{
		[Token(Token = "0x6003996")]
		[Address(RVA = "0x4255490", Offset = "0x4255490", VA = "0x4255490", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003997")]
		[Address(RVA = "0x42554A0", Offset = "0x42554A0", VA = "0x42554A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003998")]
	[Address(RVA = "0x42554B0", Offset = "0x42554B0", VA = "0x42554B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003999")]
	[Address(RVA = "0x4255820", Offset = "0x4255820", VA = "0x4255820")]
	public void Show(string initialValue, UnityAction onSave, string title, [Optional] string fieldLabel)
	{
	}

	[Token(Token = "0x600399A")]
	[Address(RVA = "0x4255930", Offset = "0x4255930", VA = "0x4255930")]
	private void SetFieldLabel(string label)
	{
	}

	[Token(Token = "0x600399B")]
	[Address(RVA = "0x4255A70", Offset = "0x4255A70", VA = "0x4255A70")]
	private void RefreshPreview()
	{
	}

	[Token(Token = "0x600399C")]
	[Address(RVA = "0x4255CF0", Offset = "0x4255CF0", VA = "0x4255CF0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600399D")]
	[Address(RVA = "0x4255E10", Offset = "0x4255E10", VA = "0x4255E10")]
	public SetNamePopup()
	{
	}
}
