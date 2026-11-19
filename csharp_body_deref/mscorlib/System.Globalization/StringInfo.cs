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
[Token(Token = "0x2000570")]
[ComVisible(true)]
public class StringInfo
{
	[Token(Token = "0x40016D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private string m_str;

	[NonSerialized]
	[Token(Token = "0x40016D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int[] m_indexes;

	[Token(Token = "0x1700064D")]
	private int[] Indexes
	{
		[Token(Token = "0x6002A19")]
		[Address(RVA = "0x5433C10", Offset = "0x5432C10", VA = "0x5433C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064E")]
	public string String
	{
		[Token(Token = "0x6002A1A")]
		[Address(RVA = "0x5433DB0", Offset = "0x5432DB0", VA = "0x5433DB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A1B")]
		[Address(RVA = "0x5433A60", Offset = "0x5432A60", VA = "0x5433A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700064F")]
	public int LengthInTextElements
	{
		[Token(Token = "0x6002A1C")]
		[Address(RVA = "0x5433DC0", Offset = "0x5432DC0", VA = "0x5433DC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002A13")]
	[Address(RVA = "0x54339E0", Offset = "0x54329E0", VA = "0x54339E0")]
	public StringInfo()
	{
	}

	[Token(Token = "0x6002A14")]
	[Address(RVA = "0x5433A30", Offset = "0x5432A30", VA = "0x5433A30")]
	public StringInfo(string value)
	{
	}

	[Token(Token = "0x6002A15")]
	[Address(RVA = "0x5433B00", Offset = "0x5432B00", VA = "0x5433B00")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A16")]
	[Address(RVA = "0x5433B30", Offset = "0x5432B30", VA = "0x5433B30")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A17")]
	[Address(RVA = "0x5433B60", Offset = "0x5432B60", VA = "0x5433B60", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A18")]
	[Address(RVA = "0x5433BE0", Offset = "0x5432BE0", VA = "0x5433BE0", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002A1D")]
	[Address(RVA = "0x5433E20", Offset = "0x5432E20", VA = "0x5433E20")]
	internal static int GetCurrentTextElementLen(string str, int index, int len, ref UnicodeCategory ucCurrent, ref int currentCharCount)
	{
		return default(int);
	}

	[Token(Token = "0x6002A1E")]
	[Address(RVA = "0x5433C60", Offset = "0x5432C60", VA = "0x5433C60")]
	public static int[] ParseCombiningCharacters(string str)
	{
		return null;
	}
}
