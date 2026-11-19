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

[Token(Token = "0x200011E")]
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event)]
public sealed class DesignerSerializationVisibilityAttribute : Attribute
{
	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignerSerializationVisibilityAttribute Content;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignerSerializationVisibilityAttribute Hidden;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignerSerializationVisibilityAttribute Visible;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x18")]
	public static readonly DesignerSerializationVisibilityAttribute Default;

	[Token(Token = "0x1700017D")]
	public DesignerSerializationVisibility Visibility
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x6222B20", Offset = "0x6221B20", VA = "0x6222B20")]
		[CompilerGenerated]
		get
		{
			return default(DesignerSerializationVisibility);
		}
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x6222B00", Offset = "0x6221B00", VA = "0x6222B00")]
	public DesignerSerializationVisibilityAttribute(DesignerSerializationVisibility visibility)
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x6222B30", Offset = "0x6221B30", VA = "0x6222B30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x6222BE0", Offset = "0x6221BE0", VA = "0x6222BE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x6222BF0", Offset = "0x6221BF0", VA = "0x6222BF0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
