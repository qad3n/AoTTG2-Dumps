using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000563")]
internal class CharacterEditorStatsPanel : HeadedPanel
{
	[Token(Token = "0x17000ACB")]
	protected override string Title
	{
		[Token(Token = "0x6003881")]
		[Address(RVA = "0x3F570A0", Offset = "0x3F570A0", VA = "0x3F570A0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ACC")]
	protected override float Width
	{
		[Token(Token = "0x6003882")]
		[Address(RVA = "0x3F57140", Offset = "0x3F57140", VA = "0x3F57140", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ACD")]
	protected override float Height
	{
		[Token(Token = "0x6003883")]
		[Address(RVA = "0x3F57150", Offset = "0x3F57150", VA = "0x3F57150", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ACE")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003884")]
		[Address(RVA = "0x3F57160", Offset = "0x3F57160", VA = "0x3F57160", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ACF")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003885")]
		[Address(RVA = "0x3F57170", Offset = "0x3F57170", VA = "0x3F57170", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AD0")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003886")]
		[Address(RVA = "0x3F57180", Offset = "0x3F57180", VA = "0x3F57180", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003887")]
	[Address(RVA = "0x3F57190", Offset = "0x3F57190", VA = "0x3F57190", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003888")]
	[Address(RVA = "0x3F575B0", Offset = "0x3F575B0", VA = "0x3F575B0")]
	protected void CreateStatBar(string title, int value)
	{
	}

	[Token(Token = "0x6003889")]
	[Address(RVA = "0x3F57A10", Offset = "0x3F57A10", VA = "0x3F57A10")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x600388A")]
	[Address(RVA = "0x3F57D70", Offset = "0x3F57D70", VA = "0x3F57D70")]
	public CharacterEditorStatsPanel()
	{
	}
}
