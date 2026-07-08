using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000430")]
public class UxmlEnumAttributeDescription<T> : TypedUxmlAttributeDescription<T> where T : struct, IConvertible
{
	[Token(Token = "0x6001AC9")]
	public UxmlEnumAttributeDescription()
	{
	}

	[Token(Token = "0x6001ACA")]
	public override T GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return (T)null;
	}

	[Token(Token = "0x6001ACB")]
	public bool TryGetValueFromBag(IUxmlAttributes bag, CreationContext cc, ref T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACC")]
	private static U ConvertValueToEnum<U>(string v, U defaultValue) where U : struct
	{
		return (U)null;
	}

	[Token(Token = "0x6001ACD")]
	private static string GetEnumNameErrorMessage(string v, Type enumType)
	{
		return null;
	}

	[Token(Token = "0x6001ACE")]
	private static string GetEnumRangeErrorMessage(string v, Type enumType)
	{
		return null;
	}
}
