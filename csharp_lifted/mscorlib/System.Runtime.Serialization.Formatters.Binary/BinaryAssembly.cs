// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040E")]
internal sealed class BinaryAssembly
{
	[Token(Token = "0x4001019")]
	[FieldOffset(Offset = "0x10")]
	internal int assemId;

	[Token(Token = "0x400101A")]
	[FieldOffset(Offset = "0x18")]
	internal string assemblyString;

	[Token(Token = "0x6002086")]
	[Address(RVA = "0x53AA580", Offset = "0x53A9580", VA = "0x53AA580")]
	internal BinaryAssembly()
	{
	}

	[Token(Token = "0x6002087")]
	[Address(RVA = "0x53AA590", Offset = "0x53A9590", VA = "0x53AA590")]
	internal void Set(int assemId, string assemblyString)
	{
	}

	[Token(Token = "0x6002088")]
	[Address(RVA = "0x53AA5B0", Offset = "0x53A95B0", VA = "0x53AA5B0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002089")]
	[Address(RVA = "0x53AA630", Offset = "0x53A9630", VA = "0x53AA630", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600208A")]
	[Address(RVA = "0x53AA680", Offset = "0x53A9680", VA = "0x53AA680")]
	public void Dump()
	{
	}
}
