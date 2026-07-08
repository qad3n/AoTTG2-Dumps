using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200041F")]
public class UxmlStringAttributeDescription : TypedUxmlAttributeDescription<string>
{
	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x4C28950", Offset = "0x4C28950", VA = "0x4C28950")]
	public UxmlStringAttributeDescription()
	{
	}

	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x4C41890", Offset = "0x4C41890", VA = "0x4C41890", Slot = "4")]
	public override string GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x4C41A60", Offset = "0x4C41A60", VA = "0x4C41A60")]
	public bool TryGetValueFromBag(IUxmlAttributes bag, CreationContext cc, ref string value)
	{
		return default(bool);
	}
}
