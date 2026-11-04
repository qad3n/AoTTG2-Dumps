// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectorActionDirectionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000042")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorActionDirectionAttribute : Attribute
{
	[Token(Token = "0x17000065")]
	public ActionDirection direction
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(ActionDirection);
		}
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public InspectorActionDirectionAttribute(ActionDirection direction)
	{
	}
}
