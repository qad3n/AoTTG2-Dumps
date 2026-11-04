// ==================== AoTTG2 cross-reference ====================
// Type: UI.ImportPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ImportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ImportPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006EF")]
internal class ImportPopup : PromptPopup
{
	[Token(Token = "0x40022E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x40022E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x40022E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _errorText;

	[Token(Token = "0x40022E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _topText;

	[Token(Token = "0x40022E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x40022EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _manualHide;

	[Token(Token = "0x17000C15")]
	protected override string Title
	{
		[Token(Token = "0x6004432")]
		[Address(RVA = "0x21C4F70", Offset = "0x21C3570", VA = "0x1821C4F70", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C16")]
	protected override float Width
	{
		[Token(Token = "0x6004433")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C17")]
	protected override float Height
	{
		[Token(Token = "0x6004434")]
		[Address(RVA = "0x21C1EA0", Offset = "0x21C04A0", VA = "0x1821C1EA0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C18")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004435")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C19")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004436")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C1A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004437")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C1B")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x6004438")]
		[Address(RVA = "0x21C4F50", Offset = "0x21C3550", VA = "0x1821C4F50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C1C")]
	protected float TextHeight
	{
		[Token(Token = "0x6004439")]
		[Address(RVA = "0x21C4F60", Offset = "0x21C3560", VA = "0x1821C4F60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600443A")]
	[Address(RVA = "0x21C47C0", Offset = "0x21C2DC0", VA = "0x1821C47C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600443B")]
	[Address(RVA = "0x21C4C20", Offset = "0x21C3220", VA = "0x1821C4C20")]
	public void Show(UnityAction onSave, bool manualHide = true, string topText = "", string initialText = "")
	{
	}

	[Token(Token = "0x600443C")]
	[Address(RVA = "0x21C4B10", Offset = "0x21C3110", VA = "0x1821C4B10")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x600443D")]
	[Address(RVA = "0x21C4710", Offset = "0x21C2D10", VA = "0x1821C4710")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600443E")]
	[Address(RVA = "0x21C4EB0", Offset = "0x21C34B0", VA = "0x1821C4EB0")]
	public ImportPopup()
	{
	}
}
