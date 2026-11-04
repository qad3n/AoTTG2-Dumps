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

[Token(Token = "0x2000392")]
internal class LeaseManager
{
	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _objects;

	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0x18")]
	private Timer _timer;

	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x19FB7B0", Offset = "0x19F9DB0", VA = "0x1819FB7B0")]
	public void SetPollTime(TimeSpan timeSpan)
	{
	}

	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x19FBA30", Offset = "0x19FA030", VA = "0x1819FBA30")]
	public void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x19FB890", Offset = "0x19F9E90", VA = "0x1819FB890")]
	public void StartManager()
	{
	}

	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x19FB9F0", Offset = "0x19F9FF0", VA = "0x1819FB9F0")]
	public void StopManager()
	{
	}

	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x19FB560", Offset = "0x19F9B60", VA = "0x1819FB560")]
	public void ManageLeases(object state)
	{
	}

	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x19FBCB0", Offset = "0x19FA2B0", VA = "0x1819FBCB0")]
	public LeaseManager()
	{
	}
}
