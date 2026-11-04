// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ProvidePropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001D5")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
public sealed class ProvidePropertyAttribute : Attribute
{
	[Token(Token = "0x1700028A")]
	public string PropertyName
	{
		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028B")]
	public string ReceiverTypeName
	{
		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	public override object TypeId
	{
		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x287D510", Offset = "0x287BB10", VA = "0x18287D510", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x28B8930", Offset = "0x28B6F30", VA = "0x1828B8930")]
	public ProvidePropertyAttribute(string propertyName, Type receiverType)
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public ProvidePropertyAttribute(string propertyName, string receiverTypeName)
	{
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x28B8880", Offset = "0x28B6E80", VA = "0x1828B8880", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x28B2100", Offset = "0x28B0700", VA = "0x1828B2100", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
