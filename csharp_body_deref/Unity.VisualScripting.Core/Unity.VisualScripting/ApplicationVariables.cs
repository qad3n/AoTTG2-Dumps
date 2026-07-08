using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CA")]
public static class ApplicationVariables
{
	[Token(Token = "0x4000939")]
	public const string assetPath = "ApplicationVariables";

	[Token(Token = "0x400093A")]
	[FieldOffset(Offset = "0x0")]
	private static VariablesAsset _asset;

	[Token(Token = "0x170001DB")]
	public static VariablesAsset asset
	{
		[Token(Token = "0x60010EA")]
		[Address(RVA = "0x4A3F2F0", Offset = "0x4A3F2F0", VA = "0x4A3F2F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public static VariableDeclarations runtime
	{
		[Token(Token = "0x60010EC")]
		[Address(RVA = "0x4A3F420", Offset = "0x4A3F420", VA = "0x4A3F420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x4A3F460", Offset = "0x4A3F460", VA = "0x4A3F460")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x60010EE")]
		[Address(RVA = "0x4A3F4B0", Offset = "0x4A3F4B0", VA = "0x4A3F4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x60010EF")]
		[Address(RVA = "0x4A3F540", Offset = "0x4A3F540", VA = "0x4A3F540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x4A3F380", Offset = "0x4A3F380", VA = "0x4A3F380")]
	public static void Load()
	{
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x4A3F5E0", Offset = "0x4A3F5E0", VA = "0x4A3F5E0")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x4A3F680", Offset = "0x4A3F680", VA = "0x4A3F680")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x4A3C910", Offset = "0x4A3C910", VA = "0x4A3C910")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x4A3F7B0", Offset = "0x4A3F7B0", VA = "0x4A3F7B0")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x4A3F690", Offset = "0x4A3F690", VA = "0x4A3F690")]
	private static void CreateRuntimeDeclarations()
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x4A3F630", Offset = "0x4A3F630", VA = "0x4A3F630")]
	private static void DestroyRuntimeDeclarations()
	{
	}
}
