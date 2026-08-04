// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Lifetime.ILease
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
