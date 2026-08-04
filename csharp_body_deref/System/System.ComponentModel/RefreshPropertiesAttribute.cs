// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RefreshPropertiesAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200031F")]
[AttributeUsage(AttributeTargets.All)]
public sealed class RefreshPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000ECD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RefreshPropertiesAttribute All;

	[Token(Token = "0x4000ECE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RefreshPropertiesAttribute Repaint;

	[Token(Token = "0x4000ECF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RefreshPropertiesAttribute Default;

	[Token(Token = "0x4000ED0")]
	[FieldOffset(Offset = "0x10")]
	private RefreshProperties refresh;

	[Token(Token = "0x17000491")]
	public RefreshProperties RefreshProperties
	{
		[Token(Token = "0x60014F6")]
		[Address(RVA = "0x48DEC00", Offset = "0x48DEC00", VA = "0x48DEC00")]
		get
		{
			return default(RefreshProperties);
		}
	}

	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x48DEBE0", Offset = "0x48DEBE0", VA = "0x48DEBE0")]
	public RefreshPropertiesAttribute(RefreshProperties refresh)
	{
	}

	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x48DEC10", Offset = "0x48DEC10", VA = "0x48DEC10", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x48DEC70", Offset = "0x48DEC70", VA = "0x48DEC70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x48DEC80", Offset = "0x48DEC80", VA = "0x48DEC80", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
