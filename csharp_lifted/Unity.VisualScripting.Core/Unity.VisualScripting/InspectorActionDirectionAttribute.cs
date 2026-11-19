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
		[Address(RVA = "0x6792EC0", Offset = "0x6791EC0", VA = "0x6792EC0")]
		[CompilerGenerated]
		get
		{
			return default(ActionDirection);
		}
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x6792ED0", Offset = "0x6791ED0", VA = "0x6792ED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x6792EA0", Offset = "0x6791EA0", VA = "0x6792EA0")]
	public InspectorActionDirectionAttribute(ActionDirection direction)
	{
	}
}
