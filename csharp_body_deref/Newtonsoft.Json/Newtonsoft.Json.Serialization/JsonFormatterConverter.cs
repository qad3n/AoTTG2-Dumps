// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonFormatterConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3DD94F0", Offset = "0x3DD94F0", VA = "0x3DD94F0")]
	public JsonFormatterConverter(JsonSerializerInternalReader reader, JsonISerializableContract contract, JsonProperty? member)
	{
	}

	[Token(Token = "0x600082F")]
	private T GetTokenValue<T>(object value) where T : notnull
	{
		return (T)null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x3DD95D0", Offset = "0x3DD95D0", VA = "0x3DD95D0", Slot = "4")]
	public object Convert(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x3DD98A0", Offset = "0x3DD98A0", VA = "0x3DD98A0", Slot = "10")]
	public object Convert(object value, TypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x3DD99D0", Offset = "0x3DD99D0", VA = "0x3DD99D0", Slot = "5")]
	public bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x3DD9A20", Offset = "0x3DD9A20", VA = "0x3DD9A20", Slot = "11")]
	public byte ToByte(object value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x3DD9A70", Offset = "0x3DD9A70", VA = "0x3DD9A70", Slot = "12")]
	public char ToChar(object value)
	{
		return default(char);
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x3DD9AC0", Offset = "0x3DD9AC0", VA = "0x3DD9AC0", Slot = "13")]
	public DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x3DD9B10", Offset = "0x3DD9B10", VA = "0x3DD9B10", Slot = "14")]
	public decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x3DD9B60", Offset = "0x3DD9B60", VA = "0x3DD9B60", Slot = "15")]
	public double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x3DD9BB0", Offset = "0x3DD9BB0", VA = "0x3DD9BB0", Slot = "16")]
	public short ToInt16(object value)
	{
		return default(short);
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x3DD9C00", Offset = "0x3DD9C00", VA = "0x3DD9C00", Slot = "6")]
	public int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x3DD9C50", Offset = "0x3DD9C50", VA = "0x3DD9C50", Slot = "7")]
	public long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x3DD9CA0", Offset = "0x3DD9CA0", VA = "0x3DD9CA0", Slot = "17")]
	public sbyte ToSByte(object value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x3DD9CF0", Offset = "0x3DD9CF0", VA = "0x3DD9CF0", Slot = "8")]
	public float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x3DD9D40", Offset = "0x3DD9D40", VA = "0x3DD9D40", Slot = "9")]
	public string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x3DD9D90", Offset = "0x3DD9D90", VA = "0x3DD9D90", Slot = "18")]
	public ushort ToUInt16(object value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x3DD9DE0", Offset = "0x3DD9DE0", VA = "0x3DD9DE0", Slot = "19")]
	public uint ToUInt32(object value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x3DD9E30", Offset = "0x3DD9E30", VA = "0x3DD9E30", Slot = "20")]
	public ulong ToUInt64(object value)
	{
		return default(ulong);
	}
}
