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

[Token(Token = "0x200036B")]
internal class LeaseManager
{
	[Token(Token = "0x4000E50")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _objects;

	[Token(Token = "0x4000E51")]
	[FieldOffset(Offset = "0x18")]
	private Timer _timer;

	[Token(Token = "0x6001D6B")]
	[Address(RVA = "0x5380630", Offset = "0x537F630", VA = "0x5380630")]
	public void SetPollTime(TimeSpan timeSpan)
	{
	}

	[Token(Token = "0x6001D6C")]
	[Address(RVA = "0x5380710", Offset = "0x537F710", VA = "0x5380710")]
	public void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001D6D")]
	[Address(RVA = "0x5380830", Offset = "0x537F830", VA = "0x5380830")]
	public void StartManager()
	{
	}

	[Token(Token = "0x6001D6E")]
	[Address(RVA = "0x53809B0", Offset = "0x537F9B0", VA = "0x53809B0")]
	public void StopManager()
	{
	}

	[Token(Token = "0x6001D6F")]
	[Address(RVA = "0x53809E0", Offset = "0x537F9E0", VA = "0x53809E0")]
	public void ManageLeases(object state)
	{
	}

	[Token(Token = "0x6001D70")]
	[Address(RVA = "0x5380C60", Offset = "0x537FC60", VA = "0x5380C60")]
	public LeaseManager()
	{
	}
}
