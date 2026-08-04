// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsIEnumerableConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E5")]
public class fsIEnumerableConverter : fsConverter
{
	[Token(Token = "0x6001195")]
	[Address(RVA = "0x4D6E8D0", Offset = "0x4D6E8D0", VA = "0x4D6E8D0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x4D6EAF0", Offset = "0x4D6EAF0", VA = "0x4D6EAF0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x4D6EB70", Offset = "0x4D6EB70", VA = "0x4D6EB70", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x4D6F340", Offset = "0x4D6F340", VA = "0x4D6F340")]
	private bool IsStack(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x4D6F440", Offset = "0x4D6F440", VA = "0x4D6F440", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x4D6F240", Offset = "0x4D6F240", VA = "0x4D6F240")]
	private static int HintSize(IEnumerable collection)
	{
		return default(int);
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x4D6F130", Offset = "0x4D6F130", VA = "0x4D6F130")]
	private static Type GetElementType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4D6F8A0", Offset = "0x4D6F8A0", VA = "0x4D6F8A0")]
	private static void TryClear(Type type, object instance)
	{
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x4D6F940", Offset = "0x4D6F940", VA = "0x4D6F940")]
	private static int TryGetExistingSize(Type type, object instance)
	{
		return default(int);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x4D6E970", Offset = "0x4D6E970", VA = "0x4D6E970")]
	private static MethodInfo GetAddMethod(Type type)
	{
		return null;
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x4D6FA20", Offset = "0x4D6FA20", VA = "0x4D6FA20")]
	public fsIEnumerableConverter()
	{
	}
}
