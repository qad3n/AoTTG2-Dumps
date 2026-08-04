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

[Token(Token = "0x200057D")]
internal class ImportPopup : PromptPopup
{
	[Token(Token = "0x4001B2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4001B2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x4001B2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _errorText;

	[Token(Token = "0x4001B30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _topText;

	[Token(Token = "0x4001B31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4001B32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _manualHide;

	[Token(Token = "0x17000ABF")]
	protected override string Title
	{
		[Token(Token = "0x6003908")]
		[Address(RVA = "0x424E550", Offset = "0x424E550", VA = "0x424E550", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AC0")]
	protected override float Width
	{
		[Token(Token = "0x6003909")]
		[Address(RVA = "0x424E5B0", Offset = "0x424E5B0", VA = "0x424E5B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AC1")]
	protected override float Height
	{
		[Token(Token = "0x600390A")]
		[Address(RVA = "0x424E5C0", Offset = "0x424E5C0", VA = "0x424E5C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AC2")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600390B")]
		[Address(RVA = "0x424E5D0", Offset = "0x424E5D0", VA = "0x424E5D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AC3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600390C")]
		[Address(RVA = "0x424E5E0", Offset = "0x424E5E0", VA = "0x424E5E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AC4")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600390D")]
		[Address(RVA = "0x424E5F0", Offset = "0x424E5F0", VA = "0x424E5F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AC5")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x600390E")]
		[Address(RVA = "0x424E600", Offset = "0x424E600", VA = "0x424E600")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AC6")]
	protected float TextHeight
	{
		[Token(Token = "0x600390F")]
		[Address(RVA = "0x424E610", Offset = "0x424E610", VA = "0x424E610")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003910")]
	[Address(RVA = "0x424E620", Offset = "0x424E620", VA = "0x424E620", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003911")]
	[Address(RVA = "0x424E950", Offset = "0x424E950", VA = "0x424E950")]
	public void Show(UnityAction onSave, bool manualHide = true, string topText = "")
	{
	}

	[Token(Token = "0x6003912")]
	[Address(RVA = "0x424EB70", Offset = "0x424EB70", VA = "0x424EB70")]
	public void ShowError(string error)
	{
	}

	[Token(Token = "0x6003913")]
	[Address(RVA = "0x424EC70", Offset = "0x424EC70", VA = "0x424EC70")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003914")]
	[Address(RVA = "0x424ED20", Offset = "0x424ED20", VA = "0x424ED20")]
	public ImportPopup()
	{
	}
}
