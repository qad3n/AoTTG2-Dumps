// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ISerializationSurrogate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000400")]
public interface ISerializationSurrogate
{
	[Token(Token = "0x6001FB2")]
	void GetObjectData(object obj, SerializationInfo info, StreamingContext context);

	[Token(Token = "0x6001FB3")]
	object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector);
}
