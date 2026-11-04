// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseProviderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001BD")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = false)]
public sealed class LicenseProviderAttribute : Attribute
{
	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly LicenseProviderAttribute Default;

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x10")]
	private Type _licenseProviderType;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x18")]
	private string _licenseProviderName;

	[Token(Token = "0x17000237")]
	public Type LicenseProvider
	{
		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x28A14B0", Offset = "0x289FAB0", VA = "0x1828A14B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000238")]
	public override object TypeId
	{
		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x28A1570", Offset = "0x289FB70", VA = "0x1828A1570", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x28A1480", Offset = "0x289FA80", VA = "0x1828A1480")]
	public LicenseProviderAttribute()
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x2547AB0", Offset = "0x25460B0", VA = "0x182547AB0")]
	public LicenseProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public LicenseProviderAttribute(Type type)
	{
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x28A12D0", Offset = "0x289F8D0", VA = "0x1828A12D0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
