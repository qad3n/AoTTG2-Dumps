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
	[Token(Token = "0x600102F")]
	[Address(RVA = "0x4D60360", Offset = "0x4D60360", VA = "0x4D60360")]
	public static object GetValue(this IGettable gettable, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001030")]
	public static T GetValue<T>(this IGettable gettable)
	{
		return (T)null;
	}
}
