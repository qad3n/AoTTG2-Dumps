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
	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x54D5390", Offset = "0x54D4390", VA = "0x54D5390")]
	public OrdinalIgnoreCaseComparer()
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x54D5D30", Offset = "0x54D4D30", VA = "0x54D5D30", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x54D5D50", Offset = "0x54D4D50", VA = "0x54D5D50", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x54D5D70", Offset = "0x54D4D70", VA = "0x54D5D70", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x54D5DF0", Offset = "0x54D4DF0", VA = "0x54D5DF0", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
