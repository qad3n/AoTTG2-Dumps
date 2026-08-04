// ==================== AoTTG2 cross-reference ====================
// Type: UI.ToolsPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ToolsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ToolsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006B2")]
internal class ToolsPopup : BasePopup
{
	[Token(Token = "0x17000CEC")]
	protected override string Title
	{
		[Token(Token = "0x60042AA")]
		[Address(RVA = "0x4313A20", Offset = "0x4313A20", VA = "0x4313A20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CED")]
	protected override float Width
	{
		[Token(Token = "0x60042AB")]
		[Address(RVA = "0x4313AC0", Offset = "0x4313AC0", VA = "0x4313AC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CEE")]
	protected override float Height
	{
		[Token(Token = "0x60042AC")]
		[Address(RVA = "0x4313AD0", Offset = "0x4313AD0", VA = "0x4313AD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CEF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60042AD")]
		[Address(RVA = "0x4313AE0", Offset = "0x4313AE0", VA = "0x4313AE0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF0")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60042AE")]
		[Address(RVA = "0x4313AF0", Offset = "0x4313AF0", VA = "0x4313AF0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CF1")]
	protected override bool UseSound
	{
		[Token(Token = "0x60042AF")]
		[Address(RVA = "0x4313B00", Offset = "0x4313B00", VA = "0x4313B00", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042B0")]
	[Address(RVA = "0x4313B10", Offset = "0x4313B10", VA = "0x4313B10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042B1")]
	[Address(RVA = "0x4313F80", Offset = "0x4313F80", VA = "0x4313F80")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60042B2")]
	[Address(RVA = "0x4314160", Offset = "0x4314160", VA = "0x4314160")]
	public ToolsPopup()
	{
	}
}
