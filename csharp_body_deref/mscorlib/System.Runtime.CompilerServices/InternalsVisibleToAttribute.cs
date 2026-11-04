// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.InternalsVisibleToAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004D1")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true, Inherited = false)]
public sealed class InternalsVisibleToAttribute : Attribute
{
	[Token(Token = "0x400133B")]
	[FieldOffset(Offset = "0x10")]
	private string _assemblyName;

	[Token(Token = "0x400133C")]
	[FieldOffset(Offset = "0x18")]
	private bool _allInternalsVisible;

	[Token(Token = "0x17000485")]
	public bool AllInternalsVisible
	{
		[Token(Token = "0x600237E")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x600237D")]
	[Address(RVA = "0x1A46230", Offset = "0x1A44830", VA = "0x181A46230")]
	public InternalsVisibleToAttribute(string assemblyName)
	{
	}
}
