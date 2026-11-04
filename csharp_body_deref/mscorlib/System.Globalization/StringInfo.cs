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
[Token(Token = "0x2000595")]
[ComVisible(true)]
public class StringInfo
{
	[Token(Token = "0x400176A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private string m_str;

	[NonSerialized]
	[Token(Token = "0x400176B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int[] m_indexes;

	[Token(Token = "0x1700064C")]
	private int[] Indexes
	{
		[Token(Token = "0x6002A3A")]
		[Address(RVA = "0x1AABC20", Offset = "0x1AAA220", VA = "0x181AABC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064D")]
	public string String
	{
		[Token(Token = "0x6002A3B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A3C")]
		[Address(RVA = "0x1AABCD0", Offset = "0x1AAA2D0", VA = "0x181AABCD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	public int LengthInTextElements
	{
		[Token(Token = "0x6002A3D")]
		[Address(RVA = "0x1AABC70", Offset = "0x1AAA270", VA = "0x181AABC70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002A34")]
	[Address(RVA = "0x1AABB40", Offset = "0x1AAA140", VA = "0x181AABB40")]
	public StringInfo()
	{
	}

	[Token(Token = "0x6002A35")]
	[Address(RVA = "0x1AABA90", Offset = "0x1AAA090", VA = "0x181AABA90")]
	public StringInfo(string value)
	{
	}

	[Token(Token = "0x6002A36")]
	[Address(RVA = "0x1AAB840", Offset = "0x1AA9E40", VA = "0x181AAB840")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A37")]
	[Address(RVA = "0x1AAB800", Offset = "0x1AA9E00", VA = "0x181AAB800")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A38")]
	[Address(RVA = "0x1AAB660", Offset = "0x1AA9C60", VA = "0x181AAB660", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A39")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002A3E")]
	[Address(RVA = "0x1AAB6F0", Offset = "0x1AA9CF0", VA = "0x181AAB6F0")]
	internal static int GetCurrentTextElementLen(string str, int index, int len, ref UnicodeCategory ucCurrent, ref int currentCharCount)
	{
		return default(int);
	}

	[Token(Token = "0x6002A3F")]
	[Address(RVA = "0x1AAB860", Offset = "0x1AA9E60", VA = "0x181AAB860")]
	public static int[] ParseCombiningCharacters(string str)
	{
		return null;
	}
}
