using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000095")]
[AttributeUsage(AttributeTargets.Class, Inherited = true)]
public sealed class AttributeUsageAttribute : Attribute
{
	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x10")]
	private AttributeTargets _attributeTarget;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x14")]
	private bool _allowMultiple;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x15")]
	private bool _inherited;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x0")]
	internal static AttributeUsageAttribute Default;

	[Token(Token = "0x17000061")]
	public bool AllowMultiple
	{
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x4F2E640", Offset = "0x4F2E640", VA = "0x4F2E640")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x4F2E650", Offset = "0x4F2E650", VA = "0x4F2E650")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public bool Inherited
	{
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x4F2E660", Offset = "0x4F2E660", VA = "0x4F2E660")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x4F2E670", Offset = "0x4F2E670", VA = "0x4F2E670")]
		set
		{
		}
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4F2E610", Offset = "0x4F2E610", VA = "0x4F2E610")]
	public AttributeUsageAttribute(AttributeTargets validOn)
	{
	}
}
