// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectLabel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectLabel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PatreonEffects;

[Token(Token = "0x200008B")]
[DisallowMultipleComponent]
public class NameEffectLabel : MonoBehaviour
{
	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x30")]
	private string _suffix;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x38")]
	private float _fontSize;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x3C")]
	private Color _color;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x4C")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x50")]
	private bool _richText;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x58")]
	private TextMeshProUGUI _prefixTmp;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x60")]
	private TextMeshProUGUI _nameTmp;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x68")]
	private TextMeshProUGUI _suffixTmp;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x70")]
	private LayoutElement _prefixLayout;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x78")]
	private LayoutElement _nameLayout;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x80")]
	private LayoutElement _suffixLayout;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x88")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x90")]
	private TMP_FontAsset _font;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_SpriteAsset _sharedSpriteAsset;

	[Token(Token = "0x17000092")]
	public string prefix
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x58C65D0", Offset = "0x58C55D0", VA = "0x58C65D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x58C65E0", Offset = "0x58C55E0", VA = "0x58C65E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public string nameText
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x58C66F0", Offset = "0x58C56F0", VA = "0x58C66F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x58C6700", Offset = "0x58C5700", VA = "0x58C6700")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public string suffix
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x58C6750", Offset = "0x58C5750", VA = "0x58C6750")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x58C6760", Offset = "0x58C5760", VA = "0x58C6760")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public float fontSize
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x58C67B0", Offset = "0x58C57B0", VA = "0x58C67B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x58C67C0", Offset = "0x58C57C0", VA = "0x58C67C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public Color color
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x58C68D0", Offset = "0x58C58D0", VA = "0x58C68D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x58C68E0", Offset = "0x58C58E0", VA = "0x58C68E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x58C6A50", Offset = "0x58C5A50", VA = "0x58C6A50")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x58C6A60", Offset = "0x58C5A60", VA = "0x58C6A60")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public bool richText
	{
		[Token(Token = "0x60003E9")]
		[Address(RVA = "0x58C6B60", Offset = "0x58C5B60", VA = "0x58C6B60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x58C6B70", Offset = "0x58C5B70", VA = "0x58C6B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public TextMeshProUGUI prefixComponent
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x58C6C70", Offset = "0x58C5C70", VA = "0x58C6C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	public TextMeshProUGUI nameComponent
	{
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x58C6C80", Offset = "0x58C5C80", VA = "0x58C6C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009B")]
	public TextMeshProUGUI suffixComponent
	{
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x58C6C90", Offset = "0x58C5C90", VA = "0x58C6C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x58C6CA0", Offset = "0x58C5CA0", VA = "0x58C6CA0")]
	public void SetFont(TMP_FontAsset font)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x58C6D20", Offset = "0x58C5D20", VA = "0x58C6D20")]
	public void SetText(string prefix, string name, string suffix)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x58C6630", Offset = "0x58C5630", VA = "0x58C6630")]
	private void ApplyAll()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x58C7080", Offset = "0x58C6080", VA = "0x58C7080")]
	public void SetNameEffect(NameEffectType effect, Color a, Color b, Color c, Color d)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x58C7330", Offset = "0x58C6330", VA = "0x58C7330")]
	public void ClearNameEffect()
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x58C7440", Offset = "0x58C6440", VA = "0x58C7440")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x58C7450", Offset = "0x58C6450", VA = "0x58C7450")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x58C76A0", Offset = "0x58C66A0", VA = "0x58C76A0")]
	private TextMeshProUGUI CreateSegment(string name, out LayoutElement layout)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x58C7A40", Offset = "0x58C6A40", VA = "0x58C7A40")]
	private static void ApplySharedSpriteAsset(TextMeshProUGUI tmp)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x58C6ED0", Offset = "0x58C5ED0", VA = "0x58C6ED0")]
	private static void ApplyText(TextMeshProUGUI tmp, LayoutElement layout, string content, TMP_FontAsset font)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x58C7BC0", Offset = "0x58C6BC0", VA = "0x58C7BC0")]
	public NameEffectLabel()
	{
	}
}
