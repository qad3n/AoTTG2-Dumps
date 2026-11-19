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
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200051A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class VisualElementFactoryRegistry
{
	[Token(Token = "0x400111F")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<IUxmlFactory>> s_Factories;

	[Token(Token = "0x4001120")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, List<IUxmlFactory>> s_MovedTypesFactories;

	[Token(Token = "0x17000A06")]
	internal static Dictionary<string, List<IUxmlFactory>> factories
	{
		[Token(Token = "0x600270F")]
		[Address(RVA = "0x6B5E590", Offset = "0x6B5D590", VA = "0x6B5E590")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600270E")]
	[Address(RVA = "0x6B5E490", Offset = "0x6B5D490", VA = "0x6B5E490")]
	internal static string GetMovedUIControlTypeName(Type type, MovedFromAttribute attr)
	{
		return null;
	}

	[Token(Token = "0x6002710")]
	[Address(RVA = "0x6B5FFE0", Offset = "0x6B5EFE0", VA = "0x6B5FFE0")]
	protected static void RegisterFactory(IUxmlFactory factory)
	{
	}

	[Token(Token = "0x6002711")]
	[Address(RVA = "0x6B60620", Offset = "0x6B5F620", VA = "0x6B60620")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static bool TryGetValue(string fullTypeName, out List<IUxmlFactory> factoryList)
	{
		return default(bool);
	}

	[Token(Token = "0x6002712")]
	[Address(RVA = "0x6B5E690", Offset = "0x6B5D690", VA = "0x6B5E690")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x6002713")]
	[Address(RVA = "0x6B5FCA0", Offset = "0x6B5ECA0", VA = "0x6B5FCA0")]
	internal static void RegisterUserFactories()
	{
	}
}
