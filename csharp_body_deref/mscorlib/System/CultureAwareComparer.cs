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
	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x10")]
	private readonly CompareInfo _compareInfo;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x18")]
	private CompareOptions _options;

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x54D4DC0", Offset = "0x54D3DC0", VA = "0x54D4DC0")]
	internal CultureAwareComparer(CultureInfo culture, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x54D53E0", Offset = "0x54D43E0", VA = "0x54D53E0")]
	internal CultureAwareComparer(CompareInfo compareInfo, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x54D54B0", Offset = "0x54D44B0", VA = "0x54D54B0")]
	private CultureAwareComparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x54D5700", Offset = "0x54D4700", VA = "0x54D5700", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x54D5750", Offset = "0x54D4750", VA = "0x54D5750", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x54D57A0", Offset = "0x54D47A0", VA = "0x54D57A0", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x54D5810", Offset = "0x54D4810", VA = "0x54D5810", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x54D5890", Offset = "0x54D4890", VA = "0x54D5890", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x54D58C0", Offset = "0x54D48C0", VA = "0x54D58C0", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
