using System.Collections.Generic;
using System.Collections.Specialized;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000603")]
internal class ScoreboardInfoPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x17000BA4")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003D52")]
		[Address(RVA = "0x3FC7A60", Offset = "0x3FC7A60", VA = "0x3FC7A60", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003D53")]
		[Address(RVA = "0x3FC7A70", Offset = "0x3FC7A70", VA = "0x3FC7A70", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BA6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003D54")]
		[Address(RVA = "0x3FC7A80", Offset = "0x3FC7A80", VA = "0x3FC7A80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003D55")]
	[Address(RVA = "0x3FC7A90", Offset = "0x3FC7A90", VA = "0x3FC7A90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D56")]
	[Address(RVA = "0x3FC84A0", Offset = "0x3FC84A0", VA = "0x3FC84A0")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, OrderedDictionary settings)
	{
	}

	[Token(Token = "0x6003D57")]
	[Address(RVA = "0x3FC8230", Offset = "0x3FC8230", VA = "0x3FC8230")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, BaseSettingsContainer container)
	{
	}

	[Token(Token = "0x6003D58")]
	[Address(RVA = "0x3FC8250", Offset = "0x3FC8250", VA = "0x3FC8250")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, Dictionary<string, BaseSetting> settings)
	{
	}

	[Token(Token = "0x6003D59")]
	[Address(RVA = "0x3FC9340", Offset = "0x3FC9340", VA = "0x3FC9340")]
	public ScoreboardInfoPanel()
	{
	}
}
