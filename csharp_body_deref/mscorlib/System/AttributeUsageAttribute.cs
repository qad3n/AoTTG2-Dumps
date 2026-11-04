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
[Token(Token = "0x20000BE")]
[AttributeUsage(AttributeTargets.Class, Inherited = true)]
public sealed class AttributeUsageAttribute : Attribute
{
	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x10")]
	private AttributeTargets _attributeTarget;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x14")]
	private bool _allowMultiple;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x15")]
	private bool _inherited;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x0")]
	internal static AttributeUsageAttribute Default;

	[Token(Token = "0x17000061")]
	public bool AllowMultiple
	{
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public bool Inherited
	{
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x1A78700", Offset = "0x1A76D00", VA = "0x181A78700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x1A78720", Offset = "0x1A76D20", VA = "0x181A78720")]
		set
		{
		}
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x1A786D0", Offset = "0x1A76CD0", VA = "0x181A786D0")]
	public AttributeUsageAttribute(AttributeTargets validOn)
	{
	}
}
