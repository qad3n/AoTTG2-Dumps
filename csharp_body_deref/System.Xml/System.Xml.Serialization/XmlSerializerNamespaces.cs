// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializerNamespaces
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000101")]
public class XmlSerializerNamespaces
{
	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable namespaces;

	[Token(Token = "0x17000330")]
	public int Count
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x610B690", Offset = "0x610A690", VA = "0x610B690")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000331")]
	internal ArrayList NamespaceList
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x610B140", Offset = "0x610A140", VA = "0x610B140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000332")]
	internal Hashtable Namespaces
	{
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x610AFC0", Offset = "0x6109FC0", VA = "0x610AFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x610B720", Offset = "0x610A720", VA = "0x610B720")]
		set
		{
		}
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x610ADA0", Offset = "0x6109DA0", VA = "0x610ADA0")]
	public XmlSerializerNamespaces()
	{
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x610ADB0", Offset = "0x6109DB0", VA = "0x610ADB0")]
	public void Add(string prefix, string ns)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x610AF20", Offset = "0x6109F20", VA = "0x610AF20")]
	internal void AddInternal(string prefix, string ns)
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x610B040", Offset = "0x610A040", VA = "0x610B040")]
	public XmlQualifiedName[] ToArray()
	{
		return null;
	}
}
