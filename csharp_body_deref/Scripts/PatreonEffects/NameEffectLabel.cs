// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectLabel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectLabel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PatreonEffects;

[Token(Token = "0x20000F6")]
[DisallowMultipleComponent]
public class NameEffectLabel : MonoBehaviour
{
	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x30")]
	private string _suffix;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x38")]
	private float _fontSize;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x3C")]
	private Color _color;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x4C")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x50")]
	private bool _richText;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x58")]
	private TextMeshProUGUI _prefixTmp;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x60")]
	private TextMeshProUGUI _nameTmp;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x68")]
	private TextMeshProUGUI _suffixTmp;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x70")]
	private LayoutElement _prefixLayout;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x78")]
	private LayoutElement _nameLayout;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x80")]
	private LayoutElement _suffixLayout;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x88")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_FontAsset _sharedFontAsset;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x8")]
	private static TMP_SpriteAsset _sharedSpriteAsset;

	[Token(Token = "0x170000B8")]
	public string prefix
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x422DBB0", Offset = "0x422DBB0", VA = "0x422DBB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x422DBC0", Offset = "0x422DBC0", VA = "0x422DBC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	public string nameText
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x422DDB0", Offset = "0x422DDB0", VA = "0x422DDB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x422DDC0", Offset = "0x422DDC0", VA = "0x422DDC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BA")]
	public string suffix
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x422DE10", Offset = "0x422DE10", VA = "0x422DE10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x422DE20", Offset = "0x422DE20", VA = "0x422DE20")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public float fontSize
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x422DE70", Offset = "0x422DE70", VA = "0x422DE70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x422DE80", Offset = "0x422DE80", VA = "0x422DE80")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	public Color color
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x422DFC0", Offset = "0x422DFC0", VA = "0x422DFC0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x422DFD0", Offset = "0x422DFD0", VA = "0x422DFD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x422E140", Offset = "0x422E140", VA = "0x422E140")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x422E150", Offset = "0x422E150", VA = "0x422E150")]
		set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	public bool richText
	{
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x422E250", Offset = "0x422E250", VA = "0x422E250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x422E260", Offset = "0x422E260", VA = "0x422E260")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	public TextMeshProUGUI prefixComponent
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x422E390", Offset = "0x422E390", VA = "0x422E390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	public TextMeshProUGUI nameComponent
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x422E3A0", Offset = "0x422E3A0", VA = "0x422E3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	public TextMeshProUGUI suffixComponent
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x422E3B0", Offset = "0x422E3B0", VA = "0x422E3B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x422E3C0", Offset = "0x422E3C0", VA = "0x422E3C0")]
	public void SetFont(TMP_FontAsset font)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x422E520", Offset = "0x422E520", VA = "0x422E520")]
	public void SetText(string prefix, string name, string suffix)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x422E600", Offset = "0x422E600", VA = "0x422E600")]
	public void SetNameEffect(NameEffectType effect, Color a, Color b, Color c, Color d)
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x422E8E0", Offset = "0x422E8E0", VA = "0x422E8E0")]
	public void ClearNameEffect()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x422E9F0", Offset = "0x422E9F0", VA = "0x422E9F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x422EA00", Offset = "0x422EA00", VA = "0x422EA00")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x422EC50", Offset = "0x422EC50", VA = "0x422EC50")]
	private TextMeshProUGUI CreateSegment(string name, out LayoutElement layout)
	{
		return null;
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x422EFE0", Offset = "0x422EFE0", VA = "0x422EFE0")]
	private static void ApplySharedFont(TextMeshProUGUI tmp)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x422DC10", Offset = "0x422DC10", VA = "0x422DC10")]
	private static void ApplyText(TextMeshProUGUI tmp, LayoutElement layout, string content)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x422F210", Offset = "0x422F210", VA = "0x422F210")]
	public NameEffectLabel()
	{
	}
}
