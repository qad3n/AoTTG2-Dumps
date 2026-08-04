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
		[Address(RVA = "0x48955D0", Offset = "0x48955D0", VA = "0x48955D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x48957C0", Offset = "0x48957C0", VA = "0x48957C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C7")]
	public static LicenseUsageMode UsageMode
	{
		[Token(Token = "0x60010E0")]
		[Address(RVA = "0x4895960", Offset = "0x4895960", VA = "0x4895960")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x48955C0", Offset = "0x48955C0", VA = "0x48955C0")]
	private LicenseManager()
	{
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x4895A10", Offset = "0x4895A10", VA = "0x4895A10")]
	private static void CacheProvider(Type type, LicenseProvider provider)
	{
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x4895C40", Offset = "0x4895C40", VA = "0x4895C40")]
	public static object CreateWithContext(Type type, LicenseContext creationContext)
	{
		return null;
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x4895D30", Offset = "0x4895D30", VA = "0x4895D30")]
	public static object CreateWithContext(Type type, LicenseContext creationContext, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x48961C0", Offset = "0x48961C0", VA = "0x48961C0")]
	private static bool GetCachedNoLicenseProvider(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x4896270", Offset = "0x4896270", VA = "0x4896270")]
	private static LicenseProvider GetCachedProvider(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x4896330", Offset = "0x4896330", VA = "0x4896330")]
	private static LicenseProvider GetCachedProviderInstance(Type providerType)
	{
		return null;
	}

	[Token(Token = "0x60010E7")]
	[Address(RVA = "0x48963F0", Offset = "0x48963F0", VA = "0x48963F0")]
	public static bool IsLicensed(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x4896570", Offset = "0x4896570", VA = "0x4896570")]
	public static bool IsValid(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x4896670", Offset = "0x4896670", VA = "0x4896670")]
	public static bool IsValid(Type type, object instance, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x4896020", Offset = "0x4896020", VA = "0x4896020")]
	public static void LockContext(object contextUser)
	{
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x4896760", Offset = "0x4896760", VA = "0x4896760")]
	public static void UnlockContext(object contextUser)
	{
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x48964F0", Offset = "0x48964F0", VA = "0x48964F0")]
	private static bool ValidateInternal(Type type, object instance, bool allowExceptions, out License license)
	{
		return default(bool);
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x4896900", Offset = "0x4896900", VA = "0x4896900")]
	private static bool ValidateInternalRecursive(LicenseContext context, Type type, object instance, bool allowExceptions, out License license, out string licenseKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x4896D70", Offset = "0x4896D70", VA = "0x4896D70")]
	public static void Validate(Type type)
	{
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x4896EB0", Offset = "0x4896EB0", VA = "0x4896EB0")]
	public static License Validate(Type type, object instance)
	{
		return null;
	}
}
