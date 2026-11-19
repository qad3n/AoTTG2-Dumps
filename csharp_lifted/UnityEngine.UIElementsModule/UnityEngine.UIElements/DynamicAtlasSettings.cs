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
[Token(Token = "0x200026A")]
public class DynamicAtlasSettings
{
	[Token(Token = "0x40008EB")]
	[FieldOffset(Offset = "0x10")]
	[HideInInspector]
	[SerializeField]
	private int m_MinAtlasSize;

	[Token(Token = "0x40008EC")]
	[FieldOffset(Offset = "0x14")]
	[HideInInspector]
	[SerializeField]
	private int m_MaxAtlasSize;

	[Token(Token = "0x40008ED")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[HideInInspector]
	private int m_MaxSubTextureSize;

	[Token(Token = "0x40008EE")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	[HideInInspector]
	private DynamicAtlasFilters m_ActiveFilters;

	[Token(Token = "0x40008EF")]
	[FieldOffset(Offset = "0x20")]
	private DynamicAtlasCustomFilter m_CustomFilter;

	[Token(Token = "0x17000330")]
	public int minAtlasSize
	{
		[Token(Token = "0x600104B")]
		[Address(RVA = "0x6C837C0", Offset = "0x6C827C0", VA = "0x6C837C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x6C837D0", Offset = "0x6C827D0", VA = "0x6C837D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000331")]
	public int maxAtlasSize
	{
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x6C837E0", Offset = "0x6C827E0", VA = "0x6C837E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600104E")]
		[Address(RVA = "0x6C837F0", Offset = "0x6C827F0", VA = "0x6C837F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000332")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x6C83800", Offset = "0x6C82800", VA = "0x6C83800")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x6C83810", Offset = "0x6C82810", VA = "0x6C83810")]
		set
		{
		}
	}

	[Token(Token = "0x17000333")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6001051")]
		[Address(RVA = "0x6C83820", Offset = "0x6C82820", VA = "0x6C83820")]
		get
		{
			return default(DynamicAtlasFilters);
		}
		[Token(Token = "0x6001052")]
		[Address(RVA = "0x6C83830", Offset = "0x6C82830", VA = "0x6C83830")]
		set
		{
		}
	}

	[Token(Token = "0x17000334")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6001053")]
		[Address(RVA = "0x6C83840", Offset = "0x6C82840", VA = "0x6C83840")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000335")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6001054")]
		[Address(RVA = "0x6C83850", Offset = "0x6C82850", VA = "0x6C83850")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001055")]
		[Address(RVA = "0x6C83860", Offset = "0x6C82860", VA = "0x6C83860")]
		set
		{
		}
	}

	[Token(Token = "0x17000336")]
	public static DynamicAtlasSettings defaults
	{
		[Token(Token = "0x6001056")]
		[Address(RVA = "0x6C83870", Offset = "0x6C82870", VA = "0x6C83870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x6C838F0", Offset = "0x6C828F0", VA = "0x6C838F0")]
	public DynamicAtlasSettings()
	{
	}
}
