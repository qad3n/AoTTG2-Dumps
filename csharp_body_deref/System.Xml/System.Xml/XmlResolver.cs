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
	[Address(RVA = "0x48029A0", Offset = "0x48029A0", VA = "0x48029A0", Slot = "5")]
	public virtual Uri ResolveUri(Uri baseUri, string relativeUri)
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x4802B60", Offset = "0x4802B60", VA = "0x4802B60", Slot = "6")]
	public virtual bool SupportsType(Uri absoluteUri, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x4802C80", Offset = "0x4802C80", VA = "0x4802C80", Slot = "7")]
	public virtual Task<object> GetEntityAsync(Uri absoluteUri, string role, Type ofObjectToReturn)
	{
		return null;
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x4802CC0", Offset = "0x4802CC0", VA = "0x4802CC0")]
	protected XmlResolver()
	{
	}
}
