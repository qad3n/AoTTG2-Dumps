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

[Token(Token = "0x200079C")]
internal class NewImportPopup : PromptPopup
{
	[Token(Token = "0x400266F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4002670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _nameElement;

	[Token(Token = "0x4002671")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private InputSettingElement _importElement;

	[Token(Token = "0x4002672")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _errorText;

	[Token(Token = "0x4002673")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4002674")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public StringSetting FileName;

	[Token(Token = "0x4002675")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private bool _manualHide;

	[Token(Token = "0x17000CB1")]
	protected override string Title
	{
		[Token(Token = "0x6004988")]
		[Address(RVA = "0x5BC1D00", Offset = "0x5BC0D00", VA = "0x5BC1D00", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CB2")]
	protected override float Width
	{
		[Token(Token = "0x6004989")]
		[Address(RVA = "0x5BC1D60", Offset = "0x5BC0D60", VA = "0x5BC1D60", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB3")]
	protected override float Height
	{
		[Token(Token = "0x600498A")]
		[Address(RVA = "0x5BC1D70", Offset = "0x5BC0D70", VA = "0x5BC1D70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600498B")]
		[Address(RVA = "0x5BC1D80", Offset = "0x5BC0D80", VA = "0x5BC1D80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CB5")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600498C")]
		[Address(RVA = "0x5BC1D90", Offset = "0x5BC0D90", VA = "0x5BC1D90", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CB6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600498D")]
		[Address(RVA = "0x5BC1DA0", Offset = "0x5BC0DA0", VA = "0x5BC1DA0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB7")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x600498E")]
		[Address(RVA = "0x5BC1DB0", Offset = "0x5BC0DB0", VA = "0x5BC1DB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600498F")]
	[Address(RVA = "0x5BC1DC0", Offset = "0x5BC0DC0", VA = "0x5BC1DC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004990")]
	[Address(RVA = "0x5BC2140", Offset = "0x5BC1140", VA = "0x5BC2140")]
	public void Show(UnityAction onSave, bool manualHide = true)
	{
	}

	[Token(Token = "0x6004991")]
	[Address(RVA = "0x5BC2260", Offset = "0x5BC1260", VA = "0x5BC2260")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x6004992")]
	[Address(RVA = "0x5BC22B0", Offset = "0x5BC12B0", VA = "0x5BC22B0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004993")]
	[Address(RVA = "0x5BC2360", Offset = "0x5BC1360", VA = "0x5BC2360")]
	public NewImportPopup()
	{
	}
}
