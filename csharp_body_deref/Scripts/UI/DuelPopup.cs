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

[Token(Token = "0x2000683")]
internal class DuelPopup : BasePopup
{
	[Token(Token = "0x4002001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x17000C7D")]
	protected override string Title
	{
		[Token(Token = "0x6004146")]
		[Address(RVA = "0x42FABA0", Offset = "0x42FABA0", VA = "0x42FABA0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C7E")]
	protected override float Width
	{
		[Token(Token = "0x6004147")]
		[Address(RVA = "0x42FABC0", Offset = "0x42FABC0", VA = "0x42FABC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7F")]
	protected override float Height
	{
		[Token(Token = "0x6004148")]
		[Address(RVA = "0x42FABD0", Offset = "0x42FABD0", VA = "0x42FABD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C80")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004149")]
		[Address(RVA = "0x42FABE0", Offset = "0x42FABE0", VA = "0x42FABE0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C81")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600414A")]
		[Address(RVA = "0x42FABF0", Offset = "0x42FABF0", VA = "0x42FABF0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C82")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600414B")]
		[Address(RVA = "0x42FAC00", Offset = "0x42FAC00", VA = "0x42FAC00", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600414C")]
	[Address(RVA = "0x42FAC30", Offset = "0x42FAC30", VA = "0x42FAC30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600414D")]
	[Address(RVA = "0x42FAD80", Offset = "0x42FAD80", VA = "0x42FAD80", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600414E")]
	[Address(RVA = "0x42FAD90", Offset = "0x42FAD90", VA = "0x42FAD90", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x600414F")]
	[Address(RVA = "0x42FB040", Offset = "0x42FB040", VA = "0x42FB040", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004150")]
	[Address(RVA = "0x42FB130", Offset = "0x42FB130", VA = "0x42FB130", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004151")]
	[Address(RVA = "0x42FAC50", Offset = "0x42FAC50", VA = "0x42FAC50")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004152")]
	[Address(RVA = "0x42FB140", Offset = "0x42FB140", VA = "0x42FB140")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004153")]
	[Address(RVA = "0x42FB220", Offset = "0x42FB220", VA = "0x42FB220")]
	public DuelPopup()
	{
	}
}
