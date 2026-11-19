// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleMaterialDefinition
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B136D0", Offset = "0x6B126D0", VA = "0x6B136D0", Slot = "4")]
		get
		{
			return default(MaterialDefinition);
		}
		[Token(Token = "0x600206D")]
		[Address(RVA = "0x6B136E0", Offset = "0x6B126E0", VA = "0x6B136E0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008DA")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600206E")]
		[Address(RVA = "0x6B13700", Offset = "0x6B12700", VA = "0x6B13700", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600206F")]
		[Address(RVA = "0x6B13710", Offset = "0x6B12710", VA = "0x6B13710", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002070")]
	[Address(RVA = "0x6B13720", Offset = "0x6B12720", VA = "0x6B13720")]
	public StyleMaterialDefinition(MaterialDefinition m)
	{
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x6B0E720", Offset = "0x6B0D720", VA = "0x6B0E720")]
	internal StyleMaterialDefinition(object obj, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002072")]
	[Address(RVA = "0x6B13760", Offset = "0x6B12760", VA = "0x6B13760")]
	public StyleMaterialDefinition(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002073")]
	[Address(RVA = "0x6B13740", Offset = "0x6B12740", VA = "0x6B13740")]
	internal StyleMaterialDefinition(MaterialDefinition m, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002074")]
	[Address(RVA = "0x6B137A0", Offset = "0x6B127A0", VA = "0x6B137A0")]
	public static bool operator ==(StyleMaterialDefinition lhs, StyleMaterialDefinition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002075")]
	[Address(RVA = "0x6B0E750", Offset = "0x6B0D750", VA = "0x6B0E750")]
	public static implicit operator StyleMaterialDefinition(StyleKeyword keyword)
	{
		return default(StyleMaterialDefinition);
	}

	[Token(Token = "0x6002076")]
	[Address(RVA = "0x6B137D0", Offset = "0x6B127D0", VA = "0x6B137D0")]
	public static implicit operator StyleMaterialDefinition(MaterialDefinition m)
	{
		return default(StyleMaterialDefinition);
	}

	[Token(Token = "0x6002077")]
	[Address(RVA = "0x6B13820", Offset = "0x6B12820", VA = "0x6B13820", Slot = "8")]
	public bool Equals(StyleMaterialDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002078")]
	[Address(RVA = "0x6B13850", Offset = "0x6B12850", VA = "0x6B13850", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002079")]
	[Address(RVA = "0x6B138C0", Offset = "0x6B128C0", VA = "0x6B138C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600207A")]
	[Address(RVA = "0x6B13920", Offset = "0x6B12920", VA = "0x6B13920", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
