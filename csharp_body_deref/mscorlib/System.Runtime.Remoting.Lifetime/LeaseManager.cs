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
	[Address(RVA = "0x4E92370", Offset = "0x4E92370", VA = "0x4E92370")]
	public void SetPollTime(TimeSpan timeSpan)
	{
	}

	[Token(Token = "0x6001D27")]
	[Address(RVA = "0x4E92460", Offset = "0x4E92460", VA = "0x4E92460")]
	public void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001D28")]
	[Address(RVA = "0x4E925C0", Offset = "0x4E925C0", VA = "0x4E925C0")]
	public void StartManager()
	{
	}

	[Token(Token = "0x6001D29")]
	[Address(RVA = "0x4E92740", Offset = "0x4E92740", VA = "0x4E92740")]
	public void StopManager()
	{
	}

	[Token(Token = "0x6001D2A")]
	[Address(RVA = "0x4E92770", Offset = "0x4E92770", VA = "0x4E92770")]
	public void ManageLeases(object state)
	{
	}

	[Token(Token = "0x6001D2B")]
	[Address(RVA = "0x4E92A90", Offset = "0x4E92A90", VA = "0x4E92A90")]
	public LeaseManager()
	{
	}
}
