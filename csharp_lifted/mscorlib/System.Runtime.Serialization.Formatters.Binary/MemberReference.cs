// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.MemberReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041B")]
internal sealed class MemberReference
{
	[Token(Token = "0x400104F")]
	[FieldOffset(Offset = "0x10")]
	internal int idRef;

	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x53ABF80", Offset = "0x53AAF80", VA = "0x53ABF80")]
	internal MemberReference()
	{
	}

	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x53ABF90", Offset = "0x53AAF90", VA = "0x53ABF90")]
	internal void Set(int idRef)
	{
	}

	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x53ABFA0", Offset = "0x53AAFA0", VA = "0x53ABFA0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x53AC000", Offset = "0x53AB000", VA = "0x53AC000", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x53AC020", Offset = "0x53AB020", VA = "0x53AC020")]
	public void Dump()
	{
	}
}
