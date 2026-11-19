// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Scripting.APIUpdating;

[Token(Token = "0x2000249")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct MovedFromAttributeData
{
	[Token(Token = "0x400074A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public string className;

	[Token(Token = "0x400074B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public string nameSpace;

	[Token(Token = "0x400074C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string assembly;

	[Token(Token = "0x400074D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool classHasChanged;

	[Token(Token = "0x400074E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	public bool nameSpaceHasChanged;

	[Token(Token = "0x400074F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
	public bool assemblyHasChanged;

	[Token(Token = "0x4000750")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B")]
	public bool autoUdpateAPI;

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x6935BB0", Offset = "0x6934BB0", VA = "0x6935BB0")]
	public void Set(bool autoUpdateAPI, [Optional] string sourceNamespace, [Optional] string sourceAssembly, [Optional] string sourceClassName)
	{
	}
}
