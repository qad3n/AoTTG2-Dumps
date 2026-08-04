// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.UnreferencedObjectEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000109")]
public class UnreferencedObjectEventArgs : EventArgs
{
	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x10")]
	private object o;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x18")]
	private string id;

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x4809940", Offset = "0x4809940", VA = "0x4809940")]
	public UnreferencedObjectEventArgs(object o, string id)
	{
	}
}
