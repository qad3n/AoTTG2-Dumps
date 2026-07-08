using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200053C")]
internal class NewImportPopup : PromptPopup
{
	[Token(Token = "0x4001A2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4001A2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _nameElement;

	[Token(Token = "0x4001A2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private InputSettingElement _importElement;

	[Token(Token = "0x4001A2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _errorText;

	[Token(Token = "0x4001A2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4001A2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public StringSetting FileName;

	[Token(Token = "0x4001A30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private bool _manualHide;

	[Token(Token = "0x17000A6C")]
	protected override string Title
	{
		[Token(Token = "0x600372A")]
		[Address(RVA = "0x3F264B0", Offset = "0x3F264B0", VA = "0x3F264B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A6D")]
	protected override float Width
	{
		[Token(Token = "0x600372B")]
		[Address(RVA = "0x3F26510", Offset = "0x3F26510", VA = "0x3F26510", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A6E")]
	protected override float Height
	{
		[Token(Token = "0x600372C")]
		[Address(RVA = "0x3F26520", Offset = "0x3F26520", VA = "0x3F26520", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A6F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600372D")]
		[Address(RVA = "0x3F26530", Offset = "0x3F26530", VA = "0x3F26530", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A70")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600372E")]
		[Address(RVA = "0x3F26540", Offset = "0x3F26540", VA = "0x3F26540", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A71")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600372F")]
		[Address(RVA = "0x3F26550", Offset = "0x3F26550", VA = "0x3F26550", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A72")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x6003730")]
		[Address(RVA = "0x3F26560", Offset = "0x3F26560", VA = "0x3F26560")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003731")]
	[Address(RVA = "0x3F26570", Offset = "0x3F26570", VA = "0x3F26570", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003732")]
	[Address(RVA = "0x3F268F0", Offset = "0x3F268F0", VA = "0x3F268F0")]
	public void Show(UnityAction onSave, bool manualHide = true)
	{
	}

	[Token(Token = "0x6003733")]
	[Address(RVA = "0x3F26A10", Offset = "0x3F26A10", VA = "0x3F26A10")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x6003734")]
	[Address(RVA = "0x3F26A60", Offset = "0x3F26A60", VA = "0x3F26A60")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003735")]
	[Address(RVA = "0x3F26B10", Offset = "0x3F26B10", VA = "0x3F26B10")]
	public NewImportPopup()
	{
	}
}
