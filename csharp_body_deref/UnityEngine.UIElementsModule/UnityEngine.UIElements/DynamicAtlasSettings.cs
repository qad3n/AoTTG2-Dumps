using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000207")]
public class DynamicAtlasSettings
{
	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x10")]
	[HideInInspector]
	[SerializeField]
	private int m_MinAtlasSize;

	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x14")]
	[HideInInspector]
	[SerializeField]
	private int m_MaxAtlasSize;

	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x18")]
	[HideInInspector]
	[SerializeField]
	private int m_MaxSubTextureSize;

	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	[HideInInspector]
	private DynamicAtlasFilters m_ActiveFilters;

	[Token(Token = "0x4000734")]
	[FieldOffset(Offset = "0x20")]
	private DynamicAtlasCustomFilter m_CustomFilter;

	[Token(Token = "0x1700026E")]
	public int minAtlasSize
	{
		[Token(Token = "0x6000D3A")]
		[Address(RVA = "0x4D18CC0", Offset = "0x4D18CC0", VA = "0x4D18CC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x4D18CD0", Offset = "0x4D18CD0", VA = "0x4D18CD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	public int maxAtlasSize
	{
		[Token(Token = "0x6000D3C")]
		[Address(RVA = "0x4D18CE0", Offset = "0x4D18CE0", VA = "0x4D18CE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D3D")]
		[Address(RVA = "0x4D18CF0", Offset = "0x4D18CF0", VA = "0x4D18CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000270")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x4D18D00", Offset = "0x4D18D00", VA = "0x4D18D00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x4D18D10", Offset = "0x4D18D10", VA = "0x4D18D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000271")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x4D18D20", Offset = "0x4D18D20", VA = "0x4D18D20")]
		get
		{
			return default(DynamicAtlasFilters);
		}
		[Token(Token = "0x6000D41")]
		[Address(RVA = "0x4D18D30", Offset = "0x4D18D30", VA = "0x4D18D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000272")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x4D18D40", Offset = "0x4D18D40", VA = "0x4D18D40")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000273")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x4D18D50", Offset = "0x4D18D50", VA = "0x4D18D50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x4D18D60", Offset = "0x4D18D60", VA = "0x4D18D60")]
		set
		{
		}
	}

	[Token(Token = "0x17000274")]
	public static DynamicAtlasSettings defaults
	{
		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x4D18D70", Offset = "0x4D18D70", VA = "0x4D18D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x4D18DF0", Offset = "0x4D18DF0", VA = "0x4D18DF0")]
	public DynamicAtlasSettings()
	{
	}
}
