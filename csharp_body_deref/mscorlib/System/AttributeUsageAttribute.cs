// ==================== AoTTG2 cross-reference ====================
// Type: System.AttributeUsageAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C14160", Offset = "0x3C14160", VA = "0x3C14160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x3C14170", Offset = "0x3C14170", VA = "0x3C14170")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public bool Inherited
	{
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x3C14180", Offset = "0x3C14180", VA = "0x3C14180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x3C14190", Offset = "0x3C14190", VA = "0x3C14190")]
		set
		{
		}
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3C14130", Offset = "0x3C14130", VA = "0x3C14130")]
	public AttributeUsageAttribute(AttributeTargets validOn)
	{
	}
}
