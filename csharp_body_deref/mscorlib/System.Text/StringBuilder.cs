using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000284")]
public sealed class StringBuilder : ISerializable
{
	[Token(Token = "0x4000B68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal char[] m_ChunkChars;

	[Token(Token = "0x4000B69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal StringBuilder m_ChunkPrevious;

	[Token(Token = "0x4000B6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int m_ChunkLength;

	[Token(Token = "0x4000B6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal int m_ChunkOffset;

	[Token(Token = "0x4000B6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int m_MaxCapacity;

	[Token(Token = "0x4000B6D")]
	internal const int DefaultCapacity = 16;

	[Token(Token = "0x4000B6E")]
	private const string CapacityField = "Capacity";

	[Token(Token = "0x4000B6F")]
	private const string MaxCapacityField = "m_MaxCapacity";

	[Token(Token = "0x4000B70")]
	private const string StringValueField = "m_StringValue";

	[Token(Token = "0x4000B71")]
	private const string ThreadIDField = "m_currentThread";

	[Token(Token = "0x4000B72")]
	internal const int MaxChunkSize = 8000;

	[Token(Token = "0x4000B73")]
	private const int IndexLimit = 1000000;

	[Token(Token = "0x4000B74")]
	private const int WidthLimit = 1000000;

	[Token(Token = "0x17000232")]
	public int Capacity
	{
		[Token(Token = "0x60015F4")]
		[Address(RVA = "0x4E1D500", Offset = "0x4E1D500", VA = "0x4E1D500")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015F5")]
		[Address(RVA = "0x4E1D520", Offset = "0x4E1D520", VA = "0x4E1D520")]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	public int MaxCapacity
	{
		[Token(Token = "0x60015F6")]
		[Address(RVA = "0x4E1D690", Offset = "0x4E1D690", VA = "0x4E1D690")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000234")]
	public int Length
	{
		[Token(Token = "0x60015FA")]
		[Address(RVA = "0x4E1D680", Offset = "0x4E1D680", VA = "0x4E1D680")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015FB")]
		[Address(RVA = "0x4E1DB20", Offset = "0x4E1DB20", VA = "0x4E1DB20")]
		set
		{
		}
	}

	[IndexerName("Chars")]
	[Token(Token = "0x17000235")]
	public char this[int index]
	{
		[Token(Token = "0x60015FC")]
		[Address(RVA = "0x4E1DEE0", Offset = "0x4E1DEE0", VA = "0x4E1DEE0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x4E1DF70", Offset = "0x4E1DF70", VA = "0x4E1DF70")]
		set
		{
		}
	}

	[Token(Token = "0x17000236")]
	private Span<char> RemainingCurrentChunk
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x4E20C60", Offset = "0x4E20C60", VA = "0x4E20C60")]
		get
		{
			return default(Span<char>);
		}
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x4E1CB60", Offset = "0x4E1CB60", VA = "0x4E1CB60")]
	public StringBuilder()
	{
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x4E1CBC0", Offset = "0x4E1CBC0", VA = "0x4E1CBC0")]
	public StringBuilder(int capacity)
	{
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x4E1CD80", Offset = "0x4E1CD80", VA = "0x4E1CD80")]
	public StringBuilder(string value)
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x4E1CDA0", Offset = "0x4E1CDA0", VA = "0x4E1CDA0")]
	public StringBuilder(string value, int capacity)
	{
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x4E1CDC0", Offset = "0x4E1CDC0", VA = "0x4E1CDC0")]
	public StringBuilder(string value, int startIndex, int length, int capacity)
	{
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x4E1CBD0", Offset = "0x4E1CBD0", VA = "0x4E1CBD0")]
	public StringBuilder(int capacity, int maxCapacity)
	{
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x4E1D0D0", Offset = "0x4E1D0D0", VA = "0x4E1D0D0")]
	private StringBuilder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x4E1D3D0", Offset = "0x4E1D3D0", VA = "0x4E1D3D0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x4E1D6A0", Offset = "0x4E1D6A0", VA = "0x4E1D6A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x4E1D7D0", Offset = "0x4E1D7D0", VA = "0x4E1D7D0")]
	public string ToString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x4E1DB10", Offset = "0x4E1DB10", VA = "0x4E1DB10")]
	public StringBuilder Clear()
	{
		return null;
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x4E1DD70", Offset = "0x4E1DD70", VA = "0x4E1DD70")]
	public StringBuilder Append(char value, int repeatCount)
	{
		return null;
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x4E1E1F0", Offset = "0x4E1E1F0", VA = "0x4E1E1F0")]
	public StringBuilder Append(char[] value, int startIndex, int charCount)
	{
		return null;
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x4E1E470", Offset = "0x4E1E470", VA = "0x4E1E470")]
	public StringBuilder Append(string value)
	{
		return null;
	}

	[Token(Token = "0x6001601")]
	[Address(RVA = "0x4E1E560", Offset = "0x4E1E560", VA = "0x4E1E560")]
	private void AppendHelper(string value)
	{
	}

	[Token(Token = "0x6001602")]
	[Address(RVA = "0x4E1E5A0", Offset = "0x4E1E5A0", VA = "0x4E1E5A0")]
	public StringBuilder Append(string value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001603")]
	[Address(RVA = "0x4E1E6C0", Offset = "0x4E1E6C0", VA = "0x4E1E6C0")]
	public StringBuilder Append(StringBuilder value)
	{
		return null;
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x4E1E6E0", Offset = "0x4E1E6E0", VA = "0x4E1E6E0")]
	private StringBuilder AppendCore(StringBuilder value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x4E1E9B0", Offset = "0x4E1E9B0", VA = "0x4E1E9B0")]
	public StringBuilder AppendLine()
	{
		return null;
	}

	[Token(Token = "0x6001606")]
	[Address(RVA = "0x4E1E9D0", Offset = "0x4E1E9D0", VA = "0x4E1E9D0")]
	public StringBuilder AppendLine(string value)
	{
		return null;
	}

	[Token(Token = "0x6001607")]
	[Address(RVA = "0x4E1D950", Offset = "0x4E1D950", VA = "0x4E1D950")]
	public void CopyTo(int sourceIndex, Span<char> destination, int count)
	{
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x4E1EB40", Offset = "0x4E1EB40", VA = "0x4E1EB40")]
	public StringBuilder Remove(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6001609")]
	[Address(RVA = "0x4E1EDD0", Offset = "0x4E1EDD0", VA = "0x4E1EDD0")]
	public StringBuilder Append(char value)
	{
		return null;
	}

	[Token(Token = "0x600160A")]
	[Address(RVA = "0x4E1EE20", Offset = "0x4E1EE20", VA = "0x4E1EE20")]
	public StringBuilder Append(byte value)
	{
		return null;
	}

	[Token(Token = "0x600160B")]
	[Address(RVA = "0x4E1EE60", Offset = "0x4E1EE60", VA = "0x4E1EE60")]
	public StringBuilder Append(int value)
	{
		return null;
	}

	[Token(Token = "0x600160C")]
	[Address(RVA = "0x4E1EEA0", Offset = "0x4E1EEA0", VA = "0x4E1EEA0")]
	[CLSCompliant(false)]
	public StringBuilder Append(uint value)
	{
		return null;
	}

	[Token(Token = "0x600160D")]
	private StringBuilder AppendSpanFormattable<T>(T value) where T : IFormattable
	{
		return null;
	}

	[Token(Token = "0x600160E")]
	[Address(RVA = "0x4E1EEE0", Offset = "0x4E1EEE0", VA = "0x4E1EEE0")]
	public StringBuilder Append(object value)
	{
		return null;
	}

	[Token(Token = "0x600160F")]
	[Address(RVA = "0x4E1EF20", Offset = "0x4E1EF20", VA = "0x4E1EF20")]
	public StringBuilder Append(char[] value)
	{
		return null;
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x4E1EF50", Offset = "0x4E1EF50", VA = "0x4E1EF50")]
	public StringBuilder Append(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x6001611")]
	[Address(RVA = "0x4E1EFC0", Offset = "0x4E1EFC0", VA = "0x4E1EFC0")]
	public StringBuilder Insert(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x6001612")]
	[Address(RVA = "0x4E1F130", Offset = "0x4E1F130", VA = "0x4E1F130")]
	public StringBuilder Insert(int index, char value)
	{
		return null;
	}

	[Token(Token = "0x6001613")]
	[Address(RVA = "0x4E1F160", Offset = "0x4E1F160", VA = "0x4E1F160")]
	public StringBuilder AppendFormat(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6001614")]
	[Address(RVA = "0x4E1FDE0", Offset = "0x4E1FDE0", VA = "0x4E1FDE0")]
	public StringBuilder AppendFormat(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6001615")]
	[Address(RVA = "0x4E1FE40", Offset = "0x4E1FE40", VA = "0x4E1FE40")]
	public StringBuilder AppendFormat(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x4E1FEF0", Offset = "0x4E1FEF0", VA = "0x4E1FEF0")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x4E1FF50", Offset = "0x4E1FF50", VA = "0x4E1FF50")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x4E1FFB0", Offset = "0x4E1FFB0", VA = "0x4E1FFB0")]
	private static void FormatError()
	{
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x4E1F1C0", Offset = "0x4E1F1C0", VA = "0x4E1F1C0")]
	internal StringBuilder AppendFormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x4E20000", Offset = "0x4E20000", VA = "0x4E20000")]
	public StringBuilder Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x4E20010", Offset = "0x4E20010", VA = "0x4E20010")]
	public StringBuilder Replace(string oldValue, string newValue, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x4E1E330", Offset = "0x4E1E330", VA = "0x4E1E330")]
	[CLSCompliant(false)]
	public unsafe StringBuilder Append(char* value, int valueCount)
	{
		return null;
	}

	[Token(Token = "0x600161D")]
	[Address(RVA = "0x4E1F060", Offset = "0x4E1F060", VA = "0x4E1F060")]
	private unsafe void Insert(int index, char* value, int valueCount)
	{
	}

	[Token(Token = "0x600161E")]
	[Address(RVA = "0x4E204B0", Offset = "0x4E204B0", VA = "0x4E204B0")]
	private void ReplaceAllInChunk(int[] replacements, int replacementsCount, StringBuilder sourceChunk, int removeCount, string value)
	{
	}

	[Token(Token = "0x600161F")]
	[Address(RVA = "0x4E20330", Offset = "0x4E20330", VA = "0x4E20330")]
	private bool StartsWith(StringBuilder chunk, int indexInChunk, int count, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001620")]
	[Address(RVA = "0x4E20A30", Offset = "0x4E20A30", VA = "0x4E20A30")]
	private unsafe void ReplaceInPlaceAtChunk(ref StringBuilder chunk, ref int indexInChunk, char* value, int count)
	{
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x4E1D010", Offset = "0x4E1D010", VA = "0x4E1D010")]
	private unsafe static void ThreadSafeCopy(char* sourcePtr, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x4E1E9F0", Offset = "0x4E1E9F0", VA = "0x4E1E9F0")]
	private static void ThreadSafeCopy(char[] source, int sourceIndex, Span<char> destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x4E1DEB0", Offset = "0x4E1DEB0", VA = "0x4E1DEB0")]
	private StringBuilder FindChunkForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x4E20C20", Offset = "0x4E20C20", VA = "0x4E20C20")]
	private StringBuilder Next(StringBuilder chunk)
	{
		return null;
	}

	[Token(Token = "0x6001626")]
	[Address(RVA = "0x4E1E020", Offset = "0x4E1E020", VA = "0x4E1E020")]
	private void ExpandByABlock(int minBlockCharCount)
	{
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0x4E20CC0", Offset = "0x4E20CC0", VA = "0x4E20CC0")]
	private StringBuilder(StringBuilder from)
	{
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x4E20700", Offset = "0x4E20700", VA = "0x4E20700")]
	private void MakeRoom(int index, int count, out StringBuilder chunk, out int indexInChunk, bool doNotMoveFollowingChars)
	{
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x4E20D20", Offset = "0x4E20D20", VA = "0x4E20D20")]
	private StringBuilder(int size, int maxCapacity, StringBuilder previousBlock)
	{
	}

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x4E1EC70", Offset = "0x4E1EC70", VA = "0x4E1EC70")]
	private void Remove(int startIndex, int count, out StringBuilder chunk, out int indexInChunk)
	{
	}
}
