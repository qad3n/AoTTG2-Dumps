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
[Token(Token = "0x20002B4")]
public sealed class StringBuilder : ISerializable
{
	[Token(Token = "0x4000BB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal char[] m_ChunkChars;

	[Token(Token = "0x4000BB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal StringBuilder m_ChunkPrevious;

	[Token(Token = "0x4000BB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int m_ChunkLength;

	[Token(Token = "0x4000BB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal int m_ChunkOffset;

	[Token(Token = "0x4000BB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int m_MaxCapacity;

	[Token(Token = "0x17000234")]
	public int Capacity
	{
		[Token(Token = "0x6001660")]
		[Address(RVA = "0x19817E0", Offset = "0x197FDE0", VA = "0x1819817E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001661")]
		[Address(RVA = "0x1981990", Offset = "0x197FF90", VA = "0x181981990")]
		set
		{
		}
	}

	[Token(Token = "0x17000235")]
	public int MaxCapacity
	{
		[Token(Token = "0x6001662")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000236")]
	public int Length
	{
		[Token(Token = "0x6001666")]
		[Address(RVA = "0x19818D0", Offset = "0x197FED0", VA = "0x1819818D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001667")]
		[Address(RVA = "0x1981C80", Offset = "0x1980280", VA = "0x181981C80")]
		set
		{
		}
	}

	[IndexerName("Chars")]
	[Token(Token = "0x17000237")]
	public char this[int index]
	{
		[Token(Token = "0x6001668")]
		[Address(RVA = "0x1981800", Offset = "0x197FE00", VA = "0x181981800")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6001669")]
		[Address(RVA = "0x1981B60", Offset = "0x1980160", VA = "0x181981B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000238")]
	private Span<char> RemainingCurrentChunk
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001690")]
		[Address(RVA = "0x19818E0", Offset = "0x197FEE0", VA = "0x1819818E0")]
		get
		{
			return default(Span<char>);
		}
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x1980E00", Offset = "0x197F400", VA = "0x181980E00")]
	public StringBuilder()
	{
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x1980E60", Offset = "0x197F460", VA = "0x181980E60")]
	public StringBuilder(int capacity)
	{
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x1981780", Offset = "0x197FD80", VA = "0x181981780")]
	public StringBuilder(string value)
	{
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x19817B0", Offset = "0x197FDB0", VA = "0x1819817B0")]
	public StringBuilder(string value, int capacity)
	{
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x1981060", Offset = "0x197F660", VA = "0x181981060")]
	public StringBuilder(string value, int startIndex, int length, int capacity)
	{
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x1980E70", Offset = "0x197F470", VA = "0x181980E70")]
	public StringBuilder(int capacity, int maxCapacity)
	{
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x1981340", Offset = "0x197F940", VA = "0x181981340")]
	private StringBuilder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x1980700", Offset = "0x197ED00", VA = "0x181980700", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x1980CC0", Offset = "0x197F2C0", VA = "0x181980CC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x1980A80", Offset = "0x197F080", VA = "0x181980A80")]
	public string ToString(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x197E720", Offset = "0x197CD20", VA = "0x18197E720")]
	public StringBuilder Clear()
	{
		return null;
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x197E3E0", Offset = "0x197C9E0", VA = "0x18197E3E0")]
	public StringBuilder Append(char value, int repeatCount)
	{
		return null;
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x197E180", Offset = "0x197C780", VA = "0x18197E180")]
	public StringBuilder Append(char[] value, int startIndex, int charCount)
	{
		return null;
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x197DCA0", Offset = "0x197C2A0", VA = "0x18197DCA0")]
	public StringBuilder Append(string value)
	{
		return null;
	}

	[Token(Token = "0x600166D")]
	[Address(RVA = "0x197DBF0", Offset = "0x197C1F0", VA = "0x18197DBF0")]
	private void AppendHelper(string value)
	{
	}

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x197E550", Offset = "0x197CB50", VA = "0x18197E550")]
	public StringBuilder Append(string value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x197E100", Offset = "0x197C700", VA = "0x18197E100")]
	public StringBuilder Append(StringBuilder value)
	{
		return null;
	}

	[Token(Token = "0x6001670")]
	[Address(RVA = "0x197CCE0", Offset = "0x197B2E0", VA = "0x18197CCE0")]
	private StringBuilder AppendCore(StringBuilder value, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001671")]
	[Address(RVA = "0x197DC40", Offset = "0x197C240", VA = "0x18197DC40")]
	public StringBuilder AppendLine()
	{
		return null;
	}

	[Token(Token = "0x6001672")]
	[Address(RVA = "0x197DC70", Offset = "0x197C270", VA = "0x18197DC70")]
	public StringBuilder AppendLine(string value)
	{
		return null;
	}

	[Token(Token = "0x6001673")]
	[Address(RVA = "0x197E740", Offset = "0x197CD40", VA = "0x18197E740")]
	public void CopyTo(int sourceIndex, Span<char> destination, int count)
	{
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x197F840", Offset = "0x197DE40", VA = "0x18197F840")]
	public StringBuilder Remove(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x197E090", Offset = "0x197C690", VA = "0x18197E090")]
	public StringBuilder Append(char value)
	{
		return null;
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x197DE00", Offset = "0x197C400", VA = "0x18197DE00")]
	public StringBuilder Append(byte value)
	{
		return null;
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x197DDB0", Offset = "0x197C3B0", VA = "0x18197DDB0")]
	public StringBuilder Append(int value)
	{
		return null;
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x197E040", Offset = "0x197C640", VA = "0x18197E040")]
	[CLSCompliant(false)]
	public StringBuilder Append(uint value)
	{
		return null;
	}

	[Token(Token = "0x6001679")]
	private StringBuilder AppendSpanFormattable<T>(T value) where T : IFormattable
	{
		return null;
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x197DE50", Offset = "0x197C450", VA = "0x18197DE50")]
	public StringBuilder Append(object value)
	{
		return null;
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x197E140", Offset = "0x197C740", VA = "0x18197E140")]
	public StringBuilder Append(char[] value)
	{
		return null;
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x197E360", Offset = "0x197C960", VA = "0x18197E360")]
	public StringBuilder Append(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x197F2B0", Offset = "0x197D8B0", VA = "0x18197F2B0")]
	public StringBuilder Insert(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x600167E")]
	[Address(RVA = "0x197EBF0", Offset = "0x197D1F0", VA = "0x18197EBF0")]
	public StringBuilder Insert(int index, char value)
	{
		return null;
	}

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x197DB80", Offset = "0x197C180", VA = "0x18197DB80")]
	public StringBuilder AppendFormat(string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x197DB00", Offset = "0x197C100", VA = "0x18197DB00")]
	public StringBuilder AppendFormat(string format, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x197D920", Offset = "0x197BF20", VA = "0x18197D920")]
	public StringBuilder AppendFormat(string format, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x197DA80", Offset = "0x197C080", VA = "0x18197DA80")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x197D9F0", Offset = "0x197BFF0", VA = "0x18197D9F0")]
	public StringBuilder AppendFormat(IFormatProvider provider, string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x197EBA0", Offset = "0x197D1A0", VA = "0x18197EBA0")]
	private static void FormatError()
	{
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x197CF40", Offset = "0x197B540", VA = "0x18197CF40")]
	internal StringBuilder AppendFormatHelper(IFormatProvider provider, string format, System.ParamsArray args)
	{
		return null;
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x1980610", Offset = "0x197EC10", VA = "0x181980610")]
	public StringBuilder Replace(string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x1980160", Offset = "0x197E760", VA = "0x181980160")]
	public StringBuilder Replace(string oldValue, string newValue, int startIndex, int count)
	{
		return null;
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x197DE90", Offset = "0x197C490", VA = "0x18197DE90")]
	[CLSCompliant(false)]
	public unsafe StringBuilder Append(char* value, int valueCount)
	{
		return null;
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x197EC20", Offset = "0x197D220", VA = "0x18197EC20")]
	private unsafe void Insert(int index, char* value, int valueCount)
	{
	}

	[Token(Token = "0x600168A")]
	[Address(RVA = "0x197FD60", Offset = "0x197E360", VA = "0x18197FD60")]
	private void ReplaceAllInChunk(int[] replacements, int replacementsCount, StringBuilder sourceChunk, int removeCount, string value)
	{
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x1980640", Offset = "0x197EC40", VA = "0x181980640")]
	private bool StartsWith(StringBuilder chunk, int indexInChunk, int count, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x197FF90", Offset = "0x197E590", VA = "0x18197FF90")]
	private unsafe void ReplaceInPlaceAtChunk(ref StringBuilder chunk, ref int indexInChunk, char* value, int count)
	{
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x1980830", Offset = "0x197EE30", VA = "0x181980830")]
	private unsafe static void ThreadSafeCopy(char* sourcePtr, char[] destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x1980900", Offset = "0x197EF00", VA = "0x181980900")]
	private static void ThreadSafeCopy(char[] source, int sourceIndex, Span<char> destination, int destinationIndex, int count)
	{
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x197EB60", Offset = "0x197D160", VA = "0x18197EB60")]
	private StringBuilder FindChunkForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x197F7F0", Offset = "0x197DDF0", VA = "0x18197F7F0")]
	private StringBuilder Next(StringBuilder chunk)
	{
		return null;
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x197E970", Offset = "0x197CF70", VA = "0x18197E970")]
	private void ExpandByABlock(int minBlockCharCount)
	{
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x1981710", Offset = "0x197FD10", VA = "0x181981710")]
	private StringBuilder(StringBuilder from)
	{
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x197F370", Offset = "0x197D970", VA = "0x18197F370")]
	private void MakeRoom(int index, int count, out StringBuilder chunk, out int indexInChunk, bool doNotMoveFollowingChars)
	{
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x1981680", Offset = "0x197FC80", VA = "0x181981680")]
	private StringBuilder(int size, int maxCapacity, StringBuilder previousBlock)
	{
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x197FB90", Offset = "0x197E190", VA = "0x18197FB90")]
	private void Remove(int startIndex, int count, out StringBuilder chunk, out int indexInChunk)
	{
	}
}
