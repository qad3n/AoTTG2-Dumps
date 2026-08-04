// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.KeyValuePairPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000020")]
public class KeyValuePairPropertyBag<TKey, TValue> : PropertyBag<KeyValuePair<TKey, TValue>>
{
	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DelegateProperty<KeyValuePair<TKey, TValue>, TKey> s_KeyProperty;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DelegateProperty<KeyValuePair<TKey, TValue>, TValue> s_ValueProperty;

	[Token(Token = "0x600005D")]
	public KeyValuePairPropertyBag()
	{
	}
}
