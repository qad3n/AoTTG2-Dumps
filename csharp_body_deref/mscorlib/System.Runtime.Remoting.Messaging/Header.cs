// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.Header
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003AA")]
[ComVisible(true)]
public class Header
{
	[Token(Token = "0x4000F73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string HeaderNamespace;

	[Token(Token = "0x4000F74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool MustUnderstand;

	[Token(Token = "0x4000F75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4000F76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public object Value;
}
