using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000011")]
internal sealed class XHashtable<TValue>
{
	[Token(Token = "0x2000012")]
	public delegate string ExtractKeyDelegate(TValue value);

	[Token(Token = "0x2000013")]
	private sealed class XHashtableState
	{
		[Token(Token = "0x2000014")]
		private struct Entry
		{
			[Token(Token = "0x4000029")]
			[FieldOffset(Offset = "0x0")]
			public TValue Value;

			[Token(Token = "0x400002A")]
			[FieldOffset(Offset = "0x0")]
			public int HashCode;

			[Token(Token = "0x400002B")]
			[FieldOffset(Offset = "0x0")]
			public int Next;
		}

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0x0")]
		private int[] _buckets;

		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x0")]
		private Entry[] _entries;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x0")]
		private int _numEntries;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x0")]
		private ExtractKeyDelegate _extractKey;

		[Token(Token = "0x6000089")]
		public XHashtableState(ExtractKeyDelegate extractKey, int capacity)
		{
		}

		[Token(Token = "0x600008A")]
		public XHashtableState Resize()
		{
			return null;
		}

		[Token(Token = "0x600008B")]
		public bool TryGetValue(string key, int index, int count, out TValue value)
		{
			return default(bool);
		}

		[Token(Token = "0x600008C")]
		public bool TryAdd(TValue value, out TValue newValue)
		{
			return default(bool);
		}

		[Token(Token = "0x600008D")]
		private bool FindEntry(int hashCode, string key, int index, int count, ref int entryIndex)
		{
			return default(bool);
		}

		[Token(Token = "0x600008E")]
		private static int ComputeHashCode(string key, int index, int count)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x0")]
	private XHashtableState _state;

	[Token(Token = "0x6000084")]
	public XHashtable(ExtractKeyDelegate extractKey, int capacity)
	{
	}

	[Token(Token = "0x6000085")]
	public bool TryGetValue(string key, int index, int count, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	public TValue Add(TValue value)
	{
		return (TValue)null;
	}
}
