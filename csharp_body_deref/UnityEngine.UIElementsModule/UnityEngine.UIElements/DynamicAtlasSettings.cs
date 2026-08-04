// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DynamicAtlasSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50405F0", Offset = "0x50405F0", VA = "0x50405F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x5040600", Offset = "0x5040600", VA = "0x5040600")]
		set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	public int maxAtlasSize
	{
		[Token(Token = "0x6000D3C")]
		[Address(RVA = "0x5040610", Offset = "0x5040610", VA = "0x5040610")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D3D")]
		[Address(RVA = "0x5040620", Offset = "0x5040620", VA = "0x5040620")]
		set
		{
		}
	}

	[Token(Token = "0x17000270")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x5040630", Offset = "0x5040630", VA = "0x5040630")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x5040640", Offset = "0x5040640", VA = "0x5040640")]
		set
		{
		}
	}

	[Token(Token = "0x17000271")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x5040650", Offset = "0x5040650", VA = "0x5040650")]
		get
		{
			return default(DynamicAtlasFilters);
		}
		[Token(Token = "0x6000D41")]
		[Address(RVA = "0x5040660", Offset = "0x5040660", VA = "0x5040660")]
		set
		{
		}
	}

	[Token(Token = "0x17000272")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x5040670", Offset = "0x5040670", VA = "0x5040670")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000273")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x5040680", Offset = "0x5040680", VA = "0x5040680")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x5040690", Offset = "0x5040690", VA = "0x5040690")]
		set
		{
		}
	}

	[Token(Token = "0x17000274")]
	public static DynamicAtlasSettings defaults
	{
		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x50406A0", Offset = "0x50406A0", VA = "0x50406A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x5040720", Offset = "0x5040720", VA = "0x5040720")]
	public DynamicAtlasSettings()
	{
	}
}
