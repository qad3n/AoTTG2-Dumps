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

[Token(Token = "0x2000180")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class ComplexBindingPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ComplexBindingPropertiesAttribute Default;

	[Token(Token = "0x170001E3")]
	public string DataSource
	{
		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E4")]
	public string DataMember
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ComplexBindingPropertiesAttribute()
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public ComplexBindingPropertiesAttribute(string dataSource)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public ComplexBindingPropertiesAttribute(string dataSource, string dataMember)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x2893B60", Offset = "0x2892160", VA = "0x182893B60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
