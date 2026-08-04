// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.StringInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005C3")]
[ComVisible(true)]
public class StringInfo
{
	[Token(Token = "0x4001949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private string m_str;

	[NonSerialized]
	[Token(Token = "0x400194A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int[] m_indexes;

	[Token(Token = "0x170006BF")]
	private int[] Indexes
	{
		[Token(Token = "0x6002D2D")]
		[Address(RVA = "0x3C5EEB0", Offset = "0x3C5EEB0", VA = "0x3C5EEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C0")]
	public string String
	{
		[Token(Token = "0x6002D2E")]
		[Address(RVA = "0x3C5F050", Offset = "0x3C5F050", VA = "0x3C5F050")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D2F")]
		[Address(RVA = "0x3C5ECF0", Offset = "0x3C5ECF0", VA = "0x3C5ECF0")]
		set
		{
		}
	}

	[Token(Token = "0x170006C1")]
	public int LengthInTextElements
	{
		[Token(Token = "0x6002D30")]
		[Address(RVA = "0x3C5F060", Offset = "0x3C5F060", VA = "0x3C5F060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002D27")]
	[Address(RVA = "0x3C5EC80", Offset = "0x3C5EC80", VA = "0x3C5EC80")]
	public StringInfo()
	{
	}

	[Token(Token = "0x6002D28")]
	[Address(RVA = "0x3C5ECD0", Offset = "0x3C5ECD0", VA = "0x3C5ECD0")]
	public StringInfo(string value)
	{
	}

	[Token(Token = "0x6002D29")]
	[Address(RVA = "0x3C5ED90", Offset = "0x3C5ED90", VA = "0x3C5ED90")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D2A")]
	[Address(RVA = "0x3C5EDC0", Offset = "0x3C5EDC0", VA = "0x3C5EDC0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D2B")]
	[Address(RVA = "0x3C5EDF0", Offset = "0x3C5EDF0", VA = "0x3C5EDF0", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D2C")]
	[Address(RVA = "0x3C5EE80", Offset = "0x3C5EE80", VA = "0x3C5EE80", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002D31")]
	[Address(RVA = "0x3C5F0C0", Offset = "0x3C5F0C0", VA = "0x3C5F0C0")]
	internal static int GetCurrentTextElementLen(string str, int index, int len, ref UnicodeCategory ucCurrent, ref int currentCharCount)
	{
		return default(int);
	}

	[Token(Token = "0x6002D32")]
	[Address(RVA = "0x3C5EF00", Offset = "0x3C5EF00", VA = "0x3C5EF00")]
	public static int[] ParseCombiningCharacters(string str)
	{
		return null;
	}
}
