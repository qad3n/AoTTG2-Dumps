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
[Token(Token = "0x2000138")]
internal sealed class OrdinalCaseSensitiveComparer : OrdinalComparer, ISerializable
{
	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x1B45680", Offset = "0x1B43C80", VA = "0x181B45680")]
	public OrdinalCaseSensitiveComparer()
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x1A449F0", Offset = "0x1A42FF0", VA = "0x181A449F0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x1A44AF0", Offset = "0x1A430F0", VA = "0x181A44AF0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x1B455A0", Offset = "0x1B43BA0", VA = "0x181B455A0", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x1B455D0", Offset = "0x1B43BD0", VA = "0x181B455D0", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
