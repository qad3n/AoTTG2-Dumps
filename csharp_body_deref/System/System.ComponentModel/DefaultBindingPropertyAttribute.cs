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

[Token(Token = "0x200018D")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultBindingPropertyAttribute : Attribute
{
	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultBindingPropertyAttribute Default;

	[Token(Token = "0x170001F0")]
	public string Name
	{
		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DefaultBindingPropertyAttribute()
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DefaultBindingPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x289B290", Offset = "0x2899890", VA = "0x18289B290", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
