// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlEnumAttributeDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004F9")]
public class UxmlEnumAttributeDescription<T> : TypedUxmlAttributeDescription<T> where T : struct, IConvertible
{
	[Token(Token = "0x6002694")]
	public UxmlEnumAttributeDescription()
	{
	}

	[Token(Token = "0x6002695")]
	public override T GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return (T)null;
	}

	[Token(Token = "0x6002696")]
	public bool TryGetValueFromBag(IUxmlAttributes bag, CreationContext cc, ref T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002697")]
	private static U ConvertValueToEnum<U>(string v, U defaultValue) where U : struct
	{
		return (U)null;
	}

	[Token(Token = "0x6002698")]
	private static string GetEnumNameErrorMessage(string v, Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6002699")]
	private static string GetEnumRangeErrorMessage(string v, Type enumType)
	{
		return null;
	}
}
