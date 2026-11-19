// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.DebuggerDisplayAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000591")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Delegate, AllowMultiple = true)]
public sealed class DebuggerDisplayAttribute : Attribute
{
	[Token(Token = "0x400178A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x400178B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string value;

	[Token(Token = "0x400178C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string type;

	[Token(Token = "0x1700069D")]
	public string Name
	{
		[Token(Token = "0x6002B4D")]
		[Address(RVA = "0x544D7C0", Offset = "0x544C7C0", VA = "0x544D7C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700069E")]
	public string Type
	{
		[Token(Token = "0x6002B4E")]
		[Address(RVA = "0x544D7D0", Offset = "0x544C7D0", VA = "0x544D7D0")]
		set
		{
		}
	}

	[Token(Token = "0x6002B4C")]
	[Address(RVA = "0x544D730", Offset = "0x544C730", VA = "0x544D730")]
	public DebuggerDisplayAttribute(string value)
	{
	}
}
