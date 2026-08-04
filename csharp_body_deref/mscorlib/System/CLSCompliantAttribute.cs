// ==================== AoTTG2 cross-reference ====================
// Type: System.CLSCompliantAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200009B")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public sealed class CLSCompliantAttribute : Attribute
{
	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x10")]
	private bool _compliant;

	[Token(Token = "0x17000064")]
	public bool IsCompliant
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x3C18250", Offset = "0x3C18250", VA = "0x3C18250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x3C18230", Offset = "0x3C18230", VA = "0x3C18230")]
	public CLSCompliantAttribute(bool isCompliant)
	{
	}
}
