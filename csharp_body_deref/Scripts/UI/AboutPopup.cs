// ==================== AoTTG2 cross-reference ====================
// Type: UI.AboutPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/AboutPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/AboutPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007D2")]
internal class AboutPopup : BasePopup
{
	[Token(Token = "0x17000DB2")]
	protected override string Title
	{
		[Token(Token = "0x6004BCD")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DB3")]
	protected override float Width
	{
		[Token(Token = "0x6004BCE")]
		[Address(RVA = "0x21BB440", Offset = "0x21B9A40", VA = "0x1821BB440", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DB4")]
	protected override float Height
	{
		[Token(Token = "0x6004BCF")]
		[Address(RVA = "0x21500A0", Offset = "0x214E6A0", VA = "0x1821500A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DB5")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004BD0")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DB6")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004BD1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DB7")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004BD2")]
		[Address(RVA = "0x226EE50", Offset = "0x226D450", VA = "0x18226EE50", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DB8")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004BD3")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004BD4")]
	[Address(RVA = "0x226EE30", Offset = "0x226D430", VA = "0x18226EE30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004BD5")]
	[Address(RVA = "0x226EB70", Offset = "0x226D170", VA = "0x18226EB70", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004BD6")]
	[Address(RVA = "0x226E8B0", Offset = "0x226CEB0", VA = "0x18226E8B0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004BD7")]
	[Address(RVA = "0x226E950", Offset = "0x226CF50", VA = "0x18226E950")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004BD8")]
	[Address(RVA = "0x226E850", Offset = "0x226CE50", VA = "0x18226E850")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004BD9")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public AboutPopup()
	{
	}
}
