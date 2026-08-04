// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.SortKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20005C9")]
[ComVisible(true)]
public class SortKey
{
	[Token(Token = "0x4001962")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string source;

	[Token(Token = "0x4001963")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly byte[] key;

	[Token(Token = "0x4001964")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly CompareOptions options;

	[Token(Token = "0x4001965")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly int lcid;

	[Token(Token = "0x170006D6")]
	public virtual string OriginalString
	{
		[Token(Token = "0x6002D9B")]
		[Address(RVA = "0x3C63B10", Offset = "0x3C63B10", VA = "0x3C63B10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D7")]
	public virtual byte[] KeyData
	{
		[Token(Token = "0x6002D9C")]
		[Address(RVA = "0x3C63B20", Offset = "0x3C63B20", VA = "0x3C63B20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002D97")]
	[Address(RVA = "0x3C63830", Offset = "0x3C63830", VA = "0x3C63830")]
	public static int Compare(SortKey sortkey1, SortKey sortkey2)
	{
		return default(int);
	}

	[Token(Token = "0x6002D98")]
	[Address(RVA = "0x3C639A0", Offset = "0x3C639A0", VA = "0x3C639A0")]
	internal SortKey(int lcid, string source, CompareOptions opt)
	{
	}

	[Token(Token = "0x6002D99")]
	[Address(RVA = "0x3C63A80", Offset = "0x3C63A80", VA = "0x3C63A80")]
	internal SortKey(int lcid, string source, byte[] buffer, CompareOptions opt, int lv1Length, int lv2Length, int lv3Length, int kanaSmallLength, int markTypeLength, int katakanaLength, int kanaWidthLength, int identLength)
	{
	}

	[Token(Token = "0x6002D9A")]
	[Address(RVA = "0x3C63AD0", Offset = "0x3C63AD0", VA = "0x3C63AD0")]
	internal SortKey(string localeName, string str, CompareOptions options, byte[] keyData)
	{
	}

	[Token(Token = "0x6002D9D")]
	[Address(RVA = "0x3C63B30", Offset = "0x3C63B30", VA = "0x3C63B30", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D9E")]
	[Address(RVA = "0x3C63BC0", Offset = "0x3C63BC0", VA = "0x3C63BC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002D9F")]
	[Address(RVA = "0x3C63E90", Offset = "0x3C63E90", VA = "0x3C63E90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002DA0")]
	[Address(RVA = "0x3C64000", Offset = "0x3C64000", VA = "0x3C64000")]
	internal SortKey()
	{
	}
}
