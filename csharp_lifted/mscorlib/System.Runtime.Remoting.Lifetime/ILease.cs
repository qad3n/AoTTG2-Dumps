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

[Token(Token = "0x2000367")]
[ComVisible(true)]
public interface ILease
{
	[Token(Token = "0x17000359")]
	TimeSpan CurrentLeaseTime
	{
		[Token(Token = "0x6001D58")]
		get;
	}

	[Token(Token = "0x1700035A")]
	LeaseState CurrentState
	{
		[Token(Token = "0x6001D59")]
		get;
	}

	[Token(Token = "0x1700035B")]
	TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D5A")]
		get;
	}

	[Token(Token = "0x6001D5B")]
	TimeSpan Renew(TimeSpan renewalTime);
}
