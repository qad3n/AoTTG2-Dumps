using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x200020D")]
public static class XRGraphicsAutomatedTests
{
	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x1")]
	public static bool running;

	[Token(Token = "0x170001AC")]
	private static bool activatedFromCommandLine
	{
		[Token(Token = "0x6000E39")]
		[Address(RVA = "0x48E8720", Offset = "0x48E8720", VA = "0x48E8720")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AD")]
	public static bool enabled
	{
		[Token(Token = "0x6000E3A")]
		[Address(RVA = "0x48E8730", Offset = "0x48E8730", VA = "0x48E8730")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x48E87A0", Offset = "0x48E87A0", VA = "0x48E87A0")]
	internal static void OverrideLayout(XRLayout layout, Camera camera)
	{
	}
}
