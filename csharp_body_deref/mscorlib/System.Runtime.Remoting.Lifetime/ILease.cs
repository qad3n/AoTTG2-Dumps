using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x200035F")]
[ComVisible(true)]
public interface ILease
{
	[Token(Token = "0x17000358")]
	TimeSpan CurrentLeaseTime
	{
		[Token(Token = "0x6001D13")]
		get;
	}

	[Token(Token = "0x17000359")]
	LeaseState CurrentState
	{
		[Token(Token = "0x6001D14")]
		get;
	}

	[Token(Token = "0x1700035A")]
	TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D15")]
		get;
	}

	[Token(Token = "0x6001D16")]
	TimeSpan Renew(TimeSpan renewalTime);
}
