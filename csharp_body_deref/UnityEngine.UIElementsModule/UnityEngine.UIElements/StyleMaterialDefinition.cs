// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleMaterialDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200041E")]
public struct StyleMaterialDefinition : IStyleValue<MaterialDefinition>, IEquatable<StyleMaterialDefinition>
{
	[Token(Token = "0x4000DD2")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private MaterialDefinition m_Value;

	[Token(Token = "0x4000DD3")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008D9")]
	public MaterialDefinition value
	{
		[Token(Token = "0x600206C")]
		[Address(RVA = "0xF3C930", Offset = "0xF3AF30", VA = "0x180F3C930", Slot = "4")]
		get
		{
			return default(MaterialDefinition);
		}
		[Token(Token = "0x600206D")]
		[Address(RVA = "0x31149F0", Offset = "0x3112FF0", VA = "0x1831149F0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008DA")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600206E")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600206F")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002070")]
	[Address(RVA = "0x3114710", Offset = "0x3112D10", VA = "0x183114710")]
	public StyleMaterialDefinition(MaterialDefinition m)
	{
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x3114780", Offset = "0x3112D80", VA = "0x183114780")]
	internal StyleMaterialDefinition(object obj, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002072")]
	[Address(RVA = "0x3114730", Offset = "0x3112D30", VA = "0x183114730")]
	public StyleMaterialDefinition(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002073")]
	[Address(RVA = "0x31146F0", Offset = "0x3112CF0", VA = "0x1831146F0")]
	internal StyleMaterialDefinition(MaterialDefinition m, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002074")]
	[Address(RVA = "0x31148D0", Offset = "0x3112ED0", VA = "0x1831148D0")]
	public static bool operator ==(StyleMaterialDefinition lhs, StyleMaterialDefinition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002075")]
	[Address(RVA = "0x3114920", Offset = "0x3112F20", VA = "0x183114920")]
	public static implicit operator StyleMaterialDefinition(StyleKeyword keyword)
	{
		return default(StyleMaterialDefinition);
	}

	[Token(Token = "0x6002076")]
	[Address(RVA = "0x31149A0", Offset = "0x3112FA0", VA = "0x1831149A0")]
	public static implicit operator StyleMaterialDefinition(MaterialDefinition m)
	{
		return default(StyleMaterialDefinition);
	}

	[Token(Token = "0x6002077")]
	[Address(RVA = "0x3114510", Offset = "0x3112B10", VA = "0x183114510", Slot = "8")]
	public bool Equals(StyleMaterialDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002078")]
	[Address(RVA = "0x3114550", Offset = "0x3112B50", VA = "0x183114550", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002079")]
	[Address(RVA = "0x3114600", Offset = "0x3112C00", VA = "0x183114600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600207A")]
	[Address(RVA = "0x3114680", Offset = "0x3112C80", VA = "0x183114680", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
