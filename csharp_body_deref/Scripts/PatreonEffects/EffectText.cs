// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.EffectText
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PatreonEffects/EffectText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x200010D")]
[DisallowMultipleComponent]
public class EffectText : MonoBehaviour
{
	[Token(Token = "0x200010E")]
	private struct Segment
	{
		[Token(Token = "0x4000622")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Content;

		[Token(Token = "0x4000623")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool HasEffect;

		[Token(Token = "0x4000624")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public NameEffectType Effect;

		[Token(Token = "0x4000625")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color? ColorA;

		[Token(Token = "0x4000626")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public Color? ColorB;

		[Token(Token = "0x4000627")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Color? ColorC;

		[Token(Token = "0x4000628")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		public Color? ColorD;
	}

	[Token(Token = "0x4000619")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x400061A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private float _fontSize;

	[Token(Token = "0x400061B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private Color _color;

	[Token(Token = "0x400061C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _font;

	[Token(Token = "0x400061D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x400061E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private bool _richText;

	[Token(Token = "0x400061F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<GameObject> _segments;

	[Token(Token = "0x4000620")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _fxTagRegex;

	[Token(Token = "0x4000621")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _attrRegex;

	[Token(Token = "0x170000C0")]
	public string text
	{
		[Token(Token = "0x6000513")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000514")]
		[Address(RVA = "0x20B9820", Offset = "0x20B7E20", VA = "0x1820B9820")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public float fontSize
	{
		[Token(Token = "0x6000515")]
		[Address(RVA = "0x584AC0", Offset = "0x5830C0", VA = "0x180584AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000516")]
		[Address(RVA = "0x20B97D0", Offset = "0x20B7DD0", VA = "0x1820B97D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public Color color
	{
		[Token(Token = "0x6000517")]
		[Address(RVA = "0x20B97A0", Offset = "0x20B7DA0", VA = "0x1820B97A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000518")]
		[Address(RVA = "0x20B97C0", Offset = "0x20B7DC0", VA = "0x1820B97C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x6000519")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600051A")]
		[Address(RVA = "0x20B97E0", Offset = "0x20B7DE0", VA = "0x1820B97E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x600051B")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x600051C")]
		[Address(RVA = "0x20B97B0", Offset = "0x20B7DB0", VA = "0x1820B97B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public bool richText
	{
		[Token(Token = "0x600051D")]
		[Address(RVA = "0x1CFDD60", Offset = "0x1CFC360", VA = "0x181CFDD60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600051E")]
		[Address(RVA = "0x20B9810", Offset = "0x20B7E10", VA = "0x1820B9810")]
		set
		{
		}
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x20B71D0", Offset = "0x20B57D0", VA = "0x1820B71D0")]
	public static string Compose(string content, NameEffectType effect, [Optional] Color colorA, [Optional] Color colorB, [Optional] Color colorC, [Optional] Color colorD)
	{
		return null;
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x20B9430", Offset = "0x20B7A30", VA = "0x1820B9430")]
	public static string WithPresetColors(string text)
	{
		return null;
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x20B6D20", Offset = "0x20B5320", VA = "0x1820B6D20")]
	private static void AppendColorAttribute(StringBuilder sb, string key, Color color)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x20B8130", Offset = "0x20B6730", VA = "0x1820B8130")]
	private static List<Segment> ParseLine(string line)
	{
		return null;
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x20B8030", Offset = "0x20B6630", VA = "0x1820B8030")]
	private static Color? ParseColor(string hex)
	{
		return null;
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x20B8C60", Offset = "0x20B7260", VA = "0x1820B8C60")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x20B7640", Offset = "0x20B5C40", VA = "0x1820B7640")]
	private GameObject CreateSegmentGO(Transform parent, Segment seg)
	{
		return null;
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x20B7C60", Offset = "0x20B6260", VA = "0x1820B7C60")]
	private GameObject CreateSpacerRow()
	{
		return null;
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x20B71C0", Offset = "0x20B57C0", VA = "0x1820B71C0")]
	private void ApplyFontSize()
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x20B6FA0", Offset = "0x20B55A0", VA = "0x1820B6FA0")]
	private void ApplyColor()
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x20B6DF0", Offset = "0x20B53F0", VA = "0x1820B6DF0")]
	private void ApplyAlignment()
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x20B7E80", Offset = "0x20B6480", VA = "0x1820B7E80")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x20B96D0", Offset = "0x20B7CD0", VA = "0x1820B96D0")]
	public EffectText()
	{
	}
}
