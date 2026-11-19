// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseProviderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200017E")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = false)]
public sealed class LicenseProviderAttribute : Attribute
{
	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly LicenseProviderAttribute Default;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x10")]
	private Type _licenseProviderType;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x18")]
	private string _licenseProviderName;

	[Token(Token = "0x17000208")]
	public Type LicenseProvider
	{
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x6236BE0", Offset = "0x6235BE0", VA = "0x6236BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000209")]
	public override object TypeId
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x6237030", Offset = "0x6236030", VA = "0x6237030", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x6236FA0", Offset = "0x6235FA0", VA = "0x6236FA0")]
	public LicenseProviderAttribute()
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x6236FD0", Offset = "0x6235FD0", VA = "0x6236FD0")]
	public LicenseProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x6237000", Offset = "0x6236000", VA = "0x6237000")]
	public LicenseProviderAttribute(Type type)
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x62370D0", Offset = "0x62360D0", VA = "0x62370D0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x62371C0", Offset = "0x62361C0", VA = "0x62371C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
