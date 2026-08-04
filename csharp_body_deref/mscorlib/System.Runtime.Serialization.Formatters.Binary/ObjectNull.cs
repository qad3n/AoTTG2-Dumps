// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectNull
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000414")]
internal sealed class ObjectNull
{
	[Token(Token = "0x40010EE")]
	[FieldOffset(Offset = "0x10")]
	internal int nullCount;

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x3BA4E80", Offset = "0x3BA4E80", VA = "0x3BA4E80")]
	internal ObjectNull()
	{
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x3BA4E90", Offset = "0x3BA4E90", VA = "0x3BA4E90")]
	internal void SetNullCount(int nullCount)
	{
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x3BA4EA0", Offset = "0x3BA4EA0", VA = "0x3BA4EA0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x3BA4F90", Offset = "0x3BA4F90", VA = "0x3BA4F90")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x3BA4FE0", Offset = "0x3BA4FE0", VA = "0x3BA4FE0")]
	public void Dump()
	{
	}
}
