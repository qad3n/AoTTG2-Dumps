// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExtenderProvidedPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4893FB0", Offset = "0x4893FB0", VA = "0x4893FB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001058")]
		[Address(RVA = "0x4893FC0", Offset = "0x4893FC0", VA = "0x4893FC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003A3")]
	public IExtenderProvider Provider
	{
		[Token(Token = "0x6001059")]
		[Address(RVA = "0x4893FD0", Offset = "0x4893FD0", VA = "0x4893FD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600105A")]
		[Address(RVA = "0x4893FE0", Offset = "0x4893FE0", VA = "0x4893FE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003A4")]
	public Type ReceiverType
	{
		[Token(Token = "0x600105B")]
		[Address(RVA = "0x4893FF0", Offset = "0x4893FF0", VA = "0x4893FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600105C")]
		[Address(RVA = "0x4894000", Offset = "0x4894000", VA = "0x4894000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x48939C0", Offset = "0x48939C0", VA = "0x48939C0")]
	internal static ExtenderProvidedPropertyAttribute Create(PropertyDescriptor extenderProperty, Type receiverType, IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x4893FA0", Offset = "0x4893FA0", VA = "0x4893FA0")]
	public ExtenderProvidedPropertyAttribute()
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x4894010", Offset = "0x4894010", VA = "0x4894010", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x48940F0", Offset = "0x48940F0", VA = "0x48940F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x4894100", Offset = "0x4894100", VA = "0x4894100", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
