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
[Token(Token = "0x200059B")]
[ComVisible(true)]
public class SortKey
{
	[Token(Token = "0x4001780")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string source;

	[Token(Token = "0x4001781")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly byte[] key;

	[Token(Token = "0x4001782")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly CompareOptions options;

	[Token(Token = "0x4001783")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly int lcid;

	[Token(Token = "0x17000663")]
	public virtual string OriginalString
	{
		[Token(Token = "0x6002AA8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000664")]
	public virtual byte[] KeyData
	{
		[Token(Token = "0x6002AA9")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002AA4")]
	[Address(RVA = "0x1AAB050", Offset = "0x1AA9650", VA = "0x181AAB050")]
	public static int Compare(SortKey sortkey1, SortKey sortkey2)
	{
		return default(int);
	}

	[Token(Token = "0x6002AA5")]
	[Address(RVA = "0x1AAB560", Offset = "0x1AA9B60", VA = "0x181AAB560")]
	internal SortKey(int lcid, string source, CompareOptions opt)
	{
	}

	[Token(Token = "0x6002AA6")]
	[Address(RVA = "0x1AAB4C0", Offset = "0x1AA9AC0", VA = "0x181AAB4C0")]
	internal SortKey(int lcid, string source, byte[] buffer, CompareOptions opt, int lv1Length, int lv2Length, int lv3Length, int kanaSmallLength, int markTypeLength, int katakanaLength, int kanaWidthLength, int identLength)
	{
	}

	[Token(Token = "0x6002AA7")]
	[Address(RVA = "0x1AAB510", Offset = "0x1AA9B10", VA = "0x181AAB510")]
	internal SortKey(string localeName, string str, CompareOptions options, byte[] keyData)
	{
	}

	[Token(Token = "0x6002AAA")]
	[Address(RVA = "0x1AAB250", Offset = "0x1AA9850", VA = "0x181AAB250", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AAB")]
	[Address(RVA = "0x1AAB2F0", Offset = "0x1AA98F0", VA = "0x181AAB2F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002AAC")]
	[Address(RVA = "0x1AAB360", Offset = "0x1AA9960", VA = "0x181AAB360", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002AAD")]
	[Address(RVA = "0x1AAB630", Offset = "0x1AA9C30", VA = "0x181AAB630")]
	internal SortKey()
	{
	}
}
