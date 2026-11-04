// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.IIndexable
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000096")]
public interface IIndexable<T> where T : struct
{
	[Token(Token = "0x170000CC")]
	int Length
	{
		[Token(Token = "0x600078C")]
		get;
		[Token(Token = "0x600078D")]
		set;
	}

	[Token(Token = "0x600078E")]
	ref T ElementAt(int index);
}
