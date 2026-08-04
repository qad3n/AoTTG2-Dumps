// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.InternalsVisibleToAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004A1")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true, Inherited = false)]
public sealed class InternalsVisibleToAttribute : Attribute
{
	[Token(Token = "0x4001337")]
	[FieldOffset(Offset = "0x10")]
	private string _assemblyName;

	[Token(Token = "0x4001338")]
	[FieldOffset(Offset = "0x18")]
	private bool _allInternalsVisible;

	[Token(Token = "0x17000482")]
	public bool AllInternalsVisible
	{
		[Token(Token = "0x60022FD")]
		[Address(RVA = "0x3BC4090", Offset = "0x3BC4090", VA = "0x3BC4090")]
		set
		{
		}
	}

	[Token(Token = "0x60022FC")]
	[Address(RVA = "0x3BC4060", Offset = "0x3BC4060", VA = "0x3BC4060")]
	public InternalsVisibleToAttribute(string assemblyName)
	{
	}
}
