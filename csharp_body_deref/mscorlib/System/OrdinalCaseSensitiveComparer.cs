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
	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x3CD13E0", Offset = "0x3CD13E0", VA = "0x3CD13E0")]
	public OrdinalCaseSensitiveComparer()
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x3CD1CA0", Offset = "0x3CD1CA0", VA = "0x3CD1CA0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x3CD1CB0", Offset = "0x3CD1CB0", VA = "0x3CD1CB0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x3CD1CC0", Offset = "0x3CD1CC0", VA = "0x3CD1CC0", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x3CD1CF0", Offset = "0x3CD1CF0", VA = "0x3CD1CF0", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
