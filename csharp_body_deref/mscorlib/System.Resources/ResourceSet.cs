// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ResourceSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BCF890", Offset = "0x3BCF890", VA = "0x3BCF890")]
	protected ResourceSet()
	{
	}

	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x3BCF950", Offset = "0x3BCF950", VA = "0x3BCF950")]
	internal ResourceSet(bool junk)
	{
	}

	[Token(Token = "0x60023C1")]
	[Address(RVA = "0x3BCF8F0", Offset = "0x3BCF8F0", VA = "0x3BCF8F0")]
	private void CommonInit()
	{
	}

	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x3BCF960", Offset = "0x3BCF960", VA = "0x3BCF960", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60023C3")]
	[Address(RVA = "0x3BCFA50", Offset = "0x3BCFA50", VA = "0x3BCFA50", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60023C4")]
	[Address(RVA = "0x3BCFA70", Offset = "0x3BCFA70", VA = "0x3BCFA70", Slot = "7")]
	[ComVisible(false)]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023C5")]
	[Address(RVA = "0x3BCFB00", Offset = "0x3BCFB00", VA = "0x3BCFB00", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023C6")]
	[Address(RVA = "0x3BCFA80", Offset = "0x3BCFA80", VA = "0x3BCFA80")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x60023C7")]
	[Address(RVA = "0x3BCFB10", Offset = "0x3BCFB10", VA = "0x3BCFB10", Slot = "8")]
	public virtual string GetString(string name)
	{
		return null;
	}

	[Token(Token = "0x60023C8")]
	[Address(RVA = "0x3BCFD10", Offset = "0x3BCFD10", VA = "0x3BCFD10", Slot = "9")]
	public virtual string GetString(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60023C9")]
	[Address(RVA = "0x3BD03C0", Offset = "0x3BD03C0", VA = "0x3BD03C0", Slot = "10")]
	public virtual object GetObject(string name)
	{
		return null;
	}

	[Token(Token = "0x60023CA")]
	[Address(RVA = "0x3BD03D0", Offset = "0x3BD03D0", VA = "0x3BD03D0", Slot = "11")]
	public virtual object GetObject(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60023CB")]
	[Address(RVA = "0x3BCFC50", Offset = "0x3BCFC50", VA = "0x3BCFC50")]
	private object GetObjectInternal(string name)
	{
		return null;
	}

	[Token(Token = "0x60023CC")]
	[Address(RVA = "0x3BCFEF0", Offset = "0x3BCFEF0", VA = "0x3BCFEF0")]
	private object GetCaseInsensitiveObjectInternal(string name)
	{
		return null;
	}
}
