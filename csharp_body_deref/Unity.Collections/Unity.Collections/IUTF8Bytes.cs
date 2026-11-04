// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.IUTF8Bytes
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000079")]
public interface IUTF8Bytes
{
	[Token(Token = "0x170000A7")]
	bool IsEmpty
	{
		[Token(Token = "0x60006D0")]
		get;
	}

	[Token(Token = "0x60006D1")]
	unsafe byte* GetUnsafePtr();

	[Token(Token = "0x60006D2")]
	bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory);
}
