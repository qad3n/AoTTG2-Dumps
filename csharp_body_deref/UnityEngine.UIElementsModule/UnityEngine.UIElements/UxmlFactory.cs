// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200050B")]
[Obsolete("UxmlFactory<TCreatedType, TTraits> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
public class UxmlFactory<TCreatedType, TTraits> : BaseUxmlFactory<TCreatedType, TTraits>, IUxmlFactory, IBaseUxmlFactory where TCreatedType : VisualElement, new() where TTraits : UxmlTraits, new()
{
	[Token(Token = "0x60026BD")]
	public virtual VisualElement Create(IUxmlAttributes bag, CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x60026BE")]
	public UxmlFactory()
	{
	}
}
[Token(Token = "0x200050D")]
[Obsolete("UxmlFactory<TCreatedType> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
public class UxmlFactory<TCreatedType> : UxmlFactory<TCreatedType, VisualElement.UxmlTraits> where TCreatedType : VisualElement, new()
{
	[Token(Token = "0x60026C1")]
	public UxmlFactory()
	{
	}
}
