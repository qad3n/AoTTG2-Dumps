using System.Globalization;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010E")]
public sealed class CultureAwareComparer : StringComparer, ISerializable
{
	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x10")]
	private readonly CompareInfo _compareInfo;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x18")]
	private CompareOptions _options;

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x4FEB340", Offset = "0x4FEB340", VA = "0x4FEB340")]
	internal CultureAwareComparer(CultureInfo culture, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x4FEB960", Offset = "0x4FEB960", VA = "0x4FEB960")]
	internal CultureAwareComparer(CompareInfo compareInfo, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x4FEBA30", Offset = "0x4FEBA30", VA = "0x4FEBA30")]
	private CultureAwareComparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x4FEBC80", Offset = "0x4FEBC80", VA = "0x4FEBC80", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x4FEBCD0", Offset = "0x4FEBCD0", VA = "0x4FEBCD0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x4FEBD20", Offset = "0x4FEBD20", VA = "0x4FEBD20", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x4FEBD90", Offset = "0x4FEBD90", VA = "0x4FEBD90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x4FEBE20", Offset = "0x4FEBE20", VA = "0x4FEBE20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x4FEBE50", Offset = "0x4FEBE50", VA = "0x4FEBE50", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
