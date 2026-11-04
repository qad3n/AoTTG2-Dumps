// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlStringAttributeDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004E8")]
public class UxmlStringAttributeDescription : TypedUxmlAttributeDescription<string>
{
	[Token(Token = "0x600265D")]
	[Address(RVA = "0x3158970", Offset = "0x3156F70", VA = "0x183158970")]
	public UxmlStringAttributeDescription()
	{
	}

	[Token(Token = "0x600265E")]
	[Address(RVA = "0x3158670", Offset = "0x3156C70", VA = "0x183158670", Slot = "4")]
	public override string GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x600265F")]
	[Address(RVA = "0x31587E0", Offset = "0x3156DE0", VA = "0x1831587E0")]
	public bool TryGetValueFromBag(IUxmlAttributes bag, CreationContext cc, ref string value)
	{
		return default(bool);
	}
}
