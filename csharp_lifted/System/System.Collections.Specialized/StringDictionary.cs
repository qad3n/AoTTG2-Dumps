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
[Token(Token = "0x2000209")]
[DefaultMember("Item")]
public class StringDictionary : IEnumerable
{
	[Token(Token = "0x4000762")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable contents;

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x6282CF0", Offset = "0x6281CF0", VA = "0x6282CF0")]
	public StringDictionary()
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x6282D50", Offset = "0x6281D50", VA = "0x6282D50", Slot = "5")]
	public virtual void Add(string key, string value)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x6282DE0", Offset = "0x6281DE0", VA = "0x6282DE0", Slot = "6")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}
}
