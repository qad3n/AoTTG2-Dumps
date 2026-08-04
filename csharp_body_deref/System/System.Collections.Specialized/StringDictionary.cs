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
[Token(Token = "0x200033D")]
[DefaultMember("Item")]
public class StringDictionary : IEnumerable
{
	[Token(Token = "0x4000EFA")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable contents;

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x48E66E0", Offset = "0x48E66E0", VA = "0x48E66E0")]
	public StringDictionary()
	{
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x48E6740", Offset = "0x48E6740", VA = "0x48E6740", Slot = "5")]
	public virtual void Add(string key, string value)
	{
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x48E67D0", Offset = "0x48E67D0", VA = "0x48E67D0", Slot = "6")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}
}
