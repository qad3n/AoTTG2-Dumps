// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ISurrogateSelector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000401")]
public interface ISurrogateSelector
{
	[Token(Token = "0x6001FB4")]
	ISerializationSurrogate GetSurrogate(Type type, StreamingContext context, out ISurrogateSelector selector);
}
