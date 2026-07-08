using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200075C")]
public sealed class AottgCreditsFetchResponse
{
	[Token(Token = "0x17000DB3")]
	public bool Success
	{
		[Token(Token = "0x600476C")]
		[Address(RVA = "0x40AD4B0", Offset = "0x40AD4B0", VA = "0x40AD4B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600476D")]
		[Address(RVA = "0x40AD4C0", Offset = "0x40AD4C0", VA = "0x40AD4C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB4")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x600476E")]
		[Address(RVA = "0x40AD4D0", Offset = "0x40AD4D0", VA = "0x40AD4D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600476F")]
		[Address(RVA = "0x40AD4E0", Offset = "0x40AD4E0", VA = "0x40AD4E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB5")]
	public string Error
	{
		[Token(Token = "0x6004770")]
		[Address(RVA = "0x40AD4F0", Offset = "0x40AD4F0", VA = "0x40AD4F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004771")]
		[Address(RVA = "0x40AD500", Offset = "0x40AD500", VA = "0x40AD500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600476B")]
	[Address(RVA = "0x40AD460", Offset = "0x40AD460", VA = "0x40AD460")]
	private AottgCreditsFetchResponse(bool success, AottgCreditsResponse credits, string error)
	{
	}

	[Token(Token = "0x6004772")]
	[Address(RVA = "0x40AD510", Offset = "0x40AD510", VA = "0x40AD510")]
	public static AottgCreditsFetchResponse Ok(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x6004773")]
	[Address(RVA = "0x40AD590", Offset = "0x40AD590", VA = "0x40AD590")]
	public static AottgCreditsFetchResponse Fail(string error)
	{
		return null;
	}
}
