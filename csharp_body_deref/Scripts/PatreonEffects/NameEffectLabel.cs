using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PatreonEffects;

[Token(Token = "0x20000F5")]
[DisallowMultipleComponent]
public class NameEffectLabel : MonoBehaviour
{
	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x30")]
	private string _suffix;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x38")]
	private float _fontSize;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x3C")]
	private Color _color;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x4C")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x50")]
	private bool _richText;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x58")]
	private TextMeshProUGUI _prefixTmp;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x60")]
	private TextMeshProUGUI _nameTmp;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x68")]
	private TextMeshProUGUI _suffixTmp;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x70")]
	private LayoutElement _prefixLayout;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x78")]
	private LayoutElement _nameLayout;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x80")]
	private LayoutElement _suffixLayout;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x88")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_FontAsset _sharedFontAsset;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x8")]
	private static TMP_SpriteAsset _sharedSpriteAsset;

	[Token(Token = "0x170000B6")]
	public string prefix
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x3F38630", Offset = "0x3F38630", VA = "0x3F38630")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x3F38640", Offset = "0x3F38640", VA = "0x3F38640")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public string nameText
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x3F38830", Offset = "0x3F38830", VA = "0x3F38830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x3F38840", Offset = "0x3F38840", VA = "0x3F38840")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public string suffix
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x3F38890", Offset = "0x3F38890", VA = "0x3F38890")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x3F388A0", Offset = "0x3F388A0", VA = "0x3F388A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	public float fontSize
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x3F388F0", Offset = "0x3F388F0", VA = "0x3F388F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x3F38900", Offset = "0x3F38900", VA = "0x3F38900")]
		set
		{
		}
	}

	[Token(Token = "0x170000BA")]
	public Color color
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x3F38A40", Offset = "0x3F38A40", VA = "0x3F38A40")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x3F38A50", Offset = "0x3F38A50", VA = "0x3F38A50")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x3F38BC0", Offset = "0x3F38BC0", VA = "0x3F38BC0")]
		get
		{
			return default(TextAlignmentOptions);
		}
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x3F38BD0", Offset = "0x3F38BD0", VA = "0x3F38BD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	public bool richText
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x3F38CD0", Offset = "0x3F38CD0", VA = "0x3F38CD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x3F38CE0", Offset = "0x3F38CE0", VA = "0x3F38CE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	public TextMeshProUGUI prefixComponent
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x3F38E10", Offset = "0x3F38E10", VA = "0x3F38E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	public TextMeshProUGUI nameComponent
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x3F38E20", Offset = "0x3F38E20", VA = "0x3F38E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public TextMeshProUGUI suffixComponent
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x3F38E30", Offset = "0x3F38E30", VA = "0x3F38E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x3F38E40", Offset = "0x3F38E40", VA = "0x3F38E40")]
	public void SetFont(TMP_FontAsset font)
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x3F38FA0", Offset = "0x3F38FA0", VA = "0x3F38FA0")]
	public void SetText(string prefix, string name, string suffix)
	{
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x3F39080", Offset = "0x3F39080", VA = "0x3F39080")]
	public void SetNameEffect(NameEffectType effect, Color a, Color b, Color c, Color d)
	{
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x3F39330", Offset = "0x3F39330", VA = "0x3F39330")]
	public void ClearNameEffect()
	{
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x3F39440", Offset = "0x3F39440", VA = "0x3F39440")]
	private void Awake()
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x3F39450", Offset = "0x3F39450", VA = "0x3F39450")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x3F396A0", Offset = "0x3F396A0", VA = "0x3F396A0")]
	private TextMeshProUGUI CreateSegment(string name, out LayoutElement layout)
	{
		return null;
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x3F39A30", Offset = "0x3F39A30", VA = "0x3F39A30")]
	private static void ApplySharedFont(TextMeshProUGUI tmp)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x3F38690", Offset = "0x3F38690", VA = "0x3F38690")]
	private static void ApplyText(TextMeshProUGUI tmp, LayoutElement layout, string content)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x3F39C60", Offset = "0x3F39C60", VA = "0x3F39C60")]
	public NameEffectLabel()
	{
	}
}
