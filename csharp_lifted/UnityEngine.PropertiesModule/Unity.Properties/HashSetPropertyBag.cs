// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.HashSetPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000028")]
public class HashSetPropertyBag<TElement> : SetPropertyBagBase<HashSet<TElement>, TElement>
{
	[Token(Token = "0x17000022")]
	protected override InstantiationKind InstantiationKind
	{
		[Token(Token = "0x6000099")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x600009A")]
	protected override HashSet<TElement> Instantiate()
	{
		return null;
	}

	[Token(Token = "0x600009B")]
	public HashSetPropertyBag()
	{
	}
}
