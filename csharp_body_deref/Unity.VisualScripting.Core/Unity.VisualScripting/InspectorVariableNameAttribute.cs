// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectorVariableNameAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CD")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorVariableNameAttribute : Attribute
{
	[Token(Token = "0x170001E1")]
	public ActionDirection direction
	{
		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x4D643A0", Offset = "0x4D643A0", VA = "0x4D643A0")]
		[CompilerGenerated]
		get
		{
			return default(ActionDirection);
		}
		[Token(Token = "0x60010FB")]
		[Address(RVA = "0x4D643B0", Offset = "0x4D643B0", VA = "0x4D643B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x4D64380", Offset = "0x4D64380", VA = "0x4D64380")]
	public InspectorVariableNameAttribute(ActionDirection direction)
	{
	}
}
