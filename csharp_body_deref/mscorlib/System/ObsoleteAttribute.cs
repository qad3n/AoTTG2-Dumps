// ==================== AoTTG2 cross-reference ====================
// Type: System.ObsoleteAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000121")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
public sealed class ObsoleteAttribute : Attribute
{
	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x10")]
	private string _message;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x18")]
	private bool _error;

	[Token(Token = "0x1700009F")]
	public string Message
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	public bool IsError
	{
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x1B44D80", Offset = "0x1B43380", VA = "0x181B44D80")]
	public ObsoleteAttribute()
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x1B44E00", Offset = "0x1B43400", VA = "0x181B44E00")]
	public ObsoleteAttribute(string message)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x1B44DB0", Offset = "0x1B433B0", VA = "0x181B44DB0")]
	public ObsoleteAttribute(string message, bool error)
	{
	}
}
