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
		[Address(RVA = "0x4571BB0", Offset = "0x4571BB0", VA = "0x4571BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C9")]
	public override object TypeId
	{
		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x4572010", Offset = "0x4572010", VA = "0x4572010", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x4571F80", Offset = "0x4571F80", VA = "0x4571F80")]
	public LicenseProviderAttribute()
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x4571FB0", Offset = "0x4571FB0", VA = "0x4571FB0")]
	public LicenseProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x4571FE0", Offset = "0x4571FE0", VA = "0x4571FE0")]
	public LicenseProviderAttribute(Type type)
	{
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x45720B0", Offset = "0x45720B0", VA = "0x45720B0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x45721A0", Offset = "0x45721A0", VA = "0x45721A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
