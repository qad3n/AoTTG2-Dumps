// ==================== AoTTG2 cross-reference ====================
// Type: UI.ImportPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000798")]
internal class ImportPopup : PromptPopup
{
	[Token(Token = "0x400265F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4002660")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x4002661")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _errorText;

	[Token(Token = "0x4002662")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _topText;

	[Token(Token = "0x4002663")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4002664")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _manualHide;

	[Token(Token = "0x17000C99")]
	protected override string Title
	{
		[Token(Token = "0x6004957")]
		[Address(RVA = "0x5BC0570", Offset = "0x5BBF570", VA = "0x5BC0570", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C9A")]
	protected override float Width
	{
		[Token(Token = "0x6004958")]
		[Address(RVA = "0x5BC05D0", Offset = "0x5BBF5D0", VA = "0x5BC05D0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9B")]
	protected override float Height
	{
		[Token(Token = "0x6004959")]
		[Address(RVA = "0x5BC05E0", Offset = "0x5BBF5E0", VA = "0x5BC05E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600495A")]
		[Address(RVA = "0x5BC05F0", Offset = "0x5BBF5F0", VA = "0x5BC05F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C9D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600495B")]
		[Address(RVA = "0x5BC0600", Offset = "0x5BBF600", VA = "0x5BC0600", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C9E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600495C")]
		[Address(RVA = "0x5BC0610", Offset = "0x5BBF610", VA = "0x5BC0610", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9F")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x600495D")]
		[Address(RVA = "0x5BC0620", Offset = "0x5BBF620", VA = "0x5BC0620")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA0")]
	protected float TextHeight
	{
		[Token(Token = "0x600495E")]
		[Address(RVA = "0x5BC0630", Offset = "0x5BBF630", VA = "0x5BC0630")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600495F")]
	[Address(RVA = "0x5BC0640", Offset = "0x5BBF640", VA = "0x5BC0640", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004960")]
	[Address(RVA = "0x5BC0970", Offset = "0x5BBF970", VA = "0x5BC0970")]
	public void Show(UnityAction onSave, bool manualHide = true, string topText = "", string initialText = "")
	{
	}

	[Token(Token = "0x6004961")]
	[Address(RVA = "0x5BC0BB0", Offset = "0x5BBFBB0", VA = "0x5BC0BB0")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x6004962")]
	[Address(RVA = "0x5BC0CE0", Offset = "0x5BBFCE0", VA = "0x5BC0CE0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004963")]
	[Address(RVA = "0x5BC0D90", Offset = "0x5BBFD90", VA = "0x5BC0D90")]
	public ImportPopup()
	{
	}
}
