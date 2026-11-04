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

[Token(Token = "0x2000117")]
[DisallowMultipleComponent]
public class NameEffectLabel : MonoBehaviour
{
	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x30")]
	private string _suffix;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x38")]
	private float _fontSize;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x3C")]
	private Color _color;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x4C")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x50")]
	private bool _richText;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x58")]
	private TextMeshProUGUI _prefixTmp;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x60")]
	private TextMeshProUGUI _nameTmp;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x68")]
	private TextMeshProUGUI _suffixTmp;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x70")]
	private LayoutElement _prefixLayout;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x78")]
	private LayoutElement _nameLayout;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x80")]
	private LayoutElement _suffixLayout;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x88")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_FontAsset _sharedFontAsset;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x8")]
	private static TMP_SpriteAsset _sharedSpriteAsset;

	[Token(Token = "0x170000C7")]
	public string prefix
	{
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000574")]
		[Address(RVA = "0x20CAB10", Offset = "0x20C9110", VA = "0x1820CAB10")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	public string nameText
	{
		[Token(Token = "0x6000575")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000576")]
		[Address(RVA = "0x20CAAC0", Offset = "0x20C90C0", VA = "0x1820CAAC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public string suffix
	{
		[Token(Token = "0x6000577")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000578")]
		[Address(RVA = "0x20CACB0", Offset = "0x20C92B0", VA = "0x1820CACB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	public float fontSize
	{
		[Token(Token = "0x6000579")]
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600057A")]
		[Address(RVA = "0x20CA970", Offset = "0x20C8F70", VA = "0x1820CA970")]
		set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public Color color
	{
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x20CA6D0", Offset = "0x20C8CD0", VA = "0x1820CA6D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600057C")]
		[Address(RVA = "0x20CA7F0", Offset = "0x20C8DF0", VA = "0x1820CA7F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x600057D")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x600057E")]
		[Address(RVA = "0x20CA6E0", Offset = "0x20C8CE0", VA = "0x1820CA6E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public bool richText
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x20CAB60", Offset = "0x20C9160", VA = "0x1820CAB60")]
		set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public TextMeshProUGUI prefixComponent
	{
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public TextMeshProUGUI nameComponent
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public TextMeshProUGUI suffixComponent
	{
		[Token(Token = "0x6000583")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x20C9F40", Offset = "0x20C8540", VA = "0x1820C9F40")]
	public void SetFont(TMP_FontAsset font)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x20CA540", Offset = "0x20C8B40", VA = "0x1820CA540")]
	public void SetText(string prefix, string name, string suffix)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x20CA0C0", Offset = "0x20C86C0", VA = "0x1820CA0C0")]
	public void SetNameEffect(NameEffectType effect, Color a, Color b, Color c, Color d)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x20C9A80", Offset = "0x20C8080", VA = "0x1820C9A80")]
	public void ClearNameEffect()
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x20C9810", Offset = "0x20C7E10", VA = "0x1820C9810")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x20C9820", Offset = "0x20C7E20", VA = "0x1820C9820")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x20C9B90", Offset = "0x20C8190", VA = "0x1820C9B90")]
	private TextMeshProUGUI CreateSegment(string name, out LayoutElement layout)
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x20C93D0", Offset = "0x20C79D0", VA = "0x1820C93D0")]
	private static void ApplySharedFont(TextMeshProUGUI tmp)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x20C9640", Offset = "0x20C7C40", VA = "0x1820C9640")]
	private static void ApplyText(TextMeshProUGUI tmp, LayoutElement layout, string content)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x20CA630", Offset = "0x20C8C30", VA = "0x1820CA630")]
	public NameEffectLabel()
	{
	}
}
