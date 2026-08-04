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

[Token(Token = "0x20005E4")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Delegate, AllowMultiple = true)]
[ComVisible(true)]
public sealed class DebuggerDisplayAttribute : Attribute
{
	[Token(Token = "0x4001A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4001A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string value;

	[Token(Token = "0x4001A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string type;

	[Token(Token = "0x1700070F")]
	public string Name
	{
		[Token(Token = "0x6002E61")]
		[Address(RVA = "0x3C7A740", Offset = "0x3C7A740", VA = "0x3C7A740")]
		set
		{
		}
	}

	[Token(Token = "0x17000710")]
	public string Type
	{
		[Token(Token = "0x6002E62")]
		[Address(RVA = "0x3C7A750", Offset = "0x3C7A750", VA = "0x3C7A750")]
		set
		{
		}
	}

	[Token(Token = "0x6002E60")]
	[Address(RVA = "0x3C7A6B0", Offset = "0x3C7A6B0", VA = "0x3C7A6B0")]
	public DebuggerDisplayAttribute(string value)
	{
	}
}
