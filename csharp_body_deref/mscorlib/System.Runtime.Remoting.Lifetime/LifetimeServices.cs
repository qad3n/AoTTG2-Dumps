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

[Token(Token = "0x200036E")]
[ComVisible(true)]
public sealed class LifetimeServices
{
	[Token(Token = "0x4000E59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static TimeSpan _leaseManagerPollTime;

	[Token(Token = "0x4000E5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static TimeSpan _leaseTime;

	[Token(Token = "0x4000E5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static TimeSpan _renewOnCallTime;

	[Token(Token = "0x4000E5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static TimeSpan _sponsorshipTimeout;

	[Token(Token = "0x4000E5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static System.Runtime.Remoting.Lifetime.LeaseManager _leaseManager;

	[Token(Token = "0x1700035F")]
	public static TimeSpan LeaseManagerPollTime
	{
		[Token(Token = "0x6001D76")]
		[Address(RVA = "0x5381280", Offset = "0x5380280", VA = "0x5381280")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D77")]
		[Address(RVA = "0x53812F0", Offset = "0x53802F0", VA = "0x53812F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000360")]
	public static TimeSpan LeaseTime
	{
		[Token(Token = "0x6001D78")]
		[Address(RVA = "0x5381360", Offset = "0x5380360", VA = "0x5381360")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D79")]
		[Address(RVA = "0x53813D0", Offset = "0x53803D0", VA = "0x53813D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	public static TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D7A")]
		[Address(RVA = "0x5381430", Offset = "0x5380430", VA = "0x5381430")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D7B")]
		[Address(RVA = "0x53814A0", Offset = "0x53804A0", VA = "0x53814A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000362")]
	public static TimeSpan SponsorshipTimeout
	{
		[Token(Token = "0x6001D7C")]
		[Address(RVA = "0x5381500", Offset = "0x5380500", VA = "0x5381500")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001D7D")]
		[Address(RVA = "0x5381570", Offset = "0x5380570", VA = "0x5381570")]
		set
		{
		}
	}

	[Token(Token = "0x6001D75")]
	[Address(RVA = "0x5381120", Offset = "0x5380120", VA = "0x5381120")]
	static LifetimeServices()
	{
	}

	[Token(Token = "0x6001D7E")]
	[Address(RVA = "0x53815D0", Offset = "0x53805D0", VA = "0x53815D0")]
	internal static void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}
}
