using System.Globalization;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005F5")]
public sealed class Comparer : IComparer, ISerializable
{
	[Token(Token = "0x4001A48")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x4001A49")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Comparer Default;

	[Token(Token = "0x4001A4A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Comparer DefaultInvariant;

	[Token(Token = "0x6002EA5")]
	[Address(RVA = "0x4F97290", Offset = "0x4F97290", VA = "0x4F97290")]
	public Comparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002EA6")]
	[Address(RVA = "0x4F97320", Offset = "0x4F97320", VA = "0x4F97320")]
	private Comparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002EA7")]
	[Address(RVA = "0x4F97470", Offset = "0x4F97470", VA = "0x4F97470", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002EA8")]
	[Address(RVA = "0x4F97510", Offset = "0x4F97510", VA = "0x4F97510", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
