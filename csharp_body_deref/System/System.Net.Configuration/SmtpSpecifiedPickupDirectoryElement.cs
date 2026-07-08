using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200039A")]
public sealed class SmtpSpecifiedPickupDirectoryElement : ConfigurationElement
{
	[Token(Token = "0x1700055C")]
	public string PickupDirectoryLocation
	{
		[Token(Token = "0x60017E6")]
		[Address(RVA = "0x45CF480", Offset = "0x45CF480", VA = "0x45CF480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E7")]
		[Address(RVA = "0x45CF4B0", Offset = "0x45CF4B0", VA = "0x45CF4B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700055D")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017E8")]
		[Address(RVA = "0x45CF4E0", Offset = "0x45CF4E0", VA = "0x45CF4E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x45CF450", Offset = "0x45CF450", VA = "0x45CF450")]
	public SmtpSpecifiedPickupDirectoryElement()
	{
	}
}
