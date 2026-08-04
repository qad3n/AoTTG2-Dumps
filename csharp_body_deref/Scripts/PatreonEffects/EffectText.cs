// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.EffectText
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/EffectText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x20000ED")]
[DisallowMultipleComponent]
public class EffectText : MonoBehaviour
{
	[Token(Token = "0x20000EE")]
	private struct Segment
	{
		[Token(Token = "0x4000582")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Content;

		[Token(Token = "0x4000583")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool HasEffect;

		[Token(Token = "0x4000584")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public NameEffectType Effect;

		[Token(Token = "0x4000585")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color? ColorA;

		[Token(Token = "0x4000586")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public Color? ColorB;

		[Token(Token = "0x4000587")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Color? ColorC;

		[Token(Token = "0x4000588")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		public Color? ColorD;
	}

	[Token(Token = "0x4000579")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x400057A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private float _fontSize;

	[Token(Token = "0x400057B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private Color _color;

	[Token(Token = "0x400057C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _font;

	[Token(Token = "0x400057D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x400057E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private bool _richText;

	[Token(Token = "0x400057F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<GameObject> _segments;

	[Token(Token = "0x4000580")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _fxTagRegex;

	[Token(Token = "0x4000581")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _attrRegex;

	[Token(Token = "0x170000B1")]
	public string text
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x410D620", Offset = "0x410D620", VA = "0x410D620")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x410D630", Offset = "0x410D630", VA = "0x410D630")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public float fontSize
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x410E040", Offset = "0x410E040", VA = "0x410E040")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x410E050", Offset = "0x410E050", VA = "0x410E050")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public Color color
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x410E070", Offset = "0x410E070", VA = "0x410E070")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x410E080", Offset = "0x410E080", VA = "0x410E080")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public TMP_FontAsset font
	{
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x410E370", Offset = "0x410E370", VA = "0x410E370")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x410E380", Offset = "0x410E380", VA = "0x410E380")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x410E3A0", Offset = "0x410E3A0", VA = "0x410E3A0")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x410E3B0", Offset = "0x410E3B0", VA = "0x410E3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public bool richText
	{
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x410E610", Offset = "0x410E610", VA = "0x410E610")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000484")]
		[Address(RVA = "0x410E620", Offset = "0x410E620", VA = "0x410E620")]
		set
		{
		}
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x410E630", Offset = "0x410E630", VA = "0x410E630")]
	public static string Compose(string content, NameEffectType effect, [Optional] Color colorA, [Optional] Color colorB, [Optional] Color colorC, [Optional] Color colorD)
	{
		return null;
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x410EA50", Offset = "0x410EA50", VA = "0x410EA50")]
	private static List<Segment> ParseLine(string line)
	{
		return null;
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x41100A0", Offset = "0x41100A0", VA = "0x41100A0")]
	private static Color? ParseColor(string hex)
	{
		return null;
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x410D670", Offset = "0x410D670", VA = "0x410D670")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x41103A0", Offset = "0x41103A0", VA = "0x41103A0")]
	private GameObject CreateSegmentGO(Transform parent, Segment seg)
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4110180", Offset = "0x4110180", VA = "0x4110180")]
	private GameObject CreateSpacerRow()
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x410E060", Offset = "0x410E060", VA = "0x410E060")]
	private void ApplyFontSize()
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x410E090", Offset = "0x410E090", VA = "0x410E090")]
	private void ApplyColor()
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x410E3C0", Offset = "0x410E3C0", VA = "0x410E3C0")]
	private void ApplyAlignment()
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4110910", Offset = "0x4110910", VA = "0x4110910")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4110B00", Offset = "0x4110B00", VA = "0x4110B00")]
	public EffectText()
	{
	}
}
