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
[Token(Token = "0x20004EF")]
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

	[Token(Token = "0x6002441")]
	[Address(RVA = "0x1A54520", Offset = "0x1A52B20", VA = "0x181A54520")]
	protected ResourceSet()
	{
	}

	[Token(Token = "0x6002442")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal ResourceSet(bool junk)
	{
	}

	[Token(Token = "0x6002443")]
	[Address(RVA = "0x1A539F0", Offset = "0x1A51FF0", VA = "0x181A539F0")]
	private void CommonInit()
	{
	}

	[Token(Token = "0x6002444")]
	[Address(RVA = "0x1A53A50", Offset = "0x1A52050", VA = "0x181A53A50", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002445")]
	[Address(RVA = "0x1A370A0", Offset = "0x1A356A0", VA = "0x181A370A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002446")]
	[Address(RVA = "0x1A53ED0", Offset = "0x1A524D0", VA = "0x181A53ED0", Slot = "7")]
	[ComVisible(false)]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002447")]
	[Address(RVA = "0x1A53ED0", Offset = "0x1A524D0", VA = "0x181A53ED0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002448")]
	[Address(RVA = "0x1A53E40", Offset = "0x1A52440", VA = "0x181A53E40")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x6002449")]
	[Address(RVA = "0x1A540D0", Offset = "0x1A526D0", VA = "0x181A540D0", Slot = "8")]
	public virtual string GetString(string name)
	{
		return null;
	}

	[Token(Token = "0x600244A")]
	[Address(RVA = "0x1A54280", Offset = "0x1A52880", VA = "0x181A54280", Slot = "9")]
	public virtual string GetString(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x600244B")]
	[Address(RVA = "0x1A53EE0", Offset = "0x1A524E0", VA = "0x181A53EE0", Slot = "10")]
	public virtual object GetObject(string name)
	{
		return null;
	}

	[Token(Token = "0x600244C")]
	[Address(RVA = "0x1A53FC0", Offset = "0x1A525C0", VA = "0x181A53FC0", Slot = "11")]
	public virtual object GetObject(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x600244D")]
	[Address(RVA = "0x1A53EE0", Offset = "0x1A524E0", VA = "0x181A53EE0")]
	private object GetObjectInternal(string name)
	{
		return null;
	}

	[Token(Token = "0x600244E")]
	[Address(RVA = "0x1A53AF0", Offset = "0x1A520F0", VA = "0x181A53AF0")]
	private object GetCaseInsensitiveObjectInternal(string name)
	{
		return null;
	}
}
