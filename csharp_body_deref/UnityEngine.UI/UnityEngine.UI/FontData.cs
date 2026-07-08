using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x200001C")]
public class FontData : ISerializationCallbackReceiver
{
	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[FormerlySerializedAs("font")]
	private Font m_Font;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("fontSize")]
	private int m_FontSize;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	[FormerlySerializedAs("fontStyle")]
	private FontStyle m_FontStyle;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_BestFit;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private int m_MinSize;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private int m_MaxSize;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[FormerlySerializedAs("alignment")]
	private TextAnchor m_Alignment;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_AlignByGeometry;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x31")]
	[SerializeField]
	[FormerlySerializedAs("richText")]
	private bool m_RichText;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private HorizontalWrapMode m_HorizontalOverflow;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private VerticalWrapMode m_VerticalOverflow;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_LineSpacing;

	[Token(Token = "0x17000028")]
	public static FontData defaultFontData
	{
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x4BD5100", Offset = "0x4BD5100", VA = "0x4BD5100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000029")]
	public Font font
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x4BD5190", Offset = "0x4BD5190", VA = "0x4BD5190")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x4BD51A0", Offset = "0x4BD51A0", VA = "0x4BD51A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int fontSize
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x4BD51B0", Offset = "0x4BD51B0", VA = "0x4BD51B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x4BD51C0", Offset = "0x4BD51C0", VA = "0x4BD51C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public FontStyle fontStyle
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x4BD51D0", Offset = "0x4BD51D0", VA = "0x4BD51D0")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x4BD51E0", Offset = "0x4BD51E0", VA = "0x4BD51E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public bool bestFit
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x4BD51F0", Offset = "0x4BD51F0", VA = "0x4BD51F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x4BD5200", Offset = "0x4BD5200", VA = "0x4BD5200")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public int minSize
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x4BD5210", Offset = "0x4BD5210", VA = "0x4BD5210")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4BD5220", Offset = "0x4BD5220", VA = "0x4BD5220")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public int maxSize
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x4BD5230", Offset = "0x4BD5230", VA = "0x4BD5230")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x4BD5240", Offset = "0x4BD5240", VA = "0x4BD5240")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public TextAnchor alignment
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x4BD5250", Offset = "0x4BD5250", VA = "0x4BD5250")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x4BD5260", Offset = "0x4BD5260", VA = "0x4BD5260")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public bool alignByGeometry
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x4BD5270", Offset = "0x4BD5270", VA = "0x4BD5270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x4BD5280", Offset = "0x4BD5280", VA = "0x4BD5280")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public bool richText
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x4BD5290", Offset = "0x4BD5290", VA = "0x4BD5290")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x4BD52A0", Offset = "0x4BD52A0", VA = "0x4BD52A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public HorizontalWrapMode horizontalOverflow
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x4BD52B0", Offset = "0x4BD52B0", VA = "0x4BD52B0")]
		get
		{
			return default(HorizontalWrapMode);
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x4BD52C0", Offset = "0x4BD52C0", VA = "0x4BD52C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public VerticalWrapMode verticalOverflow
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x4BD52D0", Offset = "0x4BD52D0", VA = "0x4BD52D0")]
		get
		{
			return default(VerticalWrapMode);
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x4BD52E0", Offset = "0x4BD52E0", VA = "0x4BD52E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public float lineSpacing
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x4BD52F0", Offset = "0x4BD52F0", VA = "0x4BD52F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4BD5300", Offset = "0x4BD5300", VA = "0x4BD5300")]
		set
		{
		}
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4BD5310", Offset = "0x4BD5310", VA = "0x4BD5310", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4BD5320", Offset = "0x4BD5320", VA = "0x4BD5320", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4BD5180", Offset = "0x4BD5180", VA = "0x4BD5180")]
	public FontData()
	{
	}
}
