using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Resources;

[Serializable]
[Token(Token = "0x20004BF")]
[ComVisible(true)]
public class ResourceSet : IDisposable, IEnumerable
{
	[NonSerialized]
	[Token(Token = "0x40013A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected IResourceReader Reader;

	[Token(Token = "0x40013A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected Hashtable Table;

	[Token(Token = "0x40013A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Hashtable _caseInsensitiveTable;

	[Token(Token = "0x60023BF")]
	[Address(RVA = "0x4EE9D70", Offset = "0x4EE9D70", VA = "0x4EE9D70")]
	protected ResourceSet()
	{
	}

	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x4EE9E30", Offset = "0x4EE9E30", VA = "0x4EE9E30")]
	internal ResourceSet(bool junk)
	{
	}

	[Token(Token = "0x60023C1")]
	[Address(RVA = "0x4EE9DD0", Offset = "0x4EE9DD0", VA = "0x4EE9DD0")]
	private void CommonInit()
	{
	}

	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x4EE9E40", Offset = "0x4EE9E40", VA = "0x4EE9E40", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60023C3")]
	[Address(RVA = "0x4EE9F30", Offset = "0x4EE9F30", VA = "0x4EE9F30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60023C4")]
	[Address(RVA = "0x4EE9F50", Offset = "0x4EE9F50", VA = "0x4EE9F50", Slot = "7")]
	[ComVisible(false)]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023C5")]
	[Address(RVA = "0x4EE9FE0", Offset = "0x4EE9FE0", VA = "0x4EE9FE0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023C6")]
	[Address(RVA = "0x4EE9F60", Offset = "0x4EE9F60", VA = "0x4EE9F60")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x60023C7")]
	[Address(RVA = "0x4EE9FF0", Offset = "0x4EE9FF0", VA = "0x4EE9FF0", Slot = "8")]
	public virtual string GetString(string name)
	{
		return null;
	}

	[Token(Token = "0x60023C8")]
	[Address(RVA = "0x4EEA1F0", Offset = "0x4EEA1F0", VA = "0x4EEA1F0", Slot = "9")]
	public virtual string GetString(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60023C9")]
	[Address(RVA = "0x4EEA8A0", Offset = "0x4EEA8A0", VA = "0x4EEA8A0", Slot = "10")]
	public virtual object GetObject(string name)
	{
		return null;
	}

	[Token(Token = "0x60023CA")]
	[Address(RVA = "0x4EEA8B0", Offset = "0x4EEA8B0", VA = "0x4EEA8B0", Slot = "11")]
	public virtual object GetObject(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60023CB")]
	[Address(RVA = "0x4EEA130", Offset = "0x4EEA130", VA = "0x4EEA130")]
	private object GetObjectInternal(string name)
	{
		return null;
	}

	[Token(Token = "0x60023CC")]
	[Address(RVA = "0x4EEA3D0", Offset = "0x4EEA3D0", VA = "0x4EEA3D0")]
	private object GetCaseInsensitiveObjectInternal(string name)
	{
		return null;
	}
}
