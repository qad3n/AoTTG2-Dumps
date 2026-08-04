// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlObjectFactoryRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000443")]
internal class UxmlObjectFactoryRegistry
{
	[Token(Token = "0x4000CAB")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<IBaseUxmlObjectFactory>> s_Factories;

	[Token(Token = "0x17000725")]
	internal static Dictionary<string, List<IBaseUxmlObjectFactory>> factories
	{
		[Token(Token = "0x6001AFA")]
		[Address(RVA = "0x4F6B6A0", Offset = "0x4F6B6A0", VA = "0x4F6B6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x4F6BC90", Offset = "0x4F6BC90", VA = "0x4F6BC90")]
	protected static void RegisterFactory(IBaseUxmlObjectFactory factory)
	{
	}

	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x4F6B760", Offset = "0x4F6B760", VA = "0x4F6B760")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x4F6B970", Offset = "0x4F6B970", VA = "0x4F6B970")]
	private static void RegisterUserFactories()
	{
	}
}
