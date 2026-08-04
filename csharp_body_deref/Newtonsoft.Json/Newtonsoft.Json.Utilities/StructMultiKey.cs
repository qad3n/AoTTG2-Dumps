// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.StructMultiKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000F3")]
internal readonly struct StructMultiKey<T1, T2> : IEquatable<StructMultiKey<T1, T2>> where T1 : notnull where T2 : notnull
{
	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x0")]
	public readonly T1 Value1;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x0")]
	public readonly T2 Value2;

	[Token(Token = "0x600071A")]
	public StructMultiKey(T1 v1, T2 v2)
	{
	}

	[Token(Token = "0x600071B")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600071C")]
	public override bool Equals(object? obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600071D")]
	public bool Equals(StructMultiKey<T1, T2> other)
	{
		return default(bool);
	}
}
