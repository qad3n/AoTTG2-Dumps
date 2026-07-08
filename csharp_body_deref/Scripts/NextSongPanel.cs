using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UI;
using UnityEngine.UI;

[Token(Token = "0x2000021")]
internal class NextSongPanel : SimplePanel
{
	[Token(Token = "0x40000B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Text _nextSongPanelLabel;

	[Token(Token = "0x17000012")]
	protected override float Width
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x3C6E330", Offset = "0x3C6E330", VA = "0x3C6E330", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000013")]
	protected override float Height
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x3C6E340", Offset = "0x3C6E340", VA = "0x3C6E340", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000014")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x3C6E350", Offset = "0x3C6E350", VA = "0x3C6E350", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x3C6E360", Offset = "0x3C6E360", VA = "0x3C6E360", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x3C6E370", Offset = "0x3C6E370", VA = "0x3C6E370", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000017")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x3C6E380", Offset = "0x3C6E380", VA = "0x3C6E380", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x3C6E390", Offset = "0x3C6E390", VA = "0x3C6E390", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3C6E3A0", Offset = "0x3C6E3A0", VA = "0x3C6E3A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3C6E7C0", Offset = "0x3C6E7C0", VA = "0x3C6E7C0")]
	public void ChangeSongText(string name)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3C6E7F0", Offset = "0x3C6E7F0", VA = "0x3C6E7F0")]
	public NextSongPanel()
	{
	}
}
