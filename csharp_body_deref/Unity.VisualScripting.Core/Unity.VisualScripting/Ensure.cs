using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000053")]
public static class Ensure
{
	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnsureThat instance;

	[Token(Token = "0x17000078")]
	public static bool IsActive
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x497F5C0", Offset = "0x497F5C0", VA = "0x497F5C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000219")]
		[Address(RVA = "0x497F630", Offset = "0x497F630", VA = "0x497F630")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x497F680", Offset = "0x497F680", VA = "0x497F680")]
	public static void Off()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x497F730", Offset = "0x497F730", VA = "0x497F730")]
	public static void On()
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x497E150", Offset = "0x497E150", VA = "0x497E150")]
	public static EnsureThat That(string paramName)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x497F7E0", Offset = "0x497F7E0", VA = "0x497F7E0")]
	internal static void OnRuntimeMethodLoad()
	{
	}
}
