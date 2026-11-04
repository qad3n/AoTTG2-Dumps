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
[Token(Token = "0x20000C4")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public sealed class CLSCompliantAttribute : Attribute
{
	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x10")]
	private bool _compliant;

	[Token(Token = "0x17000064")]
	public bool IsCompliant
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public CLSCompliantAttribute(bool isCompliant)
	{
	}
}
