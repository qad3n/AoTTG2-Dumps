// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComplexBindingPropertiesAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000275")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class ComplexBindingPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ComplexBindingPropertiesAttribute Default;

	[Token(Token = "0x17000374")]
	public string DataSource
	{
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x48874D0", Offset = "0x48874D0", VA = "0x48874D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000375")]
	public string DataMember
	{
		[Token(Token = "0x6000F73")]
		[Address(RVA = "0x48874E0", Offset = "0x48874E0", VA = "0x48874E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x4887450", Offset = "0x4887450", VA = "0x4887450")]
	public ComplexBindingPropertiesAttribute()
	{
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x4887460", Offset = "0x4887460", VA = "0x4887460")]
	public ComplexBindingPropertiesAttribute(string dataSource)
	{
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x4887490", Offset = "0x4887490", VA = "0x4887490")]
	public ComplexBindingPropertiesAttribute(string dataSource, string dataMember)
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x48874F0", Offset = "0x48874F0", VA = "0x48874F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4887570", Offset = "0x4887570", VA = "0x4887570", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
