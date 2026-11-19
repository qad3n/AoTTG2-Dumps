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

[Token(Token = "0x20001EF")]
public class fsIEnumerableConverter : fsConverter
{
	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x685CBE0", Offset = "0x685BBE0", VA = "0x685CBE0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x685CE00", Offset = "0x685BE00", VA = "0x685CE00", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x685CE70", Offset = "0x685BE70", VA = "0x685CE70", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x685D5E0", Offset = "0x685C5E0", VA = "0x685D5E0")]
	private bool IsStack(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x685D6E0", Offset = "0x685C6E0", VA = "0x685D6E0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x685D4F0", Offset = "0x685C4F0", VA = "0x685D4F0")]
	private static int HintSize(IEnumerable collection)
	{
		return default(int);
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x685D3E0", Offset = "0x685C3E0", VA = "0x685D3E0")]
	private static Type GetElementType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x685D9F0", Offset = "0x685C9F0", VA = "0x685D9F0")]
	private static void TryClear(Type type, object instance)
	{
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x685DA90", Offset = "0x685CA90", VA = "0x685DA90")]
	private static int TryGetExistingSize(Type type, object instance)
	{
		return default(int);
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x685CC80", Offset = "0x685BC80", VA = "0x685CC80")]
	private static MethodInfo GetAddMethod(Type type)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x685DB70", Offset = "0x685CB70", VA = "0x685DB70")]
	public fsIEnumerableConverter()
	{
	}
}
