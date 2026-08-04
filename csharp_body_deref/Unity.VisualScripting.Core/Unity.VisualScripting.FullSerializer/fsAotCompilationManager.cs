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

[Token(Token = "0x20001F6")]
public class fsAotCompilationManager
{
	[Token(Token = "0x20001F7")]
	private struct AotCompilation
	{
		[Token(Token = "0x4000971")]
		[FieldOffset(Offset = "0x0")]
		public Type Type;

		[Token(Token = "0x4000972")]
		[FieldOffset(Offset = "0x8")]
		public fsMetaProperty[] Members;

		[Token(Token = "0x4000973")]
		[FieldOffset(Offset = "0x10")]
		public bool IsConstructorPublic;
	}

	[Token(Token = "0x400096F")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Type, string> _computedAotCompilations;

	[Token(Token = "0x4000970")]
	[FieldOffset(Offset = "0x8")]
	private static List<AotCompilation> _uncomputedAotCompilations;

	[Token(Token = "0x170001F8")]
	public static Dictionary<Type, string> AvailableAotCompilations
	{
		[Token(Token = "0x60011EF")]
		[Address(RVA = "0x4D79340", Offset = "0x4D79340", VA = "0x4D79340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x4D79FE0", Offset = "0x4D79FE0", VA = "0x4D79FE0")]
	public static bool TryToPerformAotCompilation(fsConfig config, Type type, out string aotCompiledClassInCSharp)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x4D7A0D0", Offset = "0x4D7A0D0", VA = "0x4D7A0D0")]
	public static void AddAotCompilation(Type type, fsMetaProperty[] members, bool isConstructorPublic)
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x4D7A240", Offset = "0x4D7A240", VA = "0x4D7A240")]
	private static string GetConverterString(fsMetaProperty member)
	{
		return null;
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x4D794C0", Offset = "0x4D794C0", VA = "0x4D794C0")]
	private static string GenerateDirectConverterForTypeInCSharp(Type type, fsMetaProperty[] members, bool isConstructorPublic)
	{
		return null;
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x4D7A300", Offset = "0x4D7A300", VA = "0x4D7A300")]
	public fsAotCompilationManager()
	{
	}
}
