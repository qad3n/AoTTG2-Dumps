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

[Token(Token = "0x20005B6")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Delegate, AllowMultiple = true)]
public sealed class DebuggerDisplayAttribute : Attribute
{
	[Token(Token = "0x4001823")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4001824")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string value;

	[Token(Token = "0x4001825")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string type;

	[Token(Token = "0x1700069C")]
	public string Name
	{
		[Token(Token = "0x6002B6E")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x1700069D")]
	public string Type
	{
		[Token(Token = "0x6002B6F")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x6002B6D")]
	[Address(RVA = "0x1ABF600", Offset = "0x1ABDC00", VA = "0x181ABF600")]
	public DebuggerDisplayAttribute(string value)
	{
	}
}
