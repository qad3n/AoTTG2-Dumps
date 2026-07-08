using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000A1")]
public sealed class DBNull : ISerializable, IConvertible
{
	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DBNull Value;

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x4FA9D70", Offset = "0x4FA9D70", VA = "0x4FA9D70")]
	private DBNull()
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4FA9D80", Offset = "0x4FA9D80", VA = "0x4FA9D80")]
	private DBNull(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4FA9DD0", Offset = "0x4FA9DD0", VA = "0x4FA9DD0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4FA9DE0", Offset = "0x4FA9DE0", VA = "0x4FA9DE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4FA9E00", Offset = "0x4FA9E00", VA = "0x4FA9E00", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4FA9E20", Offset = "0x4FA9E20", VA = "0x4FA9E20", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4FA9E30", Offset = "0x4FA9E30", VA = "0x4FA9E30", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x4FA9E80", Offset = "0x4FA9E80", VA = "0x4FA9E80", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x4FA9ED0", Offset = "0x4FA9ED0", VA = "0x4FA9ED0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4FA9F20", Offset = "0x4FA9F20", VA = "0x4FA9F20", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4FA9F70", Offset = "0x4FA9F70", VA = "0x4FA9F70", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4FA9FC0", Offset = "0x4FA9FC0", VA = "0x4FA9FC0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4FAA010", Offset = "0x4FAA010", VA = "0x4FAA010", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4FAA060", Offset = "0x4FAA060", VA = "0x4FAA060", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4FAA0B0", Offset = "0x4FAA0B0", VA = "0x4FAA0B0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4FAA100", Offset = "0x4FAA100", VA = "0x4FAA100", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4FAA150", Offset = "0x4FAA150", VA = "0x4FAA150", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4FAA1A0", Offset = "0x4FAA1A0", VA = "0x4FAA1A0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x4FAA1F0", Offset = "0x4FAA1F0", VA = "0x4FAA1F0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x4FAA240", Offset = "0x4FAA240", VA = "0x4FAA240", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x4FAA290", Offset = "0x4FAA290", VA = "0x4FAA290", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
