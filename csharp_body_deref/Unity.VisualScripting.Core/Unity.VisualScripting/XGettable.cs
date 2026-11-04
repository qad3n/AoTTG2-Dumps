// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.XGettable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001AC")]
public static class XGettable
{
	[Token(Token = "0x600103C")]
	[Address(RVA = "0x2E5C470", Offset = "0x2E5AA70", VA = "0x182E5C470")]
	public static object GetValue(this IGettable gettable, Type type)
	{
		return null;
	}

	[Token(Token = "0x600103D")]
	public static T GetValue<T>(this IGettable gettable)
	{
		return (T)null;
	}
}
