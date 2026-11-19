// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.AttributesScope
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties.Internal;

namespace Unity.Properties;

[Token(Token = "0x200000F")]
public readonly struct AttributesScope : IDisposable
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	private readonly IAttributes m_Target;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x8")]
	private readonly List<Attribute> m_Previous;

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x69E4A70", Offset = "0x69E3A70", VA = "0x69E4A70")]
	public AttributesScope(IProperty target, IProperty source)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x69E4C80", Offset = "0x69E3C80", VA = "0x69E4C80")]
	internal AttributesScope(IAttributes target, List<Attribute> attributes)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x69E4DC0", Offset = "0x69E3DC0", VA = "0x69E4DC0", Slot = "4")]
	public void Dispose()
	{
	}
}
