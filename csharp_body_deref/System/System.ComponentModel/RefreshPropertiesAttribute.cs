// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RefreshPropertiesAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200022A")]
[AttributeUsage(AttributeTargets.All)]
public sealed class RefreshPropertiesAttribute : Attribute
{
	[Token(Token = "0x4000804")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RefreshPropertiesAttribute All;

	[Token(Token = "0x4000805")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RefreshPropertiesAttribute Repaint;

	[Token(Token = "0x4000806")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RefreshPropertiesAttribute Default;

	[Token(Token = "0x4000807")]
	[FieldOffset(Offset = "0x10")]
	private RefreshProperties refresh;

	[Token(Token = "0x17000300")]
	public RefreshProperties RefreshProperties
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(RefreshProperties);
		}
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public RefreshPropertiesAttribute(RefreshProperties refresh)
	{
	}

	[Token(Token = "0x6000F3F")]
	[Address(RVA = "0x28DADE0", Offset = "0x28D93E0", VA = "0x1828DADE0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x28DAE70", Offset = "0x28D9470", VA = "0x1828DAE70", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
