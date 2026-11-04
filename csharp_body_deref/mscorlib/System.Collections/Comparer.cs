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
[Token(Token = "0x20005C9")]
public sealed class Comparer : IComparer, ISerializable
{
	[Token(Token = "0x4001863")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x4001864")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Comparer Default;

	[Token(Token = "0x4001865")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Comparer DefaultInvariant;

	[Token(Token = "0x6002BB4")]
	[Address(RVA = "0x1AB92B0", Offset = "0x1AB78B0", VA = "0x181AB92B0")]
	public Comparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002BB5")]
	[Address(RVA = "0x1AB9130", Offset = "0x1AB7730", VA = "0x181AB9130")]
	private Comparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002BB6")]
	[Address(RVA = "0x1AB8E50", Offset = "0x1AB7450", VA = "0x181AB8E50", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002BB7")]
	[Address(RVA = "0x1AB8CB0", Offset = "0x1AB72B0", VA = "0x181AB8CB0", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
