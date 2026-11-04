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
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
[Obsolete("UxmlObjectFactoryRegistry is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
internal class UxmlObjectFactoryRegistry
{
	[Token(Token = "0x400110E")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<IBaseUxmlObjectFactory>> s_Factories;

	[Token(Token = "0x170009FC")]
	internal static Dictionary<string, List<IBaseUxmlObjectFactory>> factories
	{
		[Token(Token = "0x60026F0")]
		[Address(RVA = "0x31583D0", Offset = "0x31569D0", VA = "0x1831583D0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026F1")]
	[Address(RVA = "0x3157D80", Offset = "0x3156380", VA = "0x183157D80")]
	protected static void RegisterFactory(IBaseUxmlObjectFactory factory)
	{
	}

	[Token(Token = "0x60026F2")]
	[Address(RVA = "0x3157B50", Offset = "0x3156150", VA = "0x183157B50")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x60026F3")]
	[Address(RVA = "0x31580F0", Offset = "0x31566F0", VA = "0x1831580F0")]
	private static void RegisterUserFactories()
	{
	}
}
