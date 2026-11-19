// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ConverterKey
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x69E9D10", Offset = "0x69E8D10", VA = "0x69E9D10")]
	public ConverterKey(Type source, Type destination)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x69E9D40", Offset = "0x69E8D40", VA = "0x69E9D40", Slot = "3")]
	[CompilerGenerated]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x69E9E10", Offset = "0x69E8E10", VA = "0x69E9E10")]
	[CompilerGenerated]
	private bool PrintMembers(StringBuilder builder)
	{
		return default(bool);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x69E9EA0", Offset = "0x69E8EA0", VA = "0x69E9EA0", Slot = "2")]
	[CompilerGenerated]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x69E9F30", Offset = "0x69E8F30", VA = "0x69E9F30", Slot = "0")]
	[CompilerGenerated]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x69E9FA0", Offset = "0x69E8FA0", VA = "0x69E9FA0", Slot = "4")]
	[CompilerGenerated]
	public bool Equals(ConverterKey other)
	{
		return default(bool);
	}
}
