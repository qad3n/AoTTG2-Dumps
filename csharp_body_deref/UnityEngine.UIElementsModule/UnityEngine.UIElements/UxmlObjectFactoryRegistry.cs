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
		[Address(RVA = "0x4C43D70", Offset = "0x4C43D70", VA = "0x4C43D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x4C44360", Offset = "0x4C44360", VA = "0x4C44360")]
	protected static void RegisterFactory(IBaseUxmlObjectFactory factory)
	{
	}

	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x4C43E30", Offset = "0x4C43E30", VA = "0x4C43E30")]
	private static void RegisterEngineFactories()
	{
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x4C44040", Offset = "0x4C44040", VA = "0x4C44040")]
	private static void RegisterUserFactories()
	{
	}
}
