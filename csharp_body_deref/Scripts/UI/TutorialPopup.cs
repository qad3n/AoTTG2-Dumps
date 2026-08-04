// ==================== AoTTG2 cross-reference ====================
// Type: UI.TutorialPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TutorialPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TutorialPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006B3")]
internal class TutorialPopup : BasePopup
{
	[Token(Token = "0x4002093")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _basicTutorials;

	[Token(Token = "0x4002094")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string _advancedTutorials;

	[Token(Token = "0x4002095")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _miscTutorials;

	[Token(Token = "0x17000CF2")]
	protected override string Title
	{
		[Token(Token = "0x60042B9")]
		[Address(RVA = "0x43142F0", Offset = "0x43142F0", VA = "0x43142F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CF3")]
	protected override float Width
	{
		[Token(Token = "0x60042BA")]
		[Address(RVA = "0x4314390", Offset = "0x4314390", VA = "0x4314390", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF4")]
	protected override float Height
	{
		[Token(Token = "0x60042BB")]
		[Address(RVA = "0x43143A0", Offset = "0x43143A0", VA = "0x43143A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60042BC")]
		[Address(RVA = "0x43143B0", Offset = "0x43143B0", VA = "0x43143B0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60042BD")]
		[Address(RVA = "0x43143C0", Offset = "0x43143C0", VA = "0x43143C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CF7")]
	protected override bool UseSound
	{
		[Token(Token = "0x60042BE")]
		[Address(RVA = "0x43143D0", Offset = "0x43143D0", VA = "0x43143D0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042BF")]
	[Address(RVA = "0x43143E0", Offset = "0x43143E0", VA = "0x43143E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042C0")]
	[Address(RVA = "0x43147C0", Offset = "0x43147C0", VA = "0x43147C0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60042C1")]
	[Address(RVA = "0x4314C40", Offset = "0x4314C40", VA = "0x4314C40")]
	public TutorialPopup()
	{
	}
}
