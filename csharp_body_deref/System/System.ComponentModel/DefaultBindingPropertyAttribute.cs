// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultBindingPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000282")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultBindingPropertyAttribute : Attribute
{
	[Token(Token = "0x4000D43")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultBindingPropertyAttribute Default;

	[Token(Token = "0x17000381")]
	public string Name
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x488F950", Offset = "0x488F950", VA = "0x488F950")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x488F910", Offset = "0x488F910", VA = "0x488F910")]
	public DefaultBindingPropertyAttribute()
	{
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x488F920", Offset = "0x488F920", VA = "0x488F920")]
	public DefaultBindingPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x488F960", Offset = "0x488F960", VA = "0x488F960", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x488F9D0", Offset = "0x488F9D0", VA = "0x488F9D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
