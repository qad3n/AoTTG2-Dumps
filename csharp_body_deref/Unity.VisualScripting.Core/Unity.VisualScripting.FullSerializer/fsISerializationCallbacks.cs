// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsISerializationCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000206")]
public interface fsISerializationCallbacks
{
	[Token(Token = "0x600123E")]
	void OnBeforeSerialize(Type storageType);

	[Token(Token = "0x600123F")]
	void OnAfterSerialize(Type storageType, ref fsData data);

	[Token(Token = "0x6001240")]
	void OnBeforeDeserialize(Type storageType, ref fsData data);

	[Token(Token = "0x6001241")]
	void OnAfterDeserialize(Type storageType);
}
