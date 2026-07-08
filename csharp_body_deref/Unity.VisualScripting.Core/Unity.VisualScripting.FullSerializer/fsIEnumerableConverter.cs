using System;
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001EF")]
public class fsIEnumerableConverter : fsConverter
{
	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x4A4E340", Offset = "0x4A4E340", VA = "0x4A4E340", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x4A4E560", Offset = "0x4A4E560", VA = "0x4A4E560", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x4A4E5D0", Offset = "0x4A4E5D0", VA = "0x4A4E5D0", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x4A4EE10", Offset = "0x4A4EE10", VA = "0x4A4EE10")]
	private bool IsStack(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x4A4EF10", Offset = "0x4A4EF10", VA = "0x4A4EF10", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x4A4ED10", Offset = "0x4A4ED10", VA = "0x4A4ED10")]
	private static int HintSize(IEnumerable collection)
	{
		return default(int);
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x4A4EC00", Offset = "0x4A4EC00", VA = "0x4A4EC00")]
	private static Type GetElementType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x4A4F330", Offset = "0x4A4F330", VA = "0x4A4F330")]
	private static void TryClear(Type type, object instance)
	{
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x4A4F3D0", Offset = "0x4A4F3D0", VA = "0x4A4F3D0")]
	private static int TryGetExistingSize(Type type, object instance)
	{
		return default(int);
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x4A4E3E0", Offset = "0x4A4E3E0", VA = "0x4A4E3E0")]
	private static MethodInfo GetAddMethod(Type type)
	{
		return null;
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x4A4F4B0", Offset = "0x4A4F4B0", VA = "0x4A4F4B0")]
	public fsIEnumerableConverter()
	{
	}
}
