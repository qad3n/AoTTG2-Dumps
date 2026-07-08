using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200043E")]
public class UxmlFactory<TCreatedType, TTraits> : BaseUxmlFactory<TCreatedType, TTraits>, IUxmlFactory, IBaseUxmlFactory where TCreatedType : VisualElement, new() where TTraits : UxmlTraits, new()
{
	[Token(Token = "0x6001AEE")]
	public virtual VisualElement Create(IUxmlAttributes bag, CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x6001AEF")]
	public UxmlFactory()
	{
	}
}
[Token(Token = "0x2000440")]
public class UxmlFactory<TCreatedType> : UxmlFactory<TCreatedType, VisualElement.UxmlTraits> where TCreatedType : VisualElement, new()
{
	[Token(Token = "0x6001AF2")]
	public UxmlFactory()
	{
	}
}
