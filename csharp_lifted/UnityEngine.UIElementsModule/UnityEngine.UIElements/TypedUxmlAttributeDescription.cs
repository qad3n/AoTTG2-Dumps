// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TypedUxmlAttributeDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004E7")]
public abstract class TypedUxmlAttributeDescription<T> : UxmlAttributeDescription
{
	[Token(Token = "0x170009E7")]
	public T defaultValue
	{
		[Token(Token = "0x600265A")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x600265B")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002659")]
	public abstract T GetValueFromBag(IUxmlAttributes bag, CreationContext cc);

	[Token(Token = "0x600265C")]
	protected TypedUxmlAttributeDescription()
	{
	}
}
