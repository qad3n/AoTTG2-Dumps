// ==================== AoTTG2 cross-reference ====================
// Type: System.OrdinalCaseSensitiveComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000110")]
internal sealed class OrdinalCaseSensitiveComparer : OrdinalComparer, ISerializable
{
	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x54D5340", Offset = "0x54D4340", VA = "0x54D5340")]
	public OrdinalCaseSensitiveComparer()
	{
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x54D5C00", Offset = "0x54D4C00", VA = "0x54D5C00", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x54D5C10", Offset = "0x54D4C10", VA = "0x54D5C10", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x54D5C20", Offset = "0x54D4C20", VA = "0x54D5C20", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x54D5C70", Offset = "0x54D4C70", VA = "0x54D5C70", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
