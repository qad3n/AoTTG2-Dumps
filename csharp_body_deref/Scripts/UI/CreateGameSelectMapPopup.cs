// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameSelectMapPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameSelectMapPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameSelectMapPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20005CE")]
internal class CreateGameSelectMapPopup : BasePopup
{
	[Token(Token = "0x4001C32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting SearchSetting;

	[Token(Token = "0x4001C33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x17000B6D")]
	protected override string Title
	{
		[Token(Token = "0x6003B86")]
		[Address(RVA = "0x427F250", Offset = "0x427F250", VA = "0x427F250", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B6E")]
	protected override float Width
	{
		[Token(Token = "0x6003B87")]
		[Address(RVA = "0x427F270", Offset = "0x427F270", VA = "0x427F270", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B6F")]
	protected override float Height
	{
		[Token(Token = "0x6003B88")]
		[Address(RVA = "0x427F280", Offset = "0x427F280", VA = "0x427F280", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B70")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003B89")]
		[Address(RVA = "0x427F290", Offset = "0x427F290", VA = "0x427F290", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B71")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003B8A")]
		[Address(RVA = "0x427F2A0", Offset = "0x427F2A0", VA = "0x427F2A0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B72")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003B8B")]
		[Address(RVA = "0x427F2B0", Offset = "0x427F2B0", VA = "0x427F2B0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003B8C")]
	[Address(RVA = "0x427F2E0", Offset = "0x427F2E0", VA = "0x427F2E0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003B8D")]
	[Address(RVA = "0x427F3C0", Offset = "0x427F3C0", VA = "0x427F3C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B8E")]
	[Address(RVA = "0x427F650", Offset = "0x427F650", VA = "0x427F650", Slot = "59")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x6003B8F")]
	[Address(RVA = "0x427F7D0", Offset = "0x427F7D0", VA = "0x427F7D0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003B90")]
	[Address(RVA = "0x427F9F0", Offset = "0x427F9F0", VA = "0x427F9F0")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003B91")]
	[Address(RVA = "0x427FA10", Offset = "0x427FA10", VA = "0x427FA10", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003B92")]
	[Address(RVA = "0x427FC00", Offset = "0x427FC00", VA = "0x427FC00")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003B93")]
	[Address(RVA = "0x427FC20", Offset = "0x427FC20", VA = "0x427FC20")]
	public CreateGameSelectMapPopup()
	{
	}
}
