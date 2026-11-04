// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ConverterKey
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Properties;

[Token(Token = "0x2000059")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal readonly struct ConverterKey : IEquatable<ConverterKey>
{
	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x0")]
	public readonly Type SourceType;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x8")]
	public readonly Type DestinationType;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
	public ConverterKey(Type source, Type destination)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x2FEAA00", Offset = "0x2FE9000", VA = "0x182FEAA00", Slot = "3")]
	[CompilerGenerated]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x2FEA960", Offset = "0x2FE8F60", VA = "0x182FEA960")]
	[CompilerGenerated]
	private bool PrintMembers(StringBuilder builder)
	{
		return default(bool);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x2FEA8C0", Offset = "0x2FE8EC0", VA = "0x182FEA8C0", Slot = "2")]
	[CompilerGenerated]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x2FEA820", Offset = "0x2FE8E20", VA = "0x182FEA820", Slot = "0")]
	[CompilerGenerated]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x2FEA760", Offset = "0x2FE8D60", VA = "0x182FEA760", Slot = "4")]
	[CompilerGenerated]
	public bool Equals(ConverterKey other)
	{
		return default(bool);
	}
}
