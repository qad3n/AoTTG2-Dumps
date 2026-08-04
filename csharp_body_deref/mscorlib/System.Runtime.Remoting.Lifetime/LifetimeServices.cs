// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Lifetime.LifetimeServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x2000366")]
[ComVisible(true)]
public sealed class LifetimeServices
{
	[Token(Token = "0x4000EEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static TimeSpan _leaseManagerPollTime;

	[Token(Token = "0x4000EED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static TimeSpan _leaseTime;

	[Token(Token = "0x4000EEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static TimeSpan _renewOnCallTime;

	[Token(Token = "0x4000EEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static TimeSpan _sponsorshipTimeout;

	[Token(Token = "0x4000EF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static System.Runtime.Remoting.Lifetime.LeaseManager _leaseManager;

	[Token(Token = "0x1700035E")]
	public static TimeSpan LeaseManagerPollTime
	{
		[Token(Token = "0x6001D31")]
		[Address(RVA = "0x3B78BD0", Offset = "0x3B78BD0", VA = "0x3B78BD0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D32")]
		[Address(RVA = "0x3B78C40", Offset = "0x3B78C40", VA = "0x3B78C40")]
		set
		{
		}
	}

	[Token(Token = "0x1700035F")]
	public static TimeSpan LeaseTime
	{
		[Token(Token = "0x6001D33")]
		[Address(RVA = "0x3B78CB0", Offset = "0x3B78CB0", VA = "0x3B78CB0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D34")]
		[Address(RVA = "0x3B78D20", Offset = "0x3B78D20", VA = "0x3B78D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000360")]
	public static TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D35")]
		[Address(RVA = "0x3B78D80", Offset = "0x3B78D80", VA = "0x3B78D80")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D36")]
		[Address(RVA = "0x3B78DF0", Offset = "0x3B78DF0", VA = "0x3B78DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	public static TimeSpan SponsorshipTimeout
	{
		[Token(Token = "0x6001D37")]
		[Address(RVA = "0x3B78E50", Offset = "0x3B78E50", VA = "0x3B78E50")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D38")]
		[Address(RVA = "0x3B78EC0", Offset = "0x3B78EC0", VA = "0x3B78EC0")]
		set
		{
		}
	}

	[Token(Token = "0x6001D30")]
	[Address(RVA = "0x3B78A70", Offset = "0x3B78A70", VA = "0x3B78A70")]
	static LifetimeServices()
	{
	}

	[Token(Token = "0x6001D39")]
	[Address(RVA = "0x3B78F20", Offset = "0x3B78F20", VA = "0x3B78F20")]
	internal static void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}
}
