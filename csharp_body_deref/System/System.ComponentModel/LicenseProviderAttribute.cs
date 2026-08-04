// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseProviderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002B2")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = false)]
public sealed class LicenseProviderAttribute : Attribute
{
	[Token(Token = "0x4000D7F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly LicenseProviderAttribute Default;

	[Token(Token = "0x4000D80")]
	[FieldOffset(Offset = "0x10")]
	private Type _licenseProviderType;

	[Token(Token = "0x4000D81")]
	[FieldOffset(Offset = "0x18")]
	private string _licenseProviderName;

	[Token(Token = "0x170003C8")]
	public Type LicenseProvider
	{
		[Token(Token = "0x60010F6")]
		[Address(RVA = "0x4896CB0", Offset = "0x4896CB0", VA = "0x4896CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C9")]
	public override object TypeId
	{
		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x4897110", Offset = "0x4897110", VA = "0x4897110", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x4897080", Offset = "0x4897080", VA = "0x4897080")]
	public LicenseProviderAttribute()
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x48970B0", Offset = "0x48970B0", VA = "0x48970B0")]
	public LicenseProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x48970E0", Offset = "0x48970E0", VA = "0x48970E0")]
	public LicenseProviderAttribute(Type type)
	{
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x48971B0", Offset = "0x48971B0", VA = "0x48971B0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x48972A0", Offset = "0x48972A0", VA = "0x48972A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
