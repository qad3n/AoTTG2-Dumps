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

[Token(Token = "0x200014E")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultBindingPropertyAttribute : Attribute
{
	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultBindingPropertyAttribute Default;

	[Token(Token = "0x170001C1")]
	public string Name
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x622FA60", Offset = "0x622EA60", VA = "0x622FA60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x622FA20", Offset = "0x622EA20", VA = "0x622FA20")]
	public DefaultBindingPropertyAttribute()
	{
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x622FA30", Offset = "0x622EA30", VA = "0x622FA30")]
	public DefaultBindingPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x622FA70", Offset = "0x622EA70", VA = "0x622FA70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x622FAD0", Offset = "0x622EAD0", VA = "0x622FAD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
