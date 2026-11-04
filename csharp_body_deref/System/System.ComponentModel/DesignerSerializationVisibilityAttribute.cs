// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DesignerSerializationVisibilityAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015D")]
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event)]
public sealed class DesignerSerializationVisibilityAttribute : Attribute
{
	[Token(Token = "0x4000614")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignerSerializationVisibilityAttribute Content;

	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignerSerializationVisibilityAttribute Hidden;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignerSerializationVisibilityAttribute Visible;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x18")]
	public static readonly DesignerSerializationVisibilityAttribute Default;

	[Token(Token = "0x170001AC")]
	public DesignerSerializationVisibility Visibility
	{
		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(DesignerSerializationVisibility);
		}
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public DesignerSerializationVisibilityAttribute(DesignerSerializationVisibility visibility)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x287D560", Offset = "0x287BB60", VA = "0x18287D560", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x287D640", Offset = "0x287BC40", VA = "0x18287D640", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
