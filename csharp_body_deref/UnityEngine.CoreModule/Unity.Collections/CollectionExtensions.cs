// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.CollectionExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Collections;

[Token(Token = "0x200003A")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal static class CollectionExtensions
{
	[Token(Token = "0x6000072")]
	internal static string SerializedView<T>([DisallowNull] this IEnumerable<T> collection, [DisallowNull] Func<T, string> serializeElement)
	{
		return null;
	}
}
