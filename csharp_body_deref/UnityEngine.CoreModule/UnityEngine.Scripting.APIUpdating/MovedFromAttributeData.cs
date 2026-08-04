// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Scripting.APIUpdating;

[Token(Token = "0x20001F9")]
internal struct MovedFromAttributeData
{
	[Token(Token = "0x40006A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public string className;

	[Token(Token = "0x40006A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public string nameSpace;

	[Token(Token = "0x40006A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string assembly;

	[Token(Token = "0x40006A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool classHasChanged;

	[Token(Token = "0x40006A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	public bool nameSpaceHasChanged;

	[Token(Token = "0x40006A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
	public bool assemblyHasChanged;

	[Token(Token = "0x40006A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B")]
	public bool autoUdpateAPI;

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x4E13B20", Offset = "0x4E13B20", VA = "0x4E13B20")]
	public void Set(bool autoUpdateAPI, [Optional] string sourceNamespace, [Optional] string sourceAssembly, [Optional] string sourceClassName)
	{
	}
}
