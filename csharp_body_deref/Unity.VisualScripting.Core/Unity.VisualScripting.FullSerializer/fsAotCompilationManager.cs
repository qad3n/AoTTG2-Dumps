// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsAotCompilationManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001FD")]
public class fsAotCompilationManager
{
	[Token(Token = "0x20001FE")]
	private struct AotCompilation
	{
		[Token(Token = "0x4000981")]
		[FieldOffset(Offset = "0x0")]
		public Type Type;

		[Token(Token = "0x4000982")]
		[FieldOffset(Offset = "0x8")]
		public fsMetaProperty[] Members;

		[Token(Token = "0x4000983")]
		[FieldOffset(Offset = "0x10")]
		public bool IsConstructorPublic;
	}

	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Type, string> _computedAotCompilations;

	[Token(Token = "0x4000980")]
	[FieldOffset(Offset = "0x8")]
	private static List<AotCompilation> _uncomputedAotCompilations;

	[Token(Token = "0x17000205")]
	public static Dictionary<Type, string> AvailableAotCompilations
	{
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x2E5D620", Offset = "0x2E5BC20", VA = "0x182E5D620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x2E5D2A0", Offset = "0x2E5B8A0", VA = "0x182E5D2A0")]
	public static bool TryToPerformAotCompilation(fsConfig config, Type type, out string aotCompiledClassInCSharp)
	{
		return default(bool);
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x2E5C500", Offset = "0x2E5AB00", VA = "0x182E5C500")]
	public static void AddAotCompilation(Type type, fsMetaProperty[] members, bool isConstructorPublic)
	{
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x2E5D1E0", Offset = "0x2E5B7E0", VA = "0x182E5D1E0")]
	private static string GetConverterString(fsMetaProperty member)
	{
		return null;
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x2E5C650", Offset = "0x2E5AC50", VA = "0x182E5C650")]
	private static string GenerateDirectConverterForTypeInCSharp(Type type, fsMetaProperty[] members, bool isConstructorPublic)
	{
		return null;
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsAotCompilationManager()
	{
	}
}
