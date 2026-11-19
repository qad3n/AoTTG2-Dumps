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
		[Address(RVA = "0x5555B60", Offset = "0x5554B60", VA = "0x5555B60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5555B40", Offset = "0x5554B40", VA = "0x5555B40")]
	public DoesNotReturnIfAttribute(bool parameterValue)
	{
	}
}
