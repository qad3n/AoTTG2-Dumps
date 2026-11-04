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

[Token(Token = "0x20006F3")]
internal class NewImportPopup : PromptPopup
{
	[Token(Token = "0x40022F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x40022F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _nameElement;

	[Token(Token = "0x40022F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private InputSettingElement _importElement;

	[Token(Token = "0x40022F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _errorText;

	[Token(Token = "0x40022F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x40022FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public StringSetting FileName;

	[Token(Token = "0x40022FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private bool _manualHide;

	[Token(Token = "0x17000C2D")]
	protected override string Title
	{
		[Token(Token = "0x6004463")]
		[Address(RVA = "0x21C6360", Offset = "0x21C4960", VA = "0x1821C6360", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C2E")]
	protected override float Width
	{
		[Token(Token = "0x6004464")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C2F")]
	protected override float Height
	{
		[Token(Token = "0x6004465")]
		[Address(RVA = "0x21C6350", Offset = "0x21C4950", VA = "0x1821C6350", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C30")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004466")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C31")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004467")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C32")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004468")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C33")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x6004469")]
		[Address(RVA = "0x21C6340", Offset = "0x21C4940", VA = "0x1821C6340")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600446A")]
	[Address(RVA = "0x21C5CA0", Offset = "0x21C42A0", VA = "0x1821C5CA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600446B")]
	[Address(RVA = "0x21C60B0", Offset = "0x21C46B0", VA = "0x1821C60B0")]
	public void Show(UnityAction onSave, bool manualHide = true)
	{
	}

	[Token(Token = "0x600446C")]
	[Address(RVA = "0x21C6050", Offset = "0x21C4650", VA = "0x1821C6050")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x600446D")]
	[Address(RVA = "0x21C5BF0", Offset = "0x21C41F0", VA = "0x1821C5BF0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600446E")]
	[Address(RVA = "0x21C6260", Offset = "0x21C4860", VA = "0x1821C6260")]
	public NewImportPopup()
	{
	}
}
