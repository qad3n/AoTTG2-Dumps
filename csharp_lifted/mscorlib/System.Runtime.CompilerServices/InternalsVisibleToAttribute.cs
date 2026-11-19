// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.InternalsVisibleToAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004AA")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true, Inherited = false)]
public sealed class InternalsVisibleToAttribute : Attribute
{
	[Token(Token = "0x400129B")]
	[FieldOffset(Offset = "0x10")]
	private string _assemblyName;

	[Token(Token = "0x400129C")]
	[FieldOffset(Offset = "0x18")]
	private bool _allInternalsVisible;

	[Token(Token = "0x17000484")]
	public bool AllInternalsVisible
	{
		[Token(Token = "0x600234B")]
		[Address(RVA = "0x53CBA90", Offset = "0x53CAA90", VA = "0x53CBA90")]
		set
		{
		}
	}

	[Token(Token = "0x600234A")]
	[Address(RVA = "0x53CBA60", Offset = "0x53CAA60", VA = "0x53CBA60")]
	public InternalsVisibleToAttribute(string assemblyName)
	{
	}
}
