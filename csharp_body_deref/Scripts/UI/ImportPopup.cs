using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000538")]
internal class ImportPopup : PromptPopup
{
	[Token(Token = "0x4001A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4001A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x4001A1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _errorText;

	[Token(Token = "0x4001A1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _topText;

	[Token(Token = "0x4001A1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4001A1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _manualHide;

	[Token(Token = "0x17000A55")]
	protected override string Title
	{
		[Token(Token = "0x60036FA")]
		[Address(RVA = "0x3F24DA0", Offset = "0x3F24DA0", VA = "0x3F24DA0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A56")]
	protected override float Width
	{
		[Token(Token = "0x60036FB")]
		[Address(RVA = "0x3F24E00", Offset = "0x3F24E00", VA = "0x3F24E00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A57")]
	protected override float Height
	{
		[Token(Token = "0x60036FC")]
		[Address(RVA = "0x3F24E10", Offset = "0x3F24E10", VA = "0x3F24E10", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A58")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60036FD")]
		[Address(RVA = "0x3F24E20", Offset = "0x3F24E20", VA = "0x3F24E20", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A59")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60036FE")]
		[Address(RVA = "0x3F24E30", Offset = "0x3F24E30", VA = "0x3F24E30", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A5A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60036FF")]
		[Address(RVA = "0x3F24E40", Offset = "0x3F24E40", VA = "0x3F24E40", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A5B")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x6003700")]
		[Address(RVA = "0x3F24E50", Offset = "0x3F24E50", VA = "0x3F24E50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A5C")]
	protected float TextHeight
	{
		[Token(Token = "0x6003701")]
		[Address(RVA = "0x3F24E60", Offset = "0x3F24E60", VA = "0x3F24E60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003702")]
	[Address(RVA = "0x3F24E70", Offset = "0x3F24E70", VA = "0x3F24E70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003703")]
	[Address(RVA = "0x3F251A0", Offset = "0x3F251A0", VA = "0x3F251A0")]
	public void Show(UnityAction onSave, bool manualHide = true, string topText = "")
	{
	}

	[Token(Token = "0x6003704")]
	[Address(RVA = "0x3F253C0", Offset = "0x3F253C0", VA = "0x3F253C0")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x6003705")]
	[Address(RVA = "0x3F254C0", Offset = "0x3F254C0", VA = "0x3F254C0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003706")]
	[Address(RVA = "0x3F25570", Offset = "0x3F25570", VA = "0x3F25570")]
	public ImportPopup()
	{
	}
}
