// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics.CodeAnalysis;

[Token(Token = "0x200000A")]
[AttributeUsage(AttributeTargets.Parameter, Inherited = false)]
internal class DoesNotReturnIfAttribute : Attribute
{
	[Token(Token = "0x17000002")]
	public bool ParameterValue
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public DoesNotReturnIfAttribute(bool parameterValue)
	{
	}
}
