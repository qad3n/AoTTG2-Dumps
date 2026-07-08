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
		[Address(RVA = "0x4E930B0", Offset = "0x4E930B0", VA = "0x4E930B0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D32")]
		[Address(RVA = "0x4E93120", Offset = "0x4E93120", VA = "0x4E93120")]
		set
		{
		}
	}

	[Token(Token = "0x1700035F")]
	public static TimeSpan LeaseTime
	{
		[Token(Token = "0x6001D33")]
		[Address(RVA = "0x4E93190", Offset = "0x4E93190", VA = "0x4E93190")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D34")]
		[Address(RVA = "0x4E93200", Offset = "0x4E93200", VA = "0x4E93200")]
		set
		{
		}
	}

	[Token(Token = "0x17000360")]
	public static TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D35")]
		[Address(RVA = "0x4E93260", Offset = "0x4E93260", VA = "0x4E93260")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D36")]
		[Address(RVA = "0x4E932D0", Offset = "0x4E932D0", VA = "0x4E932D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	public static TimeSpan SponsorshipTimeout
	{
		[Token(Token = "0x6001D37")]
		[Address(RVA = "0x4E93330", Offset = "0x4E93330", VA = "0x4E93330")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D38")]
		[Address(RVA = "0x4E933A0", Offset = "0x4E933A0", VA = "0x4E933A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001D30")]
	[Address(RVA = "0x4E92F50", Offset = "0x4E92F50", VA = "0x4E92F50")]
	static LifetimeServices()
	{
	}

	[Token(Token = "0x6001D39")]
	[Address(RVA = "0x4E93400", Offset = "0x4E93400", VA = "0x4E93400")]
	internal static void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}
}
