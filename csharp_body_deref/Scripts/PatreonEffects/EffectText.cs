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

[Token(Token = "0x2000081")]
[DisallowMultipleComponent]
public class EffectText : MonoBehaviour
{
	[Token(Token = "0x2000082")]
	private struct Segment
	{
		[Token(Token = "0x4000288")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Content;

		[Token(Token = "0x4000289")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool HasEffect;

		[Token(Token = "0x400028A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public NameEffectType Effect;

		[Token(Token = "0x400028B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color? ColorA;

		[Token(Token = "0x400028C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public Color? ColorB;

		[Token(Token = "0x400028D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Color? ColorC;

		[Token(Token = "0x400028E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		public Color? ColorD;
	}

	[Token(Token = "0x400027E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x400027F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private float _fontSize;

	[Token(Token = "0x4000280")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private Color _color;

	[Token(Token = "0x4000281")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _font;

	[Token(Token = "0x4000282")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private TMP_FontAsset _segmentFont;

	[Token(Token = "0x4000283")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x4000284")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _richText;

	[Token(Token = "0x4000285")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<GameObject> _segments;

	[Token(Token = "0x4000286")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _fxTagRegex;

	[Token(Token = "0x4000287")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _attrRegex;

	[Token(Token = "0x1700008B")]
	public string text
	{
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x58BC3F0", Offset = "0x58BB3F0", VA = "0x58BC3F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x58BC400", Offset = "0x58BB400", VA = "0x58BC400")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public float fontSize
	{
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x58BCE90", Offset = "0x58BBE90", VA = "0x58BCE90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x58BCEA0", Offset = "0x58BBEA0", VA = "0x58BCEA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public Color color
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x58BCEC0", Offset = "0x58BBEC0", VA = "0x58BCEC0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x58BCED0", Offset = "0x58BBED0", VA = "0x58BCED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x58BD160", Offset = "0x58BC160", VA = "0x58BD160")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x58BD170", Offset = "0x58BC170", VA = "0x58BD170")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x58BD190", Offset = "0x58BC190", VA = "0x58BD190")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x58BD1A0", Offset = "0x58BC1A0", VA = "0x58BD1A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000090")]
	public bool richText
	{
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x58BD3B0", Offset = "0x58BC3B0", VA = "0x58BD3B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x58BD3C0", Offset = "0x58BC3C0", VA = "0x58BD3C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x58BD3D0", Offset = "0x58BC3D0", VA = "0x58BD3D0")]
	public static string Compose(string content, NameEffectType effect, [Optional] Color colorA, [Optional] Color colorB, [Optional] Color colorC, [Optional] Color colorD)
	{
		return null;
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x58BD850", Offset = "0x58BC850", VA = "0x58BD850")]
	public static string WithPresetColors(string text)
	{
		return null;
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x58BD780", Offset = "0x58BC780", VA = "0x58BD780")]
	private static void AppendColorAttribute(StringBuilder sb, string key, Color color)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x58BD9E0", Offset = "0x58BC9E0", VA = "0x58BD9E0")]
	private static List<Segment> ParseLine(string line)
	{
		return null;
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x58BF0E0", Offset = "0x58BE0E0", VA = "0x58BF0E0")]
	private static Color? ParseColor(string hex)
	{
		return null;
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x58BC4B0", Offset = "0x58BB4B0", VA = "0x58BC4B0")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x58BF3E0", Offset = "0x58BE3E0", VA = "0x58BF3E0")]
	private GameObject CreateSegmentGO(Transform parent, Segment seg)
	{
		return null;
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x58BF1C0", Offset = "0x58BE1C0", VA = "0x58BF1C0")]
	private GameObject CreateSpacerRow()
	{
		return null;
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x58BCEB0", Offset = "0x58BBEB0", VA = "0x58BCEB0")]
	private void ApplyFontSize()
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x58BCEE0", Offset = "0x58BBEE0", VA = "0x58BCEE0")]
	private void ApplyColor()
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x58BD1B0", Offset = "0x58BC1B0", VA = "0x58BD1B0")]
	private void ApplyAlignment()
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x58C0030", Offset = "0x58BF030", VA = "0x58C0030")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x58C0200", Offset = "0x58BF200", VA = "0x58C0200")]
	public EffectText()
	{
	}
}
