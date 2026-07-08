using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000448")]
internal class VisualElementFactoryRegistry
{
	[Token(Token = "0x4000CB4")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<IUxmlFactory>> s_Factories;

	[Token(Token = "0x4000CB5")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, List<IUxmlFactory>> s_MovedTypesFactories;

	[Token(Token = "0x1700072D")]
	internal static Dictionary<string, List<IUxmlFactory>> factories
	{
		[Token(Token = "0x6001B0E")]
		[Address(RVA = "0x4C450A0", Offset = "0x4C450A0", VA = "0x4C450A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x4C44F60", Offset = "0x4C44F60", VA = "0x4C44F60")]
	private static string GetMovedUIControlTypeName(Type type, MovedFromAttribute attr)
	{
		return null;
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x4C46990", Offset = "0x4C46990", VA = "0x4C46990")]
	protected static void RegisterFactory(IUxmlFactory factory)
	{
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x4C47020", Offset = "0x4C47020", VA = "0x4C47020")]
	internal static bool TryGetValue(string fullTypeName, out List<IUxmlFactory> factoryList)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x4C451A0", Offset = "0x4C451A0", VA = "0x4C451A0")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x4C46670", Offset = "0x4C46670", VA = "0x4C46670")]
	internal static void RegisterUserFactories()
	{
	}
}
