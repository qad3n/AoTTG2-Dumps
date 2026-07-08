using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000643")]
internal class EditProfileStatsPanel : CategoryPanel
{
	[Token(Token = "0x17000C16")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003F42")]
		[Address(RVA = "0x3FEC1E0", Offset = "0x3FEC1E0", VA = "0x3FEC1E0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C17")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6003F43")]
		[Address(RVA = "0x3FEC1F0", Offset = "0x3FEC1F0", VA = "0x3FEC1F0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C18")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003F44")]
		[Address(RVA = "0x3FEC200", Offset = "0x3FEC200", VA = "0x3FEC200", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C19")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003F45")]
		[Address(RVA = "0x3FEC210", Offset = "0x3FEC210", VA = "0x3FEC210", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003F46")]
	[Address(RVA = "0x3FEC220", Offset = "0x3FEC220", VA = "0x3FEC220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F47")]
	[Address(RVA = "0x3FED890", Offset = "0x3FED890", VA = "0x3FED890")]
	protected void CreateStatLabel(Transform panel, ElementStyle style, string title, string value)
	{
	}

	[Token(Token = "0x6003F48")]
	[Address(RVA = "0x3FED820", Offset = "0x3FED820", VA = "0x3FED820")]
	protected void CreateTitleLabel(Transform panel, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x6003F49")]
	[Address(RVA = "0x3FED930", Offset = "0x3FED930", VA = "0x3FED930")]
	public EditProfileStatsPanel()
	{
	}
}
