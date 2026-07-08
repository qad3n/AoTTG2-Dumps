using System;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200011E")]
internal class JsonFormatterConverter : IFormatterConverter
{
	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x10")]
	private readonly JsonSerializerInternalReader _reader;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x18")]
	private readonly JsonISerializableContract _contract;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x20")]
	private readonly JsonProperty? _member;

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x3AE3BA0", Offset = "0x3AE3BA0", VA = "0x3AE3BA0")]
	public JsonFormatterConverter(JsonSerializerInternalReader reader, JsonISerializableContract contract, JsonProperty? member)
	{
	}

	[Token(Token = "0x600082F")]
	private T GetTokenValue<T>(object value) where T : notnull
	{
		return (T)null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x3AE3C80", Offset = "0x3AE3C80", VA = "0x3AE3C80", Slot = "4")]
	public object Convert(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x3AE3F50", Offset = "0x3AE3F50", VA = "0x3AE3F50", Slot = "10")]
	public object Convert(object value, TypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x3AE4080", Offset = "0x3AE4080", VA = "0x3AE4080", Slot = "5")]
	public bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x3AE40D0", Offset = "0x3AE40D0", VA = "0x3AE40D0", Slot = "11")]
	public byte ToByte(object value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x3AE4120", Offset = "0x3AE4120", VA = "0x3AE4120", Slot = "12")]
	public char ToChar(object value)
	{
		return default(char);
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x3AE4170", Offset = "0x3AE4170", VA = "0x3AE4170", Slot = "13")]
	public DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x3AE41C0", Offset = "0x3AE41C0", VA = "0x3AE41C0", Slot = "14")]
	public decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x3AE4210", Offset = "0x3AE4210", VA = "0x3AE4210", Slot = "15")]
	public double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x3AE4260", Offset = "0x3AE4260", VA = "0x3AE4260", Slot = "16")]
	public short ToInt16(object value)
	{
		return default(short);
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x3AE42B0", Offset = "0x3AE42B0", VA = "0x3AE42B0", Slot = "6")]
	public int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x3AE4300", Offset = "0x3AE4300", VA = "0x3AE4300", Slot = "7")]
	public long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x3AE4350", Offset = "0x3AE4350", VA = "0x3AE4350", Slot = "17")]
	public sbyte ToSByte(object value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x3AE43A0", Offset = "0x3AE43A0", VA = "0x3AE43A0", Slot = "8")]
	public float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x3AE43F0", Offset = "0x3AE43F0", VA = "0x3AE43F0", Slot = "9")]
	public string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x3AE4440", Offset = "0x3AE4440", VA = "0x3AE4440", Slot = "18")]
	public ushort ToUInt16(object value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x3AE4490", Offset = "0x3AE4490", VA = "0x3AE4490", Slot = "19")]
	public uint ToUInt32(object value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x3AE44E0", Offset = "0x3AE44E0", VA = "0x3AE44E0", Slot = "20")]
	public ulong ToUInt64(object value)
	{
		return default(ulong);
	}
}
