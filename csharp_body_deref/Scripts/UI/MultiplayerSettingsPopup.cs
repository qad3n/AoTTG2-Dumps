using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200065A")]
internal class MultiplayerSettingsPopup : PromptPopup
{
	[Token(Token = "0x17000C53")]
	protected override string Title
	{
		[Token(Token = "0x6004003")]
		[Address(RVA = "0x3FFA5E0", Offset = "0x3FFA5E0", VA = "0x3FFA5E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C54")]
	protected override float Width
	{
		[Token(Token = "0x6004004")]
		[Address(RVA = "0x3FFA680", Offset = "0x3FFA680", VA = "0x3FFA680", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C55")]
	protected override float Height
	{
		[Token(Token = "0x6004005")]
		[Address(RVA = "0x3FFA690", Offset = "0x3FFA690", VA = "0x3FFA690", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C56")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004006")]
		[Address(RVA = "0x3FFA6A0", Offset = "0x3FFA6A0", VA = "0x3FFA6A0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C57")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004007")]
		[Address(RVA = "0x3FFA6B0", Offset = "0x3FFA6B0", VA = "0x3FFA6B0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004008")]
	[Address(RVA = "0x3FFA6C0", Offset = "0x3FFA6C0", VA = "0x3FFA6C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004009")]
	[Address(RVA = "0x3FFABA0", Offset = "0x3FFABA0", VA = "0x3FFABA0")]
	protected void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x600400A")]
	[Address(RVA = "0x3FFAC10", Offset = "0x3FFAC10", VA = "0x3FFAC10")]
	public MultiplayerSettingsPopup()
	{
	}
}
