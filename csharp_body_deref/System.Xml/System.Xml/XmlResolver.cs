using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000EF")]
public abstract class XmlResolver
{
	[Token(Token = "0x6000C26")]
	public abstract object GetEntity(Uri absoluteUri, string role, Type ofObjectToReturn);

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x44C5240", Offset = "0x44C5240", VA = "0x44C5240", Slot = "5")]
	public virtual Uri ResolveUri(Uri baseUri, string relativeUri)
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x44C5400", Offset = "0x44C5400", VA = "0x44C5400", Slot = "6")]
	public virtual bool SupportsType(Uri absoluteUri, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x44C5520", Offset = "0x44C5520", VA = "0x44C5520", Slot = "7")]
	public virtual Task<object> GetEntityAsync(Uri absoluteUri, string role, Type ofObjectToReturn)
	{
		return null;
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x44C5560", Offset = "0x44C5560", VA = "0x44C5560")]
	protected XmlResolver()
	{
	}
}
