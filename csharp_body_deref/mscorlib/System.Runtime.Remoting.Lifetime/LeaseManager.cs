// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Lifetime.LeaseManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Threading;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x2000363")]
internal class LeaseManager
{
	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _objects;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x18")]
	private Timer _timer;

	[Token(Token = "0x6001D26")]
	[Address(RVA = "0x3B77E90", Offset = "0x3B77E90", VA = "0x3B77E90")]
	public void SetPollTime(TimeSpan timeSpan)
	{
	}

	[Token(Token = "0x6001D27")]
	[Address(RVA = "0x3B77F80", Offset = "0x3B77F80", VA = "0x3B77F80")]
	public void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001D28")]
	[Address(RVA = "0x3B780E0", Offset = "0x3B780E0", VA = "0x3B780E0")]
	public void StartManager()
	{
	}

	[Token(Token = "0x6001D29")]
	[Address(RVA = "0x3B78260", Offset = "0x3B78260", VA = "0x3B78260")]
	public void StopManager()
	{
	}

	[Token(Token = "0x6001D2A")]
	[Address(RVA = "0x3B78290", Offset = "0x3B78290", VA = "0x3B78290")]
	public void ManageLeases(object state)
	{
	}

	[Token(Token = "0x6001D2B")]
	[Address(RVA = "0x3B785B0", Offset = "0x3B785B0", VA = "0x3B785B0")]
	public LeaseManager()
	{
	}
}
