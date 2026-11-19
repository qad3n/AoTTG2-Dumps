// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RefreshPropertiesAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001EB")]
[AttributeUsage(AttributeTargets.All)]
public sealed class RefreshPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000735")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RefreshPropertiesAttribute All;

	[Token(Token = "0x4000736")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RefreshPropertiesAttribute Repaint;

	[Token(Token = "0x4000737")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RefreshPropertiesAttribute Default;

	[Token(Token = "0x4000738")]
	[FieldOffset(Offset = "0x10")]
	private RefreshProperties refresh;

	[Token(Token = "0x170002D1")]
	public RefreshProperties RefreshProperties
	{
		[Token(Token = "0x6000D7E")]
		[Address(RVA = "0x627BCA0", Offset = "0x627ACA0", VA = "0x627BCA0")]
		get
		{
			return default(RefreshProperties);
		}
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x627BC80", Offset = "0x627AC80", VA = "0x627BC80")]
	public RefreshPropertiesAttribute(RefreshProperties refresh)
	{
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x627BCB0", Offset = "0x627ACB0", VA = "0x627BCB0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x627BD10", Offset = "0x627AD10", VA = "0x627BD10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x627BD20", Offset = "0x627AD20", VA = "0x627BD20", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
