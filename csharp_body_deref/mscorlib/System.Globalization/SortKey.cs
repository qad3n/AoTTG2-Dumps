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
		[Address(RVA = "0x4F7DFF0", Offset = "0x4F7DFF0", VA = "0x4F7DFF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D7")]
	public virtual byte[] KeyData
	{
		[Token(Token = "0x6002D9C")]
		[Address(RVA = "0x4F7E000", Offset = "0x4F7E000", VA = "0x4F7E000", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002D97")]
	[Address(RVA = "0x4F7DD10", Offset = "0x4F7DD10", VA = "0x4F7DD10")]
	public static int Compare(SortKey sortkey1, SortKey sortkey2)
	{
		return default(int);
	}

	[Token(Token = "0x6002D98")]
	[Address(RVA = "0x4F7DE80", Offset = "0x4F7DE80", VA = "0x4F7DE80")]
	internal SortKey(int lcid, string source, CompareOptions opt)
	{
	}

	[Token(Token = "0x6002D99")]
	[Address(RVA = "0x4F7DF60", Offset = "0x4F7DF60", VA = "0x4F7DF60")]
	internal SortKey(int lcid, string source, byte[] buffer, CompareOptions opt, int lv1Length, int lv2Length, int lv3Length, int kanaSmallLength, int markTypeLength, int katakanaLength, int kanaWidthLength, int identLength)
	{
	}

	[Token(Token = "0x6002D9A")]
	[Address(RVA = "0x4F7DFB0", Offset = "0x4F7DFB0", VA = "0x4F7DFB0")]
	internal SortKey(string localeName, string str, CompareOptions options, byte[] keyData)
	{
	}

	[Token(Token = "0x6002D9D")]
	[Address(RVA = "0x4F7E010", Offset = "0x4F7E010", VA = "0x4F7E010", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D9E")]
	[Address(RVA = "0x4F7E0A0", Offset = "0x4F7E0A0", VA = "0x4F7E0A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002D9F")]
	[Address(RVA = "0x4F7E370", Offset = "0x4F7E370", VA = "0x4F7E370", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002DA0")]
	[Address(RVA = "0x4F7E4E0", Offset = "0x4F7E4E0", VA = "0x4F7E4E0")]
	internal SortKey()
	{
	}
}
