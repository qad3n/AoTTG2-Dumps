// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ApplicationVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CA")]
public static class ApplicationVariables
{
	[Token(Token = "0x4000937")]
	public const string assetPath = "ApplicationVariables";

	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x0")]
	private static VariablesAsset _asset;

	[Token(Token = "0x170001DE")]
	public static VariablesAsset asset
	{
		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x2E4F3C0", Offset = "0x2E4D9C0", VA = "0x182E4F3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	public static VariableDeclarations runtime
	{
		[Token(Token = "0x60010F9")]
		[Address(RVA = "0x2E4F580", Offset = "0x2E4DB80", VA = "0x182E4F580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x2E4F5C0", Offset = "0x2E4DBC0", VA = "0x182E4F5C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E0")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x60010FB")]
		[Address(RVA = "0x2E4F560", Offset = "0x2E4DB60", VA = "0x182E4F560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E1")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x60010FC")]
		[Address(RVA = "0x2E4F4D0", Offset = "0x2E4DAD0", VA = "0x182E4F4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x2E4F320", Offset = "0x2E4D920", VA = "0x182E4F320")]
	public static void Load()
	{
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x2E4F2C0", Offset = "0x2E4D8C0", VA = "0x182E4F2C0")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x2E4F1F0", Offset = "0x2E4D7F0", VA = "0x182E4F1F0")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x2E4F1F0", Offset = "0x2E4D7F0", VA = "0x182E4F1F0")]
	private static void CreateRuntimeDeclarations()
	{
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x2E4F2C0", Offset = "0x2E4D8C0", VA = "0x182E4F2C0")]
	private static void DestroyRuntimeDeclarations()
	{
	}
}
