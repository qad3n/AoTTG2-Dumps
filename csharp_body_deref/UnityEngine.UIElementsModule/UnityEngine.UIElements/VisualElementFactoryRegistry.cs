// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementFactoryRegistry
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3167840", Offset = "0x3165E40", VA = "0x183167840")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600270E")]
	[Address(RVA = "0x3165580", Offset = "0x3163B80", VA = "0x183165580")]
	internal static string GetMovedUIControlTypeName(Type type, MovedFromAttribute attr)
	{
		return null;
	}

	[Token(Token = "0x6002710")]
	[Address(RVA = "0x3166F40", Offset = "0x3165540", VA = "0x183166F40")]
	protected static void RegisterFactory(IUxmlFactory factory)
	{
	}

	[Token(Token = "0x6002711")]
	[Address(RVA = "0x31677A0", Offset = "0x3165DA0", VA = "0x1831677A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static bool TryGetValue(string fullTypeName, out List<IUxmlFactory> factoryList)
	{
		return default(bool);
	}

	[Token(Token = "0x6002712")]
	[Address(RVA = "0x3165680", Offset = "0x3163C80", VA = "0x183165680")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x6002713")]
	[Address(RVA = "0x31674C0", Offset = "0x3165AC0", VA = "0x1831674C0")]
	internal static void RegisterUserFactories()
	{
	}
}
