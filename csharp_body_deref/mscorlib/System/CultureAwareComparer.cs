// ==================== AoTTG2 cross-reference ====================
// Type: System.CultureAwareComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3CD0E60", Offset = "0x3CD0E60", VA = "0x3CD0E60")]
	internal CultureAwareComparer(CultureInfo culture, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x3CD1480", Offset = "0x3CD1480", VA = "0x3CD1480")]
	internal CultureAwareComparer(CompareInfo compareInfo, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x3CD1550", Offset = "0x3CD1550", VA = "0x3CD1550")]
	private CultureAwareComparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x3CD17A0", Offset = "0x3CD17A0", VA = "0x3CD17A0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x3CD17F0", Offset = "0x3CD17F0", VA = "0x3CD17F0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x3CD1840", Offset = "0x3CD1840", VA = "0x3CD1840", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x3CD18B0", Offset = "0x3CD18B0", VA = "0x3CD18B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x3CD1940", Offset = "0x3CD1940", VA = "0x3CD1940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x3CD1970", Offset = "0x3CD1970", VA = "0x3CD1970", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
