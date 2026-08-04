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

[Token(Token = "0x2000224")]
public static class fsVersionManager
{
	[Token(Token = "0x40009ED")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, fsOption<fsVersionedType>> _cache;

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x4D8D630", Offset = "0x4D8D630", VA = "0x4D8D630")]
	public static fsResult GetVersionImportPath(string currentVersion, fsVersionedType targetVersion, out List<fsVersionedType> path)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x4D8D950", Offset = "0x4D8D950", VA = "0x4D8D950")]
	private static bool GetVersionImportPathRecursive(List<fsVersionedType> path, string currentVersion, fsVersionedType current)
	{
		return default(bool);
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x4D8DB00", Offset = "0x4D8DB00", VA = "0x4D8DB00")]
	public static fsOption<fsVersionedType> GetVersionedType(Type type)
	{
		return default(fsOption<fsVersionedType>);
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x4D8E380", Offset = "0x4D8E380", VA = "0x4D8E380")]
	private static void VerifyConstructors(fsVersionedType type)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x4D8E0A0", Offset = "0x4D8E0A0", VA = "0x4D8E0A0")]
	private static void VerifyUniqueVersionStrings(fsVersionedType type)
	{
	}
}
