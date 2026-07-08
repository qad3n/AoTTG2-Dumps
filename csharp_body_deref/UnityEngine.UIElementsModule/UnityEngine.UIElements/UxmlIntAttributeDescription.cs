using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000425")]
public class UxmlIntAttributeDescription : TypedUxmlAttributeDescription<int>
{
	[Token(Token = "0x6001AA5")]
	[Address(RVA = "0x4C424D0", Offset = "0x4C424D0", VA = "0x4C424D0")]
	public UxmlIntAttributeDescription()
	{
	}

	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x4C42560", Offset = "0x4C42560", VA = "0x4C42560", Slot = "4")]
	public override int GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return default(int);
	}

	[Token(Token = "0x6001AA7")]
	[Address(RVA = "0x4C42730", Offset = "0x4C42730", VA = "0x4C42730")]
	public bool TryGetValueFromBag(IUxmlAttributes bag, CreationContext cc, ref int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AA8")]
	[Address(RVA = "0x4C42900", Offset = "0x4C42900", VA = "0x4C42900")]
	private static int ConvertValueToInt(string v, int defaultValue)
	{
		return default(int);
	}
}
