// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IMergedCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200001A")]
public interface IMergedCollection<T> : ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x6000097")]
	bool Includes<TI>() where TI : T;

	[Token(Token = "0x6000098")]
	bool Includes(Type elementType);
}
