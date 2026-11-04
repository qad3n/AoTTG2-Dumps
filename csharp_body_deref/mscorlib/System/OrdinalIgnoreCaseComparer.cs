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
[Token(Token = "0x2000139")]
internal sealed class OrdinalIgnoreCaseComparer : OrdinalComparer, ISerializable
{
	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x1B45AB0", Offset = "0x1B440B0", VA = "0x181B45AB0")]
	public OrdinalIgnoreCaseComparer()
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x1B45960", Offset = "0x1B43F60", VA = "0x181B45960", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x1B45980", Offset = "0x1B43F80", VA = "0x181B45980", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x1B459A0", Offset = "0x1B43FA0", VA = "0x181B459A0", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x1B45A00", Offset = "0x1B44000", VA = "0x181B45A00", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
