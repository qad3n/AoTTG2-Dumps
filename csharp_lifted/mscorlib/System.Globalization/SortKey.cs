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
[Token(Token = "0x2000576")]
[ComVisible(true)]
public class SortKey
{
	[Token(Token = "0x40016E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string source;

	[Token(Token = "0x40016E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly byte[] key;

	[Token(Token = "0x40016E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly CompareOptions options;

	[Token(Token = "0x40016EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly int lcid;

	[Token(Token = "0x17000664")]
	public virtual string OriginalString
	{
		[Token(Token = "0x6002A87")]
		[Address(RVA = "0x5438A00", Offset = "0x5437A00", VA = "0x5438A00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000665")]
	public virtual byte[] KeyData
	{
		[Token(Token = "0x6002A88")]
		[Address(RVA = "0x5438A10", Offset = "0x5437A10", VA = "0x5438A10", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A83")]
	[Address(RVA = "0x5438720", Offset = "0x5437720", VA = "0x5438720")]
	public static int Compare(SortKey sortkey1, SortKey sortkey2)
	{
		return default(int);
	}

	[Token(Token = "0x6002A84")]
	[Address(RVA = "0x5438890", Offset = "0x5437890", VA = "0x5438890")]
	internal SortKey(int lcid, string source, CompareOptions opt)
	{
	}

	[Token(Token = "0x6002A85")]
	[Address(RVA = "0x5438970", Offset = "0x5437970", VA = "0x5438970")]
	internal SortKey(int lcid, string source, byte[] buffer, CompareOptions opt, int lv1Length, int lv2Length, int lv3Length, int kanaSmallLength, int markTypeLength, int katakanaLength, int kanaWidthLength, int identLength)
	{
	}

	[Token(Token = "0x6002A86")]
	[Address(RVA = "0x54389C0", Offset = "0x54379C0", VA = "0x54389C0")]
	internal SortKey(string localeName, string str, CompareOptions options, byte[] keyData)
	{
	}

	[Token(Token = "0x6002A89")]
	[Address(RVA = "0x5438A20", Offset = "0x5437A20", VA = "0x5438A20", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A8A")]
	[Address(RVA = "0x5438AB0", Offset = "0x5437AB0", VA = "0x5438AB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002A8B")]
	[Address(RVA = "0x5438B80", Offset = "0x5437B80", VA = "0x5438B80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002A8C")]
	[Address(RVA = "0x5438CF0", Offset = "0x5437CF0", VA = "0x5438CF0")]
	internal SortKey()
	{
	}
}
