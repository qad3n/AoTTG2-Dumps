using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200043F")]
internal class UxmlObjectFactory<TCreatedType, TTraits> : BaseUxmlFactory<TCreatedType, TTraits>, IUxmlObjectFactory<TCreatedType>, IBaseUxmlObjectFactory, IBaseUxmlFactory where TCreatedType : new() where TTraits : UxmlObjectTraits<TCreatedType>, new()
{
	[Token(Token = "0x6001AF0")]
	public virtual TCreatedType CreateObject(IUxmlAttributes bag, CreationContext cc)
	{
		return (TCreatedType)null;
	}

	[Token(Token = "0x6001AF1")]
	public UxmlObjectFactory()
	{
	}
}
