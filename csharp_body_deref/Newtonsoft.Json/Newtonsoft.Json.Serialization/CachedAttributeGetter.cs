using System;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x20000F7")]
internal static class CachedAttributeGetter<T> where T : Attribute
{
	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ThreadSafeStore<object, T?> TypeAttributeCache;

	[Token(Token = "0x6000733")]
	public static T GetAttribute(object type)
	{
		return null;
	}
}
