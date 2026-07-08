using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001AA")]
public class AnalyticsIdentifier
{
	[Token(Token = "0x40008F0")]
	[FieldOffset(Offset = "0x10")]
	public string Identifier;

	[Token(Token = "0x40008F1")]
	[FieldOffset(Offset = "0x18")]
	public string Namespace;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0x20")]
	public int Hashcode;

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x4A3B4F0", Offset = "0x4A3B4F0", VA = "0x4A3B4F0")]
	public AnalyticsIdentifier()
	{
	}
}
