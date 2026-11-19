// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.ComCompatibleVersionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000455")]
[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
[ComVisible(true)]
public sealed class ComCompatibleVersionAttribute : Attribute
{
	[Token(Token = "0x4001224")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int _major;

	[Token(Token = "0x4001225")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal int _minor;

	[Token(Token = "0x4001226")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int _build;

	[Token(Token = "0x4001227")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal int _revision;

	[Token(Token = "0x6002223")]
	[Address(RVA = "0x53C4F00", Offset = "0x53C3F00", VA = "0x53C4F00")]
	public ComCompatibleVersionAttribute(int major, int minor, int build, int revision)
	{
	}
}
