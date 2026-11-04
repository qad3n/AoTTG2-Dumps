// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000EF")]
public abstract class XmlResolver
{
	[Token(Token = "0x6000C26")]
	public abstract object GetEntity(Uri absoluteUri, string role, Type ofObjectToReturn);

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x27588C0", Offset = "0x2756EC0", VA = "0x1827588C0", Slot = "5")]
	public virtual Uri ResolveUri(Uri baseUri, string relativeUri)
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x2758AB0", Offset = "0x27570B0", VA = "0x182758AB0", Slot = "6")]
	public virtual bool SupportsType(Uri absoluteUri, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x2758880", Offset = "0x2756E80", VA = "0x182758880", Slot = "7")]
	public virtual Task<object> GetEntityAsync(Uri absoluteUri, string role, Type ofObjectToReturn)
	{
		return null;
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XmlResolver()
	{
	}
}
