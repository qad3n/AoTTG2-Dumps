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
[Token(Token = "0x20005A4")]
public sealed class Comparer : IComparer, ISerializable
{
	[Token(Token = "0x40017CA")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x40017CB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Comparer Default;

	[Token(Token = "0x40017CC")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Comparer DefaultInvariant;

	[Token(Token = "0x6002B93")]
	[Address(RVA = "0x544FEF0", Offset = "0x544EEF0", VA = "0x544FEF0")]
	public Comparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002B94")]
	[Address(RVA = "0x544FF80", Offset = "0x544EF80", VA = "0x544FF80")]
	private Comparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002B95")]
	[Address(RVA = "0x54500D0", Offset = "0x544F0D0", VA = "0x54500D0", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002B96")]
	[Address(RVA = "0x5450170", Offset = "0x544F170", VA = "0x5450170", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
