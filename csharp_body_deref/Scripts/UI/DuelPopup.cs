// ==================== AoTTG2 cross-reference ====================
// Type: UI.DuelPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/DuelPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/DuelPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007DE")]
internal class DuelPopup : BasePopup
{
	[Token(Token = "0x40027D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x17000DC3")]
	protected override string Title
	{
		[Token(Token = "0x6004C3B")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DC4")]
	protected override float Width
	{
		[Token(Token = "0x6004C3C")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC5")]
	protected override float Height
	{
		[Token(Token = "0x6004C3D")]
		[Address(RVA = "0x21BB440", Offset = "0x21B9A40", VA = "0x1821BB440", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC6")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004C3E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DC7")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004C3F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DC8")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004C40")]
		[Address(RVA = "0x2279170", Offset = "0x2277770", VA = "0x182279170", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C41")]
	[Address(RVA = "0x2278EB0", Offset = "0x22774B0", VA = "0x182278EB0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004C42")]
	[Address(RVA = "0x2278FF0", Offset = "0x22775F0", VA = "0x182278FF0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004C43")]
	[Address(RVA = "0x2278C10", Offset = "0x2277210", VA = "0x182278C10", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004C44")]
	[Address(RVA = "0x22789E0", Offset = "0x2276FE0", VA = "0x1822789E0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004C45")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004C46")]
	[Address(RVA = "0x2278AD0", Offset = "0x22770D0", VA = "0x182278AD0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004C47")]
	[Address(RVA = "0x22788F0", Offset = "0x2276EF0", VA = "0x1822788F0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004C48")]
	[Address(RVA = "0x2279110", Offset = "0x2277710", VA = "0x182279110")]
	public DuelPopup()
	{
	}
}
