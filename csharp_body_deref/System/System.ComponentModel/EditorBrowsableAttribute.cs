// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EditorBrowsableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000247")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate)]
public sealed class EditorBrowsableAttribute : Attribute
{
	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x10")]
	private EditorBrowsableState browsableState;

	[Token(Token = "0x1700032D")]
	public EditorBrowsableState State
	{
		[Token(Token = "0x6000E39")]
		[Address(RVA = "0x49D0880", Offset = "0x49D0880", VA = "0x49D0880")]
		get
		{
			return default(EditorBrowsableState);
		}
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x49D0840", Offset = "0x49D0840", VA = "0x49D0840")]
	public EditorBrowsableAttribute(EditorBrowsableState state)
	{
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x49D0860", Offset = "0x49D0860", VA = "0x49D0860")]
	public EditorBrowsableAttribute()
	{
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x49D0890", Offset = "0x49D0890", VA = "0x49D0890", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x49D0910", Offset = "0x49D0910", VA = "0x49D0910", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
