// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000412")]
internal sealed class BinaryMethodReturn
{
	[Token(Token = "0x4001026")]
	[FieldOffset(Offset = "0x10")]
	private object returnValue;

	[Token(Token = "0x4001027")]
	[FieldOffset(Offset = "0x18")]
	private object[] args;

	[Token(Token = "0x4001028")]
	[FieldOffset(Offset = "0x20")]
	private object callContext;

	[Token(Token = "0x4001029")]
	[FieldOffset(Offset = "0x28")]
	private Type[] argTypes;

	[Token(Token = "0x400102A")]
	[FieldOffset(Offset = "0x30")]
	private bool bArgsPrimitive;

	[Token(Token = "0x400102B")]
	[FieldOffset(Offset = "0x34")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x400102C")]
	[FieldOffset(Offset = "0x38")]
	private Type returnType;

	[Token(Token = "0x400102D")]
	[FieldOffset(Offset = "0x0")]
	private static object instanceOfVoid;

	[Token(Token = "0x6002096")]
	[Address(RVA = "0x53AA930", Offset = "0x53A9930", VA = "0x53AA930")]
	static BinaryMethodReturn()
	{
	}

	[Token(Token = "0x6002097")]
	[Address(RVA = "0x53AA9E0", Offset = "0x53A99E0", VA = "0x53AA9E0")]
	internal BinaryMethodReturn()
	{
	}

	[Token(Token = "0x6002098")]
	[Address(RVA = "0x53AA9F0", Offset = "0x53A99F0", VA = "0x53AA9F0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002099")]
	[Address(RVA = "0x53AAB20", Offset = "0x53A9B20", VA = "0x53AAB20")]
	public void Dump()
	{
	}
}
