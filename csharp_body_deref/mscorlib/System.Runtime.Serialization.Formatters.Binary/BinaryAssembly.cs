// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000406")]
internal sealed class BinaryAssembly
{
	[Token(Token = "0x40010B7")]
	[FieldOffset(Offset = "0x10")]
	internal int assemId;

	[Token(Token = "0x40010B8")]
	[FieldOffset(Offset = "0x18")]
	internal string assemblyString;

	[Token(Token = "0x6002041")]
	[Address(RVA = "0x3BA3180", Offset = "0x3BA3180", VA = "0x3BA3180")]
	internal BinaryAssembly()
	{
	}

	[Token(Token = "0x6002042")]
	[Address(RVA = "0x3BA3190", Offset = "0x3BA3190", VA = "0x3BA3190")]
	internal void Set(int assemId, string assemblyString)
	{
	}

	[Token(Token = "0x6002043")]
	[Address(RVA = "0x3BA31B0", Offset = "0x3BA31B0", VA = "0x3BA31B0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002044")]
	[Address(RVA = "0x3BA3230", Offset = "0x3BA3230", VA = "0x3BA3230", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002045")]
	[Address(RVA = "0x3BA3280", Offset = "0x3BA3280", VA = "0x3BA3280")]
	public void Dump()
	{
	}
}
