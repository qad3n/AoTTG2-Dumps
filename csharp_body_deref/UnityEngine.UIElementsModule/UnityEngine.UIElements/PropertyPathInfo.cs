// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PropertyPathInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal readonly struct PropertyPathInfo
{
	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x0")]
	public readonly PropertyPath propertyPath;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x90")]
	public readonly Type type;

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x6A884B0", Offset = "0x6A874B0", VA = "0x6A884B0")]
	internal PropertyPathInfo(in PropertyPath propertyPath, Type type)
	{
	}
}
