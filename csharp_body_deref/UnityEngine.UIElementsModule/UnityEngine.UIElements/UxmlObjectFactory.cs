// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlObjectFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
