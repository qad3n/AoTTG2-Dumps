// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EditorBrowsableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000152")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate)]
public sealed class EditorBrowsableAttribute : Attribute
{
	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x10")]
	private EditorBrowsableState browsableState;

	[Token(Token = "0x1700019C")]
	public EditorBrowsableState State
	{
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(EditorBrowsableState);
		}
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public EditorBrowsableAttribute(EditorBrowsableState state)
	{
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x287DA40", Offset = "0x287C040", VA = "0x18287DA40")]
	public EditorBrowsableAttribute()
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x287D9C0", Offset = "0x287BFC0", VA = "0x18287D9C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
