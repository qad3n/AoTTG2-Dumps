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

[Token(Token = "0x2000141")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class ComplexBindingPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ComplexBindingPropertiesAttribute Default;

	[Token(Token = "0x170001B4")]
	public string DataSource
	{
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x6227860", Offset = "0x6226860", VA = "0x6227860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B5")]
	public string DataMember
	{
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x6227870", Offset = "0x6226870", VA = "0x6227870")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x62277E0", Offset = "0x62267E0", VA = "0x62277E0")]
	public ComplexBindingPropertiesAttribute()
	{
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x62277F0", Offset = "0x62267F0", VA = "0x62277F0")]
	public ComplexBindingPropertiesAttribute(string dataSource)
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x6227820", Offset = "0x6226820", VA = "0x6227820")]
	public ComplexBindingPropertiesAttribute(string dataSource, string dataMember)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x6227880", Offset = "0x6226880", VA = "0x6227880", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x62278F0", Offset = "0x62268F0", VA = "0x62278F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
