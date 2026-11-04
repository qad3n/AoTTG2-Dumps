// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SerializedDictionaryDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000064")]
internal sealed class SerializedDictionaryDebugView<K, V>
{
	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x0")]
	private IDictionary<K, V> dict;

	[Token(Token = "0x17000048")]
	[DebuggerBrowsable(DebuggerBrowsableState.RootHidden)]
	public KeyValuePair<K, V>[] Items
	{
		[Token(Token = "0x600056E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600056D")]
	public SerializedDictionaryDebugView(IDictionary<K, V> dictionary)
	{
	}
}
