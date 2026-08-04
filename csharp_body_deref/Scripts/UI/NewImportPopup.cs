// ==================== AoTTG2 cross-reference ====================
// Type: UI.NewImportPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/NewImportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/NewImportPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000581")]
internal class NewImportPopup : PromptPopup
{
	[Token(Token = "0x4001B3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4001B3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _nameElement;

	[Token(Token = "0x4001B3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private InputSettingElement _importElement;

	[Token(Token = "0x4001B40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _errorText;

	[Token(Token = "0x4001B41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4001B42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public StringSetting FileName;

	[Token(Token = "0x4001B43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private bool _manualHide;

	[Token(Token = "0x17000AD6")]
	protected override string Title
	{
		[Token(Token = "0x6003938")]
		[Address(RVA = "0x424FC60", Offset = "0x424FC60", VA = "0x424FC60", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AD7")]
	protected override float Width
	{
		[Token(Token = "0x6003939")]
		[Address(RVA = "0x424FCC0", Offset = "0x424FCC0", VA = "0x424FCC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AD8")]
	protected override float Height
	{
		[Token(Token = "0x600393A")]
		[Address(RVA = "0x424FCD0", Offset = "0x424FCD0", VA = "0x424FCD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AD9")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600393B")]
		[Address(RVA = "0x424FCE0", Offset = "0x424FCE0", VA = "0x424FCE0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000ADA")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600393C")]
		[Address(RVA = "0x424FCF0", Offset = "0x424FCF0", VA = "0x424FCF0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000ADB")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600393D")]
		[Address(RVA = "0x424FD00", Offset = "0x424FD00", VA = "0x424FD00", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ADC")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x600393E")]
		[Address(RVA = "0x424FD10", Offset = "0x424FD10", VA = "0x424FD10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600393F")]
	[Address(RVA = "0x424FD20", Offset = "0x424FD20", VA = "0x424FD20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003940")]
	[Address(RVA = "0x42500A0", Offset = "0x42500A0", VA = "0x42500A0")]
	public void Show(UnityAction onSave, bool manualHide = true)
	{
	}

	[Token(Token = "0x6003941")]
	[Address(RVA = "0x42501C0", Offset = "0x42501C0", VA = "0x42501C0")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x6003942")]
	[Address(RVA = "0x4250210", Offset = "0x4250210", VA = "0x4250210")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003943")]
	[Address(RVA = "0x42502C0", Offset = "0x42502C0", VA = "0x42502C0")]
	public NewImportPopup()
	{
	}
}
