// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Internal.fsVersionManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal;

[Token(Token = "0x2000223")]
public static class fsVersionManager
{
	[Token(Token = "0x40009E8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, fsOption<fsVersionedType>> _cache;

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x2E7A9E0", Offset = "0x2E78FE0", VA = "0x182E7A9E0")]
	public static fsResult GetVersionImportPath(string currentVersion, fsVersionedType targetVersion, out List<fsVersionedType> path)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x2E7A860", Offset = "0x2E78E60", VA = "0x182E7A860")]
	private static bool GetVersionImportPathRecursive(List<fsVersionedType> path, string currentVersion, fsVersionedType current)
	{
		return default(bool);
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x2E7ACB0", Offset = "0x2E792B0", VA = "0x182E7ACB0")]
	public static fsOption<fsVersionedType> GetVersionedType(Type type)
	{
		return default(fsOption<fsVersionedType>);
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x2E7B1B0", Offset = "0x2E797B0", VA = "0x182E7B1B0")]
	private static void VerifyConstructors(fsVersionedType type)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x2E7B3C0", Offset = "0x2E799C0", VA = "0x182E7B3C0")]
	private static void VerifyUniqueVersionStrings(fsVersionedType type)
	{
	}
}
