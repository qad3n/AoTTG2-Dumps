// ==================== AoTTG2 cross-reference ====================
// Type: UI.PausePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PausePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PausePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007A8")]
internal class PausePopup : BasePopup
{
	[Token(Token = "0x17000D65")]
	protected override string Title
	{
		[Token(Token = "0x6004A7C")]
		[Address(RVA = "0x225EC40", Offset = "0x225D240", VA = "0x18225EC40", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D66")]
	protected override float Width
	{
		[Token(Token = "0x6004A7D")]
		[Address(RVA = "0x2245D50", Offset = "0x2244350", VA = "0x182245D50", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D67")]
	protected override float Height
	{
		[Token(Token = "0x6004A7E")]
		[Address(RVA = "0x21DDA70", Offset = "0x21DC070", VA = "0x1821DDA70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D68")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A7F")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D69")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A80")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004A81")]
	[Address(RVA = "0x225E890", Offset = "0x225CE90", VA = "0x18225E890", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A82")]
	[Address(RVA = "0x225E6A0", Offset = "0x225CCA0", VA = "0x18225E6A0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004A83")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public PausePopup()
	{
	}
}
