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
	[SerializeField]
	[HideInInspector]
	private int m_MaxAtlasSize;

	[Token(Token = "0x40008ED")]
	[FieldOffset(Offset = "0x18")]
	[HideInInspector]
	[SerializeField]
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000331")]
	public int maxAtlasSize
	{
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600104E")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000332")]
	public int maxSubTextureSize
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000333")]
	public DynamicAtlasFilters activeFilters
	{
		[Token(Token = "0x6001051")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(DynamicAtlasFilters);
		}
		[Token(Token = "0x6001052")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000334")]
	public static DynamicAtlasFilters defaultFilters
	{
		[Token(Token = "0x6001053")]
		[Address(RVA = "0x3273BA0", Offset = "0x32721A0", VA = "0x183273BA0")]
		get
		{
			return default(DynamicAtlasFilters);
		}
	}

	[Token(Token = "0x17000335")]
	public DynamicAtlasCustomFilter customFilter
	{
		[Token(Token = "0x6001054")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001055")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000336")]
	public static DynamicAtlasSettings defaults
	{
		[Token(Token = "0x6001056")]
		[Address(RVA = "0x3273BB0", Offset = "0x32721B0", VA = "0x183273BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DynamicAtlasSettings()
	{
	}
}
