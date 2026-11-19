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
	[Token(Token = "0x170001E4")]
	public ActionDirection direction
	{
		[Token(Token = "0x6001107")]
		[Address(RVA = "0x684E730", Offset = "0x684D730", VA = "0x684E730")]
		[CompilerGenerated]
		get
		{
			return default(ActionDirection);
		}
		[Token(Token = "0x6001108")]
		[Address(RVA = "0x684E740", Offset = "0x684D740", VA = "0x684E740")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x684E710", Offset = "0x684D710", VA = "0x684E710")]
	public InspectorVariableNameAttribute(ActionDirection direction)
	{
	}
}
