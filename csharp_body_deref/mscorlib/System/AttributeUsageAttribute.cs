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
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x541A3B0", Offset = "0x54193B0", VA = "0x541A3B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x541A3C0", Offset = "0x54193C0", VA = "0x541A3C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public bool Inherited
	{
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x541A3D0", Offset = "0x54193D0", VA = "0x541A3D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x541A3E0", Offset = "0x54193E0", VA = "0x541A3E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x541A380", Offset = "0x5419380", VA = "0x541A380")]
	public AttributeUsageAttribute(AttributeTargets validOn)
	{
	}
}
