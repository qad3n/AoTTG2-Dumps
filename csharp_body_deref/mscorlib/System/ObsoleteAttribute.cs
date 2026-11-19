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
[Token(Token = "0x20000F9")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
public sealed class ObsoleteAttribute : Attribute
{
	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x10")]
	private string _message;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x18")]
	private bool _error;

	[Token(Token = "0x1700009F")]
	public string Message
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x54CC6A0", Offset = "0x54CB6A0", VA = "0x54CC6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	public bool IsError
	{
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x54CC6B0", Offset = "0x54CB6B0", VA = "0x54CC6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x54CC610", Offset = "0x54CB610", VA = "0x54CC610")]
	public ObsoleteAttribute()
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x54CC640", Offset = "0x54CB640", VA = "0x54CC640")]
	public ObsoleteAttribute(string message)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x54CC670", Offset = "0x54CB670", VA = "0x54CC670")]
	public ObsoleteAttribute(string message, bool error)
	{
	}
}
