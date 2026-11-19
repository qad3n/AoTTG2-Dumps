// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.StringBuilder
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200028C")]
public sealed class StringBuilder : ISerializable
{
	[Token(Token = "0x4000B0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal char[] m_ChunkChars;

	[Token(Token = "0x4000B0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal StringBuilder m_ChunkPrevious;

	[Token(Token = "0x4000B10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int m_ChunkLength;

	[Token(Token = "0x4000B11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal int m_ChunkOffset;

	[Token(Token = "0x4000B12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int m_MaxCapacity;

	[Token(Token = "0x17000233")]
	public int Capacity
	{
		[Token(Token = "0x6001637")]
		[Address(RVA = "0x530DE40", Offset = "0x530CE40", VA = "0x530DE40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001638")]
		[Address(RVA = "0x530DE60", Offset = "0x530CE60", VA = "0x530DE60")]
		set
		{
		}
	}

	[Token(Token = "0x17000234")]
	public int MaxCapacity
	{
		[Token(Token = "0x6001639")]
		[Address(RVA = "0x530DFD0", Offset = "0x530CFD0", VA = "0x530DFD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000235")]
	public int Length
	{
		[Token(Token = "0x600163D")]
		[Address(RVA = "0x530DFC0", Offset = "0x530CFC0", VA = "0x530DFC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600163E")]
		[Address(RVA = "0x530E450", Offset = "0x530D450", VA = "0x530E450")]
		set
		{
		}
	}

	[IndexerName("Chars")]
	[Token(Token = "0x17000236")]
	public char this[int index]
	{
		[Token(Token = "0x600163F")]
		[Address(RVA = "0x530E7F0", Offset = "0x530D7F0", VA = "0x530E7F0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6001640")]
		[Address(RVA = "0x530E880", Offset = "0x530D880", VA = "0x530E880")]
		set
		{
		}
	}

	[Token(Token = "0x17000237")]
	private Span<char> RemainingCurrentChunk
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001668")]
		[Address(RVA = "0x5311430", Offset = "0x5310430", VA = "0x5311430")]
		get
		{
			return default(Span<char>);
		}
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x530D4B0", Offset = "0x530C4B0", VA = "0x530D4B0")]
	public StringBuilder()
	{
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x530D510", Offset = "0x530C510", VA = "0x530D510")]
	public StringBuilder(int capacity)
	{
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x530D6D0", Offset = "0x530C6D0", VA = "0x530D6D0")]
	public StringBuilder(string value)
	{
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x530D700", Offset = "0x530C700", VA = "0x530D700")]
	public StringBuilder(string value, int capacity)
	{
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x530D720", Offset = "0x530C720", VA = "0x530D720")]
	public StringBuilder(string value, int startIndex, int length, int capacity)
	{
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x530D520", Offset = "0x530C520", VA = "0x530D520")]
	public StringBuilder(int capacity, int maxCapacity)
	{
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x530DA00", Offset = "0x530CA00", VA = "0x530DA00")]
	private StringBuilder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x530DD10", Offset = "0x530CD10", VA = "0x530DD10", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x530DFE0", Offset = "0x530CFE0", VA = "0x530DFE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x530E100", Offset = "0x530D100", VA = "0x530E100")]
	public string ToString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x530E440", Offset = "0x530D440", VA = "0x530E440")]
	public StringBuilder Clear()
	{
		return null;
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x530E680", Offset = "0x530D680", VA = "0x530E680")]
	public StringBuilder Append(char value, int repeatCount)
	{
		return null;
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x530EB00", Offset = "0x530DB00", VA = "0x530EB00")]
	public StringBuilder Append(char[] value, int startIndex, int charCount)
	{
		return null;
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x530ED80", Offset = "0x530DD80", VA = "0x530ED80")]
	public StringBuilder Append(string value)
	{
		return null;
	}

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x530EE70", Offset = "0x530DE70", VA = "0x530EE70")]
	private void AppendHelper(string value)
	{
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x530EEB0", Offset = "0x530DEB0", VA = "0x530EEB0")]
	public StringBuilder Append(string value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x530EFD0", Offset = "0x530DFD0", VA = "0x530EFD0")]
	public StringBuilder Append(StringBuilder value)
	{
		return null;
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x530EFF0", Offset = "0x530DFF0", VA = "0x530EFF0")]
	private StringBuilder AppendCore(StringBuilder value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x530F230", Offset = "0x530E230", VA = "0x530F230")]
	public StringBuilder AppendLine()
	{
		return null;
	}

	[Token(Token = "0x6001649")]
	[Address(RVA = "0x530F250", Offset = "0x530E250", VA = "0x530F250")]
	public StringBuilder AppendLine(string value)
	{
		return null;
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x530E290", Offset = "0x530D290", VA = "0x530E290")]
	public void CopyTo(int sourceIndex, Span<char> destination, int count)
	{
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x530F3C0", Offset = "0x530E3C0", VA = "0x530F3C0")]
	public StringBuilder Remove(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x600164C")]
	[Address(RVA = "0x530F650", Offset = "0x530E650", VA = "0x530F650")]
	public StringBuilder Append(bool value)
	{
		return null;
	}

	[Token(Token = "0x600164D")]
	[Address(RVA = "0x530F6A0", Offset = "0x530E6A0", VA = "0x530F6A0")]
	public StringBuilder Append(char value)
	{
		return null;
	}

	[Token(Token = "0x600164E")]
	[Address(RVA = "0x530F6F0", Offset = "0x530E6F0", VA = "0x530F6F0")]
	public StringBuilder Append(byte value)
	{
		return null;
	}

	[Token(Token = "0x600164F")]
	[Address(RVA = "0x530F730", Offset = "0x530E730", VA = "0x530F730")]
	public StringBuilder Append(int value)
	{
		return null;
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x530F770", Offset = "0x530E770", VA = "0x530F770")]
	[CLSCompliant(false)]
	public StringBuilder Append(uint value)
	{
		return null;
	}

	[Token(Token = "0x6001651")]
	private StringBuilder AppendSpanFormattable<T>(T value) where T : IFormattable
	{
		return null;
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x530F7B0", Offset = "0x530E7B0", VA = "0x530F7B0")]
	public StringBuilder Append(object value)
	{
		return null;
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x530F7E0", Offset = "0x530E7E0", VA = "0x530F7E0")]
	public StringBuilder Append(char[] value)
	{
		return null;
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x530F810", Offset = "0x530E810", VA = "0x530F810")]
	public StringBuilder Append(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x530F880", Offset = "0x530E880", VA = "0x530F880")]
	public StringBuilder Insert(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x530F9F0", Offset = "0x530E9F0", VA = "0x530F9F0")]
	public StringBuilder Insert(int index, char value)
	{
		return null;
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x530FA20", Offset = "0x530EA20", VA = "0x530FA20")]
	public StringBuilder AppendFormat(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x5310690", Offset = "0x530F690", VA = "0x5310690")]
	public StringBuilder AppendFormat(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x53106F0", Offset = "0x530F6F0", VA = "0x53106F0")]
	public StringBuilder AppendFormat(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x53107B0", Offset = "0x530F7B0", VA = "0x53107B0")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x5310810", Offset = "0x530F810", VA = "0x5310810")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x5310880", Offset = "0x530F880", VA = "0x5310880")]
	private static void FormatError()
	{
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x530FA80", Offset = "0x530EA80", VA = "0x530FA80")]
	internal StringBuilder AppendFormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x53108D0", Offset = "0x530F8D0", VA = "0x53108D0")]
	public StringBuilder Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x53108E0", Offset = "0x530F8E0", VA = "0x53108E0")]
	public StringBuilder Replace(string oldValue, string newValue, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x530EC40", Offset = "0x530DC40", VA = "0x530EC40")]
	[CLSCompliant(false)]
	public unsafe StringBuilder Append(char* value, int valueCount)
	{
		return null;
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x530F920", Offset = "0x530E920", VA = "0x530F920")]
	private unsafe void Insert(int index, char* value, int valueCount)
	{
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x5310D50", Offset = "0x530FD50", VA = "0x5310D50")]
	private void ReplaceAllInChunk(int[] replacements, int replacementsCount, StringBuilder sourceChunk, int removeCount, string value)
	{
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x5310BC0", Offset = "0x530FBC0", VA = "0x5310BC0")]
	private bool StartsWith(StringBuilder chunk, int indexInChunk, int count, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x53112D0", Offset = "0x53102D0", VA = "0x53112D0")]
	private unsafe void ReplaceInPlaceAtChunk(ref StringBuilder chunk, ref int indexInChunk, char* value, int count)
	{
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x530D950", Offset = "0x530C950", VA = "0x530D950")]
	private unsafe static void ThreadSafeCopy(char* sourcePtr, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6001666")]
	[Address(RVA = "0x530F270", Offset = "0x530E270", VA = "0x530F270")]
	private static void ThreadSafeCopy(char[] source, int sourceIndex, Span<char> destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6001667")]
	[Address(RVA = "0x530E7C0", Offset = "0x530D7C0", VA = "0x530E7C0")]
	private StringBuilder FindChunkForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x53113F0", Offset = "0x53103F0", VA = "0x53113F0")]
	private StringBuilder Next(StringBuilder chunk)
	{
		return null;
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x530E930", Offset = "0x530D930", VA = "0x530E930")]
	private void ExpandByABlock(int minBlockCharCount)
	{
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x5311490", Offset = "0x5310490", VA = "0x5311490")]
	private StringBuilder(StringBuilder from)
	{
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x5310FA0", Offset = "0x530FFA0", VA = "0x5310FA0")]
	private void MakeRoom(int index, int count, out StringBuilder chunk, out int indexInChunk, bool doNotMoveFollowingChars)
	{
	}

	[Token(Token = "0x600166D")]
	[Address(RVA = "0x53114F0", Offset = "0x53104F0", VA = "0x53114F0")]
	private StringBuilder(int size, int maxCapacity, StringBuilder previousBlock)
	{
	}

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x530F4F0", Offset = "0x530E4F0", VA = "0x530F4F0")]
	private void Remove(int startIndex, int count, out StringBuilder chunk, out int indexInChunk)
	{
	}
}
