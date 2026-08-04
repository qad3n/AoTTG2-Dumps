// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNamespaceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000E9")]
public class XmlNamespaceManager : IXmlNamespaceResolver, IEnumerable
{
	[Token(Token = "0x20000EA")]
	private struct NamespaceDeclaration
	{
		[Token(Token = "0x4000599")]
		[FieldOffset(Offset = "0x0")]
		public string prefix;

		[Token(Token = "0x400059A")]
		[FieldOffset(Offset = "0x8")]
		public string uri;

		[Token(Token = "0x400059B")]
		[FieldOffset(Offset = "0x10")]
		public int scopeId;

		[Token(Token = "0x400059C")]
		[FieldOffset(Offset = "0x14")]
		public int previousNsIndex;

		[Token(Token = "0x6000C0D")]
		[Address(RVA = "0x4800E60", Offset = "0x4800E60", VA = "0x4800E60")]
		public void Set(string prefix, string uri, int scopeId, int previousNsIndex)
		{
		}
	}

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x10")]
	private NamespaceDeclaration[] nsdecls;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x18")]
	private int lastDecl;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x20")]
	private XmlNameTable nameTable;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x28")]
	private int scopeId;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, int> hashTable;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x38")]
	private bool useHashtable;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x40")]
	private string xml;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x48")]
	private string xmlNs;

	[Token(Token = "0x17000307")]
	public virtual XmlNameTable NameTable
	{
		[Token(Token = "0x6000C02")]
		[Address(RVA = "0x4800EA0", Offset = "0x4800EA0", VA = "0x4800EA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000308")]
	public virtual string DefaultNamespace
	{
		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x4800EB0", Offset = "0x4800EB0", VA = "0x4800EB0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x4800BD0", Offset = "0x4800BD0", VA = "0x4800BD0")]
	internal XmlNamespaceManager()
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x4800BE0", Offset = "0x4800BE0", VA = "0x4800BE0")]
	public XmlNamespaceManager(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x4800F00", Offset = "0x4800F00", VA = "0x4800F00", Slot = "10")]
	public virtual void PushScope()
	{
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x4800F10", Offset = "0x4800F10", VA = "0x4800F10", Slot = "11")]
	public virtual bool PopScope()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x4800FC0", Offset = "0x4800FC0", VA = "0x4800FC0", Slot = "12")]
	public virtual void AddNamespace(string prefix, string uri)
	{
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x4801550", Offset = "0x4801550", VA = "0x4801550", Slot = "13")]
	public virtual void RemoveNamespace(string prefix, string uri)
	{
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x4801670", Offset = "0x4801670", VA = "0x4801670", Slot = "14")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x4801810", Offset = "0x4801810", VA = "0x4801810", Slot = "15")]
	public virtual IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x4801A80", Offset = "0x4801A80", VA = "0x4801A80", Slot = "16")]
	public virtual string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x48013A0", Offset = "0x48013A0", VA = "0x48013A0")]
	private int LookupNamespaceDecl(string prefix)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x4801AC0", Offset = "0x4801AC0", VA = "0x4801AC0", Slot = "17")]
	public virtual string LookupPrefix(string uri)
	{
		return null;
	}
}
