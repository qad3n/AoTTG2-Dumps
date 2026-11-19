// ==================== AoTTG2 cross-reference ====================
// Type: UI.PromptPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PromptPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/PromptPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200079D")]
internal class PromptPopup : BasePopup
{
	[Token(Token = "0x17000CB8")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004996")]
		[Address(RVA = "0x5BC24C0", Offset = "0x5BC14C0", VA = "0x5BC24C0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB9")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004997")]
		[Address(RVA = "0x5BC24D0", Offset = "0x5BC14D0", VA = "0x5BC24D0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CBA")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004998")]
		[Address(RVA = "0x5BC24E0", Offset = "0x5BC14E0", VA = "0x5BC24E0", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CBB")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004999")]
		[Address(RVA = "0x5BC24F0", Offset = "0x5BC14F0", VA = "0x5BC24F0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600499A")]
	[Address(RVA = "0x5BB8610", Offset = "0x5BB7610", VA = "0x5BB8610", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600499B")]
	[Address(RVA = "0x5BC2500", Offset = "0x5BC1500", VA = "0x5BC2500")]
	public void Update()
	{
	}

	[Token(Token = "0x600499C")]
	[Address(RVA = "0x5BBC2C0", Offset = "0x5BBB2C0", VA = "0x5BBC2C0")]
	public PromptPopup()
	{
	}
}
