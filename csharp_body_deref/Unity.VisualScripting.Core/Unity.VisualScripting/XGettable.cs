using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001AC")]
public static class XGettable
{
	[Token(Token = "0x600102F")]
	[Address(RVA = "0x4A3B500", Offset = "0x4A3B500", VA = "0x4A3B500")]
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
