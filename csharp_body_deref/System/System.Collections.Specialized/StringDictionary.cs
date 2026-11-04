// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.StringDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000248")]
[DefaultMember("Item")]
public class StringDictionary : IEnumerable
{
	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable contents;

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x28CBDF0", Offset = "0x28CA3F0", VA = "0x1828CBDF0")]
	public StringDictionary()
	{
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x28DC580", Offset = "0x28DAB80", VA = "0x1828DC580", Slot = "5")]
	public virtual void Add(string key, string value)
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x2547410", Offset = "0x2545A10", VA = "0x182547410", Slot = "6")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}
}
