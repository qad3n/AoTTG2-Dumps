using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002CA")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
public sealed class ProvidePropertyAttribute : Attribute
{
	[Token(Token = "0x1700041B")]
	public string PropertyName
	{
		[Token(Token = "0x6001236")]
		[Address(RVA = "0x4580B10", Offset = "0x4580B10", VA = "0x4580B10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041C")]
	public string ReceiverTypeName
	{
		[Token(Token = "0x6001237")]
		[Address(RVA = "0x4580B20", Offset = "0x4580B20", VA = "0x4580B20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041D")]
	public override object TypeId
	{
		[Token(Token = "0x600123A")]
		[Address(RVA = "0x4580C10", Offset = "0x4580C10", VA = "0x4580C10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x4580A70", Offset = "0x4580A70", VA = "0x4580A70")]
	public ProvidePropertyAttribute(string propertyName, Type receiverType)
	{
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x4580AD0", Offset = "0x4580AD0", VA = "0x4580AD0")]
	public ProvidePropertyAttribute(string propertyName, string receiverTypeName)
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x4580B30", Offset = "0x4580B30", VA = "0x4580B30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x4580BC0", Offset = "0x4580BC0", VA = "0x4580BC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
