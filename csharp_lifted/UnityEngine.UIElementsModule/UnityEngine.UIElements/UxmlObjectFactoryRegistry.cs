// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlObjectFactoryRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000513")]
[Obsolete("UxmlObjectFactoryRegistry is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class UxmlObjectFactoryRegistry
{
	[Token(Token = "0x400110E")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<IBaseUxmlObjectFactory>> s_Factories;

	[Token(Token = "0x170009FC")]
	internal static Dictionary<string, List<IBaseUxmlObjectFactory>> factories
	{
		[Token(Token = "0x60026F0")]
		[Address(RVA = "0x6B5C2C0", Offset = "0x6B5B2C0", VA = "0x6B5C2C0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026F1")]
	[Address(RVA = "0x6B5C8D0", Offset = "0x6B5B8D0", VA = "0x6B5C8D0")]
	protected static void RegisterFactory(IBaseUxmlObjectFactory factory)
	{
	}

	[Token(Token = "0x60026F2")]
	[Address(RVA = "0x6B5C380", Offset = "0x6B5B380", VA = "0x6B5C380")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x60026F3")]
	[Address(RVA = "0x6B5C590", Offset = "0x6B5B590", VA = "0x6B5C590")]
	private static void RegisterUserFactories()
	{
	}
}
