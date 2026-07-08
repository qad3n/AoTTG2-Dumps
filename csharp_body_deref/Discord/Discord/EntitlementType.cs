using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000034")]
public enum EntitlementType
{
	[Token(Token = "0x4000094")]
	Purchase = 1,
	[Token(Token = "0x4000095")]
	PremiumSubscription,
	[Token(Token = "0x4000096")]
	DeveloperGift,
	[Token(Token = "0x4000097")]
	TestModePurchase,
	[Token(Token = "0x4000098")]
	FreePurchase,
	[Token(Token = "0x4000099")]
	UserGift,
	[Token(Token = "0x400009A")]
	PremiumPurchase
}
