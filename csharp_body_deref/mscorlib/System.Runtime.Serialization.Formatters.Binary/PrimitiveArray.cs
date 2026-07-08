using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200042E")]
internal sealed class PrimitiveArray
{
	[Token(Token = "0x4001221")]
	[FieldOffset(Offset = "0x10")]
	private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code;

	[Token(Token = "0x4001222")]
	[FieldOffset(Offset = "0x18")]
	private bool[] booleanA;

	[Token(Token = "0x4001223")]
	[FieldOffset(Offset = "0x20")]
	private char[] charA;

	[Token(Token = "0x4001224")]
	[FieldOffset(Offset = "0x28")]
	private double[] doubleA;

	[Token(Token = "0x4001225")]
	[FieldOffset(Offset = "0x30")]
	private short[] int16A;

	[Token(Token = "0x4001226")]
	[FieldOffset(Offset = "0x38")]
	private int[] int32A;

	[Token(Token = "0x4001227")]
	[FieldOffset(Offset = "0x40")]
	private long[] int64A;

	[Token(Token = "0x4001228")]
	[FieldOffset(Offset = "0x48")]
	private sbyte[] sbyteA;

	[Token(Token = "0x4001229")]
	[FieldOffset(Offset = "0x50")]
	private float[] singleA;

	[Token(Token = "0x400122A")]
	[FieldOffset(Offset = "0x58")]
	private ushort[] uint16A;

	[Token(Token = "0x400122B")]
	[FieldOffset(Offset = "0x60")]
	private uint[] uint32A;

	[Token(Token = "0x400122C")]
	[FieldOffset(Offset = "0x68")]
	private ulong[] uint64A;

	[Token(Token = "0x60021A6")]
	[Address(RVA = "0x4ED67E0", Offset = "0x4ED67E0", VA = "0x4ED67E0")]
	internal PrimitiveArray(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, Array array)
	{
	}

	[Token(Token = "0x60021A7")]
	[Address(RVA = "0x4ED6810", Offset = "0x4ED6810", VA = "0x4ED6810")]
	internal void Init(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, Array array)
	{
	}

	[Token(Token = "0x60021A8")]
	[Address(RVA = "0x4ED6D10", Offset = "0x4ED6D10", VA = "0x4ED6D10")]
	internal void SetValue(string value, int index)
	{
	}
}
