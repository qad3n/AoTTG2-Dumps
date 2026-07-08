using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000094")]
public static class RemoveRangeExtensions
{
	[Token(Token = "0x6000648")]
	[CollectionAccess(CollectionAccessType.ModifyExistingContent)]
	[MustUseReturnValue]
	public static bool TryRemoveElementsInRange<TValue>([DisallowNull] this IList<TValue> list, int index, int count, [NotNullWhen(false)] out Exception error)
	{
		return default(bool);
	}
}
