// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200045D")]
internal sealed class PrimitiveArray
{
	[Token(Token = "0x4001223")]
	[FieldOffset(Offset = "0x10")]
	private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code;

	[Token(Token = "0x4001224")]
	[FieldOffset(Offset = "0x18")]
	private bool[] booleanA;

	[Token(Token = "0x4001225")]
	[FieldOffset(Offset = "0x20")]
	private char[] charA;

	[Token(Token = "0x4001226")]
	[FieldOffset(Offset = "0x28")]
	private double[] doubleA;

	[Token(Token = "0x4001227")]
	[FieldOffset(Offset = "0x30")]
	private short[] int16A;

	[Token(Token = "0x4001228")]
	[FieldOffset(Offset = "0x38")]
	private int[] int32A;

	[Token(Token = "0x4001229")]
	[FieldOffset(Offset = "0x40")]
	private long[] int64A;

	[Token(Token = "0x400122A")]
	[FieldOffset(Offset = "0x48")]
	private sbyte[] sbyteA;

	[Token(Token = "0x400122B")]
	[FieldOffset(Offset = "0x50")]
	private float[] singleA;

	[Token(Token = "0x400122C")]
	[FieldOffset(Offset = "0x58")]
	private ushort[] uint16A;

	[Token(Token = "0x400122D")]
	[FieldOffset(Offset = "0x60")]
	private uint[] uint32A;

	[Token(Token = "0x400122E")]
	[FieldOffset(Offset = "0x68")]
	private ulong[] uint64A;

	[Token(Token = "0x6002215")]
	[Address(RVA = "0x1A36B50", Offset = "0x1A35150", VA = "0x181A36B50")]
	internal PrimitiveArray(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, Array array)
	{
	}

	[Token(Token = "0x6002216")]
	[Address(RVA = "0x1A36190", Offset = "0x1A34790", VA = "0x181A36190")]
	internal void Init(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, Array array)
	{
	}

	[Token(Token = "0x6002217")]
	[Address(RVA = "0x1A36750", Offset = "0x1A34D50", VA = "0x181A36750")]
	internal void SetValue(string value, int index)
	{
	}
}
