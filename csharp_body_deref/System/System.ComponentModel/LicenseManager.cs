using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002B0")]
public sealed class LicenseManager
{
	[Token(Token = "0x4000D79")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_selfLock;

	[Token(Token = "0x4000D7A")]
	[FieldOffset(Offset = "0x8")]
	private static LicenseContext s_context;

	[Token(Token = "0x4000D7B")]
	[FieldOffset(Offset = "0x10")]
	private static object s_contextLockHolder;

	[Token(Token = "0x4000D7C")]
	[FieldOffset(Offset = "0x18")]
	private static Hashtable s_providers;

	[Token(Token = "0x4000D7D")]
	[FieldOffset(Offset = "0x20")]
	private static Hashtable s_providerInstances;

	[Token(Token = "0x4000D7E")]
	[FieldOffset(Offset = "0x28")]
	private static readonly object s_internalSyncObject;

	[Token(Token = "0x170003C6")]
	public static LicenseContext CurrentContext
	{
		[Token(Token = "0x60010DE")]
		[Address(RVA = "0x45704D0", Offset = "0x45704D0", VA = "0x45704D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x45706C0", Offset = "0x45706C0", VA = "0x45706C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C7")]
	public static LicenseUsageMode UsageMode
	{
		[Token(Token = "0x60010E0")]
		[Address(RVA = "0x4570860", Offset = "0x4570860", VA = "0x4570860")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x45704C0", Offset = "0x45704C0", VA = "0x45704C0")]
	private LicenseManager()
	{
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x4570910", Offset = "0x4570910", VA = "0x4570910")]
	private static void CacheProvider(Type type, LicenseProvider provider)
	{
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x4570B40", Offset = "0x4570B40", VA = "0x4570B40")]
	public static object CreateWithContext(Type type, LicenseContext creationContext)
	{
		return null;
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x4570C30", Offset = "0x4570C30", VA = "0x4570C30")]
	public static object CreateWithContext(Type type, LicenseContext creationContext, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x45710C0", Offset = "0x45710C0", VA = "0x45710C0")]
	private static bool GetCachedNoLicenseProvider(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x4571170", Offset = "0x4571170", VA = "0x4571170")]
	private static LicenseProvider GetCachedProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x4571230", Offset = "0x4571230", VA = "0x4571230")]
	private static LicenseProvider GetCachedProviderInstance(Type providerType)
	{
		return null;
	}

	[Token(Token = "0x60010E7")]
	[Address(RVA = "0x45712F0", Offset = "0x45712F0", VA = "0x45712F0")]
	public static bool IsLicensed(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x4571470", Offset = "0x4571470", VA = "0x4571470")]
	public static bool IsValid(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x4571570", Offset = "0x4571570", VA = "0x4571570")]
	public static bool IsValid(Type type, object instance, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x4570F20", Offset = "0x4570F20", VA = "0x4570F20")]
	public static void LockContext(object contextUser)
	{
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x4571660", Offset = "0x4571660", VA = "0x4571660")]
	public static void UnlockContext(object contextUser)
	{
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x45713F0", Offset = "0x45713F0", VA = "0x45713F0")]
	private static bool ValidateInternal(Type type, object instance, bool allowExceptions, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x4571800", Offset = "0x4571800", VA = "0x4571800")]
	private static bool ValidateInternalRecursive(LicenseContext context, Type type, object instance, bool allowExceptions, out License license, out string licenseKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x4571C70", Offset = "0x4571C70", VA = "0x4571C70")]
	public static void Validate(Type type)
	{
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x4571DB0", Offset = "0x4571DB0", VA = "0x4571DB0")]
	public static License Validate(Type type, object instance)
	{
		return null;
	}
}
