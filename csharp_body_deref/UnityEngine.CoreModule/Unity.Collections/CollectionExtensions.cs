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
