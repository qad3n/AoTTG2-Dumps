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

[Token(Token = "0x200017C")]
public sealed class LicenseManager
{
	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_selfLock;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x8")]
	private static LicenseContext s_context;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x10")]
	private static object s_contextLockHolder;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x18")]
	private static Hashtable s_providers;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x20")]
	private static Hashtable s_providerInstances;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x28")]
	private static readonly object s_internalSyncObject;

	[Token(Token = "0x17000206")]
	public static LicenseContext CurrentContext
	{
		[Token(Token = "0x6000966")]
		[Address(RVA = "0x62355E0", Offset = "0x62345E0", VA = "0x62355E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000967")]
		[Address(RVA = "0x62357B0", Offset = "0x62347B0", VA = "0x62357B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000207")]
	public static LicenseUsageMode UsageMode
	{
		[Token(Token = "0x6000968")]
		[Address(RVA = "0x6235930", Offset = "0x6234930", VA = "0x6235930")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x62355D0", Offset = "0x62345D0", VA = "0x62355D0")]
	private LicenseManager()
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x62359E0", Offset = "0x62349E0", VA = "0x62359E0")]
	private static void CacheProvider(Type type, LicenseProvider provider)
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x6235C10", Offset = "0x6234C10", VA = "0x6235C10")]
	public static object CreateWithContext(Type type, LicenseContext creationContext)
	{
		return null;
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x6235D00", Offset = "0x6234D00", VA = "0x6235D00")]
	public static object CreateWithContext(Type type, LicenseContext creationContext, object[] args)
	{
		return null;
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x6236140", Offset = "0x6235140", VA = "0x6236140")]
	private static bool GetCachedNoLicenseProvider(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x62361F0", Offset = "0x62351F0", VA = "0x62361F0")]
	private static LicenseProvider GetCachedProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x62362B0", Offset = "0x62352B0", VA = "0x62362B0")]
	private static LicenseProvider GetCachedProviderInstance(Type providerType)
	{
		return null;
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x6236370", Offset = "0x6235370", VA = "0x6236370")]
	public static bool IsLicensed(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x62364E0", Offset = "0x62354E0", VA = "0x62364E0")]
	public static bool IsValid(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x62365D0", Offset = "0x62355D0", VA = "0x62365D0")]
	public static bool IsValid(Type type, object instance, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x6235FC0", Offset = "0x6234FC0", VA = "0x6235FC0")]
	public static void LockContext(object contextUser)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x62366C0", Offset = "0x62356C0", VA = "0x62366C0")]
	public static void UnlockContext(object contextUser)
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x6236460", Offset = "0x6235460", VA = "0x6236460")]
	private static bool ValidateInternal(Type type, object instance, bool allowExceptions, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x6236840", Offset = "0x6235840", VA = "0x6236840")]
	private static bool ValidateInternalRecursive(LicenseContext context, Type type, object instance, bool allowExceptions, out License license, out string licenseKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x6236CA0", Offset = "0x6235CA0", VA = "0x6236CA0")]
	public static void Validate(Type type)
	{
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x6236DD0", Offset = "0x6235DD0", VA = "0x6236DD0")]
	public static License Validate(Type type, object instance)
	{
		return null;
	}
}
