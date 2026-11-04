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
	[Address(RVA = "0x2E640E0", Offset = "0x2E626E0", VA = "0x182E640E0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x2E64190", Offset = "0x2E62790", VA = "0x182E64190", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x2E64BE0", Offset = "0x2E631E0", VA = "0x182E64BE0", Slot = "7")]
	public override fsResult TrySerialize(object instance_, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x2E64560", Offset = "0x2E62B60", VA = "0x182E64560")]
	private bool IsStack(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x2E64700", Offset = "0x2E62D00", VA = "0x182E64700", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance_, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x2E644B0", Offset = "0x2E62AB0", VA = "0x182E644B0")]
	private static int HintSize(IEnumerable collection)
	{
		return default(int);
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x2E64390", Offset = "0x2E62990", VA = "0x182E64390")]
	private static Type GetElementType(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x2E64660", Offset = "0x2E62C60", VA = "0x182E64660")]
	private static void TryClear(Type type, object instance)
	{
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x2E64AF0", Offset = "0x2E630F0", VA = "0x182E64AF0")]
	private static int TryGetExistingSize(Type type, object instance)
	{
		return default(int);
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x2E64210", Offset = "0x2E62810", VA = "0x182E64210")]
	private static MethodInfo GetAddMethod(Type type)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsIEnumerableConverter()
	{
	}
}
