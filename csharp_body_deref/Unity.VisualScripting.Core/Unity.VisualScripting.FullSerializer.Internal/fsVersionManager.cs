using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal;

[Token(Token = "0x2000223")]
public static class fsVersionManager
{
	[Token(Token = "0x40009EA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, fsOption<fsVersionedType>> _cache;

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x4A613F0", Offset = "0x4A613F0", VA = "0x4A613F0")]
	public static fsResult GetVersionImportPath(string currentVersion, fsVersionedType targetVersion, out List<fsVersionedType> path)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x4A663E0", Offset = "0x4A663E0", VA = "0x4A663E0")]
	private static bool GetVersionImportPathRecursive(List<fsVersionedType> path, string currentVersion, fsVersionedType current)
	{
		return default(bool);
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x4A5F850", Offset = "0x4A5F850", VA = "0x4A5F850")]
	public static fsOption<fsVersionedType> GetVersionedType(Type type)
	{
		return default(fsOption<fsVersionedType>);
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x4A66870", Offset = "0x4A66870", VA = "0x4A66870")]
	private static void VerifyConstructors(fsVersionedType type)
	{
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x4A66590", Offset = "0x4A66590", VA = "0x4A66590")]
	private static void VerifyUniqueVersionStrings(fsVersionedType type)
	{
	}
}
