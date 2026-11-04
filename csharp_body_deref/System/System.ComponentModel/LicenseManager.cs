// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001BB")]
public sealed class LicenseManager
{
	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_selfLock;

	[Token(Token = "0x40006B1")]
	[FieldOffset(Offset = "0x8")]
	private static LicenseContext s_context;

	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0x10")]
	private static object s_contextLockHolder;

	[Token(Token = "0x40006B3")]
	[FieldOffset(Offset = "0x18")]
	private static Hashtable s_providers;

	[Token(Token = "0x40006B4")]
	[FieldOffset(Offset = "0x20")]
	private static Hashtable s_providerInstances;

	[Token(Token = "0x40006B5")]
	[FieldOffset(Offset = "0x28")]
	private static readonly object s_internalSyncObject;

	[Token(Token = "0x17000235")]
	public static LicenseContext CurrentContext
	{
		[Token(Token = "0x6000B26")]
		[Address(RVA = "0x28A0EA0", Offset = "0x289F4A0", VA = "0x1828A0EA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x28A1140", Offset = "0x289F740", VA = "0x1828A1140")]
		set
		{
		}
	}

	[Token(Token = "0x17000236")]
	public static LicenseUsageMode UsageMode
	{
		[Token(Token = "0x6000B28")]
		[Address(RVA = "0x28A1080", Offset = "0x289F680", VA = "0x1828A1080")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private LicenseManager()
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x289F8E0", Offset = "0x289DEE0", VA = "0x18289F8E0")]
	private static void CacheProvider(Type type, LicenseProvider provider)
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x289FD20", Offset = "0x289E320", VA = "0x18289FD20")]
	public static object CreateWithContext(Type type, LicenseContext creationContext)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x289FB10", Offset = "0x289E110", VA = "0x18289FB10")]
	public static object CreateWithContext(Type type, LicenseContext creationContext, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x289FDB0", Offset = "0x289E3B0", VA = "0x18289FDB0")]
	private static bool GetCachedNoLicenseProvider(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x289FF50", Offset = "0x289E550", VA = "0x18289FF50")]
	private static LicenseProvider GetCachedProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x289FE80", Offset = "0x289E480", VA = "0x18289FE80")]
	private static LicenseProvider GetCachedProviderInstance(Type providerType)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x28A0020", Offset = "0x289E620", VA = "0x1828A0020")]
	public static bool IsLicensed(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x28A0180", Offset = "0x289E780", VA = "0x1828A0180")]
	public static bool IsValid(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x28A0100", Offset = "0x289E700", VA = "0x1828A0100")]
	public static bool IsValid(Type type, object instance, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x28A0260", Offset = "0x289E860", VA = "0x1828A0260")]
	public static void LockContext(object contextUser)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x28A03F0", Offset = "0x289E9F0", VA = "0x1828A03F0")]
	public static void UnlockContext(object contextUser)
	{
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x28A0B30", Offset = "0x289F130", VA = "0x1828A0B30")]
	private static bool ValidateInternal(Type type, object instance, bool allowExceptions, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x28A0580", Offset = "0x289EB80", VA = "0x1828A0580")]
	private static bool ValidateInternalRecursive(LicenseContext context, Type type, object instance, bool allowExceptions, out License license, out string licenseKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x28A0CD0", Offset = "0x289F2D0", VA = "0x1828A0CD0")]
	public static void Validate(Type type)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x28A0BC0", Offset = "0x289F1C0", VA = "0x1828A0BC0")]
	public static License Validate(Type type, object instance)
	{
		return null;
	}
}
