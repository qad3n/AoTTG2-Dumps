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
using UnityEngine.Bindings;

namespace UnityEngine.Scripting.APIUpdating;

[Token(Token = "0x200024A")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.Delegate)]
public class MovedFromAttribute : Attribute
{
	[Token(Token = "0x4000753")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal MovedFromAttributeData data;

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x2F4B540", Offset = "0x2F49B40", VA = "0x182F4B540")]
	public MovedFromAttribute(bool autoUpdateAPI, [Optional] string sourceNamespace, [Optional] string sourceAssembly, [Optional] string sourceClassName)
	{
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x2F4B5D0", Offset = "0x2F49BD0", VA = "0x182F4B5D0")]
	public MovedFromAttribute(string sourceNamespace)
	{
	}
}
