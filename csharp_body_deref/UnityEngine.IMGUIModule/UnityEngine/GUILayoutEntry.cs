using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000021")]
internal class GUILayoutEntry
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x10")]
	public float minWidth;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x14")]
	public float maxWidth;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x18")]
	public float minHeight;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x1C")]
	public float maxHeight;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x20")]
	public Rect rect;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x30")]
	public int stretchWidth;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x34")]
	public int stretchHeight;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x38")]
	public bool consideredForMargin;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x40")]
	private GUIStyle m_Style;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x0")]
	internal static Rect kDummyRect;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x10")]
	protected static int indent;

	[Token(Token = "0x17000081")]
	public GUIStyle style
	{
		[Token(Token = "0x6000210")]
		[Address(RVA = "0x4B353A0", Offset = "0x4B353A0", VA = "0x4B353A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000211")]
		[Address(RVA = "0x4B353B0", Offset = "0x4B353B0", VA = "0x4B353B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public virtual int marginLeft
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x4B353F0", Offset = "0x4B353F0", VA = "0x4B353F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000083")]
	public virtual int marginRight
	{
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x4B35420", Offset = "0x4B35420", VA = "0x4B35420", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000084")]
	public virtual int marginTop
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x4B35450", Offset = "0x4B35450", VA = "0x4B35450", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000085")]
	public virtual int marginBottom
	{
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x4B35480", Offset = "0x4B35480", VA = "0x4B35480", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000086")]
	public int marginHorizontal
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x4B354B0", Offset = "0x4B354B0", VA = "0x4B354B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000087")]
	public int marginVertical
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x4B354F0", Offset = "0x4B354F0", VA = "0x4B354F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4B35530", Offset = "0x4B35530", VA = "0x4B35530")]
	public GUILayoutEntry(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle _style)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4B35640", Offset = "0x4B35640", VA = "0x4B35640")]
	public GUILayoutEntry(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle _style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4B35750", Offset = "0x4B35750", VA = "0x4B35750", Slot = "8")]
	public virtual void CalcWidth()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4B35760", Offset = "0x4B35760", VA = "0x4B35760", Slot = "9")]
	public virtual void CalcHeight()
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4B35770", Offset = "0x4B35770", VA = "0x4B35770", Slot = "10")]
	public virtual void SetHorizontal(float x, float width)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4B35780", Offset = "0x4B35780", VA = "0x4B35780", Slot = "11")]
	public virtual void SetVertical(float y, float height)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4B35790", Offset = "0x4B35790", VA = "0x4B35790", Slot = "12")]
	protected virtual void ApplyStyleSettings(GUIStyle style)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4B35820", Offset = "0x4B35820", VA = "0x4B35820", Slot = "13")]
	public virtual void ApplyOptions(GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4B35B70", Offset = "0x4B35B70", VA = "0x4B35B70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
