// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectNull
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041C")]
internal sealed class ObjectNull
{
	[Token(Token = "0x4001050")]
	[FieldOffset(Offset = "0x10")]
	internal int nullCount;

	[Token(Token = "0x60020C5")]
	[Address(RVA = "0x53AC030", Offset = "0x53AB030", VA = "0x53AC030")]
	internal ObjectNull()
	{
	}

	[Token(Token = "0x60020C6")]
	[Address(RVA = "0x53AC040", Offset = "0x53AB040", VA = "0x53AC040")]
	internal void SetNullCount(int nullCount)
	{
	}

	[Token(Token = "0x60020C7")]
	[Address(RVA = "0x53AC050", Offset = "0x53AB050", VA = "0x53AC050", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020C8")]
	[Address(RVA = "0x53AC140", Offset = "0x53AB140", VA = "0x53AC140")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020C9")]
	[Address(RVA = "0x53AC190", Offset = "0x53AB190", VA = "0x53AC190")]
	public void Dump()
	{
	}
}
