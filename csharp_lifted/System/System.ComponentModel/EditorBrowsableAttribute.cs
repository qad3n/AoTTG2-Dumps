// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EditorBrowsableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000113")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate)]
public sealed class EditorBrowsableAttribute : Attribute
{
	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x10")]
	private EditorBrowsableState browsableState;

	[Token(Token = "0x1700016D")]
	public EditorBrowsableState State
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x6220780", Offset = "0x621F780", VA = "0x6220780")]
		get
		{
			return default(EditorBrowsableState);
		}
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x6220740", Offset = "0x621F740", VA = "0x6220740")]
	public EditorBrowsableAttribute(EditorBrowsableState state)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x6220760", Offset = "0x621F760", VA = "0x6220760")]
	public EditorBrowsableAttribute()
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x6220790", Offset = "0x621F790", VA = "0x6220790", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x6220800", Offset = "0x621F800", VA = "0x6220800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
