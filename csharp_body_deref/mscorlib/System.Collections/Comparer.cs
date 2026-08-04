// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Comparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3C7CDB0", Offset = "0x3C7CDB0", VA = "0x3C7CDB0")]
	public Comparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002EA6")]
	[Address(RVA = "0x3C7CE40", Offset = "0x3C7CE40", VA = "0x3C7CE40")]
	private Comparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002EA7")]
	[Address(RVA = "0x3C7CF90", Offset = "0x3C7CF90", VA = "0x3C7CF90", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002EA8")]
	[Address(RVA = "0x3C7D030", Offset = "0x3C7D030", VA = "0x3C7D030", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
