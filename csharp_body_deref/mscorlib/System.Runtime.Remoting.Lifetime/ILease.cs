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

[Token(Token = "0x200038E")]
[ComVisible(true)]
public interface ILease
{
	[Token(Token = "0x1700035A")]
	TimeSpan CurrentLeaseTime
	{
		[Token(Token = "0x6001D82")]
		get;
	}

	[Token(Token = "0x1700035B")]
	LeaseState CurrentState
	{
		[Token(Token = "0x6001D83")]
		get;
	}

	[Token(Token = "0x1700035C")]
	TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D84")]
		get;
	}

	[Token(Token = "0x6001D85")]
	TimeSpan Renew(TimeSpan renewalTime);
}
