using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x20000EC")]
[DisallowMultipleComponent]
public class EffectText : MonoBehaviour
{
	[Token(Token = "0x20000ED")]
	private struct Segment
	{
		[Token(Token = "0x400057B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Content;

		[Token(Token = "0x400057C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool HasEffect;

		[Token(Token = "0x400057D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public NameEffectType Effect;

		[Token(Token = "0x400057E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color? ColorA;

		[Token(Token = "0x400057F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public Color? ColorB;

		[Token(Token = "0x4000580")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Color? ColorC;

		[Token(Token = "0x4000581")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		public Color? ColorD;
	}

	[Token(Token = "0x4000572")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x4000573")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private float _fontSize;

	[Token(Token = "0x4000574")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private Color _color;

	[Token(Token = "0x4000575")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _font;

	[Token(Token = "0x4000576")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x4000577")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private bool _richText;

	[Token(Token = "0x4000578")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<GameObject> _segments;

	[Token(Token = "0x4000579")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _fxTagRegex;

	[Token(Token = "0x400057A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _attrRegex;

	[Token(Token = "0x170000AF")]
	public string text
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x3E1E530", Offset = "0x3E1E530", VA = "0x3E1E530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x3E1E540", Offset = "0x3E1E540", VA = "0x3E1E540")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public float fontSize
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x3E1EF50", Offset = "0x3E1EF50", VA = "0x3E1EF50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x3E1EF60", Offset = "0x3E1EF60", VA = "0x3E1EF60")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public Color color
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x3E1EF80", Offset = "0x3E1EF80", VA = "0x3E1EF80")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x3E1EF90", Offset = "0x3E1EF90", VA = "0x3E1EF90")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x3E1F280", Offset = "0x3E1F280", VA = "0x3E1F280")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x3E1F290", Offset = "0x3E1F290", VA = "0x3E1F290")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x3E1F2B0", Offset = "0x3E1F2B0", VA = "0x3E1F2B0")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x3E1F2C0", Offset = "0x3E1F2C0", VA = "0x3E1F2C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public bool richText
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x3E1F520", Offset = "0x3E1F520", VA = "0x3E1F520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x3E1F530", Offset = "0x3E1F530", VA = "0x3E1F530")]
		set
		{
		}
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x3E1F540", Offset = "0x3E1F540", VA = "0x3E1F540")]
	public static string Compose(string content, NameEffectType effect, [Optional] Color colorA, [Optional] Color colorB, [Optional] Color colorC, [Optional] Color colorD)
	{
		return null;
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x3E1F960", Offset = "0x3E1F960", VA = "0x3E1F960")]
	private static List<Segment> ParseLine(string line)
	{
		return null;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x3E20FB0", Offset = "0x3E20FB0", VA = "0x3E20FB0")]
	private static Color? ParseColor(string hex)
	{
		return null;
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x3E1E580", Offset = "0x3E1E580", VA = "0x3E1E580")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x3E212B0", Offset = "0x3E212B0", VA = "0x3E212B0")]
	private GameObject CreateSegmentGO(Transform parent, Segment seg)
	{
		return null;
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x3E21090", Offset = "0x3E21090", VA = "0x3E21090")]
	private GameObject CreateSpacerRow()
	{
		return null;
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x3E1EF70", Offset = "0x3E1EF70", VA = "0x3E1EF70")]
	private void ApplyFontSize()
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x3E1EFA0", Offset = "0x3E1EFA0", VA = "0x3E1EFA0")]
	private void ApplyColor()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x3E1F2D0", Offset = "0x3E1F2D0", VA = "0x3E1F2D0")]
	private void ApplyAlignment()
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x3E21820", Offset = "0x3E21820", VA = "0x3E21820")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x3E21A10", Offset = "0x3E21A10", VA = "0x3E21A10")]
	public EffectText()
	{
	}
}
