// ==================== AoTTG2 cross-reference ====================
// Type: System.OrdinalIgnoreCaseComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000111")]
internal sealed class OrdinalIgnoreCaseComparer : OrdinalComparer, ISerializable
{
	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x3CD1430", Offset = "0x3CD1430", VA = "0x3CD1430")]
	public OrdinalIgnoreCaseComparer()
	{
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x3CD1DB0", Offset = "0x3CD1DB0", VA = "0x3CD1DB0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x3CD1DD0", Offset = "0x3CD1DD0", VA = "0x3CD1DD0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x3CD1DF0", Offset = "0x3CD1DF0", VA = "0x3CD1DF0", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x3CD1E50", Offset = "0x3CD1E50", VA = "0x3CD1E50", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
