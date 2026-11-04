// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlAssetAttributeDescription
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004E4")]
public class UxmlAssetAttributeDescription<T> : TypedUxmlAttributeDescription<T> where T : Object
{
	[Token(Token = "0x6002647")]
	public UxmlAssetAttributeDescription()
	{
	}

	[Token(Token = "0x6002648")]
	public override T GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x6002649")]
	public bool TryGetValueFromBag(IUxmlAttributes bag, CreationContext cc, out T value)
	{
		return default(bool);
	}
}
