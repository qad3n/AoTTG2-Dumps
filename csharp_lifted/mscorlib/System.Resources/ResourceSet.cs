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
[Token(Token = "0x20004C8")]
[ComVisible(true)]
public class ResourceSet : IDisposable, IEnumerable
{
	[NonSerialized]
	[Token(Token = "0x4001301")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected IResourceReader Reader;

	[Token(Token = "0x4001302")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected Hashtable Table;

	[Token(Token = "0x4001303")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Hashtable _caseInsensitiveTable;

	[Token(Token = "0x600240F")]
	[Address(RVA = "0x53D6AF0", Offset = "0x53D5AF0", VA = "0x53D6AF0")]
	protected ResourceSet()
	{
	}

	[Token(Token = "0x6002410")]
	[Address(RVA = "0x53D6BB0", Offset = "0x53D5BB0", VA = "0x53D6BB0")]
	internal ResourceSet(bool junk)
	{
	}

	[Token(Token = "0x6002411")]
	[Address(RVA = "0x53D6B50", Offset = "0x53D5B50", VA = "0x53D6B50")]
	private void CommonInit()
	{
	}

	[Token(Token = "0x6002412")]
	[Address(RVA = "0x53D6BC0", Offset = "0x53D5BC0", VA = "0x53D6BC0", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002413")]
	[Address(RVA = "0x53D6CB0", Offset = "0x53D5CB0", VA = "0x53D6CB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002414")]
	[Address(RVA = "0x53D6CD0", Offset = "0x53D5CD0", VA = "0x53D6CD0", Slot = "7")]
	[ComVisible(false)]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002415")]
	[Address(RVA = "0x53D6D60", Offset = "0x53D5D60", VA = "0x53D6D60", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002416")]
	[Address(RVA = "0x53D6CE0", Offset = "0x53D5CE0", VA = "0x53D6CE0")]
	private IDictionaryEnumerator GetEnumeratorHelper()
	{
		return null;
	}

	[Token(Token = "0x6002417")]
	[Address(RVA = "0x53D6D70", Offset = "0x53D5D70", VA = "0x53D6D70", Slot = "8")]
	public virtual string GetString(string name)
	{
		return null;
	}

	[Token(Token = "0x6002418")]
	[Address(RVA = "0x53D7020", Offset = "0x53D6020", VA = "0x53D7020", Slot = "9")]
	public virtual string GetString(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002419")]
	[Address(RVA = "0x53D7620", Offset = "0x53D6620", VA = "0x53D7620", Slot = "10")]
	public virtual object GetObject(string name)
	{
		return null;
	}

	[Token(Token = "0x600241A")]
	[Address(RVA = "0x53D7630", Offset = "0x53D6630", VA = "0x53D7630", Slot = "11")]
	public virtual object GetObject(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x600241B")]
	[Address(RVA = "0x53D6F60", Offset = "0x53D5F60", VA = "0x53D6F60")]
	private object GetObjectInternal(string name)
	{
		return null;
	}

	[Token(Token = "0x600241C")]
	[Address(RVA = "0x53D72C0", Offset = "0x53D62C0", VA = "0x53D72C0")]
	private object GetCaseInsensitiveObjectInternal(string name)
	{
		return null;
	}
}
