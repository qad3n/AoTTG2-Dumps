// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.StringBuilder
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x3B03020", Offset = "0x3B03020", VA = "0x3B03020")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015F5")]
		[Address(RVA = "0x3B03040", Offset = "0x3B03040", VA = "0x3B03040")]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	public int MaxCapacity
	{
		[Token(Token = "0x60015F6")]
		[Address(RVA = "0x3B031B0", Offset = "0x3B031B0", VA = "0x3B031B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000234")]
	public int Length
	{
		[Token(Token = "0x60015FA")]
		[Address(RVA = "0x3B031A0", Offset = "0x3B031A0", VA = "0x3B031A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015FB")]
		[Address(RVA = "0x3B03640", Offset = "0x3B03640", VA = "0x3B03640")]
		set
		{
		}
	}

	[IndexerName("Chars")]
	[Token(Token = "0x17000235")]
	public char this[int index]
	{
		[Token(Token = "0x60015FC")]
		[Address(RVA = "0x3B03A00", Offset = "0x3B03A00", VA = "0x3B03A00")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x3B03A90", Offset = "0x3B03A90", VA = "0x3B03A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000236")]
	private Span<char> RemainingCurrentChunk
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x3B06780", Offset = "0x3B06780", VA = "0x3B06780")]
		get
		{
			return default(Span<char>);
		}
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x3B02680", Offset = "0x3B02680", VA = "0x3B02680")]
	public StringBuilder()
	{
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x3B026E0", Offset = "0x3B026E0", VA = "0x3B026E0")]
	public StringBuilder(int capacity)
	{
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x3B028A0", Offset = "0x3B028A0", VA = "0x3B028A0")]
	public StringBuilder(string value)
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x3B028C0", Offset = "0x3B028C0", VA = "0x3B028C0")]
	public StringBuilder(string value, int capacity)
	{
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x3B028E0", Offset = "0x3B028E0", VA = "0x3B028E0")]
	public StringBuilder(string value, int startIndex, int length, int capacity)
	{
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x3B026F0", Offset = "0x3B026F0", VA = "0x3B026F0")]
	public StringBuilder(int capacity, int maxCapacity)
	{
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x3B02BF0", Offset = "0x3B02BF0", VA = "0x3B02BF0")]
	private StringBuilder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x3B02EF0", Offset = "0x3B02EF0", VA = "0x3B02EF0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x3B031C0", Offset = "0x3B031C0", VA = "0x3B031C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x3B032F0", Offset = "0x3B032F0", VA = "0x3B032F0")]
	public string ToString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x3B03630", Offset = "0x3B03630", VA = "0x3B03630")]
	public StringBuilder Clear()
	{
		return null;
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x3B03890", Offset = "0x3B03890", VA = "0x3B03890")]
	public StringBuilder Append(char value, int repeatCount)
	{
		return null;
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x3B03D10", Offset = "0x3B03D10", VA = "0x3B03D10")]
	public StringBuilder Append(char[] value, int startIndex, int charCount)
	{
		return null;
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x3B03F90", Offset = "0x3B03F90", VA = "0x3B03F90")]
	public StringBuilder Append(string value)
	{
		return null;
	}

	[Token(Token = "0x6001601")]
	[Address(RVA = "0x3B04080", Offset = "0x3B04080", VA = "0x3B04080")]
	private void AppendHelper(string value)
	{
	}

	[Token(Token = "0x6001602")]
	[Address(RVA = "0x3B040C0", Offset = "0x3B040C0", VA = "0x3B040C0")]
	public StringBuilder Append(string value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001603")]
	[Address(RVA = "0x3B041E0", Offset = "0x3B041E0", VA = "0x3B041E0")]
	public StringBuilder Append(StringBuilder value)
	{
		return null;
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x3B04200", Offset = "0x3B04200", VA = "0x3B04200")]
	private StringBuilder AppendCore(StringBuilder value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x3B044D0", Offset = "0x3B044D0", VA = "0x3B044D0")]
	public StringBuilder AppendLine()
	{
		return null;
	}

	[Token(Token = "0x6001606")]
	[Address(RVA = "0x3B044F0", Offset = "0x3B044F0", VA = "0x3B044F0")]
	public StringBuilder AppendLine(string value)
	{
		return null;
	}

	[Token(Token = "0x6001607")]
	[Address(RVA = "0x3B03470", Offset = "0x3B03470", VA = "0x3B03470")]
	public void CopyTo(int sourceIndex, Span<char> destination, int count)
	{
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x3B04660", Offset = "0x3B04660", VA = "0x3B04660")]
	public StringBuilder Remove(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6001609")]
	[Address(RVA = "0x3B048F0", Offset = "0x3B048F0", VA = "0x3B048F0")]
	public StringBuilder Append(char value)
	{
		return null;
	}

	[Token(Token = "0x600160A")]
	[Address(RVA = "0x3B04940", Offset = "0x3B04940", VA = "0x3B04940")]
	public StringBuilder Append(byte value)
	{
		return null;
	}

	[Token(Token = "0x600160B")]
	[Address(RVA = "0x3B04980", Offset = "0x3B04980", VA = "0x3B04980")]
	public StringBuilder Append(int value)
	{
		return null;
	}

	[Token(Token = "0x600160C")]
	[Address(RVA = "0x3B049C0", Offset = "0x3B049C0", VA = "0x3B049C0")]
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
	[Address(RVA = "0x3B04A00", Offset = "0x3B04A00", VA = "0x3B04A00")]
	public StringBuilder Append(object value)
	{
		return null;
	}

	[Token(Token = "0x600160F")]
	[Address(RVA = "0x3B04A40", Offset = "0x3B04A40", VA = "0x3B04A40")]
	public StringBuilder Append(char[] value)
	{
		return null;
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x3B04A70", Offset = "0x3B04A70", VA = "0x3B04A70")]
	public StringBuilder Append(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x6001611")]
	[Address(RVA = "0x3B04AE0", Offset = "0x3B04AE0", VA = "0x3B04AE0")]
	public StringBuilder Insert(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x6001612")]
	[Address(RVA = "0x3B04C50", Offset = "0x3B04C50", VA = "0x3B04C50")]
	public StringBuilder Insert(int index, char value)
	{
		return null;
	}

	[Token(Token = "0x6001613")]
	[Address(RVA = "0x3B04C80", Offset = "0x3B04C80", VA = "0x3B04C80")]
	public StringBuilder AppendFormat(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6001614")]
	[Address(RVA = "0x3B05900", Offset = "0x3B05900", VA = "0x3B05900")]
	public StringBuilder AppendFormat(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6001615")]
	[Address(RVA = "0x3B05960", Offset = "0x3B05960", VA = "0x3B05960")]
	public StringBuilder AppendFormat(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x3B05A10", Offset = "0x3B05A10", VA = "0x3B05A10")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x3B05A70", Offset = "0x3B05A70", VA = "0x3B05A70")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x3B05AD0", Offset = "0x3B05AD0", VA = "0x3B05AD0")]
	private static void FormatError()
	{
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x3B04CE0", Offset = "0x3B04CE0", VA = "0x3B04CE0")]
	internal StringBuilder AppendFormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x3B05B20", Offset = "0x3B05B20", VA = "0x3B05B20")]
	public StringBuilder Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x3B05B30", Offset = "0x3B05B30", VA = "0x3B05B30")]
	public StringBuilder Replace(string oldValue, string newValue, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x3B03E50", Offset = "0x3B03E50", VA = "0x3B03E50")]
	[CLSCompliant(false)]
	public unsafe StringBuilder Append(char* value, int valueCount)
	{
		return null;
	}

	[Token(Token = "0x600161D")]
	[Address(RVA = "0x3B04B80", Offset = "0x3B04B80", VA = "0x3B04B80")]
	private unsafe void Insert(int index, char* value, int valueCount)
	{
	}

	[Token(Token = "0x600161E")]
	[Address(RVA = "0x3B05FD0", Offset = "0x3B05FD0", VA = "0x3B05FD0")]
	private void ReplaceAllInChunk(int[] replacements, int replacementsCount, StringBuilder sourceChunk, int removeCount, string value)
	{
	}

	[Token(Token = "0x600161F")]
	[Address(RVA = "0x3B05E50", Offset = "0x3B05E50", VA = "0x3B05E50")]
	private bool StartsWith(StringBuilder chunk, int indexInChunk, int count, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001620")]
	[Address(RVA = "0x3B06550", Offset = "0x3B06550", VA = "0x3B06550")]
	private unsafe void ReplaceInPlaceAtChunk(ref StringBuilder chunk, ref int indexInChunk, char* value, int count)
	{
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x3B02B30", Offset = "0x3B02B30", VA = "0x3B02B30")]
	private unsafe static void ThreadSafeCopy(char* sourcePtr, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x3B04510", Offset = "0x3B04510", VA = "0x3B04510")]
	private static void ThreadSafeCopy(char[] source, int sourceIndex, Span<char> destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x3B039D0", Offset = "0x3B039D0", VA = "0x3B039D0")]
	private StringBuilder FindChunkForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x3B06740", Offset = "0x3B06740", VA = "0x3B06740")]
	private StringBuilder Next(StringBuilder chunk)
	{
		return null;
	}

	[Token(Token = "0x6001626")]
	[Address(RVA = "0x3B03B40", Offset = "0x3B03B40", VA = "0x3B03B40")]
	private void ExpandByABlock(int minBlockCharCount)
	{
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0x3B067E0", Offset = "0x3B067E0", VA = "0x3B067E0")]
	private StringBuilder(StringBuilder from)
	{
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x3B06220", Offset = "0x3B06220", VA = "0x3B06220")]
	private void MakeRoom(int index, int count, out StringBuilder chunk, out int indexInChunk, bool doNotMoveFollowingChars)
	{
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x3B06840", Offset = "0x3B06840", VA = "0x3B06840")]
	private StringBuilder(int size, int maxCapacity, StringBuilder previousBlock)
	{
	}

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x3B04790", Offset = "0x3B04790", VA = "0x3B04790")]
	private void Remove(int startIndex, int count, out StringBuilder chunk, out int indexInChunk)
	{
	}
}
