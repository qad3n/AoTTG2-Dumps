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

[Token(Token = "0x20006F4")]
internal class PromptPopup : BasePopup
{
	[Token(Token = "0x17000C34")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004471")]
		[Address(RVA = "0x21C6600", Offset = "0x21C4C00", VA = "0x1821C6600", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C35")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004472")]
		[Address(RVA = "0x21C6600", Offset = "0x21C4C00", VA = "0x1821C6600", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C36")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004473")]
		[Address(RVA = "0x21C6620", Offset = "0x21C4C20", VA = "0x1821C6620", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C37")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004474")]
		[Address(RVA = "0x21C6610", Offset = "0x21C4C10", VA = "0x1821C6610", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004475")]
	[Address(RVA = "0x21C63C0", Offset = "0x21C49C0", VA = "0x1821C63C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004476")]
	[Address(RVA = "0x21C64F0", Offset = "0x21C4AF0", VA = "0x1821C64F0")]
	public void Update()
	{
	}

	[Token(Token = "0x6004477")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public PromptPopup()
	{
	}
}
