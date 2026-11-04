// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleVariableContext
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200048E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StyleVariableContext
{
	[Token(Token = "0x4000F2D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly StyleVariableContext none;

	[Token(Token = "0x4000F2E")]
	[FieldOffset(Offset = "0x10")]
	private int m_VariableHash;

	[Token(Token = "0x4000F2F")]
	[FieldOffset(Offset = "0x18")]
	private List<StyleVariable> m_Variables;

	[Token(Token = "0x4000F30")]
	[FieldOffset(Offset = "0x20")]
	private List<int> m_SortedHash;

	[Token(Token = "0x4000F31")]
	[FieldOffset(Offset = "0x28")]
	private List<int> m_UnsortedHash;

	[Token(Token = "0x6002319")]
	[Address(RVA = "0x312D360", Offset = "0x312B960", VA = "0x18312D360")]
	public void Add(StyleVariable sv)
	{
	}

	[Token(Token = "0x600231A")]
	[Address(RVA = "0x312D250", Offset = "0x312B850", VA = "0x18312D250")]
	public void AddInitialRange(StyleVariableContext other)
	{
	}

	[Token(Token = "0x600231B")]
	[Address(RVA = "0x312D640", Offset = "0x312BC40", VA = "0x18312D640")]
	public void Clear()
	{
	}

	[Token(Token = "0x600231C")]
	[Address(RVA = "0x312DA70", Offset = "0x312C070", VA = "0x18312DA70")]
	public StyleVariableContext()
	{
	}

	[Token(Token = "0x600231D")]
	[Address(RVA = "0x312D940", Offset = "0x312BF40", VA = "0x18312D940")]
	public StyleVariableContext(StyleVariableContext other)
	{
	}

	[Token(Token = "0x600231E")]
	[Address(RVA = "0x312D6F0", Offset = "0x312BCF0", VA = "0x18312D6F0")]
	public bool TryFindVariable(string name, out StyleVariable v)
	{
		return default(bool);
	}

	[Token(Token = "0x600231F")]
	[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700")]
	public int GetVariableHash()
	{
		return default(int);
	}
}
