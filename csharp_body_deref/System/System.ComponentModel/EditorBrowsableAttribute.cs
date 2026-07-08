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
		[Address(RVA = "0x46AB780", Offset = "0x46AB780", VA = "0x46AB780")]
		get
		{
			return default(EditorBrowsableState);
		}
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x46AB740", Offset = "0x46AB740", VA = "0x46AB740")]
	public EditorBrowsableAttribute(EditorBrowsableState state)
	{
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x46AB760", Offset = "0x46AB760", VA = "0x46AB760")]
	public EditorBrowsableAttribute()
	{
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x46AB790", Offset = "0x46AB790", VA = "0x46AB790", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x46AB810", Offset = "0x46AB810", VA = "0x46AB810", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
