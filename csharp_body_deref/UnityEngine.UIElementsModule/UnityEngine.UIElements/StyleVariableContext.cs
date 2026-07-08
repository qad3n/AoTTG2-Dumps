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
	[Address(RVA = "0x4C267B0", Offset = "0x4C267B0", VA = "0x4C267B0")]
	public void Add(StyleVariable sv)
	{
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x4C26A70", Offset = "0x4C26A70", VA = "0x4C26A70")]
	public void AddInitialRange(StyleVariableContext other)
	{
	}

	[Token(Token = "0x6001884")]
	[Address(RVA = "0x4C26B60", Offset = "0x4C26B60", VA = "0x4C26B60")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001885")]
	[Address(RVA = "0x4C26BF0", Offset = "0x4C26BF0", VA = "0x4C26BF0")]
	public StyleVariableContext()
	{
	}

	[Token(Token = "0x6001886")]
	[Address(RVA = "0x4C26CC0", Offset = "0x4C26CC0", VA = "0x4C26CC0")]
	public StyleVariableContext(StyleVariableContext other)
	{
	}

	[Token(Token = "0x6001887")]
	[Address(RVA = "0x4C26DC0", Offset = "0x4C26DC0", VA = "0x4C26DC0")]
	public bool TryFindVariable(string name, out StyleVariable v)
	{
		return default(bool);
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x4C26EC0", Offset = "0x4C26EC0", VA = "0x4C26EC0")]
	public int GetVariableHash()
	{
		return default(int);
	}
}
