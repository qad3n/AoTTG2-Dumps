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
	[Address(RVA = "0x45C15E0", Offset = "0x45C15E0", VA = "0x45C15E0")]
	public StringDictionary()
	{
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x45C1640", Offset = "0x45C1640", VA = "0x45C1640", Slot = "5")]
	public virtual void Add(string key, string value)
	{
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x45C16D0", Offset = "0x45C16D0", VA = "0x45C16D0", Slot = "6")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}
}
