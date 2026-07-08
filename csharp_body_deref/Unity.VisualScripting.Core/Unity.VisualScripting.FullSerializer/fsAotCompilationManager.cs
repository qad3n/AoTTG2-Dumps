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
		[Token(Token = "0x4000983")]
		[FieldOffset(Offset = "0x0")]
		public Type Type;

		[Token(Token = "0x4000984")]
		[FieldOffset(Offset = "0x8")]
		public fsMetaProperty[] Members;

		[Token(Token = "0x4000985")]
		[FieldOffset(Offset = "0x10")]
		public bool IsConstructorPublic;
	}

	[Token(Token = "0x4000981")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Type, string> _computedAotCompilations;

	[Token(Token = "0x4000982")]
	[FieldOffset(Offset = "0x8")]
	private static List<AotCompilation> _uncomputedAotCompilations;

	[Token(Token = "0x17000202")]
	public static Dictionary<Type, string> AvailableAotCompilations
	{
		[Token(Token = "0x600121A")]
		[Address(RVA = "0x4A54000", Offset = "0x4A54000", VA = "0x4A54000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x4A54CA0", Offset = "0x4A54CA0", VA = "0x4A54CA0")]
	public static bool TryToPerformAotCompilation(fsConfig config, Type type, out string aotCompiledClassInCSharp)
	{
		return default(bool);
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x4A53460", Offset = "0x4A53460", VA = "0x4A53460")]
	public static void AddAotCompilation(Type type, fsMetaProperty[] members, bool isConstructorPublic)
	{
	}

	[Token(Token = "0x600121D")]
	[Address(RVA = "0x4A54D80", Offset = "0x4A54D80", VA = "0x4A54D80")]
	private static string GetConverterString(fsMetaProperty member)
	{
		return null;
	}

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x4A54180", Offset = "0x4A54180", VA = "0x4A54180")]
	private static string GenerateDirectConverterForTypeInCSharp(Type type, fsMetaProperty[] members, bool isConstructorPublic)
	{
		return null;
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x4A54E40", Offset = "0x4A54E40", VA = "0x4A54E40")]
	public fsAotCompilationManager()
	{
	}
}
