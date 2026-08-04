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

[Token(Token = "0x2000041")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorActionDirectionAttribute : Attribute
{
	[Token(Token = "0x17000064")]
	public ActionDirection direction
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x4CA3A90", Offset = "0x4CA3A90", VA = "0x4CA3A90")]
		[CompilerGenerated]
		get
		{
			return default(ActionDirection);
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x4CA3AA0", Offset = "0x4CA3AA0", VA = "0x4CA3AA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4CA3A70", Offset = "0x4CA3A70", VA = "0x4CA3A70")]
	public InspectorActionDirectionAttribute(ActionDirection direction)
	{
	}
}
