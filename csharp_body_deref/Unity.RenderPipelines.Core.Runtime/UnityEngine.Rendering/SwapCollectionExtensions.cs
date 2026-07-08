using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000098")]
public static class SwapCollectionExtensions
{
	[Token(Token = "0x6000658")]
	[CollectionAccess(CollectionAccessType.ModifyExistingContent)]
	[MustUseReturnValue]
	public static bool TrySwap<TValue>([DisallowNull] this IList<TValue> list, int from, int to, [NotNullWhen(false)] out Exception error)
	{
		return default(bool);
	}
}
