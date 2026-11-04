// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.FontData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x200001A")]
public class FontData : ISerializationCallbackReceiver
{
	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("font")]
	private Font m_Font;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("fontSize")]
	private int m_FontSize;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	[FormerlySerializedAs("fontStyle")]
	private FontStyle m_FontStyle;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_BestFit;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private int m_MinSize;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private int m_MaxSize;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[FormerlySerializedAs("alignment")]
	private TextAnchor m_Alignment;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_AlignByGeometry;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x31")]
	[SerializeField]
	[FormerlySerializedAs("richText")]
	private bool m_RichText;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private HorizontalWrapMode m_HorizontalOverflow;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private VerticalWrapMode m_VerticalOverflow;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_LineSpacing;

	[Token(Token = "0x17000028")]
	public static FontData defaultFontData
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x306D2A0", Offset = "0x306B8A0", VA = "0x18306D2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000029")]
	public Font font
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int fontSize
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public FontStyle fontStyle
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public bool bestFit
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public int minSize
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public int maxSize
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public TextAnchor alignment
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public bool alignByGeometry
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public bool richText
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x1D6A540", Offset = "0x1D68B40", VA = "0x181D6A540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x20FB170", Offset = "0x20F9770", VA = "0x1820FB170")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public HorizontalWrapMode horizontalOverflow
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(HorizontalWrapMode);
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public VerticalWrapMode verticalOverflow
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(VerticalWrapMode);
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public float lineSpacing
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x1ED2DD0", Offset = "0x1ED13D0", VA = "0x181ED2DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x1ED2F20", Offset = "0x1ED1520", VA = "0x181ED2F20")]
		set
		{
		}
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x306D240", Offset = "0x306B840", VA = "0x18306D240", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public FontData()
	{
	}
}
