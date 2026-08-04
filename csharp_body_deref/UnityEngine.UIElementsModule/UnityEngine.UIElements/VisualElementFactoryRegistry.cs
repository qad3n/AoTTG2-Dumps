// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementFactoryRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F6C9D0", Offset = "0x4F6C9D0", VA = "0x4F6C9D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x4F6C890", Offset = "0x4F6C890", VA = "0x4F6C890")]
	private static string GetMovedUIControlTypeName(Type type, MovedFromAttribute attr)
	{
		return null;
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x4F6E2C0", Offset = "0x4F6E2C0", VA = "0x4F6E2C0")]
	protected static void RegisterFactory(IUxmlFactory factory)
	{
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x4F6E950", Offset = "0x4F6E950", VA = "0x4F6E950")]
	internal static bool TryGetValue(string fullTypeName, out List<IUxmlFactory> factoryList)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x4F6CAD0", Offset = "0x4F6CAD0", VA = "0x4F6CAD0")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x4F6DFA0", Offset = "0x4F6DFA0", VA = "0x4F6DFA0")]
	internal static void RegisterUserFactories()
	{
	}
}
