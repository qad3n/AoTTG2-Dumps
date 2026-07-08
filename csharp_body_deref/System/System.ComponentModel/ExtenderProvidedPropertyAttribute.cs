using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000293")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ExtenderProvidedPropertyAttribute : Attribute
{
	[Token(Token = "0x170003A2")]
	public PropertyDescriptor ExtenderProperty
	{
		[Token(Token = "0x6001057")]
		[Address(RVA = "0x456EEB0", Offset = "0x456EEB0", VA = "0x456EEB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001058")]
		[Address(RVA = "0x456EEC0", Offset = "0x456EEC0", VA = "0x456EEC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003A3")]
	public IExtenderProvider Provider
	{
		[Token(Token = "0x6001059")]
		[Address(RVA = "0x456EED0", Offset = "0x456EED0", VA = "0x456EED0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600105A")]
		[Address(RVA = "0x456EEE0", Offset = "0x456EEE0", VA = "0x456EEE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003A4")]
	public Type ReceiverType
	{
		[Token(Token = "0x600105B")]
		[Address(RVA = "0x456EEF0", Offset = "0x456EEF0", VA = "0x456EEF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600105C")]
		[Address(RVA = "0x456EF00", Offset = "0x456EF00", VA = "0x456EF00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x456E8C0", Offset = "0x456E8C0", VA = "0x456E8C0")]
	internal static ExtenderProvidedPropertyAttribute Create(PropertyDescriptor extenderProperty, Type receiverType, IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x456EEA0", Offset = "0x456EEA0", VA = "0x456EEA0")]
	public ExtenderProvidedPropertyAttribute()
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x456EF10", Offset = "0x456EF10", VA = "0x456EF10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x456EFF0", Offset = "0x456EFF0", VA = "0x456EFF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x456F000", Offset = "0x456F000", VA = "0x456F000", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
