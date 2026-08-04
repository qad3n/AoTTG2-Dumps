// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleVariableContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003E1")]
internal class StyleVariableContext
{
	[Token(Token = "0x4000BB2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly StyleVariableContext none;

	[Token(Token = "0x4000BB3")]
	[FieldOffset(Offset = "0x10")]
	private int m_VariableHash;

	[Token(Token = "0x4000BB4")]
	[FieldOffset(Offset = "0x18")]
	private List<StyleVariable> m_Variables;

	[Token(Token = "0x4000BB5")]
	[FieldOffset(Offset = "0x20")]
	private List<int> m_SortedHash;

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x4F4E0E0", Offset = "0x4F4E0E0", VA = "0x4F4E0E0")]
	public void Add(StyleVariable sv)
	{
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x4F4E3A0", Offset = "0x4F4E3A0", VA = "0x4F4E3A0")]
	public void AddInitialRange(StyleVariableContext other)
	{
	}

	[Token(Token = "0x6001884")]
	[Address(RVA = "0x4F4E490", Offset = "0x4F4E490", VA = "0x4F4E490")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001885")]
	[Address(RVA = "0x4F4E520", Offset = "0x4F4E520", VA = "0x4F4E520")]
	public StyleVariableContext()
	{
	}

	[Token(Token = "0x6001886")]
	[Address(RVA = "0x4F4E5F0", Offset = "0x4F4E5F0", VA = "0x4F4E5F0")]
	public StyleVariableContext(StyleVariableContext other)
	{
	}

	[Token(Token = "0x6001887")]
	[Address(RVA = "0x4F4E6F0", Offset = "0x4F4E6F0", VA = "0x4F4E6F0")]
	public bool TryFindVariable(string name, out StyleVariable v)
	{
		return default(bool);
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x4F4E7F0", Offset = "0x4F4E7F0", VA = "0x4F4E7F0")]
	public int GetVariableHash()
	{
		return default(int);
	}
}
