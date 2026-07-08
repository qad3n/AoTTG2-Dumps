using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000616")]
internal class ScoreboardProfilePopup : PromptPopup
{
	[Token(Token = "0x4001E0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected ProfileSettings _profile;

	[Token(Token = "0x4001E0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<GameObject> _items;

	[Token(Token = "0x17000BB8")]
	protected override string Title
	{
		[Token(Token = "0x6003DE0")]
		[Address(RVA = "0x3FD30F0", Offset = "0x3FD30F0", VA = "0x3FD30F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BB9")]
	protected override float Width
	{
		[Token(Token = "0x6003DE1")]
		[Address(RVA = "0x3FD3150", Offset = "0x3FD3150", VA = "0x3FD3150", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BBA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003DE2")]
		[Address(RVA = "0x3FD3160", Offset = "0x3FD3160", VA = "0x3FD3160", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BBB")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003DE3")]
		[Address(RVA = "0x3FD3170", Offset = "0x3FD3170", VA = "0x3FD3170", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BBC")]
	protected override float Height
	{
		[Token(Token = "0x6003DE4")]
		[Address(RVA = "0x3FD3180", Offset = "0x3FD3180", VA = "0x3FD3180", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003DE5")]
	[Address(RVA = "0x3FD3190", Offset = "0x3FD3190", VA = "0x3FD3190", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003DE6")]
	[Address(RVA = "0x3FD33F0", Offset = "0x3FD33F0", VA = "0x3FD33F0")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x6003DE7")]
	[Address(RVA = "0x3FD4520", Offset = "0x3FD4520", VA = "0x3FD4520")]
	private string GetAuthoritativeDisplayName(Player player)
	{
		return null;
	}

	[Token(Token = "0x6003DE8")]
	[Address(RVA = "0x3FD4660", Offset = "0x3FD4660", VA = "0x3FD4660")]
	private string GetDisplayUserId(Player player)
	{
		return null;
	}

	[Token(Token = "0x6003DE9")]
	[Address(RVA = "0x3FD4730", Offset = "0x3FD4730", VA = "0x3FD4730")]
	private string GetPatreonTierLabel(Player player)
	{
		return null;
	}

	[Token(Token = "0x6003DEA")]
	[Address(RVA = "0x3FD4240", Offset = "0x3FD4240", VA = "0x3FD4240")]
	private void AddEffectRow(ElementStyle style, Player player, string labelKey, string value, bool enabled, string effectName, Color colorA, Color colorB, Color colorC, Color colorD)
	{
	}

	[Token(Token = "0x6003DEB")]
	[Address(RVA = "0x3FD31B0", Offset = "0x3FD31B0", VA = "0x3FD31B0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003DEC")]
	[Address(RVA = "0x3FD47B0", Offset = "0x3FD47B0", VA = "0x3FD47B0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003DED")]
	[Address(RVA = "0x3FD4820", Offset = "0x3FD4820", VA = "0x3FD4820")]
	public ScoreboardProfilePopup()
	{
	}
}
