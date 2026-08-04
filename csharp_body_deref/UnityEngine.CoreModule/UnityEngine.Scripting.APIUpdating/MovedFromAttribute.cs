// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Scripting.APIUpdating.MovedFromAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Scripting.APIUpdating;

[Token(Token = "0x20001FA")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.Delegate)]
public class MovedFromAttribute : Attribute
{
	[Token(Token = "0x40006AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal MovedFromAttributeData data;

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x4E13B90", Offset = "0x4E13B90", VA = "0x4E13B90")]
	public MovedFromAttribute(bool autoUpdateAPI, [Optional] string sourceNamespace, [Optional] string sourceAssembly, [Optional] string sourceClassName)
	{
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x4E13C10", Offset = "0x4E13C10", VA = "0x4E13C10")]
	public MovedFromAttribute(string sourceNamespace)
	{
	}
}
