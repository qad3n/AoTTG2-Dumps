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

[Token(Token = "0x20006FF")]
internal class SetNamePopup : PromptPopup
{
	[Token(Token = "0x4002324")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4002325")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x4002326")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting NameSetting;

	[Token(Token = "0x4002327")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string _initialValue;

	[Token(Token = "0x4002328")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string _defaultFieldLabel;

	[Token(Token = "0x4002329")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _previewLabel;

	[Token(Token = "0x400232A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private NameEffectController _previewEffect;

	[Token(Token = "0x17000C4A")]
	protected override string Title
	{
		[Token(Token = "0x60044BF")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C4B")]
	protected override float Width
	{
		[Token(Token = "0x60044C0")]
		[Address(RVA = "0x21CB910", Offset = "0x21C9F10", VA = "0x1821CB910", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4C")]
	protected override float Height
	{
		[Token(Token = "0x60044C1")]
		[Address(RVA = "0x21CB900", Offset = "0x21C9F00", VA = "0x1821CB900", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60044C2")]
		[Address(RVA = "0x846F60", Offset = "0x845560", VA = "0x180846F60", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60044C3")]
	[Address(RVA = "0x21CB260", Offset = "0x21C9860", VA = "0x1821CB260", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044C4")]
	[Address(RVA = "0x21CB5D0", Offset = "0x21C9BD0", VA = "0x1821CB5D0")]
	public void Show(string initialValue, UnityAction onSave, string title, [Optional] string fieldLabel)
	{
	}

	[Token(Token = "0x60044C5")]
	[Address(RVA = "0x21CB120", Offset = "0x21C9720", VA = "0x1821CB120")]
	private void SetFieldLabel(string label)
	{
	}

	[Token(Token = "0x60044C6")]
	[Address(RVA = "0x21CAE80", Offset = "0x21C9480", VA = "0x1821CAE80")]
	private void RefreshPreview()
	{
	}

	[Token(Token = "0x60044C7")]
	[Address(RVA = "0x21CAD70", Offset = "0x21C9370", VA = "0x1821CAD70")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60044C8")]
	[Address(RVA = "0x21CB860", Offset = "0x21C9E60", VA = "0x1821CB860")]
	public SetNamePopup()
	{
	}
}
