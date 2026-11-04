// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000435")]
internal sealed class BinaryAssembly
{
	[Token(Token = "0x40010B9")]
	[FieldOffset(Offset = "0x10")]
	internal int assemId;

	[Token(Token = "0x40010BA")]
	[FieldOffset(Offset = "0x18")]
	internal string assemblyString;

	[Token(Token = "0x60020B0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal BinaryAssembly()
	{
	}

	[Token(Token = "0x60020B1")]
	[Address(RVA = "0x1A0C0F0", Offset = "0x1A0A6F0", VA = "0x181A0C0F0")]
	internal void Set(int assemId, string assemblyString)
	{
	}

	[Token(Token = "0x60020B2")]
	[Address(RVA = "0x1A0C110", Offset = "0x1A0A710", VA = "0x181A0C110", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020B3")]
	[Address(RVA = "0x1A0C0A0", Offset = "0x1A0A6A0", VA = "0x181A0C0A0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
