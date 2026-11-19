// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleVariableContext
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6B27210", Offset = "0x6B26210", VA = "0x6B27210")]
	public void Add(StyleVariable sv)
	{
	}

	[Token(Token = "0x600231A")]
	[Address(RVA = "0x6B27580", Offset = "0x6B26580", VA = "0x6B27580")]
	public void AddInitialRange(StyleVariableContext other)
	{
	}

	[Token(Token = "0x600231B")]
	[Address(RVA = "0x6B276A0", Offset = "0x6B266A0", VA = "0x6B276A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600231C")]
	[Address(RVA = "0x6B27740", Offset = "0x6B26740", VA = "0x6B27740")]
	public StyleVariableContext()
	{
	}

	[Token(Token = "0x600231D")]
	[Address(RVA = "0x6B27840", Offset = "0x6B26840", VA = "0x6B27840")]
	public StyleVariableContext(StyleVariableContext other)
	{
	}

	[Token(Token = "0x600231E")]
	[Address(RVA = "0x6B27970", Offset = "0x6B26970", VA = "0x6B27970")]
	public bool TryFindVariable(string name, out StyleVariable v)
	{
		return default(bool);
	}

	[Token(Token = "0x600231F")]
	[Address(RVA = "0x6B27A60", Offset = "0x6B26A60", VA = "0x6B27A60")]
	public int GetVariableHash()
	{
		return default(int);
	}
}
