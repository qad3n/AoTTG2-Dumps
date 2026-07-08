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
		[Address(RVA = "0x4F79390", Offset = "0x4F79390", VA = "0x4F79390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C0")]
	public string String
	{
		[Token(Token = "0x6002D2E")]
		[Address(RVA = "0x4F79530", Offset = "0x4F79530", VA = "0x4F79530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D2F")]
		[Address(RVA = "0x4F791D0", Offset = "0x4F791D0", VA = "0x4F791D0")]
		set
		{
		}
	}

	[Token(Token = "0x170006C1")]
	public int LengthInTextElements
	{
		[Token(Token = "0x6002D30")]
		[Address(RVA = "0x4F79540", Offset = "0x4F79540", VA = "0x4F79540")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002D27")]
	[Address(RVA = "0x4F79160", Offset = "0x4F79160", VA = "0x4F79160")]
	public StringInfo()
	{
	}

	[Token(Token = "0x6002D28")]
	[Address(RVA = "0x4F791B0", Offset = "0x4F791B0", VA = "0x4F791B0")]
	public StringInfo(string value)
	{
	}

	[Token(Token = "0x6002D29")]
	[Address(RVA = "0x4F79270", Offset = "0x4F79270", VA = "0x4F79270")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D2A")]
	[Address(RVA = "0x4F792A0", Offset = "0x4F792A0", VA = "0x4F792A0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D2B")]
	[Address(RVA = "0x4F792D0", Offset = "0x4F792D0", VA = "0x4F792D0", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D2C")]
	[Address(RVA = "0x4F79360", Offset = "0x4F79360", VA = "0x4F79360", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002D31")]
	[Address(RVA = "0x4F795A0", Offset = "0x4F795A0", VA = "0x4F795A0")]
	internal static int GetCurrentTextElementLen(string str, int index, int len, ref UnicodeCategory ucCurrent, ref int currentCharCount)
	{
		return default(int);
	}

	[Token(Token = "0x6002D32")]
	[Address(RVA = "0x4F793E0", Offset = "0x4F793E0", VA = "0x4F793E0")]
	public static int[] ParseCombiningCharacters(string str)
	{
		return null;
	}
}
